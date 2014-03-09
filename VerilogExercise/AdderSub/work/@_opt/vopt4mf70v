library verilog;
use verilog.vl_types.all;
entity GoldenDevice is
    generic(
        NBITS           : integer := 8
    );
    port(
        result          : out    vl_logic_vector;
        x               : in     vl_logic_vector;
        y               : in     vl_logic_vector;
        ccn             : out    vl_logic;
        ccz             : out    vl_logic;
        ccv             : out    vl_logic;
        ccc             : out    vl_logic;
        sub             : in     vl_logic
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of NBITS : constant is 1;
end GoldenDevice;
