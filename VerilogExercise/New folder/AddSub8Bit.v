module AddSub8Bit(result, x, y, ccn, ccz, ccv, ccc, sub);
  input wire [7:0] x, y;
  output wire [7:0] result;
  output wire ccn, ccz, ccv, ccc;
  input wire sub;
  
  wire [7:0]Cc;
  
  AddSub1Bit a(
  .Ix(x[0]),
  .Iy(y[0]),
  .Ic(sub),
  .Sub(sub),
  .Od(result[0]),
  .Oc(Cc[0])
  );
  AddSub1Bit b(
  .Ix(x[1]),
  .Iy(y[1]),
  .Ic(Cc[0]),
  .Sub(sub),
  .Od(result[1]),
  .Oc(Cc[1])
  );
    AddSub1Bit c(
  .Ix(x[2]),
  .Iy(y[2]),
  .Ic(Cc[1]),
  .Sub(sub),
  .Od(result[2]),
  .Oc(Cc[2])
  );
    AddSub1Bit d(
  .Ix(x[3]),
  .Iy(y[3]),
  .Ic(Cc[2]),
  .Sub(sub),
  .Od(result[3]),
  .Oc(Cc[3])
  );
    AddSub1Bit e(
  .Ix(x[4]),
  .Iy(y[4]),
  .Ic(Cc[3]),
  .Sub(sub),
  .Od(result[4]),
  .Oc(Cc[4])
  );
    AddSub1Bit f(
  .Ix(x[5]),
  .Iy(y[5]),
  .Ic(Cc[4]),
  .Sub(sub),
  .Od(result[5]),
  .Oc(Cc[5])
  );
    AddSub1Bit g(
  .Ix(x[6]),
  .Iy(y[6]),
  .Ic(Cc[5]),
  .Sub(sub),
  .Od(result[6]),
  .Oc(Cc[6])
  );
    AddSub1Bit h(
  .Ix(x[7]),
  .Iy(y[7]),
  .Ic(Cc[6]),
  .Sub(sub),
  .Od(result[7]),
  .Oc(Cc[7])
  );
  
  assign ccn = result[7];
  assign ccz = Cc[7]|result[7]|result[6]|result[5]|result[4]|result[3]|result[2]|result[1]|result[0];
  assign ccc = (x[7] === y[7])?sub?0:result[7]:0;
endmodule

module AddSub1Bit(
  input wire Ix,
  input wire Iy,
  input wire Ic,
  input wire Sub,
  output wire Od,
  output wire Oc
);
  wire Rx;
  assign  #2 Rx = Sub^Ix;
  assign  #4 Od = Rx^Iy^Ic;
  assign  #10 Oc = Rx&Iy | Rx&Ic | Iy&Ic;
  

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
  Ic = count >> 2;
  Sub = 0;
  #2000;
  $display("x = %2h, y = %2h, Ic = %2h sub = %b", Ix,Iy,Ic, Sub);
  $display("observed result = %2h, expected result =%2h",Od, Oc);
  count = count + 1;
 
end
end
endmodule