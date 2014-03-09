
module SevenSegmentDisplay(
input wire [6:0] DataIn,
input wire Clk,
output reg [6:0] SevenSegOne,
output reg [6:0] SevenSegTwo,
output reg [6:0] SevenSegThree
);

reg [6:0] DigitOne;
reg [6:0] DigitTwo;
reg [6:0] DigitThree;
reg [2:0] State;
reg [3:0] i;
reg [1:0] j;
reg [6:0] Temp,Temp2;
reg [6:0] Data;

always @(*)begin
  Data = DataIn;
	if((Data - 3'd100) >= 0)begin
		DigitOne = 1;
  	Data = Data - 3'd100;
  end
	else
		DigitOne = 0;

	while(Data > 0)begin
		Data = Data - 2'd10;
  	i = i+1;
	end
  	DigitTwo = i;
  	DigitThree = Data;

if( j >= 0 && j <= 1)
	j = j+1'b1;
else
	j = 0;

if (j == 0)begin
	Temp = DigitOne;
  SevenSegOne = Temp2;
end
else if (j == 1)begin
  Temp = DigitTwo;
  SevenSegTwo = Temp2;
end
else begin
  Temp = DigitThree;
  SevenSegThree = Temp2;
end

case(Temp)
  0: Temp2 = 7'b111111;
  1: Temp2 = 7'b0000011;
  2: Temp2 = 7'b1011011;
  3: Temp2 = 7'b1001111;
  4: Temp2 = 7'b1100110;
  5: Temp2 = 7'b1011011;
  6: Temp2 = 7'b1111100;
  7: Temp2 = 7'b0000111;
  8: Temp2 = 7'b1111111;
  9: Temp2 = 7'b1001111;
  default: Temp2 = 7'b0000000;
endcase
end
endmodule