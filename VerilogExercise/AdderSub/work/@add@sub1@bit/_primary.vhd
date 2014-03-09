library verilog;
use verilog.vl_types.all;
entity AddSub1Bit is
    port(
        Ix              : in     vl_logic;
        Iy              : in     vl_logic;
        Ic              : in     vl_logic;
        Sub             : in     vl_logic;
        Od              : out    vl_logic;
        Oc              : out    vl_logic
    );
end AddSub1Bit;
