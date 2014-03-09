module TestBench;
reg [6:0] DataIn;
reg Clk;

wire [6:0] SevenSegOne;
wire [6:0] SevenSegTwo;
wire [6:0] SevenSegThree;

initial
begin
  Clk = 0;
  forever #10 Clk = ~Clk;
end

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
  DataIn = 3'd45;
  #10 DataIn = 3'd23;
  #10 DataIn = 3'd118;
  #10 DataIn = 0;
end

endmodule