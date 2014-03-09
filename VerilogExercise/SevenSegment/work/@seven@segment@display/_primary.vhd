library verilog;
use verilog.vl_types.all;
entity SevenSegmentDisplay is
    port(
        DataIn          : in     vl_logic_vector(7 downto 0);
        Clk             : in     vl_logic;
        SevenSegOne     : out    vl_logic_vector(7 downto 0);
        SevenSegTwo     : out    vl_logic_vector(7 downto 0);
        SevenSegThree   : out    vl_logic_vector(7 downto 0)
    );
end SevenSegmentDisplay;
