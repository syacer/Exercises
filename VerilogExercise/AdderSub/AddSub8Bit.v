module AddSub8Bit(result, x, y, ccn, ccz, ccv, ccc, sub);
  input wire [7:0] x, y;
  output wire [7:0] result;
  output wire ccn, ccz, ccv, ccc;
  input wire sub;
  
  wire [7:0]Cc,yin;
  
  assign yin[0] = sub^y[0];
  assign yin[1] = sub^y[1];
  assign yin[2] = sub^y[2];
  assign yin[3] = sub^y[3];
  assign yin[4] = sub^y[4];
  assign yin[5] = sub^y[5];
  assign yin[6] = sub^y[6];
  assign yin[7] = sub^y[7];
  
  
  Adder8Bit Adder1(x,yin,sub,result,ccn,ccz,ccv,ccc);

endmodule

module Add1Bit(
  input wire Ix,
  input wire Iy,
  input wire Ic,
  output wire Od,
  output wire Oc
);
  assign  #4 Od = Ix^Iy^Ic;
  assign  #10 Oc = (Ix&Iy | Ix&Ic | Iy&Ic);
  

endmodule

module Adder8Bit(
  input wire [7:0]x,
  input wire [7:0]y,
  input wire Ic,
  output wire [7:0]result,
  output wire ccn,
  output wire ccz,
  output wire ccv,
  output wire ccc
);
  wire [7:0]Cc;
  
  Add1Bit a(
  .Ix(x[0]),
  .Iy(y[0]),
  .Ic(Ic),
  .Od(result[0]),
  .Oc(Cc[0])
  );
  Add1Bit b(
  .Ix(x[1]),
  .Iy(y[1]),
  .Ic(Cc[0]),
  .Od(result[1]),
  .Oc(Cc[1])
  );
    Add1Bit c(
  .Ix(x[2]),
  .Iy(y[2]),
  .Ic(Cc[1]),
  .Od(result[2]),
  .Oc(Cc[2])
  );
    Add1Bit d(
  .Ix(x[3]),
  .Iy(y[3]),
  .Ic(Cc[2]),
  .Od(result[3]),
  .Oc(Cc[3])
  );
    Add1Bit e(
  .Ix(x[4]),
  .Iy(y[4]),
  .Ic(Cc[3]),
  .Od(result[4]),
  .Oc(Cc[4])
  );
    Add1Bit f(
  .Ix(x[5]),
  .Iy(y[5]),
  .Ic(Cc[4]),
  .Od(result[5]),
  .Oc(Cc[5])
  );
    Add1Bit g(
  .Ix(x[6]),
  .Iy(y[6]),
  .Ic(Cc[5]),
  .Od(result[6]),
  .Oc(Cc[6])
  );
    Add1Bit h(
  .Ix(x[7]),
  .Iy(y[7]),
  .Ic(Cc[6]),
  .Od(result[7]),
  .Oc(Cc[7])
  );
assign ccn = result[7];
assign ccz = (result === 0);
assign ccc = Cc[7];
assign ccv = (x[7]===y[7])?(x[7] === ~result[7])?1:0:0;
endmodule

module TestAddSub1Bit();
  
  reg Ix, Iy, Ic, Sub;
  reg [3:0] count;
  wire Oc, Od;
  
 AddSub1Bit test(
  Ix,
  Iy,
  Ic,
  Sub,
  Od,
  Oc
);

initial
begin
  count = 0;
  while(count<7)begin
 
  Ix = count;
  Iy = count >> 1;
  Ic = 1;
  Sub = 1;
  #2000;
  $display("x = %2h, y = %2h, Ic = %2h sub = %b", Ix,Iy,Ic, Sub);
  $display("observed result = %2h, expected result =%2h",Od, Oc);
  count = count + 1;
 
end
end
endmodule