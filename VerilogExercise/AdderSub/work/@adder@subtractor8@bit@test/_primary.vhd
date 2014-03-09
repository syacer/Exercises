library verilog;
use verilog.vl_types.all;
entity AdderSubtractor8BitTest is
    generic(
        NBITS           : integer := 8
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of NBITS : constant is 1;
end AdderSubtractor8BitTest;
