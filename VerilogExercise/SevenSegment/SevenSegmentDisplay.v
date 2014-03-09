
module SevenSegmentDisplay(
input wire [7:0] DataIn,
input wire Clk,
output reg [7:0] SevenSegOne,
output reg [7:0] SevenSegTwo,
output reg [7:0] SevenSegThree
);

reg [7:0] DigitOne;
reg [7:0] DigitTwo;
reg [7:0] DigitThree;
reg [7:0] Data;

initial
begin
  DigitOne = 0;
  DigitTwo = 0;
  DigitThree = 0;
  Data = 0;
end

always @(*)begin
  DigitOne = 0;
  DigitTwo = 0;
  DigitThree = 0;
  Data = DataIn;
	if(Data >= 100)begin
		DigitOne = 1;
  	Data = Data - 100;
  end
	else
		DigitOne = 0;

	repeat(10)begin
	  if(Data >= 10)begin
	    Data = Data - 10;
	    DigitTwo = DigitTwo + 1;
	  end
	  else
	    DigitThree = Data;
	end

case(DigitOne)
  0: SevenSegOne = 7'b111111;
  1: SevenSegOne = 7'b0000011;
  2: SevenSegOne = 7'b1011011;
  3: SevenSegOne = 7'b1001111;
  4: SevenSegOne = 7'b1100110;
  5: SevenSegOne = 7'b1011011;
  6: SevenSegOne = 7'b1111100;
  7: SevenSegOne = 7'b0000111;
  8: SevenSegOne = 7'b1111111;
  9: SevenSegOne = 7'b1001111;
  default: SevenSegOne = 7'b0000000;
endcase

case(DigitTwo)
  0: SevenSegTwo = 7'b111111;
  1: SevenSegTwo = 7'b0000011;
  2: SevenSegTwo = 7'b1011011;
  3: SevenSegTwo = 7'b1001111;
  4: SevenSegTwo = 7'b1100110;
  5: SevenSegTwo = 7'b1011011;
  6: SevenSegTwo = 7'b1111100;
  7: SevenSegTwo = 7'b0000111;
  8: SevenSegTwo = 7'b1111111;
  9: SevenSegTwo = 7'b1001111;
  default: SevenSegTwo = 7'b0000000;
endcase

case(DigitThree)
  0: SevenSegThree = 7'b111111;
  1: SevenSegThree = 7'b0000011;
  2: SevenSegThree = 7'b1011011;
  3: SevenSegThree = 7'b1001111;
  4: SevenSegThree = 7'b1100110;
  5: SevenSegThree = 7'b1011011;
  6: SevenSegThree = 7'b1111100;
  7: SevenSegThree = 7'b0000111;
  8: SevenSegThree = 7'b1111111;
  9: SevenSegThree = 7'b1001111;
  default: SevenSegThree = 7'b0000000;
endcase

end
endmodule