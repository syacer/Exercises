//
// Testbench for 8-bit adder/subtractor
//


module GoldenDevice(result, x, y, ccn, ccz, ccv, ccc, sub);
parameter NBITS = 8;
input [NBITS-1:0] x,y;
input sub;
output ccn, ccz, ccv, ccc;
output [NBITS-1:0] result;

wire tmpccc;

assign {tmpccc,result} = (sub) ? (x - y) : (x + y);
assign ccc = (sub) ? ~tmpccc : tmpccc;
assign ccz = (result === 0);
assign ccn = (result[NBITS-1] === 1'b1);
assign ccv = (sub)? ((x[NBITS-1] !== y[NBITS-1]) && (result[NBITS-1] === y[NBITS-1])) 
                   : ((result[NBITS-1] !== x[NBITS-1]) && (x[NBITS-1] === y[NBITS-1]));

endmodule




module AdderSubtractor8BitTest;
integer A, B;
parameter NBITS = 8;
reg [NBITS-1:0] x, y;
reg sub;

// response from Golden device
wire [NBITS-1:0] GoldenResult;	
wire GoldenCCN, GoldenCCZ, GoldenCCV, GoldenCCC;

// response from DUT
wire [NBITS-1:0] DUTResult;
wire DUTCCN, DUTCCZ, DUTCCV, DUTCCC;

reg Error;

task ReportError;
begin
$display("*** Error");
$display("x = %2h, y = %2h sub = %b", x,y, sub);
$display("observed result = %2h, expected result =%2h",DUTResult, GoldenResult);
$display("observed NZVC = %4b, expected NZVC =%4b",{DUTCCN, DUTCCZ, DUTCCV, DUTCCC},{GoldenCCN, GoldenCCZ, GoldenCCV, GoldenCCC});
$display("***\n");

end
endtask


AddSub8Bit DUT(DUTResult, x, y, DUTCCN, DUTCCZ, DUTCCV, DUTCCC, sub);
GoldenDevice #(.NBITS(NBITS)) GD(GoldenResult, x, y, GoldenCCN, GoldenCCZ, GoldenCCV, GoldenCCC, sub);

initial
begin
Error = 0;

sub = 0;
for (A = 0; A < (1 << NBITS); A = A+1)		 // iterate over all values
	begin
	x = A;
	for (B = 0; B < (1 << NBITS); B = B+1)		 // iterate over all values
		begin
		y = B;
		#1000
		if ({GoldenResult, GoldenCCN, GoldenCCZ, GoldenCCV, GoldenCCC} !== {DUTResult, DUTCCN, DUTCCZ, DUTCCV, DUTCCC})
			begin
			ReportError;
			Error = 1;
			end
		end
	end
  
sub = 1;
for (A = 0; A < (1 << NBITS); A = A+1)		 // iterate over all values
	begin
	x = A;
	for (B = 0; B < (1 << NBITS); B = B+1)		 // iterate over all values
		begin
		y = B;
		#1000
		if ({GoldenResult, GoldenCCN, GoldenCCZ, GoldenCCV, GoldenCCC} !== {DUTResult, DUTCCN, DUTCCZ, DUTCCV, DUTCCC})
			begin
			ReportError;
			Error = 1;
			end
		end
	end  
  

if (!Error)
	$display("*** Congratulations!	 No errors detected\n");
else
	$display("*** Sorry.	Try again.\n");
	
$finish();
end
endmodule





