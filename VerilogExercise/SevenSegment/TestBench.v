module TestBench;
reg [7:0] DataIn;
reg Clk;

wire [7:0] SevenSegOne;
wire [7:0] SevenSegTwo;
wire [7:0] SevenSegThree;

SevenSegmentDisplay Inst1(
.DataIn(DataIn),
.Clk(Clk),
.SevenSegOne(SevenSegOne),
.SevenSegTwo(SevenSegTwo),
.SevenSegThree(SevenSegThree)
);

initial
begin
$display(" Seven Segment LED Display \n");
$monitor($time," %b  %b  %b",SevenSegOne,SevenSegTwo,SevenSegThree);
end

initial
begin
  DataIn = 0;
  #10 DataIn = 10;
  #10 DataIn = 28;
  #10 DataIn = 3;
  #10 DataIn = 46;
  #10 DataIn = 63;
  #10 DataIn = 118;
end

endmodule