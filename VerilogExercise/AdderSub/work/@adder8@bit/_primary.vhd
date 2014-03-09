library verilog;
use verilog.vl_types.all;
entity Adder8Bit is
    port(
        x               : in     vl_logic_vector(7 downto 0);
        y               : in     vl_logic_vector(7 downto 0);
        Ic              : in     vl_logic;
        result          : out    vl_logic_vector(7 downto 0);
        ccn             : out    vl_logic;
        ccz             : out    vl_logic;
        ccv             : out    vl_logic;
        ccc             : out    vl_logic
    );
end Adder8Bit;
