module TestBench;
reg [6:0] DataIn;
reg Clk;

wire [6:0] SevenSegOne;
wire [6:0] SevenSegTwo;
wire [6:0] SevenSegThree;

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
  forever 
  begin
    Clk = #2 ~Clk;
  end
  DataIn = 3'd45;
  DataIn = 3'd23;
  DataIn = 3'd118;
  DataIn = 0;
  DataIn = DataIn + 1; @(posedge Clk);
end

endmodule