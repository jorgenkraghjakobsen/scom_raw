/*---------------------------------------------------------------------------------------*/
/*   Merus Audio MA120   register map                                                    */
/*                                                                                       */
/*   Provides : System Verilog defines for top level access                              */
/*                                                                                       */
/*   Symbols is a collection of 1 to 8 bits within a single address                      */
/*                                                                                       */
/*   Provided as is for internal use only - do not copy - do not share                   */
/*                                                                                       */
/*   Timestamp                        :                         Fri Sep  4 13:23:53 2020 */
/*   Created from database            :                                       ma120_rev2 */
/*   Errors and updates please contact:        Jorgen, jorgen.kraghjakobsen@infineon.com */
/*---------------------------------------------------------------------------------------*/
`ifndef _ma120_rev2_v_
`define _ma120_rev2_v_
// Common Read / Write macro
`define READ_REG(REG,x) read_i2c(`REG``__a,tmp_data);x=(tmp_data & `REG``__mask) >> `REG``__shift;
`define WRITE_REG(REG,x) read_i2c(`REG``__a,tmp_data);write_i2c(`REG``__a,(tmp_data & ~`REG``__mask) | ((x<<`REG``__shift) & `REG``__mask));

//------------------------------------------------------------------------------core__pa__PMP_select---
// Power Mode Profile selection
`define MA_core__pa__PMP_select__a 'h0000
`define MA_core__pa__PMP_select__len 3
`define MA_core__pa__PMP_select__mask 'h07
`define MA_core__pa__PMP_select__shift 0
`define MA_core__pa__PMP_select__reset 'h02

//------------------------------------------------------------------------------core__pa__mode_pbtl---
// High to use PBTL mode
`define MA_core__pa__mode_pbtl__a 'h0000
`define MA_core__pa__mode_pbtl__len 1
`define MA_core__pa__mode_pbtl__mask 'h08
`define MA_core__pa__mode_pbtl__shift 3
`define MA_core__pa__mode_pbtl__reset 'h00

//------------------------------------------------------------------------------core__pa__pvdd_scale---
// Pvdd level config. for DNR optimization.
`define MA_core__pa__pvdd_scale__a 'h0000
`define MA_core__pa__pvdd_scale__len 2
`define MA_core__pa__pvdd_scale__mask 'h30
`define MA_core__pa__pvdd_scale__shift 4
`define MA_core__pa__pvdd_scale__reset 'h03

//------------------------------------------------------------------------------core__pa__TBD_reg_ctrl---
// High: override pin programmed settings with register stettings<br>
`define MA_core__pa__TBD_reg_ctrl__a 'h0000
`define MA_core__pa__TBD_reg_ctrl__len 1
`define MA_core__pa__TBD_reg_ctrl__mask 'h40
`define MA_core__pa__TBD_reg_ctrl__shift 6
`define MA_core__pa__TBD_reg_ctrl__reset 'h00

//------------------------------------------------------------------------------core__pa__gd_dVdt---
// Gate driver dV/dt (strength) selection. "00" = lowest, "11" = highest<br>
`define MA_core__pa__gd_dVdt__a 'h0001
`define MA_core__pa__gd_dVdt__len 2
`define MA_core__pa__gd_dVdt__mask 'h03
`define MA_core__pa__gd_dVdt__shift 0
`define MA_core__pa__gd_dVdt__reset 'h03

//------------------------------------------------------------------------------core__pa__mute_ch0---
// High to force channel 0 to mute
`define MA_core__pa__mute_ch0__a 'h0002
`define MA_core__pa__mute_ch0__len 1
`define MA_core__pa__mute_ch0__mask 'h01
`define MA_core__pa__mute_ch0__shift 0
`define MA_core__pa__mute_ch0__reset 'h00

//------------------------------------------------------------------------------core__pa__mute_ch1---
// High to force channel 1 to mute
`define MA_core__pa__mute_ch1__a 'h0002
`define MA_core__pa__mute_ch1__len 1
`define MA_core__pa__mute_ch1__mask 'h02
`define MA_core__pa__mute_ch1__shift 1
`define MA_core__pa__mute_ch1__reset 'h00

//------------------------------------------------------------------------------core__pa__disable_ch0---
// High to disable channel 0
`define MA_core__pa__disable_ch0__a 'h0002
`define MA_core__pa__disable_ch0__len 1
`define MA_core__pa__disable_ch0__mask 'h04
`define MA_core__pa__disable_ch0__shift 2
`define MA_core__pa__disable_ch0__reset 'h00

//------------------------------------------------------------------------------core__pa__disable_ch1---
// High to disable channel 1
`define MA_core__pa__disable_ch1__a 'h0002
`define MA_core__pa__disable_ch1__len 1
`define MA_core__pa__disable_ch1__mask 'h08
`define MA_core__pa__disable_ch1__shift 3
`define MA_core__pa__disable_ch1__reset 'h00

//------------------------------------------------------------------------------core__pa__standby---
// High to force chip standby.
`define MA_core__pa__standby__a 'h0002
`define MA_core__pa__standby__len 1
`define MA_core__pa__standby__mask 'h10
`define MA_core__pa__standby__shift 4
`define MA_core__pa__standby__reset 'h00

//------------------------------------------------------------------------------core__pa__dsp_enable---
// High to enable the digital audio processor
`define MA_core__pa__dsp_enable__a 'h0005
`define MA_core__pa__dsp_enable__len 1
`define MA_core__pa__dsp_enable__mask 'h02
`define MA_core__pa__dsp_enable__shift 1
`define MA_core__pa__dsp_enable__reset 'h00

//------------------------------------------------------------------------------core__pa__dsp_restart---
// High: the DSP is halted, Low: the DSP is running
`define MA_core__pa__dsp_restart__a 'h0005
`define MA_core__pa__dsp_restart__len 1
`define MA_core__pa__dsp_restart__mask 'h04
`define MA_core__pa__dsp_restart__shift 2
`define MA_core__pa__dsp_restart__reset 'h00

//------------------------------------------------------------------------------core__pa__volume_ch0---
// Channel 0 volume setting
`define MA_core__pa__volume_ch0__a 'h0003
`define MA_core__pa__volume_ch0__len 8
`define MA_core__pa__volume_ch0__mask 'hff
`define MA_core__pa__volume_ch0__shift 0
`define MA_core__pa__volume_ch0__reset 'h20

//------------------------------------------------------------------------------core__pa__volume_ch1---
// Channel 1 volume setting
`define MA_core__pa__volume_ch1__a 'h0004
`define MA_core__pa__volume_ch1__len 8
`define MA_core__pa__volume_ch1__mask 'hff
`define MA_core__pa__volume_ch1__shift 0
`define MA_core__pa__volume_ch1__reset 'h20

//------------------------------------------------------------------------------core__pa__dsp_bypass---
// High to take audio directly from i2s/tdm input
`define MA_core__pa__dsp_bypass__a 'h0005
`define MA_core__pa__dsp_bypass__len 1
`define MA_core__pa__dsp_bypass__mask 'h08
`define MA_core__pa__dsp_bypass__shift 3
`define MA_core__pa__dsp_bypass__reset 'h00

//------------------------------------------------------------------------------core__pa__vol_instant---
// High: Apply volume settings instantly - without ramp
`define MA_core__pa__vol_instant__a 'h0005
`define MA_core__pa__vol_instant__len 1
`define MA_core__pa__vol_instant__mask 'h01
`define MA_core__pa__vol_instant__shift 0
`define MA_core__pa__vol_instant__reset 'h00

//------------------------------------------------------------------------------core__pa__clip_pin---
// State of the "clip" signal driving the nClip pin -- "1" means "clip"<br>
`define MA_core__pa__clip_pin__a 'h0006
`define MA_core__pa__clip_pin__len 1
`define MA_core__pa__clip_pin__mask 'h01
`define MA_core__pa__clip_pin__shift 0
`define MA_core__pa__clip_pin__reset 'h00

//------------------------------------------------------------------------------core__pa__err_pin---
// Status of the "err" signal driving the nErr pin -- "1" means "error"<br>
`define MA_core__pa__err_pin__a 'h0006
`define MA_core__pa__err_pin__len 1
`define MA_core__pa__err_pin__mask 'h02
`define MA_core__pa__err_pin__shift 1
`define MA_core__pa__err_pin__reset 'h00

//------------------------------------------------------------------------------core__pa__temp_chip---
// Current chip temperature reading
`define MA_core__pa__temp_chip__a 'h0008
`define MA_core__pa__temp_chip__len 8
`define MA_core__pa__temp_chip__mask 'hff
`define MA_core__pa__temp_chip__shift 0
`define MA_core__pa__temp_chip__reset 'h00

//------------------------------------------------------------------------------core__pa__pvdd_chip---
// Current chip Pvdd reading
`define MA_core__pa__pvdd_chip__a 'h0009
`define MA_core__pa__pvdd_chip__len 8
`define MA_core__pa__pvdd_chip__mask 'hff
`define MA_core__pa__pvdd_chip__shift 0
`define MA_core__pa__pvdd_chip__reset 'h00

//------------------------------------------------------------------------------core__pa__attack_ch1---
// Channel 1 attack time for limiter
`define MA_core__pa__attack_ch1__a 'h000b
`define MA_core__pa__attack_ch1__len 5
`define MA_core__pa__attack_ch1__mask 'h1f
`define MA_core__pa__attack_ch1__shift 0
`define MA_core__pa__attack_ch1__reset 'h00

//------------------------------------------------------------------------------core__pa__attack_ch0---
// Channel 0 attack time for limiter
`define MA_core__pa__attack_ch0__a 'h000a
`define MA_core__pa__attack_ch0__len 5
`define MA_core__pa__attack_ch0__mask 'h1f
`define MA_core__pa__attack_ch0__shift 0
`define MA_core__pa__attack_ch0__reset 'h00

//------------------------------------------------------------------------------core__pa__release_ch0---
// Channel 0 release time for limiter
`define MA_core__pa__release_ch0__a 'h000c
`define MA_core__pa__release_ch0__len 5
`define MA_core__pa__release_ch0__mask 'h1f
`define MA_core__pa__release_ch0__shift 0
`define MA_core__pa__release_ch0__reset 'h12

//------------------------------------------------------------------------------core__pa__release_ch1---
// Channel 1 release time for limiter
`define MA_core__pa__release_ch1__a 'h000d
`define MA_core__pa__release_ch1__len 5
`define MA_core__pa__release_ch1__mask 'h1f
`define MA_core__pa__release_ch1__shift 0
`define MA_core__pa__release_ch1__reset 'h12

//------------------------------------------------------------------------------core__pa__threshold_ch0---
// Channel 0 limiter threshold
`define MA_core__pa__threshold_ch0__a 'h000e
`define MA_core__pa__threshold_ch0__len 8
`define MA_core__pa__threshold_ch0__mask 'hff
`define MA_core__pa__threshold_ch0__shift 0
`define MA_core__pa__threshold_ch0__reset 'h00

//------------------------------------------------------------------------------core__pa__threshold_ch1---
// Channel 1 limiter threshold
`define MA_core__pa__threshold_ch1__a 'h000f
`define MA_core__pa__threshold_ch1__len 8
`define MA_core__pa__threshold_ch1__mask 'hff
`define MA_core__pa__threshold_ch1__shift 0
`define MA_core__pa__threshold_ch1__reset 'h00

//------------------------------------------------------------------------------core__pa__gpio_sync_zclip---
// High to use the GPIO pin for inter IC synchronization. Low to use the GPIO pin to indicate amplifier clipping
`define MA_core__pa__gpio_sync_zclip__a 'h0005
`define MA_core__pa__gpio_sync_zclip__len 1
`define MA_core__pa__gpio_sync_zclip__mask 'h10
`define MA_core__pa__gpio_sync_zclip__shift 4
`define MA_core__pa__gpio_sync_zclip__reset 'h00

//------------------------------------------------------------------------------core__pa__mute_source---
// Select source for the internal mute signal; 0: nmute pin, 1: mute0/1 register settings
`define MA_core__pa__mute_source__a 'h0002
`define MA_core__pa__mute_source__len 1
`define MA_core__pa__mute_source__mask 'h20
`define MA_core__pa__mute_source__shift 5
`define MA_core__pa__mute_source__reset 'h00

//------------------------------------------------------------------------------core__pa__adc_pin---
// Value representing the level on the ADC input pin
`define MA_core__pa__adc_pin__a 'h0007
`define MA_core__pa__adc_pin__len 8
`define MA_core__pa__adc_pin__mask 'hff
`define MA_core__pa__adc_pin__shift 0
`define MA_core__pa__adc_pin__reset 'h00

//------------------------------------------------------------------------------core__pa__dsp_flags---
// Flags set by the DSP
`define MA_core__pa__dsp_flags__a 'h0006
`define MA_core__pa__dsp_flags__len 6
`define MA_core__pa__dsp_flags__mask 'hfc
`define MA_core__pa__dsp_flags__shift 2
`define MA_core__pa__dsp_flags__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__data_alignment---
// 00: I2S, 01: Left Justified, 10: Right Justified
`define MA_core__i2s_tdm__data_alignment__a 'h0010
`define MA_core__i2s_tdm__data_alignment__len 2
`define MA_core__i2s_tdm__data_alignment__mask 'h03
`define MA_core__i2s_tdm__data_alignment__shift 0
`define MA_core__i2s_tdm__data_alignment__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__sck_pol---
// 0: Data changes on rising edge of SCK, 1: Data changes on falling edge of SCK
`define MA_core__i2s_tdm__sck_pol__a 'h0010
`define MA_core__i2s_tdm__sck_pol__len 1
`define MA_core__i2s_tdm__sck_pol__mask 'h10
`define MA_core__i2s_tdm__sck_pol__shift 4
`define MA_core__i2s_tdm__sck_pol__reset 'h01

//------------------------------------------------------------------------------core__i2s_tdm__slot_size---
// Channel slot size: 00: 32bit, 01: 24bit, 10: 16bit
`define MA_core__i2s_tdm__slot_size__a 'h0010
`define MA_core__i2s_tdm__slot_size__len 2
`define MA_core__i2s_tdm__slot_size__mask 'h60
`define MA_core__i2s_tdm__slot_size__shift 5
`define MA_core__i2s_tdm__slot_size__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__ws_fs_rising---
// 0: Frame starts at falling FS, 1: Frame starts at rising FS
`define MA_core__i2s_tdm__ws_fs_rising__a 'h0010
`define MA_core__i2s_tdm__ws_fs_rising__len 1
`define MA_core__i2s_tdm__ws_fs_rising__mask 'h80
`define MA_core__i2s_tdm__ws_fs_rising__shift 7
`define MA_core__i2s_tdm__ws_fs_rising__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__lsb_first---
// 0: The msb is transmitted first, 1: The lsb is transmitted first
`define MA_core__i2s_tdm__lsb_first__a 'h0011
`define MA_core__i2s_tdm__lsb_first__len 1
`define MA_core__i2s_tdm__lsb_first__mask 'h01
`define MA_core__i2s_tdm__lsb_first__shift 0
`define MA_core__i2s_tdm__lsb_first__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_input_map0---
// Recieved slot number for Ch0 input [0 to 31]
`define MA_core__i2s_tdm__tdm_input_map0__a 'h0012
`define MA_core__i2s_tdm__tdm_input_map0__len 5
`define MA_core__i2s_tdm__tdm_input_map0__mask 'h1f
`define MA_core__i2s_tdm__tdm_input_map0__shift 0
`define MA_core__i2s_tdm__tdm_input_map0__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_input_map1---
// Recieved slot number for Ch1 input [0 to 31]
`define MA_core__i2s_tdm__tdm_input_map1__a 'h0013
`define MA_core__i2s_tdm__tdm_input_map1__len 5
`define MA_core__i2s_tdm__tdm_input_map1__mask 'h1f
`define MA_core__i2s_tdm__tdm_input_map1__shift 0
`define MA_core__i2s_tdm__tdm_input_map1__reset 'h01

//------------------------------------------------------------------------------core__i2s_tdm__tdm_input_map2---
// Reserved
`define MA_core__i2s_tdm__tdm_input_map2__a 'h0014
`define MA_core__i2s_tdm__tdm_input_map2__len 5
`define MA_core__i2s_tdm__tdm_input_map2__mask 'h1f
`define MA_core__i2s_tdm__tdm_input_map2__shift 0
`define MA_core__i2s_tdm__tdm_input_map2__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_input_map3---
// Reserved
`define MA_core__i2s_tdm__tdm_input_map3__a 'h0015
`define MA_core__i2s_tdm__tdm_input_map3__len 5
`define MA_core__i2s_tdm__tdm_input_map3__mask 'h1f
`define MA_core__i2s_tdm__tdm_input_map3__shift 0
`define MA_core__i2s_tdm__tdm_input_map3__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map0---
// Signal transmitted in slot0. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map0__a 'h0016
`define MA_core__i2s_tdm__tdm_output_map0__len 3
`define MA_core__i2s_tdm__tdm_output_map0__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map0__shift 0
`define MA_core__i2s_tdm__tdm_output_map0__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map1---
// Signal transmitted in slot1. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map1__a 'h0016
`define MA_core__i2s_tdm__tdm_output_map1__len 3
`define MA_core__i2s_tdm__tdm_output_map1__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map1__shift 3
`define MA_core__i2s_tdm__tdm_output_map1__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map2---
// Signal transmitted in slot2. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map2__a 'h0017
`define MA_core__i2s_tdm__tdm_output_map2__len 3
`define MA_core__i2s_tdm__tdm_output_map2__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map2__shift 0
`define MA_core__i2s_tdm__tdm_output_map2__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map3---
// Signal transmitted in slot3. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map3__a 'h0017
`define MA_core__i2s_tdm__tdm_output_map3__len 3
`define MA_core__i2s_tdm__tdm_output_map3__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map3__shift 3
`define MA_core__i2s_tdm__tdm_output_map3__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map4---
// Signal transmitted in slot4. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map4__a 'h0018
`define MA_core__i2s_tdm__tdm_output_map4__len 3
`define MA_core__i2s_tdm__tdm_output_map4__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map4__shift 0
`define MA_core__i2s_tdm__tdm_output_map4__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map5---
// Signal transmitted in slot5. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map5__a 'h0018
`define MA_core__i2s_tdm__tdm_output_map5__len 3
`define MA_core__i2s_tdm__tdm_output_map5__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map5__shift 3
`define MA_core__i2s_tdm__tdm_output_map5__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map6---
// Signal transmitted in slot6. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map6__a 'h0019
`define MA_core__i2s_tdm__tdm_output_map6__len 3
`define MA_core__i2s_tdm__tdm_output_map6__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map6__shift 0
`define MA_core__i2s_tdm__tdm_output_map6__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map7---
// Signal transmitted in slot7. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map7__a 'h0019
`define MA_core__i2s_tdm__tdm_output_map7__len 3
`define MA_core__i2s_tdm__tdm_output_map7__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map7__shift 3
`define MA_core__i2s_tdm__tdm_output_map7__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map8---
// Signal transmitted in slot8. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map8__a 'h001a
`define MA_core__i2s_tdm__tdm_output_map8__len 3
`define MA_core__i2s_tdm__tdm_output_map8__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map8__shift 0
`define MA_core__i2s_tdm__tdm_output_map8__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map9---
// Signal transmitted in slot9. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map9__a 'h001a
`define MA_core__i2s_tdm__tdm_output_map9__len 3
`define MA_core__i2s_tdm__tdm_output_map9__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map9__shift 3
`define MA_core__i2s_tdm__tdm_output_map9__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map10---
// Signal transmitted in slot10. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map10__a 'h001b
`define MA_core__i2s_tdm__tdm_output_map10__len 3
`define MA_core__i2s_tdm__tdm_output_map10__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map10__shift 0
`define MA_core__i2s_tdm__tdm_output_map10__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map11---
// Signal transmitted in slot11. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map11__a 'h001b
`define MA_core__i2s_tdm__tdm_output_map11__len 3
`define MA_core__i2s_tdm__tdm_output_map11__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map11__shift 3
`define MA_core__i2s_tdm__tdm_output_map11__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map12---
// Signal transmitted in slot12. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map12__a 'h001c
`define MA_core__i2s_tdm__tdm_output_map12__len 3
`define MA_core__i2s_tdm__tdm_output_map12__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map12__shift 0
`define MA_core__i2s_tdm__tdm_output_map12__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map13---
// Signal transmitted in slot13. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map13__a 'h001c
`define MA_core__i2s_tdm__tdm_output_map13__len 3
`define MA_core__i2s_tdm__tdm_output_map13__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map13__shift 3
`define MA_core__i2s_tdm__tdm_output_map13__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map14---
// Signal transmitted in slot14. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map14__a 'h001d
`define MA_core__i2s_tdm__tdm_output_map14__len 3
`define MA_core__i2s_tdm__tdm_output_map14__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map14__shift 0
`define MA_core__i2s_tdm__tdm_output_map14__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map15---
// Signal transmitted in slot15. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
`define MA_core__i2s_tdm__tdm_output_map15__a 'h001d
`define MA_core__i2s_tdm__tdm_output_map15__len 3
`define MA_core__i2s_tdm__tdm_output_map15__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map15__shift 3
`define MA_core__i2s_tdm__tdm_output_map15__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map16---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map16__a 'h001e
`define MA_core__i2s_tdm__tdm_output_map16__len 3
`define MA_core__i2s_tdm__tdm_output_map16__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map16__shift 0
`define MA_core__i2s_tdm__tdm_output_map16__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map17---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map17__a 'h001e
`define MA_core__i2s_tdm__tdm_output_map17__len 3
`define MA_core__i2s_tdm__tdm_output_map17__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map17__shift 3
`define MA_core__i2s_tdm__tdm_output_map17__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map18---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map18__a 'h001f
`define MA_core__i2s_tdm__tdm_output_map18__len 3
`define MA_core__i2s_tdm__tdm_output_map18__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map18__shift 0
`define MA_core__i2s_tdm__tdm_output_map18__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map19---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map19__a 'h001f
`define MA_core__i2s_tdm__tdm_output_map19__len 3
`define MA_core__i2s_tdm__tdm_output_map19__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map19__shift 3
`define MA_core__i2s_tdm__tdm_output_map19__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map20---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map20__a 'h0020
`define MA_core__i2s_tdm__tdm_output_map20__len 3
`define MA_core__i2s_tdm__tdm_output_map20__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map20__shift 0
`define MA_core__i2s_tdm__tdm_output_map20__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map21---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map21__a 'h0020
`define MA_core__i2s_tdm__tdm_output_map21__len 3
`define MA_core__i2s_tdm__tdm_output_map21__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map21__shift 3
`define MA_core__i2s_tdm__tdm_output_map21__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map22---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map22__a 'h0021
`define MA_core__i2s_tdm__tdm_output_map22__len 3
`define MA_core__i2s_tdm__tdm_output_map22__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map22__shift 0
`define MA_core__i2s_tdm__tdm_output_map22__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map23---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map23__a 'h0021
`define MA_core__i2s_tdm__tdm_output_map23__len 3
`define MA_core__i2s_tdm__tdm_output_map23__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map23__shift 3
`define MA_core__i2s_tdm__tdm_output_map23__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map24---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map24__a 'h0022
`define MA_core__i2s_tdm__tdm_output_map24__len 3
`define MA_core__i2s_tdm__tdm_output_map24__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map24__shift 0
`define MA_core__i2s_tdm__tdm_output_map24__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map25---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map25__a 'h0022
`define MA_core__i2s_tdm__tdm_output_map25__len 3
`define MA_core__i2s_tdm__tdm_output_map25__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map25__shift 3
`define MA_core__i2s_tdm__tdm_output_map25__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map26---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map26__a 'h0023
`define MA_core__i2s_tdm__tdm_output_map26__len 3
`define MA_core__i2s_tdm__tdm_output_map26__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map26__shift 0
`define MA_core__i2s_tdm__tdm_output_map26__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map27---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map27__a 'h0023
`define MA_core__i2s_tdm__tdm_output_map27__len 3
`define MA_core__i2s_tdm__tdm_output_map27__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map27__shift 3
`define MA_core__i2s_tdm__tdm_output_map27__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map28---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map28__a 'h0024
`define MA_core__i2s_tdm__tdm_output_map28__len 3
`define MA_core__i2s_tdm__tdm_output_map28__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map28__shift 0
`define MA_core__i2s_tdm__tdm_output_map28__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map29---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map29__a 'h0024
`define MA_core__i2s_tdm__tdm_output_map29__len 3
`define MA_core__i2s_tdm__tdm_output_map29__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map29__shift 3
`define MA_core__i2s_tdm__tdm_output_map29__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map30---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map30__a 'h0025
`define MA_core__i2s_tdm__tdm_output_map30__len 3
`define MA_core__i2s_tdm__tdm_output_map30__mask 'h07
`define MA_core__i2s_tdm__tdm_output_map30__shift 0
`define MA_core__i2s_tdm__tdm_output_map30__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map31---
// Reserved
`define MA_core__i2s_tdm__tdm_output_map31__a 'h0025
`define MA_core__i2s_tdm__tdm_output_map31__len 3
`define MA_core__i2s_tdm__tdm_output_map31__mask 'h38
`define MA_core__i2s_tdm__tdm_output_map31__shift 3
`define MA_core__i2s_tdm__tdm_output_map31__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tx_loopback---
// 1: Transmitted audio data is a loop-back of the received audio data
`define MA_core__i2s_tdm__tx_loopback__a 'h0026
`define MA_core__i2s_tdm__tx_loopback__len 1
`define MA_core__i2s_tdm__tx_loopback__mask 'h01
`define MA_core__i2s_tdm__tx_loopback__shift 0
`define MA_core__i2s_tdm__tx_loopback__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__tx_enable---
// 1: Enable the I2S/TDM data transmitter
`define MA_core__i2s_tdm__tx_enable__a 'h0026
`define MA_core__i2s_tdm__tx_enable__len 1
`define MA_core__i2s_tdm__tx_enable__mask 'h04
`define MA_core__i2s_tdm__tx_enable__shift 2
`define MA_core__i2s_tdm__tx_enable__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__rx_enable---
// 1: Enable the I2S/TDM receiver. (Must be enabled to play audio)
`define MA_core__i2s_tdm__rx_enable__a 'h0026
`define MA_core__i2s_tdm__rx_enable__len 1
`define MA_core__i2s_tdm__rx_enable__mask 'h02
`define MA_core__i2s_tdm__rx_enable__shift 1
`define MA_core__i2s_tdm__rx_enable__reset 'h01

//------------------------------------------------------------------------------core__i2s_tdm__tx_strong_drive---
// 1: Enable extra drive strength on I2S/TDM transmitter data output pin
`define MA_core__i2s_tdm__tx_strong_drive__a 'h0026
`define MA_core__i2s_tdm__tx_strong_drive__len 1
`define MA_core__i2s_tdm__tx_strong_drive__mask 'h08
`define MA_core__i2s_tdm__tx_strong_drive__shift 3
`define MA_core__i2s_tdm__tx_strong_drive__reset 'h01

//------------------------------------------------------------------------------core__i2s_tdm__sync_in_enable---
// 1: Enable the amplifier PWM to synchronize to the synchronization pulse on the GPIO pin
`define MA_core__i2s_tdm__sync_in_enable__a 'h0027
`define MA_core__i2s_tdm__sync_in_enable__len 1
`define MA_core__i2s_tdm__sync_in_enable__mask 'h01
`define MA_core__i2s_tdm__sync_in_enable__shift 0
`define MA_core__i2s_tdm__sync_in_enable__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__sync_out_enable---
// 1: Enable the internal amplifier PWM synchronization signal to drive the GPIO pin (open-drain)
`define MA_core__i2s_tdm__sync_out_enable__a 'h0027
`define MA_core__i2s_tdm__sync_out_enable__len 1
`define MA_core__i2s_tdm__sync_out_enable__mask 'h02
`define MA_core__i2s_tdm__sync_out_enable__shift 1
`define MA_core__i2s_tdm__sync_out_enable__reset 'h00

//------------------------------------------------------------------------------core__i2s_tdm__fast_sync---
// Select frequency of the synchronization signal on the GPIO pin; 0: fs/12288, 1: fs/12
`define MA_core__i2s_tdm__fast_sync__a 'h0027
`define MA_core__i2s_tdm__fast_sync__len 1
`define MA_core__i2s_tdm__fast_sync__mask 'h04
`define MA_core__i2s_tdm__fast_sync__shift 2
`define MA_core__i2s_tdm__fast_sync__reset 'h01

//------------------------------------------------------------------------------core__i2s_tdm__data_size---
// 00: 24bit, 01: 20bit, 10: 18bit, 11: 16bit
`define MA_core__i2s_tdm__data_size__a 'h0010
`define MA_core__i2s_tdm__data_size__len 2
`define MA_core__i2s_tdm__data_size__mask 'h0c
`define MA_core__i2s_tdm__data_size__shift 2
`define MA_core__i2s_tdm__data_size__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__0__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__0__pwmFreqMode__a 'h0030
`define MA_core__pmc__pm_cfg__0__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__0__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__0__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__0__pwmFreqMode__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__0__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__0__gdsFreqMode__a 'h0030
`define MA_core__pmc__pm_cfg__0__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__0__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__0__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__0__gdsFreqMode__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__0__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__0__modType__a 'h0030
`define MA_core__pmc__pm_cfg__0__modType__len 2
`define MA_core__pmc__pm_cfg__0__modType__mask 'h30
`define MA_core__pmc__pm_cfg__0__modType__shift 4
`define MA_core__pmc__pm_cfg__0__modType__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__0__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__0__lf_bw_scale__a 'h0030
`define MA_core__pmc__pm_cfg__0__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__0__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__0__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__0__lf_bw_scale__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__0__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__0__pbtl_half__a 'h0031
`define MA_core__pmc__pm_cfg__0__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__0__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__0__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__0__pbtl_half__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__0__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__0__gd_hvpu_low__a 'h0031
`define MA_core__pmc__pm_cfg__0__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__0__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__0__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__0__gd_hvpu_low__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__0__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__0__dtsteps_nom__a 'h0031
`define MA_core__pmc__pm_cfg__0__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__0__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__0__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__0__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__0__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__0__bal_bw__a 'h0031
`define MA_core__pmc__pm_cfg__0__bal_bw__len 2
`define MA_core__pmc__pm_cfg__0__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__0__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__0__bal_bw__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__1__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__1__pwmFreqMode__a 'h0033
`define MA_core__pmc__pm_cfg__1__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__1__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__1__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__1__pwmFreqMode__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__1__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__1__gdsFreqMode__a 'h0033
`define MA_core__pmc__pm_cfg__1__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__1__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__1__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__1__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__1__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__1__modType__a 'h0033
`define MA_core__pmc__pm_cfg__1__modType__len 2
`define MA_core__pmc__pm_cfg__1__modType__mask 'h30
`define MA_core__pmc__pm_cfg__1__modType__shift 4
`define MA_core__pmc__pm_cfg__1__modType__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__1__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__1__lf_bw_scale__a 'h0033
`define MA_core__pmc__pm_cfg__1__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__1__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__1__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__1__lf_bw_scale__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__1__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__1__pbtl_half__a 'h0034
`define MA_core__pmc__pm_cfg__1__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__1__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__1__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__1__pbtl_half__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__1__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__1__gd_hvpu_low__a 'h0034
`define MA_core__pmc__pm_cfg__1__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__1__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__1__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__1__gd_hvpu_low__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__1__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__1__dtsteps_nom__a 'h0034
`define MA_core__pmc__pm_cfg__1__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__1__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__1__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__1__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__1__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__1__bal_bw__a 'h0034
`define MA_core__pmc__pm_cfg__1__bal_bw__len 2
`define MA_core__pmc__pm_cfg__1__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__1__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__1__bal_bw__reset 'h02

//------------------------------------------------------------------------------core__pmc__pm_cfg__2__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__2__pwmFreqMode__a 'h0036
`define MA_core__pmc__pm_cfg__2__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__2__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__2__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__2__pwmFreqMode__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__2__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__2__gdsFreqMode__a 'h0036
`define MA_core__pmc__pm_cfg__2__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__2__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__2__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__2__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__2__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__2__modType__a 'h0036
`define MA_core__pmc__pm_cfg__2__modType__len 2
`define MA_core__pmc__pm_cfg__2__modType__mask 'h30
`define MA_core__pmc__pm_cfg__2__modType__shift 4
`define MA_core__pmc__pm_cfg__2__modType__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__2__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__2__lf_bw_scale__a 'h0036
`define MA_core__pmc__pm_cfg__2__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__2__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__2__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__2__lf_bw_scale__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__2__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__2__pbtl_half__a 'h0037
`define MA_core__pmc__pm_cfg__2__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__2__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__2__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__2__pbtl_half__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__2__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__2__gd_hvpu_low__a 'h0037
`define MA_core__pmc__pm_cfg__2__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__2__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__2__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__2__gd_hvpu_low__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__2__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__2__dtsteps_nom__a 'h0037
`define MA_core__pmc__pm_cfg__2__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__2__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__2__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__2__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__2__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__2__bal_bw__a 'h0037
`define MA_core__pmc__pm_cfg__2__bal_bw__len 2
`define MA_core__pmc__pm_cfg__2__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__2__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__2__bal_bw__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__3__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__3__pwmFreqMode__a 'h0039
`define MA_core__pmc__pm_cfg__3__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__3__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__3__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__3__pwmFreqMode__reset 'h02

//------------------------------------------------------------------------------core__pmc__pm_cfg__3__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__3__gdsFreqMode__a 'h0039
`define MA_core__pmc__pm_cfg__3__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__3__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__3__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__3__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__3__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__3__modType__a 'h0039
`define MA_core__pmc__pm_cfg__3__modType__len 2
`define MA_core__pmc__pm_cfg__3__modType__mask 'h30
`define MA_core__pmc__pm_cfg__3__modType__shift 4
`define MA_core__pmc__pm_cfg__3__modType__reset 'h02

//------------------------------------------------------------------------------core__pmc__pm_cfg__3__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__3__lf_bw_scale__a 'h0039
`define MA_core__pmc__pm_cfg__3__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__3__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__3__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__3__lf_bw_scale__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__3__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__3__pbtl_half__a 'h003a
`define MA_core__pmc__pm_cfg__3__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__3__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__3__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__3__pbtl_half__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__3__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__3__gd_hvpu_low__a 'h003a
`define MA_core__pmc__pm_cfg__3__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__3__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__3__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__3__gd_hvpu_low__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__3__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__3__dtsteps_nom__a 'h003a
`define MA_core__pmc__pm_cfg__3__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__3__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__3__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__3__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__3__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__3__bal_bw__a 'h003a
`define MA_core__pmc__pm_cfg__3__bal_bw__len 2
`define MA_core__pmc__pm_cfg__3__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__3__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__3__bal_bw__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__4__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__4__pwmFreqMode__a 'h003c
`define MA_core__pmc__pm_cfg__4__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__4__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__4__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__4__pwmFreqMode__reset 'h02

//------------------------------------------------------------------------------core__pmc__pm_cfg__4__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__4__gdsFreqMode__a 'h003c
`define MA_core__pmc__pm_cfg__4__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__4__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__4__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__4__gdsFreqMode__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__4__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__4__modType__a 'h003c
`define MA_core__pmc__pm_cfg__4__modType__len 2
`define MA_core__pmc__pm_cfg__4__modType__mask 'h30
`define MA_core__pmc__pm_cfg__4__modType__shift 4
`define MA_core__pmc__pm_cfg__4__modType__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__4__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__4__lf_bw_scale__a 'h003c
`define MA_core__pmc__pm_cfg__4__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__4__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__4__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__4__lf_bw_scale__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__4__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__4__pbtl_half__a 'h003d
`define MA_core__pmc__pm_cfg__4__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__4__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__4__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__4__pbtl_half__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__4__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__4__gd_hvpu_low__a 'h003d
`define MA_core__pmc__pm_cfg__4__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__4__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__4__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__4__gd_hvpu_low__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__4__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__4__dtsteps_nom__a 'h003d
`define MA_core__pmc__pm_cfg__4__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__4__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__4__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__4__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__4__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__4__bal_bw__a 'h003d
`define MA_core__pmc__pm_cfg__4__bal_bw__len 2
`define MA_core__pmc__pm_cfg__4__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__4__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__4__bal_bw__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__5__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__5__pwmFreqMode__a 'h003f
`define MA_core__pmc__pm_cfg__5__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__5__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__5__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__5__pwmFreqMode__reset 'h02

//------------------------------------------------------------------------------core__pmc__pm_cfg__5__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__5__gdsFreqMode__a 'h003f
`define MA_core__pmc__pm_cfg__5__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__5__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__5__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__5__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__5__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__5__modType__a 'h003f
`define MA_core__pmc__pm_cfg__5__modType__len 2
`define MA_core__pmc__pm_cfg__5__modType__mask 'h30
`define MA_core__pmc__pm_cfg__5__modType__shift 4
`define MA_core__pmc__pm_cfg__5__modType__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__5__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__5__lf_bw_scale__a 'h003f
`define MA_core__pmc__pm_cfg__5__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__5__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__5__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__5__lf_bw_scale__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__5__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__5__pbtl_half__a 'h0040
`define MA_core__pmc__pm_cfg__5__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__5__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__5__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__5__pbtl_half__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__5__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__5__gd_hvpu_low__a 'h0040
`define MA_core__pmc__pm_cfg__5__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__5__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__5__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__5__gd_hvpu_low__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__5__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__5__dtsteps_nom__a 'h0040
`define MA_core__pmc__pm_cfg__5__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__5__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__5__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__5__dtsteps_nom__reset 'h06

//------------------------------------------------------------------------------core__pmc__pm_cfg__5__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__5__bal_bw__a 'h0040
`define MA_core__pmc__pm_cfg__5__bal_bw__len 2
`define MA_core__pmc__pm_cfg__5__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__5__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__5__bal_bw__reset 'h02

//------------------------------------------------------------------------------core__pmc__pm_cfg__6__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__6__pwmFreqMode__a 'h0042
`define MA_core__pmc__pm_cfg__6__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__6__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__6__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__6__pwmFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__6__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__6__gdsFreqMode__a 'h0042
`define MA_core__pmc__pm_cfg__6__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__6__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__6__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__6__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__6__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__6__modType__a 'h0042
`define MA_core__pmc__pm_cfg__6__modType__len 2
`define MA_core__pmc__pm_cfg__6__modType__mask 'h30
`define MA_core__pmc__pm_cfg__6__modType__shift 4
`define MA_core__pmc__pm_cfg__6__modType__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__6__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__6__lf_bw_scale__a 'h0042
`define MA_core__pmc__pm_cfg__6__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__6__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__6__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__6__lf_bw_scale__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__6__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__6__pbtl_half__a 'h0043
`define MA_core__pmc__pm_cfg__6__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__6__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__6__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__6__pbtl_half__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__6__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__6__gd_hvpu_low__a 'h0043
`define MA_core__pmc__pm_cfg__6__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__6__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__6__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__6__gd_hvpu_low__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__6__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__6__dtsteps_nom__a 'h0043
`define MA_core__pmc__pm_cfg__6__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__6__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__6__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__6__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__6__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__6__bal_bw__a 'h0043
`define MA_core__pmc__pm_cfg__6__bal_bw__len 2
`define MA_core__pmc__pm_cfg__6__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__6__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__6__bal_bw__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__7__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__7__pwmFreqMode__a 'h0045
`define MA_core__pmc__pm_cfg__7__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__7__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__7__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__7__pwmFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__7__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__7__gdsFreqMode__a 'h0045
`define MA_core__pmc__pm_cfg__7__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__7__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__7__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__7__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__7__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__7__modType__a 'h0045
`define MA_core__pmc__pm_cfg__7__modType__len 2
`define MA_core__pmc__pm_cfg__7__modType__mask 'h30
`define MA_core__pmc__pm_cfg__7__modType__shift 4
`define MA_core__pmc__pm_cfg__7__modType__reset 'h02

//------------------------------------------------------------------------------core__pmc__pm_cfg__7__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__7__lf_bw_scale__a 'h0045
`define MA_core__pmc__pm_cfg__7__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__7__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__7__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__7__lf_bw_scale__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__7__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__7__pbtl_half__a 'h0046
`define MA_core__pmc__pm_cfg__7__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__7__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__7__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__7__pbtl_half__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__7__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__7__gd_hvpu_low__a 'h0046
`define MA_core__pmc__pm_cfg__7__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__7__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__7__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__7__gd_hvpu_low__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__7__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__7__dtsteps_nom__a 'h0046
`define MA_core__pmc__pm_cfg__7__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__7__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__7__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__7__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__7__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__7__bal_bw__a 'h0046
`define MA_core__pmc__pm_cfg__7__bal_bw__len 2
`define MA_core__pmc__pm_cfg__7__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__7__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__7__bal_bw__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__8__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__8__pwmFreqMode__a 'h0048
`define MA_core__pmc__pm_cfg__8__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__8__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__8__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__8__pwmFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__8__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__8__gdsFreqMode__a 'h0048
`define MA_core__pmc__pm_cfg__8__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__8__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__8__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__8__gdsFreqMode__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__8__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__8__modType__a 'h0048
`define MA_core__pmc__pm_cfg__8__modType__len 2
`define MA_core__pmc__pm_cfg__8__modType__mask 'h30
`define MA_core__pmc__pm_cfg__8__modType__shift 4
`define MA_core__pmc__pm_cfg__8__modType__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__8__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__8__lf_bw_scale__a 'h0048
`define MA_core__pmc__pm_cfg__8__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__8__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__8__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__8__lf_bw_scale__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__8__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__8__pbtl_half__a 'h0049
`define MA_core__pmc__pm_cfg__8__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__8__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__8__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__8__pbtl_half__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__8__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__8__gd_hvpu_low__a 'h0049
`define MA_core__pmc__pm_cfg__8__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__8__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__8__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__8__gd_hvpu_low__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__8__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__8__dtsteps_nom__a 'h0049
`define MA_core__pmc__pm_cfg__8__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__8__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__8__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__8__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__8__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__8__bal_bw__a 'h0049
`define MA_core__pmc__pm_cfg__8__bal_bw__len 2
`define MA_core__pmc__pm_cfg__8__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__8__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__8__bal_bw__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__9__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__9__pwmFreqMode__a 'h004b
`define MA_core__pmc__pm_cfg__9__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__9__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__9__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__9__pwmFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__9__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__9__gdsFreqMode__a 'h004b
`define MA_core__pmc__pm_cfg__9__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__9__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__9__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__9__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__9__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__9__modType__a 'h004b
`define MA_core__pmc__pm_cfg__9__modType__len 2
`define MA_core__pmc__pm_cfg__9__modType__mask 'h30
`define MA_core__pmc__pm_cfg__9__modType__shift 4
`define MA_core__pmc__pm_cfg__9__modType__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__9__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__9__lf_bw_scale__a 'h004b
`define MA_core__pmc__pm_cfg__9__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__9__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__9__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__9__lf_bw_scale__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__9__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__9__pbtl_half__a 'h004c
`define MA_core__pmc__pm_cfg__9__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__9__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__9__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__9__pbtl_half__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__9__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__9__gd_hvpu_low__a 'h004c
`define MA_core__pmc__pm_cfg__9__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__9__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__9__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__9__gd_hvpu_low__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__9__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__9__dtsteps_nom__a 'h004c
`define MA_core__pmc__pm_cfg__9__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__9__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__9__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__9__dtsteps_nom__reset 'h06

//------------------------------------------------------------------------------core__pmc__pm_cfg__9__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__9__bal_bw__a 'h004c
`define MA_core__pmc__pm_cfg__9__bal_bw__len 2
`define MA_core__pmc__pm_cfg__9__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__9__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__9__bal_bw__reset 'h02

//------------------------------------------------------------------------------core__pmc__pm_cfg__10__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__10__pwmFreqMode__a 'h004e
`define MA_core__pmc__pm_cfg__10__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__10__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__10__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__10__pwmFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__10__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__10__gdsFreqMode__a 'h004e
`define MA_core__pmc__pm_cfg__10__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__10__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__10__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__10__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__10__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__10__modType__a 'h004e
`define MA_core__pmc__pm_cfg__10__modType__len 2
`define MA_core__pmc__pm_cfg__10__modType__mask 'h30
`define MA_core__pmc__pm_cfg__10__modType__shift 4
`define MA_core__pmc__pm_cfg__10__modType__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__10__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__10__lf_bw_scale__a 'h004e
`define MA_core__pmc__pm_cfg__10__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__10__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__10__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__10__lf_bw_scale__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__10__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__10__pbtl_half__a 'h004f
`define MA_core__pmc__pm_cfg__10__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__10__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__10__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__10__pbtl_half__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__10__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__10__gd_hvpu_low__a 'h004f
`define MA_core__pmc__pm_cfg__10__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__10__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__10__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__10__gd_hvpu_low__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__10__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__10__dtsteps_nom__a 'h004f
`define MA_core__pmc__pm_cfg__10__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__10__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__10__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__10__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__10__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__10__bal_bw__a 'h004f
`define MA_core__pmc__pm_cfg__10__bal_bw__len 2
`define MA_core__pmc__pm_cfg__10__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__10__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__10__bal_bw__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__11__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__11__pwmFreqMode__a 'h0051
`define MA_core__pmc__pm_cfg__11__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__11__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__11__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__11__pwmFreqMode__reset 'h02

//------------------------------------------------------------------------------core__pmc__pm_cfg__11__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__11__gdsFreqMode__a 'h0051
`define MA_core__pmc__pm_cfg__11__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__11__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__11__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__11__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__11__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__11__modType__a 'h0051
`define MA_core__pmc__pm_cfg__11__modType__len 2
`define MA_core__pmc__pm_cfg__11__modType__mask 'h30
`define MA_core__pmc__pm_cfg__11__modType__shift 4
`define MA_core__pmc__pm_cfg__11__modType__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__11__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__11__lf_bw_scale__a 'h0051
`define MA_core__pmc__pm_cfg__11__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__11__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__11__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__11__lf_bw_scale__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__11__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__11__pbtl_half__a 'h0052
`define MA_core__pmc__pm_cfg__11__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__11__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__11__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__11__pbtl_half__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__11__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__11__gd_hvpu_low__a 'h0052
`define MA_core__pmc__pm_cfg__11__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__11__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__11__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__11__gd_hvpu_low__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__11__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__11__dtsteps_nom__a 'h0052
`define MA_core__pmc__pm_cfg__11__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__11__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__11__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__11__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__11__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__11__bal_bw__a 'h0052
`define MA_core__pmc__pm_cfg__11__bal_bw__len 2
`define MA_core__pmc__pm_cfg__11__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__11__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__11__bal_bw__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__12__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__12__pwmFreqMode__a 'h0054
`define MA_core__pmc__pm_cfg__12__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__12__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__12__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__12__pwmFreqMode__reset 'h02

//------------------------------------------------------------------------------core__pmc__pm_cfg__12__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__12__gdsFreqMode__a 'h0054
`define MA_core__pmc__pm_cfg__12__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__12__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__12__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__12__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__12__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__12__modType__a 'h0054
`define MA_core__pmc__pm_cfg__12__modType__len 2
`define MA_core__pmc__pm_cfg__12__modType__mask 'h30
`define MA_core__pmc__pm_cfg__12__modType__shift 4
`define MA_core__pmc__pm_cfg__12__modType__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__12__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__12__lf_bw_scale__a 'h0054
`define MA_core__pmc__pm_cfg__12__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__12__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__12__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__12__lf_bw_scale__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__12__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__12__pbtl_half__a 'h0055
`define MA_core__pmc__pm_cfg__12__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__12__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__12__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__12__pbtl_half__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__12__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__12__gd_hvpu_low__a 'h0055
`define MA_core__pmc__pm_cfg__12__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__12__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__12__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__12__gd_hvpu_low__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__12__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__12__dtsteps_nom__a 'h0055
`define MA_core__pmc__pm_cfg__12__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__12__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__12__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__12__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__12__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__12__bal_bw__a 'h0055
`define MA_core__pmc__pm_cfg__12__bal_bw__len 2
`define MA_core__pmc__pm_cfg__12__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__12__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__12__bal_bw__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__13__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__13__pwmFreqMode__a 'h0057
`define MA_core__pmc__pm_cfg__13__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__13__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__13__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__13__pwmFreqMode__reset 'h02

//------------------------------------------------------------------------------core__pmc__pm_cfg__13__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__13__gdsFreqMode__a 'h0057
`define MA_core__pmc__pm_cfg__13__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__13__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__13__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__13__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__13__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__13__modType__a 'h0057
`define MA_core__pmc__pm_cfg__13__modType__len 2
`define MA_core__pmc__pm_cfg__13__modType__mask 'h30
`define MA_core__pmc__pm_cfg__13__modType__shift 4
`define MA_core__pmc__pm_cfg__13__modType__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__13__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__13__lf_bw_scale__a 'h0057
`define MA_core__pmc__pm_cfg__13__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__13__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__13__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__13__lf_bw_scale__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__13__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__13__pbtl_half__a 'h0058
`define MA_core__pmc__pm_cfg__13__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__13__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__13__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__13__pbtl_half__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__13__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__13__gd_hvpu_low__a 'h0058
`define MA_core__pmc__pm_cfg__13__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__13__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__13__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__13__gd_hvpu_low__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__13__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__13__dtsteps_nom__a 'h0058
`define MA_core__pmc__pm_cfg__13__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__13__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__13__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__13__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__13__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__13__bal_bw__a 'h0058
`define MA_core__pmc__pm_cfg__13__bal_bw__len 2
`define MA_core__pmc__pm_cfg__13__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__13__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__13__bal_bw__reset 'h02

//------------------------------------------------------------------------------core__pmc__pm_cfg__14__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__14__pwmFreqMode__a 'h005a
`define MA_core__pmc__pm_cfg__14__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__14__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__14__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__14__pwmFreqMode__reset 'h02

//------------------------------------------------------------------------------core__pmc__pm_cfg__14__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__14__gdsFreqMode__a 'h005a
`define MA_core__pmc__pm_cfg__14__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__14__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__14__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__14__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__14__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__14__modType__a 'h005a
`define MA_core__pmc__pm_cfg__14__modType__len 2
`define MA_core__pmc__pm_cfg__14__modType__mask 'h30
`define MA_core__pmc__pm_cfg__14__modType__shift 4
`define MA_core__pmc__pm_cfg__14__modType__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__14__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__14__lf_bw_scale__a 'h005a
`define MA_core__pmc__pm_cfg__14__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__14__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__14__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__14__lf_bw_scale__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__14__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__14__pbtl_half__a 'h005b
`define MA_core__pmc__pm_cfg__14__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__14__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__14__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__14__pbtl_half__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__14__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__14__gd_hvpu_low__a 'h005b
`define MA_core__pmc__pm_cfg__14__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__14__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__14__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__14__gd_hvpu_low__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__14__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__14__dtsteps_nom__a 'h005b
`define MA_core__pmc__pm_cfg__14__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__14__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__14__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__14__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__14__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__14__bal_bw__a 'h005b
`define MA_core__pmc__pm_cfg__14__bal_bw__len 2
`define MA_core__pmc__pm_cfg__14__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__14__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__14__bal_bw__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__15__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__15__pwmFreqMode__a 'h005d
`define MA_core__pmc__pm_cfg__15__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__15__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__15__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__15__pwmFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__15__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__15__gdsFreqMode__a 'h005d
`define MA_core__pmc__pm_cfg__15__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__15__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__15__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__15__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__15__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__15__modType__a 'h005d
`define MA_core__pmc__pm_cfg__15__modType__len 2
`define MA_core__pmc__pm_cfg__15__modType__mask 'h30
`define MA_core__pmc__pm_cfg__15__modType__shift 4
`define MA_core__pmc__pm_cfg__15__modType__reset 'h02

//------------------------------------------------------------------------------core__pmc__pm_cfg__15__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__15__lf_bw_scale__a 'h005d
`define MA_core__pmc__pm_cfg__15__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__15__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__15__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__15__lf_bw_scale__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__15__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__15__pbtl_half__a 'h005e
`define MA_core__pmc__pm_cfg__15__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__15__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__15__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__15__pbtl_half__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__15__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__15__gd_hvpu_low__a 'h005e
`define MA_core__pmc__pm_cfg__15__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__15__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__15__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__15__gd_hvpu_low__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__15__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__15__dtsteps_nom__a 'h005e
`define MA_core__pmc__pm_cfg__15__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__15__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__15__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__15__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__15__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__15__bal_bw__a 'h005e
`define MA_core__pmc__pm_cfg__15__bal_bw__len 2
`define MA_core__pmc__pm_cfg__15__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__15__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__15__bal_bw__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__16__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__16__pwmFreqMode__a 'h0060
`define MA_core__pmc__pm_cfg__16__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__16__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__16__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__16__pwmFreqMode__reset 'h02

//------------------------------------------------------------------------------core__pmc__pm_cfg__16__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__16__gdsFreqMode__a 'h0060
`define MA_core__pmc__pm_cfg__16__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__16__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__16__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__16__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__16__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__16__modType__a 'h0060
`define MA_core__pmc__pm_cfg__16__modType__len 2
`define MA_core__pmc__pm_cfg__16__modType__mask 'h30
`define MA_core__pmc__pm_cfg__16__modType__shift 4
`define MA_core__pmc__pm_cfg__16__modType__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__16__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__16__lf_bw_scale__a 'h0060
`define MA_core__pmc__pm_cfg__16__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__16__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__16__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__16__lf_bw_scale__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__16__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__16__pbtl_half__a 'h0061
`define MA_core__pmc__pm_cfg__16__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__16__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__16__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__16__pbtl_half__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__16__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__16__gd_hvpu_low__a 'h0061
`define MA_core__pmc__pm_cfg__16__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__16__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__16__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__16__gd_hvpu_low__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__16__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__16__dtsteps_nom__a 'h0061
`define MA_core__pmc__pm_cfg__16__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__16__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__16__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__16__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__16__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__16__bal_bw__a 'h0061
`define MA_core__pmc__pm_cfg__16__bal_bw__len 2
`define MA_core__pmc__pm_cfg__16__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__16__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__16__bal_bw__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__17__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__17__pwmFreqMode__a 'h0063
`define MA_core__pmc__pm_cfg__17__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__17__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__17__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__17__pwmFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__17__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__17__gdsFreqMode__a 'h0063
`define MA_core__pmc__pm_cfg__17__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__17__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__17__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__17__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__17__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__17__modType__a 'h0063
`define MA_core__pmc__pm_cfg__17__modType__len 2
`define MA_core__pmc__pm_cfg__17__modType__mask 'h30
`define MA_core__pmc__pm_cfg__17__modType__shift 4
`define MA_core__pmc__pm_cfg__17__modType__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__17__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__17__lf_bw_scale__a 'h0063
`define MA_core__pmc__pm_cfg__17__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__17__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__17__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__17__lf_bw_scale__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__17__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__17__pbtl_half__a 'h0064
`define MA_core__pmc__pm_cfg__17__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__17__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__17__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__17__pbtl_half__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__17__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__17__gd_hvpu_low__a 'h0064
`define MA_core__pmc__pm_cfg__17__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__17__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__17__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__17__gd_hvpu_low__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__17__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__17__dtsteps_nom__a 'h0064
`define MA_core__pmc__pm_cfg__17__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__17__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__17__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__17__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__17__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__17__bal_bw__a 'h0064
`define MA_core__pmc__pm_cfg__17__bal_bw__len 2
`define MA_core__pmc__pm_cfg__17__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__17__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__17__bal_bw__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__18__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__18__pwmFreqMode__a 'h0066
`define MA_core__pmc__pm_cfg__18__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__18__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__18__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__18__pwmFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__18__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__18__gdsFreqMode__a 'h0066
`define MA_core__pmc__pm_cfg__18__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__18__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__18__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__18__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__18__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__18__modType__a 'h0066
`define MA_core__pmc__pm_cfg__18__modType__len 2
`define MA_core__pmc__pm_cfg__18__modType__mask 'h30
`define MA_core__pmc__pm_cfg__18__modType__shift 4
`define MA_core__pmc__pm_cfg__18__modType__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__18__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__18__lf_bw_scale__a 'h0066
`define MA_core__pmc__pm_cfg__18__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__18__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__18__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__18__lf_bw_scale__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__18__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__18__pbtl_half__a 'h0067
`define MA_core__pmc__pm_cfg__18__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__18__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__18__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__18__pbtl_half__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__18__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__18__gd_hvpu_low__a 'h0067
`define MA_core__pmc__pm_cfg__18__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__18__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__18__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__18__gd_hvpu_low__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__18__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__18__dtsteps_nom__a 'h0067
`define MA_core__pmc__pm_cfg__18__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__18__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__18__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__18__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__18__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__18__bal_bw__a 'h0067
`define MA_core__pmc__pm_cfg__18__bal_bw__len 2
`define MA_core__pmc__pm_cfg__18__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__18__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__18__bal_bw__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__19__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
`define MA_core__pmc__pm_cfg__19__pwmFreqMode__a 'h0069
`define MA_core__pmc__pm_cfg__19__pwmFreqMode__len 2
`define MA_core__pmc__pm_cfg__19__pwmFreqMode__mask 'h03
`define MA_core__pmc__pm_cfg__19__pwmFreqMode__shift 0
`define MA_core__pmc__pm_cfg__19__pwmFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__19__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
`define MA_core__pmc__pm_cfg__19__gdsFreqMode__a 'h0069
`define MA_core__pmc__pm_cfg__19__gdsFreqMode__len 2
`define MA_core__pmc__pm_cfg__19__gdsFreqMode__mask 'h0c
`define MA_core__pmc__pm_cfg__19__gdsFreqMode__shift 2
`define MA_core__pmc__pm_cfg__19__gdsFreqMode__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__19__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
`define MA_core__pmc__pm_cfg__19__modType__a 'h0069
`define MA_core__pmc__pm_cfg__19__modType__len 2
`define MA_core__pmc__pm_cfg__19__modType__mask 'h30
`define MA_core__pmc__pm_cfg__19__modType__shift 4
`define MA_core__pmc__pm_cfg__19__modType__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__19__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
`define MA_core__pmc__pm_cfg__19__lf_bw_scale__a 'h0069
`define MA_core__pmc__pm_cfg__19__lf_bw_scale__len 2
`define MA_core__pmc__pm_cfg__19__lf_bw_scale__mask 'hc0
`define MA_core__pmc__pm_cfg__19__lf_bw_scale__shift 6
`define MA_core__pmc__pm_cfg__19__lf_bw_scale__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__19__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
`define MA_core__pmc__pm_cfg__19__pbtl_half__a 'h006a
`define MA_core__pmc__pm_cfg__19__pbtl_half__len 1
`define MA_core__pmc__pm_cfg__19__pbtl_half__mask 'h01
`define MA_core__pmc__pm_cfg__19__pbtl_half__shift 0
`define MA_core__pmc__pm_cfg__19__pbtl_half__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__19__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
`define MA_core__pmc__pm_cfg__19__gd_hvpu_low__a 'h006a
`define MA_core__pmc__pm_cfg__19__gd_hvpu_low__len 1
`define MA_core__pmc__pm_cfg__19__gd_hvpu_low__mask 'h02
`define MA_core__pmc__pm_cfg__19__gd_hvpu_low__shift 1
`define MA_core__pmc__pm_cfg__19__gd_hvpu_low__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__19__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
`define MA_core__pmc__pm_cfg__19__dtsteps_nom__a 'h006a
`define MA_core__pmc__pm_cfg__19__dtsteps_nom__len 4
`define MA_core__pmc__pm_cfg__19__dtsteps_nom__mask 'h3c
`define MA_core__pmc__pm_cfg__19__dtsteps_nom__shift 2
`define MA_core__pmc__pm_cfg__19__dtsteps_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__pm_cfg__19__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
`define MA_core__pmc__pm_cfg__19__bal_bw__a 'h006a
`define MA_core__pmc__pm_cfg__19__bal_bw__len 2
`define MA_core__pmc__pm_cfg__19__bal_bw__mask 'hc0
`define MA_core__pmc__pm_cfg__19__bal_bw__shift 6
`define MA_core__pmc__pm_cfg__19__bal_bw__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__PMP0__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
`define MA_core__pmc__otp__PMP0__PMcfg0_idx__a 'h006c
`define MA_core__pmc__otp__PMP0__PMcfg0_idx__len 4
`define MA_core__pmc__otp__PMP0__PMcfg0_idx__mask 'h0f
`define MA_core__pmc__otp__PMP0__PMcfg0_idx__shift 0
`define MA_core__pmc__otp__PMP0__PMcfg0_idx__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP0__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
`define MA_core__pmc__otp__PMP0__PMcfg1_idx__a 'h006c
`define MA_core__pmc__otp__PMP0__PMcfg1_idx__len 4
`define MA_core__pmc__otp__PMP0__PMcfg1_idx__mask 'hf0
`define MA_core__pmc__otp__PMP0__PMcfg1_idx__shift 4
`define MA_core__pmc__otp__PMP0__PMcfg1_idx__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP0__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
`define MA_core__pmc__otp__PMP0__PMcfg2_idx__a 'h006d
`define MA_core__pmc__otp__PMP0__PMcfg2_idx__len 4
`define MA_core__pmc__otp__PMP0__PMcfg2_idx__mask 'h0f
`define MA_core__pmc__otp__PMP0__PMcfg2_idx__shift 0
`define MA_core__pmc__otp__PMP0__PMcfg2_idx__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__PMP0__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
`define MA_core__pmc__otp__PMP0__PMcfg3_idx__a 'h006d
`define MA_core__pmc__otp__PMP0__PMcfg3_idx__len 4
`define MA_core__pmc__otp__PMP0__PMcfg3_idx__mask 'hf0
`define MA_core__pmc__otp__PMP0__PMcfg3_idx__shift 4
`define MA_core__pmc__otp__PMP0__PMcfg3_idx__reset 'h02

//------------------------------------------------------------------------------core__pmc__otp__PMP0__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
`define MA_core__pmc__otp__PMP0__PMcfg_lowPvdd_idx__a 'h006e
`define MA_core__pmc__otp__PMP0__PMcfg_lowPvdd_idx__len 2
`define MA_core__pmc__otp__PMP0__PMcfg_lowPvdd_idx__mask 'h03
`define MA_core__pmc__otp__PMP0__PMcfg_lowPvdd_idx__shift 0
`define MA_core__pmc__otp__PMP0__PMcfg_lowPvdd_idx__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP0__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
`define MA_core__pmc__otp__PMP0__PMcfg_lowPvddT_idx__a 'h006e
`define MA_core__pmc__otp__PMP0__PMcfg_lowPvddT_idx__len 2
`define MA_core__pmc__otp__PMP0__PMcfg_lowPvddT_idx__mask 'h0c
`define MA_core__pmc__otp__PMP0__PMcfg_lowPvddT_idx__shift 2
`define MA_core__pmc__otp__PMP0__PMcfg_lowPvddT_idx__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP0__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__otp__PMP0__PM_max__a 'h006e
`define MA_core__pmc__otp__PMP0__PM_max__len 2
`define MA_core__pmc__otp__PMP0__PM_max__mask 'h30
`define MA_core__pmc__otp__PMP0__PM_max__shift 4
`define MA_core__pmc__otp__PMP0__PM_max__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__PMP0__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__otp__PMP0__PM_min__a 'h006e
`define MA_core__pmc__otp__PMP0__PM_min__len 2
`define MA_core__pmc__otp__PMP0__PM_min__mask 'hc0
`define MA_core__pmc__otp__PMP0__PM_min__shift 6
`define MA_core__pmc__otp__PMP0__PM_min__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__PMP0__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
`define MA_core__pmc__otp__PMP0__lf_bias_scale__a 'h006f
`define MA_core__pmc__otp__PMP0__lf_bias_scale__len 2
`define MA_core__pmc__otp__PMP0__lf_bias_scale__mask 'h06
`define MA_core__pmc__otp__PMP0__lf_bias_scale__shift 1
`define MA_core__pmc__otp__PMP0__lf_bias_scale__reset 'h02

//------------------------------------------------------------------------------core__pmc__otp__PMP0__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
`define MA_core__pmc__otp__PMP0__lf_int3_c_scale__a 'h006f
`define MA_core__pmc__otp__PMP0__lf_int3_c_scale__len 2
`define MA_core__pmc__otp__PMP0__lf_int3_c_scale__mask 'h18
`define MA_core__pmc__otp__PMP0__lf_int3_c_scale__shift 3
`define MA_core__pmc__otp__PMP0__lf_int3_c_scale__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__PMP0__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
`define MA_core__pmc__otp__PMP0__lf_gain_fwd__a 'h006f
`define MA_core__pmc__otp__PMP0__lf_gain_fwd__len 3
`define MA_core__pmc__otp__PMP0__lf_gain_fwd__mask 'he0
`define MA_core__pmc__otp__PMP0__lf_gain_fwd__shift 5
`define MA_core__pmc__otp__PMP0__lf_gain_fwd__reset 'h05

//------------------------------------------------------------------------------core__pmc__otp__PMP1__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
`define MA_core__pmc__otp__PMP1__PMcfg0_idx__a 'h0071
`define MA_core__pmc__otp__PMP1__PMcfg0_idx__len 4
`define MA_core__pmc__otp__PMP1__PMcfg0_idx__mask 'h0f
`define MA_core__pmc__otp__PMP1__PMcfg0_idx__shift 0
`define MA_core__pmc__otp__PMP1__PMcfg0_idx__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP1__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
`define MA_core__pmc__otp__PMP1__PMcfg1_idx__a 'h0071
`define MA_core__pmc__otp__PMP1__PMcfg1_idx__len 4
`define MA_core__pmc__otp__PMP1__PMcfg1_idx__mask 'hf0
`define MA_core__pmc__otp__PMP1__PMcfg1_idx__shift 4
`define MA_core__pmc__otp__PMP1__PMcfg1_idx__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP1__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
`define MA_core__pmc__otp__PMP1__PMcfg2_idx__a 'h0072
`define MA_core__pmc__otp__PMP1__PMcfg2_idx__len 4
`define MA_core__pmc__otp__PMP1__PMcfg2_idx__mask 'h0f
`define MA_core__pmc__otp__PMP1__PMcfg2_idx__shift 0
`define MA_core__pmc__otp__PMP1__PMcfg2_idx__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__PMP1__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
`define MA_core__pmc__otp__PMP1__PMcfg3_idx__a 'h0072
`define MA_core__pmc__otp__PMP1__PMcfg3_idx__len 4
`define MA_core__pmc__otp__PMP1__PMcfg3_idx__mask 'hf0
`define MA_core__pmc__otp__PMP1__PMcfg3_idx__shift 4
`define MA_core__pmc__otp__PMP1__PMcfg3_idx__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__PMP1__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
`define MA_core__pmc__otp__PMP1__PMcfg_lowPvdd_idx__a 'h0073
`define MA_core__pmc__otp__PMP1__PMcfg_lowPvdd_idx__len 2
`define MA_core__pmc__otp__PMP1__PMcfg_lowPvdd_idx__mask 'h03
`define MA_core__pmc__otp__PMP1__PMcfg_lowPvdd_idx__shift 0
`define MA_core__pmc__otp__PMP1__PMcfg_lowPvdd_idx__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP1__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
`define MA_core__pmc__otp__PMP1__PMcfg_lowPvddT_idx__a 'h0073
`define MA_core__pmc__otp__PMP1__PMcfg_lowPvddT_idx__len 2
`define MA_core__pmc__otp__PMP1__PMcfg_lowPvddT_idx__mask 'h0c
`define MA_core__pmc__otp__PMP1__PMcfg_lowPvddT_idx__shift 2
`define MA_core__pmc__otp__PMP1__PMcfg_lowPvddT_idx__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP1__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__otp__PMP1__PM_max__a 'h0073
`define MA_core__pmc__otp__PMP1__PM_max__len 2
`define MA_core__pmc__otp__PMP1__PM_max__mask 'h30
`define MA_core__pmc__otp__PMP1__PM_max__shift 4
`define MA_core__pmc__otp__PMP1__PM_max__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__PMP1__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__otp__PMP1__PM_min__a 'h0073
`define MA_core__pmc__otp__PMP1__PM_min__len 2
`define MA_core__pmc__otp__PMP1__PM_min__mask 'hc0
`define MA_core__pmc__otp__PMP1__PM_min__shift 6
`define MA_core__pmc__otp__PMP1__PM_min__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__PMP1__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
`define MA_core__pmc__otp__PMP1__lf_bias_scale__a 'h0074
`define MA_core__pmc__otp__PMP1__lf_bias_scale__len 2
`define MA_core__pmc__otp__PMP1__lf_bias_scale__mask 'h06
`define MA_core__pmc__otp__PMP1__lf_bias_scale__shift 1
`define MA_core__pmc__otp__PMP1__lf_bias_scale__reset 'h02

//------------------------------------------------------------------------------core__pmc__otp__PMP1__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
`define MA_core__pmc__otp__PMP1__lf_int3_c_scale__a 'h0074
`define MA_core__pmc__otp__PMP1__lf_int3_c_scale__len 2
`define MA_core__pmc__otp__PMP1__lf_int3_c_scale__mask 'h18
`define MA_core__pmc__otp__PMP1__lf_int3_c_scale__shift 3
`define MA_core__pmc__otp__PMP1__lf_int3_c_scale__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__PMP1__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
`define MA_core__pmc__otp__PMP1__lf_gain_fwd__a 'h0074
`define MA_core__pmc__otp__PMP1__lf_gain_fwd__len 3
`define MA_core__pmc__otp__PMP1__lf_gain_fwd__mask 'he0
`define MA_core__pmc__otp__PMP1__lf_gain_fwd__shift 5
`define MA_core__pmc__otp__PMP1__lf_gain_fwd__reset 'h05

//------------------------------------------------------------------------------core__pmc__otp__PMP2__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
`define MA_core__pmc__otp__PMP2__PMcfg0_idx__a 'h0076
`define MA_core__pmc__otp__PMP2__PMcfg0_idx__len 4
`define MA_core__pmc__otp__PMP2__PMcfg0_idx__mask 'h0f
`define MA_core__pmc__otp__PMP2__PMcfg0_idx__shift 0
`define MA_core__pmc__otp__PMP2__PMcfg0_idx__reset 'h04

//------------------------------------------------------------------------------core__pmc__otp__PMP2__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
`define MA_core__pmc__otp__PMP2__PMcfg1_idx__a 'h0076
`define MA_core__pmc__otp__PMP2__PMcfg1_idx__len 4
`define MA_core__pmc__otp__PMP2__PMcfg1_idx__mask 'hf0
`define MA_core__pmc__otp__PMP2__PMcfg1_idx__shift 4
`define MA_core__pmc__otp__PMP2__PMcfg1_idx__reset 'h04

//------------------------------------------------------------------------------core__pmc__otp__PMP2__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
`define MA_core__pmc__otp__PMP2__PMcfg2_idx__a 'h0077
`define MA_core__pmc__otp__PMP2__PMcfg2_idx__len 4
`define MA_core__pmc__otp__PMP2__PMcfg2_idx__mask 'h0f
`define MA_core__pmc__otp__PMP2__PMcfg2_idx__shift 0
`define MA_core__pmc__otp__PMP2__PMcfg2_idx__reset 'h05

//------------------------------------------------------------------------------core__pmc__otp__PMP2__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
`define MA_core__pmc__otp__PMP2__PMcfg3_idx__a 'h0077
`define MA_core__pmc__otp__PMP2__PMcfg3_idx__len 4
`define MA_core__pmc__otp__PMP2__PMcfg3_idx__mask 'hf0
`define MA_core__pmc__otp__PMP2__PMcfg3_idx__shift 4
`define MA_core__pmc__otp__PMP2__PMcfg3_idx__reset 'h06

//------------------------------------------------------------------------------core__pmc__otp__PMP2__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
`define MA_core__pmc__otp__PMP2__PMcfg_lowPvdd_idx__a 'h0078
`define MA_core__pmc__otp__PMP2__PMcfg_lowPvdd_idx__len 2
`define MA_core__pmc__otp__PMP2__PMcfg_lowPvdd_idx__mask 'h03
`define MA_core__pmc__otp__PMP2__PMcfg_lowPvdd_idx__shift 0
`define MA_core__pmc__otp__PMP2__PMcfg_lowPvdd_idx__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__PMP2__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
`define MA_core__pmc__otp__PMP2__PMcfg_lowPvddT_idx__a 'h0078
`define MA_core__pmc__otp__PMP2__PMcfg_lowPvddT_idx__len 2
`define MA_core__pmc__otp__PMP2__PMcfg_lowPvddT_idx__mask 'h0c
`define MA_core__pmc__otp__PMP2__PMcfg_lowPvddT_idx__shift 2
`define MA_core__pmc__otp__PMP2__PMcfg_lowPvddT_idx__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__PMP2__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__otp__PMP2__PM_max__a 'h0078
`define MA_core__pmc__otp__PMP2__PM_max__len 2
`define MA_core__pmc__otp__PMP2__PM_max__mask 'h30
`define MA_core__pmc__otp__PMP2__PM_max__shift 4
`define MA_core__pmc__otp__PMP2__PM_max__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__PMP2__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__otp__PMP2__PM_min__a 'h0078
`define MA_core__pmc__otp__PMP2__PM_min__len 2
`define MA_core__pmc__otp__PMP2__PM_min__mask 'hc0
`define MA_core__pmc__otp__PMP2__PM_min__shift 6
`define MA_core__pmc__otp__PMP2__PM_min__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__PMP2__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
`define MA_core__pmc__otp__PMP2__lf_bias_scale__a 'h0079
`define MA_core__pmc__otp__PMP2__lf_bias_scale__len 2
`define MA_core__pmc__otp__PMP2__lf_bias_scale__mask 'h06
`define MA_core__pmc__otp__PMP2__lf_bias_scale__shift 1
`define MA_core__pmc__otp__PMP2__lf_bias_scale__reset 'h02

//------------------------------------------------------------------------------core__pmc__otp__PMP2__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
`define MA_core__pmc__otp__PMP2__lf_int3_c_scale__a 'h0079
`define MA_core__pmc__otp__PMP2__lf_int3_c_scale__len 2
`define MA_core__pmc__otp__PMP2__lf_int3_c_scale__mask 'h18
`define MA_core__pmc__otp__PMP2__lf_int3_c_scale__shift 3
`define MA_core__pmc__otp__PMP2__lf_int3_c_scale__reset 'h02

//------------------------------------------------------------------------------core__pmc__otp__PMP2__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
`define MA_core__pmc__otp__PMP2__lf_gain_fwd__a 'h0079
`define MA_core__pmc__otp__PMP2__lf_gain_fwd__len 3
`define MA_core__pmc__otp__PMP2__lf_gain_fwd__mask 'he0
`define MA_core__pmc__otp__PMP2__lf_gain_fwd__shift 5
`define MA_core__pmc__otp__PMP2__lf_gain_fwd__reset 'h05

//------------------------------------------------------------------------------core__pmc__otp__PMP3__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
`define MA_core__pmc__otp__PMP3__PMcfg0_idx__a 'h007b
`define MA_core__pmc__otp__PMP3__PMcfg0_idx__len 4
`define MA_core__pmc__otp__PMP3__PMcfg0_idx__mask 'h0f
`define MA_core__pmc__otp__PMP3__PMcfg0_idx__shift 0
`define MA_core__pmc__otp__PMP3__PMcfg0_idx__reset 'h04

//------------------------------------------------------------------------------core__pmc__otp__PMP3__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
`define MA_core__pmc__otp__PMP3__PMcfg1_idx__a 'h007b
`define MA_core__pmc__otp__PMP3__PMcfg1_idx__len 4
`define MA_core__pmc__otp__PMP3__PMcfg1_idx__mask 'hf0
`define MA_core__pmc__otp__PMP3__PMcfg1_idx__shift 4
`define MA_core__pmc__otp__PMP3__PMcfg1_idx__reset 'h04

//------------------------------------------------------------------------------core__pmc__otp__PMP3__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
`define MA_core__pmc__otp__PMP3__PMcfg2_idx__a 'h007c
`define MA_core__pmc__otp__PMP3__PMcfg2_idx__len 4
`define MA_core__pmc__otp__PMP3__PMcfg2_idx__mask 'h0f
`define MA_core__pmc__otp__PMP3__PMcfg2_idx__shift 0
`define MA_core__pmc__otp__PMP3__PMcfg2_idx__reset 'h05

//------------------------------------------------------------------------------core__pmc__otp__PMP3__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
`define MA_core__pmc__otp__PMP3__PMcfg3_idx__a 'h007c
`define MA_core__pmc__otp__PMP3__PMcfg3_idx__len 4
`define MA_core__pmc__otp__PMP3__PMcfg3_idx__mask 'hf0
`define MA_core__pmc__otp__PMP3__PMcfg3_idx__shift 4
`define MA_core__pmc__otp__PMP3__PMcfg3_idx__reset 'h07

//------------------------------------------------------------------------------core__pmc__otp__PMP3__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
`define MA_core__pmc__otp__PMP3__PMcfg_lowPvdd_idx__a 'h007d
`define MA_core__pmc__otp__PMP3__PMcfg_lowPvdd_idx__len 2
`define MA_core__pmc__otp__PMP3__PMcfg_lowPvdd_idx__mask 'h03
`define MA_core__pmc__otp__PMP3__PMcfg_lowPvdd_idx__shift 0
`define MA_core__pmc__otp__PMP3__PMcfg_lowPvdd_idx__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__PMP3__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
`define MA_core__pmc__otp__PMP3__PMcfg_lowPvddT_idx__a 'h007d
`define MA_core__pmc__otp__PMP3__PMcfg_lowPvddT_idx__len 2
`define MA_core__pmc__otp__PMP3__PMcfg_lowPvddT_idx__mask 'h0c
`define MA_core__pmc__otp__PMP3__PMcfg_lowPvddT_idx__shift 2
`define MA_core__pmc__otp__PMP3__PMcfg_lowPvddT_idx__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__PMP3__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__otp__PMP3__PM_max__a 'h007d
`define MA_core__pmc__otp__PMP3__PM_max__len 2
`define MA_core__pmc__otp__PMP3__PM_max__mask 'h30
`define MA_core__pmc__otp__PMP3__PM_max__shift 4
`define MA_core__pmc__otp__PMP3__PM_max__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__PMP3__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__otp__PMP3__PM_min__a 'h007d
`define MA_core__pmc__otp__PMP3__PM_min__len 2
`define MA_core__pmc__otp__PMP3__PM_min__mask 'hc0
`define MA_core__pmc__otp__PMP3__PM_min__shift 6
`define MA_core__pmc__otp__PMP3__PM_min__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__PMP3__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
`define MA_core__pmc__otp__PMP3__lf_bias_scale__a 'h007e
`define MA_core__pmc__otp__PMP3__lf_bias_scale__len 2
`define MA_core__pmc__otp__PMP3__lf_bias_scale__mask 'h06
`define MA_core__pmc__otp__PMP3__lf_bias_scale__shift 1
`define MA_core__pmc__otp__PMP3__lf_bias_scale__reset 'h02

//------------------------------------------------------------------------------core__pmc__otp__PMP3__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
`define MA_core__pmc__otp__PMP3__lf_int3_c_scale__a 'h007e
`define MA_core__pmc__otp__PMP3__lf_int3_c_scale__len 2
`define MA_core__pmc__otp__PMP3__lf_int3_c_scale__mask 'h18
`define MA_core__pmc__otp__PMP3__lf_int3_c_scale__shift 3
`define MA_core__pmc__otp__PMP3__lf_int3_c_scale__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__PMP3__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
`define MA_core__pmc__otp__PMP3__lf_gain_fwd__a 'h007e
`define MA_core__pmc__otp__PMP3__lf_gain_fwd__len 3
`define MA_core__pmc__otp__PMP3__lf_gain_fwd__mask 'he0
`define MA_core__pmc__otp__PMP3__lf_gain_fwd__shift 5
`define MA_core__pmc__otp__PMP3__lf_gain_fwd__reset 'h05

//------------------------------------------------------------------------------core__pmc__otp__PMP4__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
`define MA_core__pmc__otp__PMP4__PMcfg0_idx__a 'h0080
`define MA_core__pmc__otp__PMP4__PMcfg0_idx__len 4
`define MA_core__pmc__otp__PMP4__PMcfg0_idx__mask 'h0f
`define MA_core__pmc__otp__PMP4__PMcfg0_idx__shift 0
`define MA_core__pmc__otp__PMP4__PMcfg0_idx__reset 'h08

//------------------------------------------------------------------------------core__pmc__otp__PMP4__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
`define MA_core__pmc__otp__PMP4__PMcfg1_idx__a 'h0080
`define MA_core__pmc__otp__PMP4__PMcfg1_idx__len 4
`define MA_core__pmc__otp__PMP4__PMcfg1_idx__mask 'hf0
`define MA_core__pmc__otp__PMP4__PMcfg1_idx__shift 4
`define MA_core__pmc__otp__PMP4__PMcfg1_idx__reset 'h08

//------------------------------------------------------------------------------core__pmc__otp__PMP4__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
`define MA_core__pmc__otp__PMP4__PMcfg2_idx__a 'h0081
`define MA_core__pmc__otp__PMP4__PMcfg2_idx__len 4
`define MA_core__pmc__otp__PMP4__PMcfg2_idx__mask 'h0f
`define MA_core__pmc__otp__PMP4__PMcfg2_idx__shift 0
`define MA_core__pmc__otp__PMP4__PMcfg2_idx__reset 'h09

//------------------------------------------------------------------------------core__pmc__otp__PMP4__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
`define MA_core__pmc__otp__PMP4__PMcfg3_idx__a 'h0081
`define MA_core__pmc__otp__PMP4__PMcfg3_idx__len 4
`define MA_core__pmc__otp__PMP4__PMcfg3_idx__mask 'hf0
`define MA_core__pmc__otp__PMP4__PMcfg3_idx__shift 4
`define MA_core__pmc__otp__PMP4__PMcfg3_idx__reset 'h0a

//------------------------------------------------------------------------------core__pmc__otp__PMP4__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
`define MA_core__pmc__otp__PMP4__PMcfg_lowPvdd_idx__a 'h0082
`define MA_core__pmc__otp__PMP4__PMcfg_lowPvdd_idx__len 2
`define MA_core__pmc__otp__PMP4__PMcfg_lowPvdd_idx__mask 'h03
`define MA_core__pmc__otp__PMP4__PMcfg_lowPvdd_idx__shift 0
`define MA_core__pmc__otp__PMP4__PMcfg_lowPvdd_idx__reset 'h02

//------------------------------------------------------------------------------core__pmc__otp__PMP4__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
`define MA_core__pmc__otp__PMP4__PMcfg_lowPvddT_idx__a 'h0082
`define MA_core__pmc__otp__PMP4__PMcfg_lowPvddT_idx__len 2
`define MA_core__pmc__otp__PMP4__PMcfg_lowPvddT_idx__mask 'h0c
`define MA_core__pmc__otp__PMP4__PMcfg_lowPvddT_idx__shift 2
`define MA_core__pmc__otp__PMP4__PMcfg_lowPvddT_idx__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__PMP4__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__otp__PMP4__PM_max__a 'h0082
`define MA_core__pmc__otp__PMP4__PM_max__len 2
`define MA_core__pmc__otp__PMP4__PM_max__mask 'h30
`define MA_core__pmc__otp__PMP4__PM_max__shift 4
`define MA_core__pmc__otp__PMP4__PM_max__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__PMP4__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__otp__PMP4__PM_min__a 'h0082
`define MA_core__pmc__otp__PMP4__PM_min__len 2
`define MA_core__pmc__otp__PMP4__PM_min__mask 'hc0
`define MA_core__pmc__otp__PMP4__PM_min__shift 6
`define MA_core__pmc__otp__PMP4__PM_min__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__PMP4__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
`define MA_core__pmc__otp__PMP4__lf_bias_scale__a 'h0083
`define MA_core__pmc__otp__PMP4__lf_bias_scale__len 2
`define MA_core__pmc__otp__PMP4__lf_bias_scale__mask 'h06
`define MA_core__pmc__otp__PMP4__lf_bias_scale__shift 1
`define MA_core__pmc__otp__PMP4__lf_bias_scale__reset 'h02

//------------------------------------------------------------------------------core__pmc__otp__PMP4__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
`define MA_core__pmc__otp__PMP4__lf_int3_c_scale__a 'h0083
`define MA_core__pmc__otp__PMP4__lf_int3_c_scale__len 2
`define MA_core__pmc__otp__PMP4__lf_int3_c_scale__mask 'h18
`define MA_core__pmc__otp__PMP4__lf_int3_c_scale__shift 3
`define MA_core__pmc__otp__PMP4__lf_int3_c_scale__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__PMP4__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
`define MA_core__pmc__otp__PMP4__lf_gain_fwd__a 'h0083
`define MA_core__pmc__otp__PMP4__lf_gain_fwd__len 3
`define MA_core__pmc__otp__PMP4__lf_gain_fwd__mask 'he0
`define MA_core__pmc__otp__PMP4__lf_gain_fwd__shift 5
`define MA_core__pmc__otp__PMP4__lf_gain_fwd__reset 'h05

//------------------------------------------------------------------------------core__pmc__otp__PMP5__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
`define MA_core__pmc__otp__PMP5__PMcfg0_idx__a 'h0085
`define MA_core__pmc__otp__PMP5__PMcfg0_idx__len 4
`define MA_core__pmc__otp__PMP5__PMcfg0_idx__mask 'h0f
`define MA_core__pmc__otp__PMP5__PMcfg0_idx__shift 0
`define MA_core__pmc__otp__PMP5__PMcfg0_idx__reset 'h08

//------------------------------------------------------------------------------core__pmc__otp__PMP5__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
`define MA_core__pmc__otp__PMP5__PMcfg1_idx__a 'h0085
`define MA_core__pmc__otp__PMP5__PMcfg1_idx__len 4
`define MA_core__pmc__otp__PMP5__PMcfg1_idx__mask 'hf0
`define MA_core__pmc__otp__PMP5__PMcfg1_idx__shift 4
`define MA_core__pmc__otp__PMP5__PMcfg1_idx__reset 'h08

//------------------------------------------------------------------------------core__pmc__otp__PMP5__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
`define MA_core__pmc__otp__PMP5__PMcfg2_idx__a 'h0086
`define MA_core__pmc__otp__PMP5__PMcfg2_idx__len 4
`define MA_core__pmc__otp__PMP5__PMcfg2_idx__mask 'h0f
`define MA_core__pmc__otp__PMP5__PMcfg2_idx__shift 0
`define MA_core__pmc__otp__PMP5__PMcfg2_idx__reset 'h09

//------------------------------------------------------------------------------core__pmc__otp__PMP5__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
`define MA_core__pmc__otp__PMP5__PMcfg3_idx__a 'h0086
`define MA_core__pmc__otp__PMP5__PMcfg3_idx__len 4
`define MA_core__pmc__otp__PMP5__PMcfg3_idx__mask 'hf0
`define MA_core__pmc__otp__PMP5__PMcfg3_idx__shift 4
`define MA_core__pmc__otp__PMP5__PMcfg3_idx__reset 'h07

//------------------------------------------------------------------------------core__pmc__otp__PMP5__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
`define MA_core__pmc__otp__PMP5__PMcfg_lowPvdd_idx__a 'h0087
`define MA_core__pmc__otp__PMP5__PMcfg_lowPvdd_idx__len 2
`define MA_core__pmc__otp__PMP5__PMcfg_lowPvdd_idx__mask 'h03
`define MA_core__pmc__otp__PMP5__PMcfg_lowPvdd_idx__shift 0
`define MA_core__pmc__otp__PMP5__PMcfg_lowPvdd_idx__reset 'h02

//------------------------------------------------------------------------------core__pmc__otp__PMP5__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
`define MA_core__pmc__otp__PMP5__PMcfg_lowPvddT_idx__a 'h0087
`define MA_core__pmc__otp__PMP5__PMcfg_lowPvddT_idx__len 2
`define MA_core__pmc__otp__PMP5__PMcfg_lowPvddT_idx__mask 'h0c
`define MA_core__pmc__otp__PMP5__PMcfg_lowPvddT_idx__shift 2
`define MA_core__pmc__otp__PMP5__PMcfg_lowPvddT_idx__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__PMP5__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__otp__PMP5__PM_max__a 'h0087
`define MA_core__pmc__otp__PMP5__PM_max__len 2
`define MA_core__pmc__otp__PMP5__PM_max__mask 'h30
`define MA_core__pmc__otp__PMP5__PM_max__shift 4
`define MA_core__pmc__otp__PMP5__PM_max__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__PMP5__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__otp__PMP5__PM_min__a 'h0087
`define MA_core__pmc__otp__PMP5__PM_min__len 2
`define MA_core__pmc__otp__PMP5__PM_min__mask 'hc0
`define MA_core__pmc__otp__PMP5__PM_min__shift 6
`define MA_core__pmc__otp__PMP5__PM_min__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__PMP5__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
`define MA_core__pmc__otp__PMP5__lf_bias_scale__a 'h0088
`define MA_core__pmc__otp__PMP5__lf_bias_scale__len 2
`define MA_core__pmc__otp__PMP5__lf_bias_scale__mask 'h06
`define MA_core__pmc__otp__PMP5__lf_bias_scale__shift 1
`define MA_core__pmc__otp__PMP5__lf_bias_scale__reset 'h02

//------------------------------------------------------------------------------core__pmc__otp__PMP5__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
`define MA_core__pmc__otp__PMP5__lf_int3_c_scale__a 'h0088
`define MA_core__pmc__otp__PMP5__lf_int3_c_scale__len 2
`define MA_core__pmc__otp__PMP5__lf_int3_c_scale__mask 'h18
`define MA_core__pmc__otp__PMP5__lf_int3_c_scale__shift 3
`define MA_core__pmc__otp__PMP5__lf_int3_c_scale__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__PMP5__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
`define MA_core__pmc__otp__PMP5__lf_gain_fwd__a 'h0088
`define MA_core__pmc__otp__PMP5__lf_gain_fwd__len 3
`define MA_core__pmc__otp__PMP5__lf_gain_fwd__mask 'he0
`define MA_core__pmc__otp__PMP5__lf_gain_fwd__shift 5
`define MA_core__pmc__otp__PMP5__lf_gain_fwd__reset 'h05

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__0---
// PWM iramp setting for each pwmFreqMode.
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__0__a 'h008d
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__0__len 4
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__0__mask 'h0f
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__0__shift 0
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__0__reset 'h07

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__1---
// PWM iramp setting for each pwmFreqMode.
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__1__a 'h008d
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__1__len 4
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__1__mask 'hf0
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__1__shift 4
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__1__reset 'h07

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__2---
// PWM iramp setting for each pwmFreqMode.
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__2__a 'h008e
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__2__len 4
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__2__mask 'h0f
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__2__shift 0
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__2__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__3---
// PWM iramp setting for each pwmFreqMode.
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__3__a 'h008e
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__3__len 4
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__3__mask 'hf0
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__3__shift 4
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__3__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__0---
// dtsteps modification depending on gd_str.
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__0__a 'h008a
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__0__len 4
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__0__mask 'h0f
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__0__shift 0
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__0__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__1---
// dtsteps modification depending on gd_str.
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__1__a 'h008a
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__1__len 4
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__1__mask 'hf0
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__1__shift 4
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__1__reset 'h02

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__2---
// dtsteps modification depending on gd_str.
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__2__a 'h008b
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__2__len 4
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__2__mask 'h0f
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__2__shift 0
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__2__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__3---
// dtsteps modification depending on gd_str.
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__3__a 'h008b
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__3__len 4
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__3__mask 'hf0
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__3__shift 4
`define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__3__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__0---
// ocp_blnk setting for each gd_str.
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__0__a 'h008c
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__0__len 2
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__0__mask 'h03
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__0__shift 0
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__0__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__1---
// ocp_blnk setting for each gd_str.
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__1__a 'h008c
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__1__len 2
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__1__mask 'h0c
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__1__shift 2
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__1__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__2---
// ocp_blnk setting for each gd_str.
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__2__a 'h008c
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__2__len 2
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__2__mask 'h30
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__2__shift 4
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__2__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__3---
// ocp_blnk setting for each gd_str.
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__3__a 'h008c
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__3__len 2
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__3__mask 'hc0
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__3__shift 6
`define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__3__reset 'h03

//------------------------------------------------------------------------------core__pmc__otp__Mthr_0to1---
// PM 0->1 M limit; M=0...255; 0=>0.0, 255=>1.0
`define MA_core__pmc__otp__Mthr_0to1__a 'h0094
`define MA_core__pmc__otp__Mthr_0to1__len 8
`define MA_core__pmc__otp__Mthr_0to1__mask 'hff
`define MA_core__pmc__otp__Mthr_0to1__shift 0
`define MA_core__pmc__otp__Mthr_0to1__reset 'h23

//------------------------------------------------------------------------------core__pmc__otp__Mthr_1to2---
// PM 1->2 M limit
`define MA_core__pmc__otp__Mthr_1to2__a 'h0095
`define MA_core__pmc__otp__Mthr_1to2__len 8
`define MA_core__pmc__otp__Mthr_1to2__mask 'hff
`define MA_core__pmc__otp__Mthr_1to2__shift 0
`define MA_core__pmc__otp__Mthr_1to2__reset 'h2d

//------------------------------------------------------------------------------core__pmc__otp__Mthr_2to3---
// PM 2->3 M limit
`define MA_core__pmc__otp__Mthr_2to3__a 'h0096
`define MA_core__pmc__otp__Mthr_2to3__len 8
`define MA_core__pmc__otp__Mthr_2to3__mask 'hff
`define MA_core__pmc__otp__Mthr_2to3__shift 0
`define MA_core__pmc__otp__Mthr_2to3__reset 'h37

//------------------------------------------------------------------------------core__pmc__otp__Mthr_1to0_hyst---
// PM 1->0 M hysteresis
`define MA_core__pmc__otp__Mthr_1to0_hyst__a 'h0097
`define MA_core__pmc__otp__Mthr_1to0_hyst__len 4
`define MA_core__pmc__otp__Mthr_1to0_hyst__mask 'h0f
`define MA_core__pmc__otp__Mthr_1to0_hyst__shift 0
`define MA_core__pmc__otp__Mthr_1to0_hyst__reset 'h05

//------------------------------------------------------------------------------core__pmc__otp__Mthr_2to1_hyst---
// PM 2->1 M hysteresis
`define MA_core__pmc__otp__Mthr_2to1_hyst__a 'h0097
`define MA_core__pmc__otp__Mthr_2to1_hyst__len 4
`define MA_core__pmc__otp__Mthr_2to1_hyst__mask 'hf0
`define MA_core__pmc__otp__Mthr_2to1_hyst__shift 4
`define MA_core__pmc__otp__Mthr_2to1_hyst__reset 'h04

//------------------------------------------------------------------------------core__pmc__otp__Mthr_3to2_hyst---
// PM 3->2 M hysteresis
`define MA_core__pmc__otp__Mthr_3to2_hyst__a 'h0098
`define MA_core__pmc__otp__Mthr_3to2_hyst__len 4
`define MA_core__pmc__otp__Mthr_3to2_hyst__mask 'h0f
`define MA_core__pmc__otp__Mthr_3to2_hyst__shift 0
`define MA_core__pmc__otp__Mthr_3to2_hyst__reset 'h06

//------------------------------------------------------------------------------core__pmc__otp__Ncycles_avg---
// Number of swithcing cycles averaged per M calc. update
`define MA_core__pmc__otp__Ncycles_avg__a 'h0098
`define MA_core__pmc__otp__Ncycles_avg__len 4
`define MA_core__pmc__otp__Ncycles_avg__mask 'hf0
`define MA_core__pmc__otp__Ncycles_avg__shift 4
`define MA_core__pmc__otp__Ncycles_avg__reset 'h04

//------------------------------------------------------------------------------core__pmc__otp__N_Mupd_PMup---
// Number of M updates to be above threshold for PM increase
`define MA_core__pmc__otp__N_Mupd_PMup__a 'h0099
`define MA_core__pmc__otp__N_Mupd_PMup__len 4
`define MA_core__pmc__otp__N_Mupd_PMup__mask 'h0f
`define MA_core__pmc__otp__N_Mupd_PMup__shift 0
`define MA_core__pmc__otp__N_Mupd_PMup__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__Ncount_mute_off---
// Number of consequtive audio sample above threshold amplitude for wake-up from power-down
`define MA_core__pmc__otp__Ncount_mute_off__a 'h0099
`define MA_core__pmc__otp__Ncount_mute_off__len 4
`define MA_core__pmc__otp__Ncount_mute_off__mask 'hf0
`define MA_core__pmc__otp__Ncount_mute_off__shift 4
`define MA_core__pmc__otp__Ncount_mute_off__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__N_Mupd_PMdn__0---
// Number of M updates to be below threshold for PM decrease
`define MA_core__pmc__otp__N_Mupd_PMdn__0__a 'h009a
`define MA_core__pmc__otp__N_Mupd_PMdn__0__len 8
`define MA_core__pmc__otp__N_Mupd_PMdn__0__mask 'hff
`define MA_core__pmc__otp__N_Mupd_PMdn__0__shift 0
`define MA_core__pmc__otp__N_Mupd_PMdn__0__reset 'h40

//------------------------------------------------------------------------------core__pmc__otp__N_Mupd_PMdn__1---
// Number of M updates to be below threshold for PM decrease
`define MA_core__pmc__otp__N_Mupd_PMdn__1__a 'h009b
`define MA_core__pmc__otp__N_Mupd_PMdn__1__len 8
`define MA_core__pmc__otp__N_Mupd_PMdn__1__mask 'hff
`define MA_core__pmc__otp__N_Mupd_PMdn__1__shift 0
`define MA_core__pmc__otp__N_Mupd_PMdn__1__reset 'h40

//------------------------------------------------------------------------------core__pmc__otp__mute_signal_thr---
// Audio signal activity detector "no activity" threshold
`define MA_core__pmc__otp__mute_signal_thr__a 'h009c
`define MA_core__pmc__otp__mute_signal_thr__len 8
`define MA_core__pmc__otp__mute_signal_thr__mask 'hff
`define MA_core__pmc__otp__mute_signal_thr__shift 0
`define MA_core__pmc__otp__mute_signal_thr__reset 'h20

//------------------------------------------------------------------------------core__pmc__otp__Ncount_mute_on__0---
// Number of consequtive audio samples w/ sub-threshold amplitude for auto-power-down
`define MA_core__pmc__otp__Ncount_mute_on__0__a 'h009d
`define MA_core__pmc__otp__Ncount_mute_on__0__len 8
`define MA_core__pmc__otp__Ncount_mute_on__0__mask 'hff
`define MA_core__pmc__otp__Ncount_mute_on__0__shift 0
`define MA_core__pmc__otp__Ncount_mute_on__0__reset 'h40

//------------------------------------------------------------------------------core__pmc__otp__Ncount_mute_on__1---
// Number of consequtive audio samples w/ sub-threshold amplitude for auto-power-down
`define MA_core__pmc__otp__Ncount_mute_on__1__a 'h009e
`define MA_core__pmc__otp__Ncount_mute_on__1__len 8
`define MA_core__pmc__otp__Ncount_mute_on__1__mask 'hff
`define MA_core__pmc__otp__Ncount_mute_on__1__shift 0
`define MA_core__pmc__otp__Ncount_mute_on__1__reset 'h40

//------------------------------------------------------------------------------core__pmc__otp__PMP_disableMask---
// OTP handle for flagging PMPs that may not be selected; MSB=>MPM7, LSB=>PMP0
`define MA_core__pmc__otp__PMP_disableMask__a 'h009f
`define MA_core__pmc__otp__PMP_disableMask__len 8
`define MA_core__pmc__otp__PMP_disableMask__mask 'hff
`define MA_core__pmc__otp__PMP_disableMask__shift 0
`define MA_core__pmc__otp__PMP_disableMask__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMC_disHighPerfAudio---
// OTP handle for disabling high-performance audio HW settings (int1_rscale_low="1", lf_bias_scale="11") in any PMP
`define MA_core__pmc__otp__PMC_disHighPerfAudio__a 'h00a0
`define MA_core__pmc__otp__PMC_disHighPerfAudio__len 1
`define MA_core__pmc__otp__PMC_disHighPerfAudio__mask 'h01
`define MA_core__pmc__otp__PMC_disHighPerfAudio__shift 0
`define MA_core__pmc__otp__PMC_disHighPerfAudio__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__mute_signal_gate---
// High to let audio signal activity detector power down amplifier if no/low signal
`define MA_core__pmc__otp__mute_signal_gate__a 'h00a0
`define MA_core__pmc__otp__mute_signal_gate__len 1
`define MA_core__pmc__otp__mute_signal_gate__mask 'h02
`define MA_core__pmc__otp__mute_signal_gate__shift 1
`define MA_core__pmc__otp__mute_signal_gate__reset 'h01

//------------------------------------------------------------------------------core__pmc__otp__mute_signal_the_hyst---
// Hysteresis for wake-up from power-down
`define MA_core__pmc__otp__mute_signal_the_hyst__a 'h00a0
`define MA_core__pmc__otp__mute_signal_the_hyst__len 4
`define MA_core__pmc__otp__mute_signal_the_hyst__mask 'h3c
`define MA_core__pmc__otp__mute_signal_the_hyst__shift 2
`define MA_core__pmc__otp__mute_signal_the_hyst__reset 'h04

//------------------------------------------------------------------------------core__pmc__otp__PMC_nDavg_nom---
// Number of duty cycle averages for max. switching frequency (pwmFreqMode = "00")
`define MA_core__pmc__otp__PMC_nDavg_nom__a 'h00a1
`define MA_core__pmc__otp__PMC_nDavg_nom__len 5
`define MA_core__pmc__otp__PMC_nDavg_nom__mask 'h1f
`define MA_core__pmc__otp__PMC_nDavg_nom__shift 0
`define MA_core__pmc__otp__PMC_nDavg_nom__reset 'h04

//------------------------------------------------------------------------------core__pmc__reg__PMP6__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
`define MA_core__pmc__reg__PMP6__PMcfg0_idx__a 'h00a4
`define MA_core__pmc__reg__PMP6__PMcfg0_idx__len 4
`define MA_core__pmc__reg__PMP6__PMcfg0_idx__mask 'h0f
`define MA_core__pmc__reg__PMP6__PMcfg0_idx__shift 0
`define MA_core__pmc__reg__PMP6__PMcfg0_idx__reset 'h04

//------------------------------------------------------------------------------core__pmc__reg__PMP6__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
`define MA_core__pmc__reg__PMP6__PMcfg1_idx__a 'h00a4
`define MA_core__pmc__reg__PMP6__PMcfg1_idx__len 4
`define MA_core__pmc__reg__PMP6__PMcfg1_idx__mask 'hf0
`define MA_core__pmc__reg__PMP6__PMcfg1_idx__shift 4
`define MA_core__pmc__reg__PMP6__PMcfg1_idx__reset 'h04

//------------------------------------------------------------------------------core__pmc__reg__PMP6__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
`define MA_core__pmc__reg__PMP6__PMcfg2_idx__a 'h00a5
`define MA_core__pmc__reg__PMP6__PMcfg2_idx__len 4
`define MA_core__pmc__reg__PMP6__PMcfg2_idx__mask 'h0f
`define MA_core__pmc__reg__PMP6__PMcfg2_idx__shift 0
`define MA_core__pmc__reg__PMP6__PMcfg2_idx__reset 'h05

//------------------------------------------------------------------------------core__pmc__reg__PMP6__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
`define MA_core__pmc__reg__PMP6__PMcfg3_idx__a 'h00a5
`define MA_core__pmc__reg__PMP6__PMcfg3_idx__len 4
`define MA_core__pmc__reg__PMP6__PMcfg3_idx__mask 'hf0
`define MA_core__pmc__reg__PMP6__PMcfg3_idx__shift 4
`define MA_core__pmc__reg__PMP6__PMcfg3_idx__reset 'h06

//------------------------------------------------------------------------------core__pmc__reg__PMP6__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
`define MA_core__pmc__reg__PMP6__PMcfg_lowPvdd_idx__a 'h00a6
`define MA_core__pmc__reg__PMP6__PMcfg_lowPvdd_idx__len 2
`define MA_core__pmc__reg__PMP6__PMcfg_lowPvdd_idx__mask 'h03
`define MA_core__pmc__reg__PMP6__PMcfg_lowPvdd_idx__shift 0
`define MA_core__pmc__reg__PMP6__PMcfg_lowPvdd_idx__reset 'h01

//------------------------------------------------------------------------------core__pmc__reg__PMP6__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
`define MA_core__pmc__reg__PMP6__PMcfg_lowPvddT_idx__a 'h00a6
`define MA_core__pmc__reg__PMP6__PMcfg_lowPvddT_idx__len 2
`define MA_core__pmc__reg__PMP6__PMcfg_lowPvddT_idx__mask 'h0c
`define MA_core__pmc__reg__PMP6__PMcfg_lowPvddT_idx__shift 2
`define MA_core__pmc__reg__PMP6__PMcfg_lowPvddT_idx__reset 'h01

//------------------------------------------------------------------------------core__pmc__reg__PMP6__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__reg__PMP6__PM_max__a 'h00a6
`define MA_core__pmc__reg__PMP6__PM_max__len 2
`define MA_core__pmc__reg__PMP6__PM_max__mask 'h30
`define MA_core__pmc__reg__PMP6__PM_max__shift 4
`define MA_core__pmc__reg__PMP6__PM_max__reset 'h03

//------------------------------------------------------------------------------core__pmc__reg__PMP6__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__reg__PMP6__PM_min__a 'h00a6
`define MA_core__pmc__reg__PMP6__PM_min__len 2
`define MA_core__pmc__reg__PMP6__PM_min__mask 'hc0
`define MA_core__pmc__reg__PMP6__PM_min__shift 6
`define MA_core__pmc__reg__PMP6__PM_min__reset 'h01

//------------------------------------------------------------------------------core__pmc__reg__PMP6__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
`define MA_core__pmc__reg__PMP6__lf_bias_scale__a 'h00a7
`define MA_core__pmc__reg__PMP6__lf_bias_scale__len 2
`define MA_core__pmc__reg__PMP6__lf_bias_scale__mask 'h06
`define MA_core__pmc__reg__PMP6__lf_bias_scale__shift 1
`define MA_core__pmc__reg__PMP6__lf_bias_scale__reset 'h01

//------------------------------------------------------------------------------core__pmc__reg__PMP6__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
`define MA_core__pmc__reg__PMP6__lf_int3_c_scale__a 'h00a7
`define MA_core__pmc__reg__PMP6__lf_int3_c_scale__len 2
`define MA_core__pmc__reg__PMP6__lf_int3_c_scale__mask 'h18
`define MA_core__pmc__reg__PMP6__lf_int3_c_scale__shift 3
`define MA_core__pmc__reg__PMP6__lf_int3_c_scale__reset 'h03

//------------------------------------------------------------------------------core__pmc__reg__PMP6__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
`define MA_core__pmc__reg__PMP6__lf_gain_fwd__a 'h00a7
`define MA_core__pmc__reg__PMP6__lf_gain_fwd__len 3
`define MA_core__pmc__reg__PMP6__lf_gain_fwd__mask 'he0
`define MA_core__pmc__reg__PMP6__lf_gain_fwd__shift 5
`define MA_core__pmc__reg__PMP6__lf_gain_fwd__reset 'h04

//------------------------------------------------------------------------------core__pmc__reg__PMP7__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
`define MA_core__pmc__reg__PMP7__PMcfg0_idx__a 'h00a9
`define MA_core__pmc__reg__PMP7__PMcfg0_idx__len 4
`define MA_core__pmc__reg__PMP7__PMcfg0_idx__mask 'h0f
`define MA_core__pmc__reg__PMP7__PMcfg0_idx__shift 0
`define MA_core__pmc__reg__PMP7__PMcfg0_idx__reset 'h04

//------------------------------------------------------------------------------core__pmc__reg__PMP7__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
`define MA_core__pmc__reg__PMP7__PMcfg1_idx__a 'h00a9
`define MA_core__pmc__reg__PMP7__PMcfg1_idx__len 4
`define MA_core__pmc__reg__PMP7__PMcfg1_idx__mask 'hf0
`define MA_core__pmc__reg__PMP7__PMcfg1_idx__shift 4
`define MA_core__pmc__reg__PMP7__PMcfg1_idx__reset 'h04

//------------------------------------------------------------------------------core__pmc__reg__PMP7__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
`define MA_core__pmc__reg__PMP7__PMcfg2_idx__a 'h00aa
`define MA_core__pmc__reg__PMP7__PMcfg2_idx__len 4
`define MA_core__pmc__reg__PMP7__PMcfg2_idx__mask 'h0f
`define MA_core__pmc__reg__PMP7__PMcfg2_idx__shift 0
`define MA_core__pmc__reg__PMP7__PMcfg2_idx__reset 'h05

//------------------------------------------------------------------------------core__pmc__reg__PMP7__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
`define MA_core__pmc__reg__PMP7__PMcfg3_idx__a 'h00aa
`define MA_core__pmc__reg__PMP7__PMcfg3_idx__len 4
`define MA_core__pmc__reg__PMP7__PMcfg3_idx__mask 'hf0
`define MA_core__pmc__reg__PMP7__PMcfg3_idx__shift 4
`define MA_core__pmc__reg__PMP7__PMcfg3_idx__reset 'h06

//------------------------------------------------------------------------------core__pmc__reg__PMP7__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
`define MA_core__pmc__reg__PMP7__PMcfg_lowPvdd_idx__a 'h00ab
`define MA_core__pmc__reg__PMP7__PMcfg_lowPvdd_idx__len 2
`define MA_core__pmc__reg__PMP7__PMcfg_lowPvdd_idx__mask 'h03
`define MA_core__pmc__reg__PMP7__PMcfg_lowPvdd_idx__shift 0
`define MA_core__pmc__reg__PMP7__PMcfg_lowPvdd_idx__reset 'h01

//------------------------------------------------------------------------------core__pmc__reg__PMP7__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
`define MA_core__pmc__reg__PMP7__PMcfg_lowPvddT_idx__a 'h00ab
`define MA_core__pmc__reg__PMP7__PMcfg_lowPvddT_idx__len 2
`define MA_core__pmc__reg__PMP7__PMcfg_lowPvddT_idx__mask 'h0c
`define MA_core__pmc__reg__PMP7__PMcfg_lowPvddT_idx__shift 2
`define MA_core__pmc__reg__PMP7__PMcfg_lowPvddT_idx__reset 'h01

//------------------------------------------------------------------------------core__pmc__reg__PMP7__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__reg__PMP7__PM_max__a 'h00ab
`define MA_core__pmc__reg__PMP7__PM_max__len 2
`define MA_core__pmc__reg__PMP7__PM_max__mask 'h30
`define MA_core__pmc__reg__PMP7__PM_max__shift 4
`define MA_core__pmc__reg__PMP7__PM_max__reset 'h03

//------------------------------------------------------------------------------core__pmc__reg__PMP7__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
`define MA_core__pmc__reg__PMP7__PM_min__a 'h00ab
`define MA_core__pmc__reg__PMP7__PM_min__len 2
`define MA_core__pmc__reg__PMP7__PM_min__mask 'hc0
`define MA_core__pmc__reg__PMP7__PM_min__shift 6
`define MA_core__pmc__reg__PMP7__PM_min__reset 'h01

//------------------------------------------------------------------------------core__pmc__reg__PMP7__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
`define MA_core__pmc__reg__PMP7__lf_bias_scale__a 'h00ac
`define MA_core__pmc__reg__PMP7__lf_bias_scale__len 2
`define MA_core__pmc__reg__PMP7__lf_bias_scale__mask 'h06
`define MA_core__pmc__reg__PMP7__lf_bias_scale__shift 1
`define MA_core__pmc__reg__PMP7__lf_bias_scale__reset 'h01

//------------------------------------------------------------------------------core__pmc__reg__PMP7__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
`define MA_core__pmc__reg__PMP7__lf_int3_c_scale__a 'h00ac
`define MA_core__pmc__reg__PMP7__lf_int3_c_scale__len 2
`define MA_core__pmc__reg__PMP7__lf_int3_c_scale__mask 'h18
`define MA_core__pmc__reg__PMP7__lf_int3_c_scale__shift 3
`define MA_core__pmc__reg__PMP7__lf_int3_c_scale__reset 'h03

//------------------------------------------------------------------------------core__pmc__reg__PMP7__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
`define MA_core__pmc__reg__PMP7__lf_gain_fwd__a 'h00ac
`define MA_core__pmc__reg__PMP7__lf_gain_fwd__len 3
`define MA_core__pmc__reg__PMP7__lf_gain_fwd__mask 'he0
`define MA_core__pmc__reg__PMP7__lf_gain_fwd__shift 5
`define MA_core__pmc__reg__PMP7__lf_gain_fwd__reset 'h04

//------------------------------------------------------------------------------core__pmc__reg__PM_man_force0---
// 1b. High to force manually selected PM on channel 0
`define MA_core__pmc__reg__PM_man_force0__a 'h00ae
`define MA_core__pmc__reg__PM_man_force0__len 1
`define MA_core__pmc__reg__PM_man_force0__mask 'h01
`define MA_core__pmc__reg__PM_man_force0__shift 0
`define MA_core__pmc__reg__PM_man_force0__reset 'h00

//------------------------------------------------------------------------------core__pmc__reg__PM_man_force1---
// 1b. High to force manually selected PM on channel 1
`define MA_core__pmc__reg__PM_man_force1__a 'h00ae
`define MA_core__pmc__reg__PM_man_force1__len 1
`define MA_core__pmc__reg__PM_man_force1__mask 'h02
`define MA_core__pmc__reg__PM_man_force1__shift 1
`define MA_core__pmc__reg__PM_man_force1__reset 'h00

//------------------------------------------------------------------------------core__pmc__reg__PM_sel_man0---
// 2b. Channel 0 manually selected PM, used if PM_man_force0 is high.
`define MA_core__pmc__reg__PM_sel_man0__a 'h00ae
`define MA_core__pmc__reg__PM_sel_man0__len 3
`define MA_core__pmc__reg__PM_sel_man0__mask 'h1c
`define MA_core__pmc__reg__PM_sel_man0__shift 2
`define MA_core__pmc__reg__PM_sel_man0__reset 'h00

//------------------------------------------------------------------------------core__pmc__reg__PM_sel_man1---
// 2b. Channel 1 manually selected PM, used if PM_man_force1 is high.
`define MA_core__pmc__reg__PM_sel_man1__a 'h00ae
`define MA_core__pmc__reg__PM_sel_man1__len 3
`define MA_core__pmc__reg__PM_sel_man1__mask 'he0
`define MA_core__pmc__reg__PM_sel_man1__shift 5
`define MA_core__pmc__reg__PM_sel_man1__reset 'h00

//------------------------------------------------------------------------------core__pmc__PMP_selected---
// Currently selected Power Mode Profile (PMP)
`define MA_core__pmc__PMP_selected__a 'h00bc
`define MA_core__pmc__PMP_selected__len 3
`define MA_core__pmc__PMP_selected__mask 'h07
`define MA_core__pmc__PMP_selected__shift 0
`define MA_core__pmc__PMP_selected__reset 'h00

//------------------------------------------------------------------------------core__pmc__PM_ch0---
// Current selected Power Mode for channel 0
`define MA_core__pmc__PM_ch0__a 'h00bd
`define MA_core__pmc__PM_ch0__len 3
`define MA_core__pmc__PM_ch0__mask 'h07
`define MA_core__pmc__PM_ch0__shift 0
`define MA_core__pmc__PM_ch0__reset 'h00

//------------------------------------------------------------------------------core__pmc__PM_ch1---
// Current selected Power Mode for channel 1
`define MA_core__pmc__PM_ch1__a 'h00bd
`define MA_core__pmc__PM_ch1__len 3
`define MA_core__pmc__PM_ch1__mask 'h38
`define MA_core__pmc__PM_ch1__shift 3
`define MA_core__pmc__PM_ch1__reset 'h00

//------------------------------------------------------------------------------core__pmc__Mdetector_ch0---
// Channel 0 modulation index detector output; M=0...255; 0=>0.0, 255=>1.0
`define MA_core__pmc__Mdetector_ch0__a 'h00be
`define MA_core__pmc__Mdetector_ch0__len 8
`define MA_core__pmc__Mdetector_ch0__mask 'hff
`define MA_core__pmc__Mdetector_ch0__shift 0
`define MA_core__pmc__Mdetector_ch0__reset 'h00

//------------------------------------------------------------------------------core__pmc__Mdetector_ch1---
// Channel 1 modulation index detector output; M=0...255; 0=>0.0, 255=>1.0
`define MA_core__pmc__Mdetector_ch1__a 'h00bf
`define MA_core__pmc__Mdetector_ch1__len 8
`define MA_core__pmc__Mdetector_ch1__mask 'hff
`define MA_core__pmc__Mdetector_ch1__shift 0
`define MA_core__pmc__Mdetector_ch1__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP0__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
`define MA_core__pmc__otp__PMP0__audio_dither_lvl__a 'h0070
`define MA_core__pmc__otp__PMP0__audio_dither_lvl__len 4
`define MA_core__pmc__otp__PMP0__audio_dither_lvl__mask 'h0f
`define MA_core__pmc__otp__PMP0__audio_dither_lvl__shift 0
`define MA_core__pmc__otp__PMP0__audio_dither_lvl__reset 'h0d

//------------------------------------------------------------------------------core__pmc__otp__PMP1__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
`define MA_core__pmc__otp__PMP1__audio_dither_lvl__a 'h0075
`define MA_core__pmc__otp__PMP1__audio_dither_lvl__len 4
`define MA_core__pmc__otp__PMP1__audio_dither_lvl__mask 'h0f
`define MA_core__pmc__otp__PMP1__audio_dither_lvl__shift 0
`define MA_core__pmc__otp__PMP1__audio_dither_lvl__reset 'h0d

//------------------------------------------------------------------------------core__pmc__otp__PMP2__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
`define MA_core__pmc__otp__PMP2__audio_dither_lvl__a 'h007a
`define MA_core__pmc__otp__PMP2__audio_dither_lvl__len 4
`define MA_core__pmc__otp__PMP2__audio_dither_lvl__mask 'h0f
`define MA_core__pmc__otp__PMP2__audio_dither_lvl__shift 0
`define MA_core__pmc__otp__PMP2__audio_dither_lvl__reset 'h08

//------------------------------------------------------------------------------core__pmc__otp__PMP3__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
`define MA_core__pmc__otp__PMP3__audio_dither_lvl__a 'h007f
`define MA_core__pmc__otp__PMP3__audio_dither_lvl__len 4
`define MA_core__pmc__otp__PMP3__audio_dither_lvl__mask 'h0f
`define MA_core__pmc__otp__PMP3__audio_dither_lvl__shift 0
`define MA_core__pmc__otp__PMP3__audio_dither_lvl__reset 'h08

//------------------------------------------------------------------------------core__pmc__otp__PMP4__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
`define MA_core__pmc__otp__PMP4__audio_dither_lvl__a 'h0084
`define MA_core__pmc__otp__PMP4__audio_dither_lvl__len 4
`define MA_core__pmc__otp__PMP4__audio_dither_lvl__mask 'h0f
`define MA_core__pmc__otp__PMP4__audio_dither_lvl__shift 0
`define MA_core__pmc__otp__PMP4__audio_dither_lvl__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP5__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
`define MA_core__pmc__otp__PMP5__audio_dither_lvl__a 'h0089
`define MA_core__pmc__otp__PMP5__audio_dither_lvl__len 4
`define MA_core__pmc__otp__PMP5__audio_dither_lvl__mask 'h0f
`define MA_core__pmc__otp__PMP5__audio_dither_lvl__shift 0
`define MA_core__pmc__otp__PMP5__audio_dither_lvl__reset 'h00

//------------------------------------------------------------------------------core__pmc__reg__PMP6__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
`define MA_core__pmc__reg__PMP6__audio_dither_lvl__a 'h00a8
`define MA_core__pmc__reg__PMP6__audio_dither_lvl__len 4
`define MA_core__pmc__reg__PMP6__audio_dither_lvl__mask 'h0f
`define MA_core__pmc__reg__PMP6__audio_dither_lvl__shift 0
`define MA_core__pmc__reg__PMP6__audio_dither_lvl__reset 'h00

//------------------------------------------------------------------------------core__pmc__reg__PMP7__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
`define MA_core__pmc__reg__PMP7__audio_dither_lvl__a 'h00ad
`define MA_core__pmc__reg__PMP7__audio_dither_lvl__len 4
`define MA_core__pmc__reg__PMP7__audio_dither_lvl__mask 'h0f
`define MA_core__pmc__reg__PMP7__audio_dither_lvl__shift 0
`define MA_core__pmc__reg__PMP7__audio_dither_lvl__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__0__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__0__bal_rate__a 'h0032
`define MA_core__pmc__pm_cfg__0__bal_rate__len 2
`define MA_core__pmc__pm_cfg__0__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__0__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__0__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__0__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__0__pm_spare_bit__a 'h0032
`define MA_core__pmc__pm_cfg__0__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__0__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__0__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__0__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__1__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__1__bal_rate__a 'h0035
`define MA_core__pmc__pm_cfg__1__bal_rate__len 2
`define MA_core__pmc__pm_cfg__1__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__1__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__1__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__1__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__1__pm_spare_bit__a 'h0035
`define MA_core__pmc__pm_cfg__1__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__1__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__1__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__1__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__2__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__2__bal_rate__a 'h0038
`define MA_core__pmc__pm_cfg__2__bal_rate__len 2
`define MA_core__pmc__pm_cfg__2__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__2__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__2__bal_rate__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__2__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__2__pm_spare_bit__a 'h0038
`define MA_core__pmc__pm_cfg__2__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__2__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__2__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__2__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__3__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__3__bal_rate__a 'h003b
`define MA_core__pmc__pm_cfg__3__bal_rate__len 2
`define MA_core__pmc__pm_cfg__3__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__3__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__3__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__3__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__3__pm_spare_bit__a 'h003b
`define MA_core__pmc__pm_cfg__3__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__3__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__3__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__3__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__4__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__4__bal_rate__a 'h003e
`define MA_core__pmc__pm_cfg__4__bal_rate__len 2
`define MA_core__pmc__pm_cfg__4__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__4__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__4__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__4__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__4__pm_spare_bit__a 'h003e
`define MA_core__pmc__pm_cfg__4__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__4__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__4__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__4__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__5__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__5__bal_rate__a 'h0041
`define MA_core__pmc__pm_cfg__5__bal_rate__len 2
`define MA_core__pmc__pm_cfg__5__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__5__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__5__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__5__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__5__pm_spare_bit__a 'h0041
`define MA_core__pmc__pm_cfg__5__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__5__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__5__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__5__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__6__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__6__bal_rate__a 'h0044
`define MA_core__pmc__pm_cfg__6__bal_rate__len 2
`define MA_core__pmc__pm_cfg__6__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__6__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__6__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__6__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__6__pm_spare_bit__a 'h0044
`define MA_core__pmc__pm_cfg__6__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__6__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__6__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__6__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__7__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__7__bal_rate__a 'h0047
`define MA_core__pmc__pm_cfg__7__bal_rate__len 2
`define MA_core__pmc__pm_cfg__7__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__7__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__7__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__7__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__7__pm_spare_bit__a 'h0047
`define MA_core__pmc__pm_cfg__7__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__7__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__7__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__7__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__8__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__8__bal_rate__a 'h004a
`define MA_core__pmc__pm_cfg__8__bal_rate__len 2
`define MA_core__pmc__pm_cfg__8__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__8__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__8__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__8__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__8__pm_spare_bit__a 'h004a
`define MA_core__pmc__pm_cfg__8__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__8__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__8__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__8__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__9__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__9__bal_rate__a 'h004d
`define MA_core__pmc__pm_cfg__9__bal_rate__len 2
`define MA_core__pmc__pm_cfg__9__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__9__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__9__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__9__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__9__pm_spare_bit__a 'h004d
`define MA_core__pmc__pm_cfg__9__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__9__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__9__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__9__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__10__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__10__bal_rate__a 'h0050
`define MA_core__pmc__pm_cfg__10__bal_rate__len 2
`define MA_core__pmc__pm_cfg__10__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__10__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__10__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__10__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__10__pm_spare_bit__a 'h0050
`define MA_core__pmc__pm_cfg__10__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__10__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__10__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__10__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__11__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__11__bal_rate__a 'h0053
`define MA_core__pmc__pm_cfg__11__bal_rate__len 2
`define MA_core__pmc__pm_cfg__11__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__11__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__11__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__11__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__11__pm_spare_bit__a 'h0053
`define MA_core__pmc__pm_cfg__11__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__11__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__11__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__11__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__12__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__12__bal_rate__a 'h0056
`define MA_core__pmc__pm_cfg__12__bal_rate__len 2
`define MA_core__pmc__pm_cfg__12__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__12__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__12__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__12__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__12__pm_spare_bit__a 'h0056
`define MA_core__pmc__pm_cfg__12__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__12__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__12__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__12__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__13__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__13__bal_rate__a 'h0059
`define MA_core__pmc__pm_cfg__13__bal_rate__len 2
`define MA_core__pmc__pm_cfg__13__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__13__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__13__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__13__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__13__pm_spare_bit__a 'h0059
`define MA_core__pmc__pm_cfg__13__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__13__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__13__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__13__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__14__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__14__bal_rate__a 'h005c
`define MA_core__pmc__pm_cfg__14__bal_rate__len 2
`define MA_core__pmc__pm_cfg__14__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__14__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__14__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__14__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__14__pm_spare_bit__a 'h005c
`define MA_core__pmc__pm_cfg__14__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__14__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__14__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__14__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__15__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__15__bal_rate__a 'h005f
`define MA_core__pmc__pm_cfg__15__bal_rate__len 2
`define MA_core__pmc__pm_cfg__15__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__15__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__15__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__15__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__15__pm_spare_bit__a 'h005f
`define MA_core__pmc__pm_cfg__15__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__15__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__15__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__15__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__16__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__16__bal_rate__a 'h0062
`define MA_core__pmc__pm_cfg__16__bal_rate__len 2
`define MA_core__pmc__pm_cfg__16__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__16__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__16__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__16__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__16__pm_spare_bit__a 'h0062
`define MA_core__pmc__pm_cfg__16__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__16__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__16__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__16__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__17__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__17__bal_rate__a 'h0065
`define MA_core__pmc__pm_cfg__17__bal_rate__len 2
`define MA_core__pmc__pm_cfg__17__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__17__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__17__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__17__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__17__pm_spare_bit__a 'h0065
`define MA_core__pmc__pm_cfg__17__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__17__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__17__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__17__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__18__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__18__bal_rate__a 'h0068
`define MA_core__pmc__pm_cfg__18__bal_rate__len 2
`define MA_core__pmc__pm_cfg__18__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__18__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__18__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__18__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__18__pm_spare_bit__a 'h0068
`define MA_core__pmc__pm_cfg__18__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__18__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__18__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__18__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__19__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
`define MA_core__pmc__pm_cfg__19__bal_rate__a 'h006b
`define MA_core__pmc__pm_cfg__19__bal_rate__len 2
`define MA_core__pmc__pm_cfg__19__bal_rate__mask 'h03
`define MA_core__pmc__pm_cfg__19__bal_rate__shift 0
`define MA_core__pmc__pm_cfg__19__bal_rate__reset 'h03

//------------------------------------------------------------------------------core__pmc__pm_cfg__19__pm_spare_bit---
// Single bit for experiemental setting
`define MA_core__pmc__pm_cfg__19__pm_spare_bit__a 'h006b
`define MA_core__pmc__pm_cfg__19__pm_spare_bit__len 1
`define MA_core__pmc__pm_cfg__19__pm_spare_bit__mask 'h40
`define MA_core__pmc__pm_cfg__19__pm_spare_bit__shift 6
`define MA_core__pmc__pm_cfg__19__pm_spare_bit__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__0__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__0__bal_ipol_nok__a 'h0032
`define MA_core__pmc__pm_cfg__0__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__0__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__0__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__0__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__0__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__0__bal_ipol_mode__a 'h0032
`define MA_core__pmc__pm_cfg__0__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__0__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__0__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__0__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__1__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__1__bal_ipol_nok__a 'h0035
`define MA_core__pmc__pm_cfg__1__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__1__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__1__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__1__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__1__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__1__bal_ipol_mode__a 'h0035
`define MA_core__pmc__pm_cfg__1__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__1__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__1__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__1__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__2__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__2__bal_ipol_nok__a 'h0038
`define MA_core__pmc__pm_cfg__2__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__2__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__2__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__2__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__2__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__2__bal_ipol_mode__a 'h0038
`define MA_core__pmc__pm_cfg__2__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__2__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__2__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__2__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__3__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__3__bal_ipol_nok__a 'h003b
`define MA_core__pmc__pm_cfg__3__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__3__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__3__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__3__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__3__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__3__bal_ipol_mode__a 'h003b
`define MA_core__pmc__pm_cfg__3__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__3__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__3__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__3__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__4__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__4__bal_ipol_nok__a 'h003e
`define MA_core__pmc__pm_cfg__4__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__4__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__4__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__4__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__4__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__4__bal_ipol_mode__a 'h003e
`define MA_core__pmc__pm_cfg__4__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__4__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__4__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__4__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__5__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__5__bal_ipol_nok__a 'h0041
`define MA_core__pmc__pm_cfg__5__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__5__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__5__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__5__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__5__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__5__bal_ipol_mode__a 'h0041
`define MA_core__pmc__pm_cfg__5__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__5__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__5__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__5__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__6__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__6__bal_ipol_nok__a 'h0044
`define MA_core__pmc__pm_cfg__6__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__6__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__6__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__6__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__6__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__6__bal_ipol_mode__a 'h0044
`define MA_core__pmc__pm_cfg__6__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__6__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__6__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__6__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__7__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__7__bal_ipol_nok__a 'h0047
`define MA_core__pmc__pm_cfg__7__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__7__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__7__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__7__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__7__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__7__bal_ipol_mode__a 'h0047
`define MA_core__pmc__pm_cfg__7__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__7__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__7__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__7__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__8__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__8__bal_ipol_nok__a 'h004a
`define MA_core__pmc__pm_cfg__8__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__8__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__8__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__8__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__8__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__8__bal_ipol_mode__a 'h004a
`define MA_core__pmc__pm_cfg__8__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__8__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__8__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__8__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__9__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__9__bal_ipol_nok__a 'h004d
`define MA_core__pmc__pm_cfg__9__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__9__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__9__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__9__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__9__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__9__bal_ipol_mode__a 'h004d
`define MA_core__pmc__pm_cfg__9__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__9__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__9__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__9__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__10__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__10__bal_ipol_nok__a 'h0050
`define MA_core__pmc__pm_cfg__10__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__10__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__10__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__10__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__10__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__10__bal_ipol_mode__a 'h0050
`define MA_core__pmc__pm_cfg__10__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__10__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__10__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__10__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__11__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__11__bal_ipol_nok__a 'h0053
`define MA_core__pmc__pm_cfg__11__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__11__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__11__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__11__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__11__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__11__bal_ipol_mode__a 'h0053
`define MA_core__pmc__pm_cfg__11__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__11__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__11__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__11__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__12__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__12__bal_ipol_nok__a 'h0056
`define MA_core__pmc__pm_cfg__12__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__12__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__12__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__12__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__12__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__12__bal_ipol_mode__a 'h0056
`define MA_core__pmc__pm_cfg__12__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__12__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__12__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__12__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__13__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__13__bal_ipol_nok__a 'h0059
`define MA_core__pmc__pm_cfg__13__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__13__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__13__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__13__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__13__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__13__bal_ipol_mode__a 'h0059
`define MA_core__pmc__pm_cfg__13__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__13__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__13__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__13__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__14__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__14__bal_ipol_nok__a 'h005c
`define MA_core__pmc__pm_cfg__14__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__14__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__14__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__14__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__14__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__14__bal_ipol_mode__a 'h005c
`define MA_core__pmc__pm_cfg__14__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__14__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__14__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__14__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__15__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__15__bal_ipol_nok__a 'h005f
`define MA_core__pmc__pm_cfg__15__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__15__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__15__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__15__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__15__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__15__bal_ipol_mode__a 'h005f
`define MA_core__pmc__pm_cfg__15__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__15__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__15__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__15__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__16__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__16__bal_ipol_nok__a 'h0062
`define MA_core__pmc__pm_cfg__16__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__16__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__16__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__16__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__16__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__16__bal_ipol_mode__a 'h0062
`define MA_core__pmc__pm_cfg__16__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__16__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__16__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__16__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__17__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__17__bal_ipol_nok__a 'h0065
`define MA_core__pmc__pm_cfg__17__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__17__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__17__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__17__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__17__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__17__bal_ipol_mode__a 'h0065
`define MA_core__pmc__pm_cfg__17__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__17__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__17__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__17__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__18__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__18__bal_ipol_nok__a 'h0068
`define MA_core__pmc__pm_cfg__18__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__18__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__18__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__18__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__18__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__18__bal_ipol_mode__a 'h0068
`define MA_core__pmc__pm_cfg__18__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__18__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__18__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__18__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__pm_cfg__19__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
`define MA_core__pmc__pm_cfg__19__bal_ipol_nok__a 'h006b
`define MA_core__pmc__pm_cfg__19__bal_ipol_nok__len 2
`define MA_core__pmc__pm_cfg__19__bal_ipol_nok__mask 'h0c
`define MA_core__pmc__pm_cfg__19__bal_ipol_nok__shift 2
`define MA_core__pmc__pm_cfg__19__bal_ipol_nok__reset 'h01

//------------------------------------------------------------------------------core__pmc__pm_cfg__19__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
`define MA_core__pmc__pm_cfg__19__bal_ipol_mode__a 'h006b
`define MA_core__pmc__pm_cfg__19__bal_ipol_mode__len 2
`define MA_core__pmc__pm_cfg__19__bal_ipol_mode__mask 'h30
`define MA_core__pmc__pm_cfg__19__bal_ipol_mode__shift 4
`define MA_core__pmc__pm_cfg__19__bal_ipol_mode__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP0__pmp_spare---
// 1b. Spare pmp bit
`define MA_core__pmc__otp__PMP0__pmp_spare__a 'h006f
`define MA_core__pmc__otp__PMP0__pmp_spare__len 1
`define MA_core__pmc__otp__PMP0__pmp_spare__mask 'h01
`define MA_core__pmc__otp__PMP0__pmp_spare__shift 0
`define MA_core__pmc__otp__PMP0__pmp_spare__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP1__pmp_spare---
// 1b. Spare pmp bit
`define MA_core__pmc__otp__PMP1__pmp_spare__a 'h0074
`define MA_core__pmc__otp__PMP1__pmp_spare__len 1
`define MA_core__pmc__otp__PMP1__pmp_spare__mask 'h01
`define MA_core__pmc__otp__PMP1__pmp_spare__shift 0
`define MA_core__pmc__otp__PMP1__pmp_spare__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP2__pmp_spare---
// 1b. Spare pmp bit
`define MA_core__pmc__otp__PMP2__pmp_spare__a 'h0079
`define MA_core__pmc__otp__PMP2__pmp_spare__len 1
`define MA_core__pmc__otp__PMP2__pmp_spare__mask 'h01
`define MA_core__pmc__otp__PMP2__pmp_spare__shift 0
`define MA_core__pmc__otp__PMP2__pmp_spare__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP3__pmp_spare---
// 1b. Spare pmp bit
`define MA_core__pmc__otp__PMP3__pmp_spare__a 'h007e
`define MA_core__pmc__otp__PMP3__pmp_spare__len 1
`define MA_core__pmc__otp__PMP3__pmp_spare__mask 'h01
`define MA_core__pmc__otp__PMP3__pmp_spare__shift 0
`define MA_core__pmc__otp__PMP3__pmp_spare__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP4__pmp_spare---
// 1b. Spare pmp bit
`define MA_core__pmc__otp__PMP4__pmp_spare__a 'h0083
`define MA_core__pmc__otp__PMP4__pmp_spare__len 1
`define MA_core__pmc__otp__PMP4__pmp_spare__mask 'h01
`define MA_core__pmc__otp__PMP4__pmp_spare__shift 0
`define MA_core__pmc__otp__PMP4__pmp_spare__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__PMP5__pmp_spare---
// 1b. Spare pmp bit
`define MA_core__pmc__otp__PMP5__pmp_spare__a 'h0088
`define MA_core__pmc__otp__PMP5__pmp_spare__len 1
`define MA_core__pmc__otp__PMP5__pmp_spare__mask 'h01
`define MA_core__pmc__otp__PMP5__pmp_spare__shift 0
`define MA_core__pmc__otp__PMP5__pmp_spare__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__0---
// PWM triangle generator cap trim for each pwmFreqMode
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__0__a 'h008f
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__0__len 5
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__0__mask 'h1f
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__0__shift 0
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__0__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__1---
// PWM triangle generator cap trim for each pwmFreqMode
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__1__a 'h0090
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__1__len 5
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__1__mask 'h1f
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__1__shift 0
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__1__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__2---
// PWM triangle generator cap trim for each pwmFreqMode
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__2__a 'h0091
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__2__len 5
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__2__mask 'h1f
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__2__shift 0
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__2__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__3---
// PWM triangle generator cap trim for each pwmFreqMode
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__3__a 'h0092
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__3__len 5
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__3__mask 'h1f
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__3__shift 0
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__3__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_comp_bias_setz---
// PWM comparator bias setting: "00" => max, "11" => min
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_bias_setz__a 'h0093
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_bias_setz__len 2
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_bias_setz__mask 'h03
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_bias_setz__shift 0
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_bias_setz__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_comp_pfb_en---
// High to enable PWM comparator positive feedback load
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_pfb_en__a 'h0093
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_pfb_en__len 1
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_pfb_en__mask 'h04
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_pfb_en__shift 2
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_pfb_en__reset 'h01

//------------------------------------------------------------------------------core__pmc__reg__PMP6__pmp_spare---
// 1b. Spare pmp bit
`define MA_core__pmc__reg__PMP6__pmp_spare__a 'h00a7
`define MA_core__pmc__reg__PMP6__pmp_spare__len 1
`define MA_core__pmc__reg__PMP6__pmp_spare__mask 'h01
`define MA_core__pmc__reg__PMP6__pmp_spare__shift 0
`define MA_core__pmc__reg__PMP6__pmp_spare__reset 'h00

//------------------------------------------------------------------------------core__pmc__reg__PMP7__pmp_spare---
// 1b. Spare pmp bit
`define MA_core__pmc__reg__PMP7__pmp_spare__a 'h00ac
`define MA_core__pmc__reg__PMP7__pmp_spare__len 1
`define MA_core__pmc__reg__PMP7__pmp_spare__mask 'h01
`define MA_core__pmc__reg__PMP7__pmp_spare__shift 0
`define MA_core__pmc__reg__PMP7__pmp_spare__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_per_pm---
// Choose which PM decides pwmFreqMode for PWM triangle generator cap trim value selection. 0: PM_min, 1: Current PM
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_per_pm__a 'h0093
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_per_pm__len 1
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_per_pm__mask 'h08
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_per_pm__shift 3
`define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_per_pm__reset 'h00

//------------------------------------------------------------------------------core__pmc__otp__clip_blank_dur---
// Duration (16us cycles) of blanking of the PA clip signal during transition in/out of two-level modulation
`define MA_core__pmc__otp__clip_blank_dur__a 'h00a2
`define MA_core__pmc__otp__clip_blank_dur__len 5
`define MA_core__pmc__otp__clip_blank_dur__mask 'h1f
`define MA_core__pmc__otp__clip_blank_dur__shift 0
`define MA_core__pmc__otp__clip_blank_dur__reset 'h0a

//------------------------------------------------------------------------------core__pmc__otp__exit_2lvl_dur---
// Duration (16us cycles) of special measures for exiting two-level modulation
`define MA_core__pmc__otp__exit_2lvl_dur__a 'h00a3
`define MA_core__pmc__otp__exit_2lvl_dur__len 5
`define MA_core__pmc__otp__exit_2lvl_dur__mask 'h1f
`define MA_core__pmc__otp__exit_2lvl_dur__shift 0
`define MA_core__pmc__otp__exit_2lvl_dur__reset 'h0f

//------------------------------------------------------------------------------core__pmc__otp__exit_2lvl_bal_bw---
// Vcfly balancing loop gain/bandwidth during two-level modulation exit
`define MA_core__pmc__otp__exit_2lvl_bal_bw__a 'h00a3
`define MA_core__pmc__otp__exit_2lvl_bal_bw__len 2
`define MA_core__pmc__otp__exit_2lvl_bal_bw__mask 'h60
`define MA_core__pmc__otp__exit_2lvl_bal_bw__shift 5
`define MA_core__pmc__otp__exit_2lvl_bal_bw__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__otp__gd_ocp_ithr---
// Power stage over-current protection limit level setting
`define MA_core__prot_sys__otp__gd_ocp_ithr__a 'h00c0
`define MA_core__prot_sys__otp__gd_ocp_ithr__len 4
`define MA_core__prot_sys__otp__gd_ocp_ithr__mask 'h1e
`define MA_core__prot_sys__otp__gd_ocp_ithr__shift 1
`define MA_core__prot_sys__otp__gd_ocp_ithr__reset 'h0b

//------------------------------------------------------------------------------core__prot_sys__otp__ocp_sev_tbase---
// Time base for severe-OCP scanner
`define MA_core__prot_sys__otp__ocp_sev_tbase__a 'h00c0
`define MA_core__prot_sys__otp__ocp_sev_tbase__len 3
`define MA_core__prot_sys__otp__ocp_sev_tbase__mask 'he0
`define MA_core__prot_sys__otp__ocp_sev_tbase__shift 5
`define MA_core__prot_sys__otp__ocp_sev_tbase__reset 'h03

//------------------------------------------------------------------------------core__prot_sys__otp__ocp_sev_thr---
// Counting limit for severe-OCP event generator
`define MA_core__prot_sys__otp__ocp_sev_thr__a 'h00c1
`define MA_core__prot_sys__otp__ocp_sev_thr__len 8
`define MA_core__prot_sys__otp__ocp_sev_thr__mask 'hff
`define MA_core__prot_sys__otp__ocp_sev_thr__shift 0
`define MA_core__prot_sys__otp__ocp_sev_thr__reset 'h20

//------------------------------------------------------------------------------core__prot_sys__otp__ocp_sev_dec_rate---
// Zero-event count per severe-OCP counter decrement step.:
`define MA_core__prot_sys__otp__ocp_sev_dec_rate__a 'h00c2
`define MA_core__prot_sys__otp__ocp_sev_dec_rate__len 4
`define MA_core__prot_sys__otp__ocp_sev_dec_rate__mask 'h0f
`define MA_core__prot_sys__otp__ocp_sev_dec_rate__shift 0
`define MA_core__prot_sys__otp__ocp_sev_dec_rate__reset 'h08

//------------------------------------------------------------------------------core__prot_sys__otp__clip_sev_tbase---
// Time base for severe-clip ("stuck") scanner
`define MA_core__prot_sys__otp__clip_sev_tbase__a 'h00c3
`define MA_core__prot_sys__otp__clip_sev_tbase__len 3
`define MA_core__prot_sys__otp__clip_sev_tbase__mask 'h07
`define MA_core__prot_sys__otp__clip_sev_tbase__shift 0
`define MA_core__prot_sys__otp__clip_sev_tbase__reset 'h07

//------------------------------------------------------------------------------core__prot_sys__otp__clip_sev_dec_rate---
// Zero-event counts per severe-clip counter decrement step.
`define MA_core__prot_sys__otp__clip_sev_dec_rate__a 'h00c3
`define MA_core__prot_sys__otp__clip_sev_dec_rate__len 4
`define MA_core__prot_sys__otp__clip_sev_dec_rate__mask 'h78
`define MA_core__prot_sys__otp__clip_sev_dec_rate__shift 3
`define MA_core__prot_sys__otp__clip_sev_dec_rate__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__otp__clip_sev_thr---
// Counting limit for severe-clip event generator
`define MA_core__prot_sys__otp__clip_sev_thr__a 'h00c4
`define MA_core__prot_sys__otp__clip_sev_thr__len 8
`define MA_core__prot_sys__otp__clip_sev_thr__mask 'hff
`define MA_core__prot_sys__otp__clip_sev_thr__shift 0
`define MA_core__prot_sys__otp__clip_sev_thr__reset 'he5

//------------------------------------------------------------------------------core__prot_sys__otp__clip_countThr---
// "Clip stuck" protection count threshold (10ms per step)
`define MA_core__prot_sys__otp__clip_countThr__a 'h00c8
`define MA_core__prot_sys__otp__clip_countThr__len 4
`define MA_core__prot_sys__otp__clip_countThr__mask 'h0f
`define MA_core__prot_sys__otp__clip_countThr__shift 0
`define MA_core__prot_sys__otp__clip_countThr__reset 'h03

//------------------------------------------------------------------------------core__prot_sys__otp__countThr_short---
// Number of 10us cycles in a "short" event response
`define MA_core__prot_sys__otp__countThr_short__a 'h00cf
`define MA_core__prot_sys__otp__countThr_short__len 8
`define MA_core__prot_sys__otp__countThr_short__mask 'hff
`define MA_core__prot_sys__otp__countThr_short__shift 0
`define MA_core__prot_sys__otp__countThr_short__reset 'h10

//------------------------------------------------------------------------------core__prot_sys__otp__countThr_long---
// Number of 1ms cycles in a "long" event response
`define MA_core__prot_sys__otp__countThr_long__a 'h00d0
`define MA_core__prot_sys__otp__countThr_long__len 8
`define MA_core__prot_sys__otp__countThr_long__mask 'hff
`define MA_core__prot_sys__otp__countThr_long__shift 0
`define MA_core__prot_sys__otp__countThr_long__reset 'h20

//------------------------------------------------------------------------------core__prot_sys__otp__countThr_unlatch---
// Number of 100ms cycles before a latch auto-reset is performed
`define MA_core__prot_sys__otp__countThr_unlatch__a 'h00d1
`define MA_core__prot_sys__otp__countThr_unlatch__len 8
`define MA_core__prot_sys__otp__countThr_unlatch__mask 'hff
`define MA_core__prot_sys__otp__countThr_unlatch__shift 0
`define MA_core__prot_sys__otp__countThr_unlatch__reset 'h0a

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__reduceVol---
// Trigger reduction of channel volume on error
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__reduceVol__a 'h00d2
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__reduceVol__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__reduceVol__shift 0
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__mute_short---
// Trigger mute of channel while error w/ short extension
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__mute_short__a 'h00d2
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__mute_short__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__mute_short__mask 'h02
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__mute_short__shift 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_short---
// Trigger Vcfly precharge in half bridge while error (with "short" extension)
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_short__a 'h00d2
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_short__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_short__mask 'h04
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_short__shift 2
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_short__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_long---
// Trigger Vcfly precharge in half bridge while error (with "long" extension)
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_long__a 'h00d2
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_long__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_long__mask 'h08
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_long__shift 3
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_long__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__ser_rapidFire_short---
// Trigger rapid update of all channel gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__ser_rapidFire_short__a 'h00d2
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__ser_rapidFire_short__mask 'h10
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__ser_rapidFire_short__shift 4
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__ser_rapidFire_short__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__gd_dp_cont_short---
// Trigger continuous operation of gate driver level shifters in channel (with "short" extension)
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__gd_dp_cont_short__a 'h00d2
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__gd_dp_cont_short__mask 'h20
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__gd_dp_cont_short__shift 5
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dis_lf_clip_rec_short__a 'h00d2
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dis_lf_clip_rec_short__mask 'h40
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dis_lf_clip_rec_short__shift 6
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dis_lf_clip_rec_short__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__powerMode_max---
// Trigger jump to max. power mode for channel
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__powerMode_max__a 'h00d2
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__powerMode_max__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__powerMode_max__mask 'h80
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__powerMode_max__shift 7
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__powerMode_max__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action0---
// Trigger DSP channel-action flag 0
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action0__a 'h00d3
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action1---
// Trigger DSP channel-action flag 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action1__a 'h00d3
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action2---
// Trigger DSP channel-action flag 2
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action2__a 'h00d3
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action3---
// Trigger DSP channel-action flag 3
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action3__a 'h00d3
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__reduceVol__a 'h00d4
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__reduceVol__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__reduceVol__shift 0
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__mute_short__a 'h00d4
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__mute_short__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__mute_short__mask 'h02
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__mute_short__shift 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__ser_rapidFire_short__a 'h00d4
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__gd_dp_cont_short__a 'h00d4
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__dis_lf_clip_rec_short__a 'h00d4
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action0__a 'h00d5
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action1__a 'h00d5
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action2__a 'h00d5
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action3__a 'h00d5
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__reduceVol---
// Trigger reduction of channel volume on error
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__reduceVol__a 'h00d6
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__reduceVol__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__reduceVol__shift 0
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__reduceVol__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__mute_short---
// Trigger mute of channel while error w/ short extension
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__mute_short__a 'h00d6
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__mute_short__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__mute_short__mask 'h02
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__mute_short__shift 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_short---
// Trigger Vcfly precharge in half bridge while error (with "short" extension)
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_short__a 'h00d6
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_short__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_short__mask 'h04
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_short__shift 2
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_short__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_long---
// Trigger Vcfly precharge in half bridge while error (with "long" extension)
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_long__a 'h00d6
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_long__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_long__mask 'h08
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_long__shift 3
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_long__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__ser_rapidFire_short---
// Trigger rapid update of all channel gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__ser_rapidFire_short__a 'h00d6
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__ser_rapidFire_short__mask 'h10
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__ser_rapidFire_short__shift 4
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__gd_dp_cont_short---
// Trigger continuous operation of gate driver level shifters in channel (with "short" extension)
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__gd_dp_cont_short__a 'h00d6
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__gd_dp_cont_short__mask 'h20
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__gd_dp_cont_short__shift 5
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dis_lf_clip_rec_short__a 'h00d6
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dis_lf_clip_rec_short__mask 'h40
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dis_lf_clip_rec_short__shift 6
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__powerMode_max---
// Trigger jump to max. power mode for channel
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__powerMode_max__a 'h00d6
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__powerMode_max__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__powerMode_max__mask 'h80
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__powerMode_max__shift 7
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__powerMode_max__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action0---
// Trigger DSP channel-action flag 0
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action0__a 'h00d7
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action1---
// Trigger DSP channel-action flag 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action1__a 'h00d7
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action2---
// Trigger DSP channel-action flag 2
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action2__a 'h00d7
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action3---
// Trigger DSP channel-action flag 3
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action3__a 'h00d7
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__reduceVol__a 'h00d8
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__reduceVol__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__reduceVol__shift 0
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__mute_short__a 'h00d8
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__mute_short__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__mute_short__mask 'h02
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__mute_short__shift 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__ser_rapidFire_short__a 'h00d8
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__gd_dp_cont_short__a 'h00d8
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__dis_lf_clip_rec_short__a 'h00d8
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action0__a 'h00d9
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action1__a 'h00d9
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action2__a 'h00d9
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action3__a 'h00d9
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__reduceVol---
// Trigger reduction of channel volume on error
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__reduceVol__a 'h00da
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__reduceVol__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__reduceVol__shift 0
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__mute_short---
// Trigger mute of channel while error w/ short extension
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__mute_short__a 'h00da
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__mute_short__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__mute_short__mask 'h02
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__mute_short__shift 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__mute_short__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_short---
// Trigger Vcfly precharge in half bridge while error (with "short" extension)
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_short__a 'h00da
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_short__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_short__mask 'h04
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_short__shift 2
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_long---
// Trigger Vcfly precharge in half bridge while error (with "long" extension)
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_long__a 'h00da
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_long__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_long__mask 'h08
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_long__shift 3
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_long__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__ser_rapidFire_short---
// Trigger rapid update of all channel gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__ser_rapidFire_short__a 'h00da
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__ser_rapidFire_short__mask 'h10
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__ser_rapidFire_short__shift 4
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__gd_dp_cont_short---
// Trigger continuous operation of gate driver level shifters in channel (with "short" extension)
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__gd_dp_cont_short__a 'h00da
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__gd_dp_cont_short__mask 'h20
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__gd_dp_cont_short__shift 5
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dis_lf_clip_rec_short__a 'h00da
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dis_lf_clip_rec_short__mask 'h40
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dis_lf_clip_rec_short__shift 6
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__powerMode_max---
// Trigger jump to max. power mode for channel
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__powerMode_max__a 'h00da
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__powerMode_max__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__powerMode_max__mask 'h80
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__powerMode_max__shift 7
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__powerMode_max__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action0---
// Trigger DSP channel-action flag 0
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action0__a 'h00db
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action1---
// Trigger DSP channel-action flag 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action1__a 'h00db
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action2---
// Trigger DSP channel-action flag 2
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action2__a 'h00db
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action3---
// Trigger DSP channel-action flag 3
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action3__a 'h00db
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__reduceVol__a 'h00dc
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__reduceVol__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__reduceVol__shift 0
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__mute_short__a 'h00dc
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__mute_short__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__mute_short__mask 'h02
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__mute_short__shift 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__ser_rapidFire_short__a 'h00dc
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__gd_dp_cont_short__a 'h00dc
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__dis_lf_clip_rec_short__a 'h00dc
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action0__a 'h00dd
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action1__a 'h00dd
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action2__a 'h00dd
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action3__a 'h00dd
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__reduceVol---
// Trigger reduction of channel volume on error
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__reduceVol__a 'h00de
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__reduceVol__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__reduceVol__shift 0
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__mute_short---
// Trigger mute of channel while error w/ short extension
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__mute_short__a 'h00de
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__mute_short__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__mute_short__mask 'h02
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__mute_short__shift 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_short---
// Trigger Vcfly precharge in half bridge while error (with "short" extension)
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_short__a 'h00de
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_short__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_short__mask 'h04
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_short__shift 2
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_long---
// Trigger Vcfly precharge in half bridge while error (with "long" extension)
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_long__a 'h00de
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_long__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_long__mask 'h08
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_long__shift 3
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_long__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__ser_rapidFire_short---
// Trigger rapid update of all channel gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__ser_rapidFire_short__a 'h00de
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__ser_rapidFire_short__mask 'h10
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__ser_rapidFire_short__shift 4
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__gd_dp_cont_short---
// Trigger continuous operation of gate driver level shifters in channel (with "short" extension)
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__gd_dp_cont_short__a 'h00de
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__gd_dp_cont_short__mask 'h20
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__gd_dp_cont_short__shift 5
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dis_lf_clip_rec_short__a 'h00de
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dis_lf_clip_rec_short__mask 'h40
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dis_lf_clip_rec_short__shift 6
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__powerMode_max---
// Trigger jump to max. power mode for channel
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__powerMode_max__a 'h00de
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__powerMode_max__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__powerMode_max__mask 'h80
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__powerMode_max__shift 7
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__powerMode_max__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action0---
// Trigger DSP channel-action flag 0
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action0__a 'h00df
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action1---
// Trigger DSP channel-action flag 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action1__a 'h00df
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action2---
// Trigger DSP channel-action flag 2
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action2__a 'h00df
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action3---
// Trigger DSP channel-action flag 3
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action3__a 'h00df
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__reduceVol__a 'h00e0
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__reduceVol__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__reduceVol__shift 0
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__mute_short__a 'h00e0
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__mute_short__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__mute_short__mask 'h02
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__mute_short__shift 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__ser_rapidFire_short__a 'h00e0
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__gd_dp_cont_short__a 'h00e0
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__dis_lf_clip_rec_short__a 'h00e0
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action0__a 'h00e1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action1__a 'h00e1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action2__a 'h00e1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action3__a 'h00e1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__reduceVol---
// Trigger reduction of channel volume on error
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__reduceVol__a 'h00e2
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__reduceVol__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__reduceVol__shift 0
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__mute_short---
// Trigger mute of channel while error w/ short extension
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__mute_short__a 'h00e2
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__mute_short__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__mute_short__mask 'h02
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__mute_short__shift 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_short---
// Trigger Vcfly precharge in half bridge while error (with "short" extension)
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_short__a 'h00e2
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_short__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_short__mask 'h04
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_short__shift 2
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_long---
// Trigger Vcfly precharge in half bridge while error (with "long" extension)
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_long__a 'h00e2
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_long__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_long__mask 'h08
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_long__shift 3
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_long__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__ser_rapidFire_short---
// Trigger rapid update of all channel gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__ser_rapidFire_short__a 'h00e2
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__ser_rapidFire_short__mask 'h10
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__ser_rapidFire_short__shift 4
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__gd_dp_cont_short---
// Trigger continuous operation of gate driver level shifters in channel (with "short" extension)
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__gd_dp_cont_short__a 'h00e2
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__gd_dp_cont_short__mask 'h20
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__gd_dp_cont_short__shift 5
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dis_lf_clip_rec_short__a 'h00e2
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dis_lf_clip_rec_short__mask 'h40
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dis_lf_clip_rec_short__shift 6
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dis_lf_clip_rec_short__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__powerMode_max---
// Trigger jump to max. power mode for channel
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__powerMode_max__a 'h00e2
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__powerMode_max__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__powerMode_max__mask 'h80
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__powerMode_max__shift 7
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__powerMode_max__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action0---
// Trigger DSP channel-action flag 0
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action0__a 'h00e3
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action1---
// Trigger DSP channel-action flag 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action1__a 'h00e3
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action2---
// Trigger DSP channel-action flag 2
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action2__a 'h00e3
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action3---
// Trigger DSP channel-action flag 3
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action3__a 'h00e3
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__reduceVol__a 'h00e4
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__reduceVol__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__reduceVol__shift 0
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__mute_short__a 'h00e4
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__mute_short__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__mute_short__mask 'h02
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__mute_short__shift 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__ser_rapidFire_short__a 'h00e4
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__gd_dp_cont_short__a 'h00e4
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__dis_lf_clip_rec_short__a 'h00e4
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action0__a 'h00e5
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action1__a 'h00e5
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action2__a 'h00e5
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action3__a 'h00e5
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__otw_action__reduceVol__a 'h00e6
`define MA_core__prot_sys__reg__otw_action__reduceVol__len 1
`define MA_core__prot_sys__reg__otw_action__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__otw_action__reduceVol__shift 0
`define MA_core__prot_sys__reg__otw_action__reduceVol__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__otw_action__mute_short__a 'h00e6
`define MA_core__prot_sys__reg__otw_action__mute_short__len 1
`define MA_core__prot_sys__reg__otw_action__mute_short__mask 'h02
`define MA_core__prot_sys__reg__otw_action__mute_short__shift 1
`define MA_core__prot_sys__reg__otw_action__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__otw_action__ser_rapidFire_short__a 'h00e6
`define MA_core__prot_sys__reg__otw_action__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__otw_action__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__otw_action__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__otw_action__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__otw_action__gd_dp_cont_short__a 'h00e6
`define MA_core__prot_sys__reg__otw_action__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__otw_action__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__otw_action__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__otw_action__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__otw_action__dis_lf_clip_rec_short__a 'h00e6
`define MA_core__prot_sys__reg__otw_action__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__otw_action__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__otw_action__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__otw_action__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action0__a 'h00e7
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action1__a 'h00e7
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action2__a 'h00e7
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action3__a 'h00e7
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__ote_action__reduceVol__a 'h00e8
`define MA_core__prot_sys__reg__ote_action__reduceVol__len 1
`define MA_core__prot_sys__reg__ote_action__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__ote_action__reduceVol__shift 0
`define MA_core__prot_sys__reg__ote_action__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__ote_action__mute_short__a 'h00e8
`define MA_core__prot_sys__reg__ote_action__mute_short__len 1
`define MA_core__prot_sys__reg__ote_action__mute_short__mask 'h02
`define MA_core__prot_sys__reg__ote_action__mute_short__shift 1
`define MA_core__prot_sys__reg__ote_action__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__ote_action__ser_rapidFire_short__a 'h00e8
`define MA_core__prot_sys__reg__ote_action__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__ote_action__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__ote_action__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__ote_action__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__ote_action__gd_dp_cont_short__a 'h00e8
`define MA_core__prot_sys__reg__ote_action__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__ote_action__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__ote_action__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__ote_action__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__ote_action__dis_lf_clip_rec_short__a 'h00e8
`define MA_core__prot_sys__reg__ote_action__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__ote_action__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__ote_action__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__ote_action__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action0__a 'h00e9
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action1__a 'h00e9
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action2__a 'h00e9
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action3__a 'h00e9
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__pvdd_uv_action__reduceVol__a 'h00ea
`define MA_core__prot_sys__reg__pvdd_uv_action__reduceVol__len 1
`define MA_core__prot_sys__reg__pvdd_uv_action__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__pvdd_uv_action__reduceVol__shift 0
`define MA_core__prot_sys__reg__pvdd_uv_action__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__pvdd_uv_action__mute_short__a 'h00ea
`define MA_core__prot_sys__reg__pvdd_uv_action__mute_short__len 1
`define MA_core__prot_sys__reg__pvdd_uv_action__mute_short__mask 'h02
`define MA_core__prot_sys__reg__pvdd_uv_action__mute_short__shift 1
`define MA_core__prot_sys__reg__pvdd_uv_action__mute_short__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_uv_action__ser_rapidFire_short__a 'h00ea
`define MA_core__prot_sys__reg__pvdd_uv_action__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__pvdd_uv_action__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__pvdd_uv_action__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__pvdd_uv_action__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_uv_action__gd_dp_cont_short__a 'h00ea
`define MA_core__prot_sys__reg__pvdd_uv_action__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__pvdd_uv_action__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__pvdd_uv_action__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__pvdd_uv_action__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_uv_action__dis_lf_clip_rec_short__a 'h00ea
`define MA_core__prot_sys__reg__pvdd_uv_action__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__pvdd_uv_action__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__pvdd_uv_action__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__pvdd_uv_action__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action0__a 'h00eb
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action1__a 'h00eb
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action2__a 'h00eb
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action3__a 'h00eb
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__pvdd_low_action__reduceVol__a 'h00ec
`define MA_core__prot_sys__reg__pvdd_low_action__reduceVol__len 1
`define MA_core__prot_sys__reg__pvdd_low_action__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__pvdd_low_action__reduceVol__shift 0
`define MA_core__prot_sys__reg__pvdd_low_action__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__pvdd_low_action__mute_short__a 'h00ec
`define MA_core__prot_sys__reg__pvdd_low_action__mute_short__len 1
`define MA_core__prot_sys__reg__pvdd_low_action__mute_short__mask 'h02
`define MA_core__prot_sys__reg__pvdd_low_action__mute_short__shift 1
`define MA_core__prot_sys__reg__pvdd_low_action__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_low_action__ser_rapidFire_short__a 'h00ec
`define MA_core__prot_sys__reg__pvdd_low_action__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__pvdd_low_action__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__pvdd_low_action__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__pvdd_low_action__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_low_action__gd_dp_cont_short__a 'h00ec
`define MA_core__prot_sys__reg__pvdd_low_action__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__pvdd_low_action__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__pvdd_low_action__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__pvdd_low_action__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_low_action__dis_lf_clip_rec_short__a 'h00ec
`define MA_core__prot_sys__reg__pvdd_low_action__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__pvdd_low_action__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__pvdd_low_action__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__pvdd_low_action__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action0__a 'h00ed
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action1__a 'h00ed
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action2__a 'h00ed
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action3__a 'h00ed
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__pvdd_ov_action__reduceVol__a 'h00f0
`define MA_core__prot_sys__reg__pvdd_ov_action__reduceVol__len 1
`define MA_core__prot_sys__reg__pvdd_ov_action__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__pvdd_ov_action__reduceVol__shift 0
`define MA_core__prot_sys__reg__pvdd_ov_action__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__pvdd_ov_action__mute_short__a 'h00f0
`define MA_core__prot_sys__reg__pvdd_ov_action__mute_short__len 1
`define MA_core__prot_sys__reg__pvdd_ov_action__mute_short__mask 'h02
`define MA_core__prot_sys__reg__pvdd_ov_action__mute_short__shift 1
`define MA_core__prot_sys__reg__pvdd_ov_action__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_ov_action__ser_rapidFire_short__a 'h00f0
`define MA_core__prot_sys__reg__pvdd_ov_action__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__pvdd_ov_action__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__pvdd_ov_action__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__pvdd_ov_action__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_ov_action__gd_dp_cont_short__a 'h00f0
`define MA_core__prot_sys__reg__pvdd_ov_action__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__pvdd_ov_action__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__pvdd_ov_action__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__pvdd_ov_action__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_ov_action__dis_lf_clip_rec_short__a 'h00f0
`define MA_core__prot_sys__reg__pvdd_ov_action__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__pvdd_ov_action__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__pvdd_ov_action__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__pvdd_ov_action__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action0__a 'h00f1
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action1__a 'h00f1
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action2__a 'h00f1
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action3__a 'h00f1
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__no_clock_action__reduceVol__a 'h00f2
`define MA_core__prot_sys__reg__no_clock_action__reduceVol__len 1
`define MA_core__prot_sys__reg__no_clock_action__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__no_clock_action__reduceVol__shift 0
`define MA_core__prot_sys__reg__no_clock_action__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__no_clock_action__mute_short__a 'h00f2
`define MA_core__prot_sys__reg__no_clock_action__mute_short__len 1
`define MA_core__prot_sys__reg__no_clock_action__mute_short__mask 'h02
`define MA_core__prot_sys__reg__no_clock_action__mute_short__shift 1
`define MA_core__prot_sys__reg__no_clock_action__mute_short__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__no_clock_action__ser_rapidFire_short__a 'h00f2
`define MA_core__prot_sys__reg__no_clock_action__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__no_clock_action__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__no_clock_action__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__no_clock_action__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__no_clock_action__gd_dp_cont_short__a 'h00f2
`define MA_core__prot_sys__reg__no_clock_action__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__no_clock_action__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__no_clock_action__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__no_clock_action__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__no_clock_action__dis_lf_clip_rec_short__a 'h00f2
`define MA_core__prot_sys__reg__no_clock_action__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__no_clock_action__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__no_clock_action__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__no_clock_action__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action0__a 'h00f3
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action1__a 'h00f3
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action2__a 'h00f3
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action3__a 'h00f3
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__no_audio_action__reduceVol__a 'h00f4
`define MA_core__prot_sys__reg__no_audio_action__reduceVol__len 1
`define MA_core__prot_sys__reg__no_audio_action__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__no_audio_action__reduceVol__shift 0
`define MA_core__prot_sys__reg__no_audio_action__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__no_audio_action__mute_short__a 'h00f4
`define MA_core__prot_sys__reg__no_audio_action__mute_short__len 1
`define MA_core__prot_sys__reg__no_audio_action__mute_short__mask 'h02
`define MA_core__prot_sys__reg__no_audio_action__mute_short__shift 1
`define MA_core__prot_sys__reg__no_audio_action__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__no_audio_action__ser_rapidFire_short__a 'h00f4
`define MA_core__prot_sys__reg__no_audio_action__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__no_audio_action__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__no_audio_action__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__no_audio_action__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__no_audio_action__gd_dp_cont_short__a 'h00f4
`define MA_core__prot_sys__reg__no_audio_action__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__no_audio_action__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__no_audio_action__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__no_audio_action__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__no_audio_action__dis_lf_clip_rec_short__a 'h00f4
`define MA_core__prot_sys__reg__no_audio_action__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__no_audio_action__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__no_audio_action__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__no_audio_action__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action0__a 'h00f5
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action1__a 'h00f5
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action2__a 'h00f5
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action3__a 'h00f5
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__temp_low_action__reduceVol__a 'h00f6
`define MA_core__prot_sys__reg__temp_low_action__reduceVol__len 1
`define MA_core__prot_sys__reg__temp_low_action__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__temp_low_action__reduceVol__shift 0
`define MA_core__prot_sys__reg__temp_low_action__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__temp_low_action__mute_short__a 'h00f6
`define MA_core__prot_sys__reg__temp_low_action__mute_short__len 1
`define MA_core__prot_sys__reg__temp_low_action__mute_short__mask 'h02
`define MA_core__prot_sys__reg__temp_low_action__mute_short__shift 1
`define MA_core__prot_sys__reg__temp_low_action__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__temp_low_action__ser_rapidFire_short__a 'h00f6
`define MA_core__prot_sys__reg__temp_low_action__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__temp_low_action__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__temp_low_action__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__temp_low_action__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__temp_low_action__gd_dp_cont_short__a 'h00f6
`define MA_core__prot_sys__reg__temp_low_action__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__temp_low_action__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__temp_low_action__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__temp_low_action__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__temp_low_action__dis_lf_clip_rec_short__a 'h00f6
`define MA_core__prot_sys__reg__temp_low_action__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__temp_low_action__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__temp_low_action__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__temp_low_action__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action0__a 'h00f7
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action1__a 'h00f7
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action2__a 'h00f7
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action3__a 'h00f7
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__pvddT_low_action__reduceVol__a 'h00f8
`define MA_core__prot_sys__reg__pvddT_low_action__reduceVol__len 1
`define MA_core__prot_sys__reg__pvddT_low_action__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__pvddT_low_action__reduceVol__shift 0
`define MA_core__prot_sys__reg__pvddT_low_action__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__pvddT_low_action__mute_short__a 'h00f8
`define MA_core__prot_sys__reg__pvddT_low_action__mute_short__len 1
`define MA_core__prot_sys__reg__pvddT_low_action__mute_short__mask 'h02
`define MA_core__prot_sys__reg__pvddT_low_action__mute_short__shift 1
`define MA_core__prot_sys__reg__pvddT_low_action__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__pvddT_low_action__ser_rapidFire_short__a 'h00f8
`define MA_core__prot_sys__reg__pvddT_low_action__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__pvddT_low_action__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__pvddT_low_action__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__pvddT_low_action__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__pvddT_low_action__gd_dp_cont_short__a 'h00f8
`define MA_core__prot_sys__reg__pvddT_low_action__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__pvddT_low_action__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__pvddT_low_action__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__pvddT_low_action__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__pvddT_low_action__dis_lf_clip_rec_short__a 'h00f8
`define MA_core__prot_sys__reg__pvddT_low_action__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__pvddT_low_action__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__pvddT_low_action__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__pvddT_low_action__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action0__a 'h00f9
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action1__a 'h00f9
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action2__a 'h00f9
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action3__a 'h00f9
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_en---
// High to enable error triger (debug) function
`define MA_core__prot_sys__reg__errTrig_en__a 'h0104
`define MA_core__prot_sys__reg__errTrig_en__len 1
`define MA_core__prot_sys__reg__errTrig_en__mask 'h01
`define MA_core__prot_sys__reg__errTrig_en__shift 0
`define MA_core__prot_sys__reg__errTrig_en__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_reset---
// High to trigger a single reset of error trigger
`define MA_core__prot_sys__reg__errTrig_reset__a 'h0104
`define MA_core__prot_sys__reg__errTrig_reset__len 1
`define MA_core__prot_sys__reg__errTrig_reset__mask 'h02
`define MA_core__prot_sys__reg__errTrig_reset__shift 1
`define MA_core__prot_sys__reg__errTrig_reset__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errVect_trig_mask__errVector_ch0---
// [ clip_stuck dc vcf_err ocp_severe ocp ] <-- clip_stuck is hidden
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch0__a 'h0105
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch0__len 5
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch0__mask 'h1f
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch0__shift 0
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errVect_trig_mask__errVector_ch1---
// [ clip_stuck dc vcf_err ocp_severe ocp ]
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch1__a 'h0106
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch1__len 5
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch1__mask 'h1f
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch1__shift 0
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errVect_trig_mask__errVector_all__0---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__0__a 'h0107
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__0__len 8
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__0__mask 'hff
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__0__shift 0
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errVect_trig_mask__errVector_all__1---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__1__a 'h0108
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__1__len 7
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__1__mask 'h7f
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__1__shift 0
`define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errLatch_reset---
// Low->high fires single errorLatch unlock event (both channels at once)
`define MA_core__prot_sys__reg__errLatch_reset__a 'h0109
`define MA_core__prot_sys__reg__errLatch_reset__len 1
`define MA_core__prot_sys__reg__errLatch_reset__mask 'h01
`define MA_core__prot_sys__reg__errLatch_reset__shift 0
`define MA_core__prot_sys__reg__errLatch_reset__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_now__errVector_ch0---
// [ clip_stuck dc vcf_err ocp_severe ocp ] <-- clip_stuck is hidden
`define MA_core__prot_sys__errVect_now__errVector_ch0__a 'h0118
`define MA_core__prot_sys__errVect_now__errVector_ch0__len 5
`define MA_core__prot_sys__errVect_now__errVector_ch0__mask 'h1f
`define MA_core__prot_sys__errVect_now__errVector_ch0__shift 0
`define MA_core__prot_sys__errVect_now__errVector_ch0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_now__errVector_ch1---
// [ clip_stuck dc vcf_err ocp_severe ocp ]
`define MA_core__prot_sys__errVect_now__errVector_ch1__a 'h0119
`define MA_core__prot_sys__errVect_now__errVector_ch1__len 5
`define MA_core__prot_sys__errVect_now__errVector_ch1__mask 'h1f
`define MA_core__prot_sys__errVect_now__errVector_ch1__shift 0
`define MA_core__prot_sys__errVect_now__errVector_ch1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_now__errVector_all__0---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
`define MA_core__prot_sys__errVect_now__errVector_all__0__a 'h011a
`define MA_core__prot_sys__errVect_now__errVector_all__0__len 8
`define MA_core__prot_sys__errVect_now__errVector_all__0__mask 'hff
`define MA_core__prot_sys__errVect_now__errVector_all__0__shift 0
`define MA_core__prot_sys__errVect_now__errVector_all__0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_now__errVector_all__1---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
`define MA_core__prot_sys__errVect_now__errVector_all__1__a 'h011b
`define MA_core__prot_sys__errVect_now__errVector_all__1__len 7
`define MA_core__prot_sys__errVect_now__errVector_all__1__mask 'h7f
`define MA_core__prot_sys__errVect_now__errVector_all__1__shift 0
`define MA_core__prot_sys__errVect_now__errVector_all__1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_acc__errVector_ch0---
// [ clip_stuck dc vcf_err ocp_severe ocp ] <-- clip_stuck is hidden
`define MA_core__prot_sys__errVect_acc__errVector_ch0__a 'h011c
`define MA_core__prot_sys__errVect_acc__errVector_ch0__len 5
`define MA_core__prot_sys__errVect_acc__errVector_ch0__mask 'h1f
`define MA_core__prot_sys__errVect_acc__errVector_ch0__shift 0
`define MA_core__prot_sys__errVect_acc__errVector_ch0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_acc__errVector_ch1---
// [ clip_stuck dc vcf_err ocp_severe ocp ]
`define MA_core__prot_sys__errVect_acc__errVector_ch1__a 'h011d
`define MA_core__prot_sys__errVect_acc__errVector_ch1__len 5
`define MA_core__prot_sys__errVect_acc__errVector_ch1__mask 'h1f
`define MA_core__prot_sys__errVect_acc__errVector_ch1__shift 0
`define MA_core__prot_sys__errVect_acc__errVector_ch1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_acc__errVector_all__0---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
`define MA_core__prot_sys__errVect_acc__errVector_all__0__a 'h011e
`define MA_core__prot_sys__errVect_acc__errVector_all__0__len 8
`define MA_core__prot_sys__errVect_acc__errVector_all__0__mask 'hff
`define MA_core__prot_sys__errVect_acc__errVector_all__0__shift 0
`define MA_core__prot_sys__errVect_acc__errVector_all__0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_acc__errVector_all__1---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
`define MA_core__prot_sys__errVect_acc__errVector_all__1__a 'h011f
`define MA_core__prot_sys__errVect_acc__errVector_all__1__len 7
`define MA_core__prot_sys__errVect_acc__errVector_all__1__mask 'h7f
`define MA_core__prot_sys__errVect_acc__errVector_all__1__shift 0
`define MA_core__prot_sys__errVect_acc__errVector_all__1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_acc_trig__errVector_ch0---
// [ clip_stuck dc vcf_err ocp_severe ocp ] <-- clip_stuck is hidden
`define MA_core__prot_sys__errVect_acc_trig__errVector_ch0__a 'h0120
`define MA_core__prot_sys__errVect_acc_trig__errVector_ch0__len 5
`define MA_core__prot_sys__errVect_acc_trig__errVector_ch0__mask 'h1f
`define MA_core__prot_sys__errVect_acc_trig__errVector_ch0__shift 0
`define MA_core__prot_sys__errVect_acc_trig__errVector_ch0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_acc_trig__errVector_ch1---
// [ clip_stuck dc vcf_err ocp_severe ocp ]
`define MA_core__prot_sys__errVect_acc_trig__errVector_ch1__a 'h0121
`define MA_core__prot_sys__errVect_acc_trig__errVector_ch1__len 5
`define MA_core__prot_sys__errVect_acc_trig__errVector_ch1__mask 'h1f
`define MA_core__prot_sys__errVect_acc_trig__errVector_ch1__shift 0
`define MA_core__prot_sys__errVect_acc_trig__errVector_ch1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_acc_trig__errVector_all__0---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
`define MA_core__prot_sys__errVect_acc_trig__errVector_all__0__a 'h0122
`define MA_core__prot_sys__errVect_acc_trig__errVector_all__0__len 8
`define MA_core__prot_sys__errVect_acc_trig__errVector_all__0__mask 'hff
`define MA_core__prot_sys__errVect_acc_trig__errVector_all__0__shift 0
`define MA_core__prot_sys__errVect_acc_trig__errVector_all__0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_acc_trig__errVector_all__1---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
`define MA_core__prot_sys__errVect_acc_trig__errVector_all__1__a 'h0123
`define MA_core__prot_sys__errVect_acc_trig__errVector_all__1__len 7
`define MA_core__prot_sys__errVect_acc_trig__errVector_all__1__mask 'h7f
`define MA_core__prot_sys__errVect_acc_trig__errVector_all__1__shift 0
`define MA_core__prot_sys__errVect_acc_trig__errVector_all__1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_trig__errVector_ch0---
// [ clip_stuck dc vcf_err ocp_severe ocp ] <-- clip_stuck is hidden
`define MA_core__prot_sys__errVect_trig__errVector_ch0__a 'h0124
`define MA_core__prot_sys__errVect_trig__errVector_ch0__len 5
`define MA_core__prot_sys__errVect_trig__errVector_ch0__mask 'h1f
`define MA_core__prot_sys__errVect_trig__errVector_ch0__shift 0
`define MA_core__prot_sys__errVect_trig__errVector_ch0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_trig__errVector_ch1---
// [ clip_stuck dc vcf_err ocp_severe ocp ]
`define MA_core__prot_sys__errVect_trig__errVector_ch1__a 'h0125
`define MA_core__prot_sys__errVect_trig__errVector_ch1__len 5
`define MA_core__prot_sys__errVect_trig__errVector_ch1__mask 'h1f
`define MA_core__prot_sys__errVect_trig__errVector_ch1__shift 0
`define MA_core__prot_sys__errVect_trig__errVector_ch1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_trig__errVector_all__0---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
`define MA_core__prot_sys__errVect_trig__errVector_all__0__a 'h0126
`define MA_core__prot_sys__errVect_trig__errVector_all__0__len 8
`define MA_core__prot_sys__errVect_trig__errVector_all__0__mask 'hff
`define MA_core__prot_sys__errVect_trig__errVector_all__0__shift 0
`define MA_core__prot_sys__errVect_trig__errVector_all__0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_trig__errVector_all__1---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
`define MA_core__prot_sys__errVect_trig__errVector_all__1__a 'h0127
`define MA_core__prot_sys__errVect_trig__errVector_all__1__len 7
`define MA_core__prot_sys__errVect_trig__errVector_all__1__mask 'h7f
`define MA_core__prot_sys__errVect_trig__errVector_all__1__shift 0
`define MA_core__prot_sys__errVect_trig__errVector_all__1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errTrig_trigged---
// High if error trigger system has triggered (**hidden**)
`define MA_core__prot_sys__errTrig_trigged__a 'h0128
`define MA_core__prot_sys__errTrig_trigged__len 1
`define MA_core__prot_sys__errTrig_trigged__mask 'h01
`define MA_core__prot_sys__errTrig_trigged__shift 0
`define MA_core__prot_sys__errTrig_trigged__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errLatch_state0---
// High if ch0 error high-Z latch is active (locked) (**public**)
`define MA_core__prot_sys__errLatch_state0__a 'h0128
`define MA_core__prot_sys__errLatch_state0__len 1
`define MA_core__prot_sys__errLatch_state0__mask 'h02
`define MA_core__prot_sys__errLatch_state0__shift 1
`define MA_core__prot_sys__errLatch_state0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errLatch_state1---
// High if ch1 error high-Z latch is active (locked) (**public**)
`define MA_core__prot_sys__errLatch_state1__a 'h0128
`define MA_core__prot_sys__errLatch_state1__len 1
`define MA_core__prot_sys__errLatch_state1__mask 'h04
`define MA_core__prot_sys__errLatch_state1__shift 2
`define MA_core__prot_sys__errLatch_state1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__otp__dc_prot_mode_fast---
// Set high for debug-mode (fast-acting) DC protection.
`define MA_core__prot_sys__otp__dc_prot_mode_fast__a 'h00c8
`define MA_core__prot_sys__otp__dc_prot_mode_fast__len 1
`define MA_core__prot_sys__otp__dc_prot_mode_fast__mask 'h10
`define MA_core__prot_sys__otp__dc_prot_mode_fast__shift 4
`define MA_core__prot_sys__otp__dc_prot_mode_fast__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__otp__dc_trip_level---
// DC protection timeout level
`define MA_core__prot_sys__otp__dc_trip_level__a 'h00c8
`define MA_core__prot_sys__otp__dc_trip_level__len 3
`define MA_core__prot_sys__otp__dc_trip_level__mask 'he0
`define MA_core__prot_sys__otp__dc_trip_level__shift 5
`define MA_core__prot_sys__otp__dc_trip_level__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch0---
// [ clip_stuck dc vcf_err ocp_severe ocp ] <-- clip_stuck is hidden
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch0__a 'h010a
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch0__len 5
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch0__mask 'h1f
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch0__shift 0
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch0__reset 'h0f

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch1---
// [ clip_stuck dc vcf_err ocp_severe ocp ]
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch1__a 'h010b
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch1__len 5
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch1__mask 'h1f
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch1__shift 0
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch1__reset 'h0f

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__0---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__0__a 'h010c
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__0__len 8
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__0__mask 'hff
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__0__shift 0
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__0__reset 'h77

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__1---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__1__a 'h010d
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__1__len 7
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__1__mask 'h7f
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__1__shift 0
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pchg_en---
// High to enable Cfly precharge resistors in channel
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pchg_en__a 'h010e
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pchg_en__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pchg_en__mask 'h01
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pchg_en__shift 0
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pchg_en__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_ser_rapidFire---
// High to channel gate driver serial links
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_ser_rapidFire__a 'h010e
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_ser_rapidFire__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_ser_rapidFire__mask 'h02
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_ser_rapidFire__shift 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_ser_rapidFire__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_reduceVol---
// High to request a channel volume reduction
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_reduceVol__a 'h010e
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_reduceVol__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_reduceVol__mask 'h08
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_reduceVol__shift 3
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_mute---
// High to force channel mute
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_mute__a 'h010e
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_mute__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_mute__mask 'h10
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_mute__shift 4
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_mute__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_dp_cont_force---
// High to force continuous gate driver level shifter signaling for channel
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_dp_cont_force__a 'h010e
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_dp_cont_force__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_dp_cont_force__mask 'h20
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_dp_cont_force__shift 5
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_dp_cont_force__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dis_lf_clip_rec---
// High to force off channel clip recovery (in loop filter)
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dis_lf_clip_rec__a 'h010e
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dis_lf_clip_rec__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dis_lf_clip_rec__mask 'h40
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dis_lf_clip_rec__shift 6
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dis_lf_clip_rec__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_powerMode_max---
// High to for max. Power Mode for channel
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_powerMode_max__a 'h010e
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_powerMode_max__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_powerMode_max__mask 'h80
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_powerMode_max__shift 7
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_powerMode_max__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action0---
// Custom handle for DSP interaction
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action0__a 'h010f
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action1---
// Custom handle for DSP interaction
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action1__a 'h010f
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action2---
// Custom handle for DSP interaction
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action2__a 'h010f
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action3---
// Custom handle for DSP interaction
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action3__a 'h010f
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddMode---
// High to force chip to enter "low-Pvdd" operation
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddMode__a 'h0110
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddMode__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddMode__mask 'h01
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddMode__shift 0
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowTmode---
// High to force chip to enter "temp-temperature" operation
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowTmode__a 'h0110
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowTmode__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowTmode__mask 'h02
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowTmode__shift 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddTmode---
// High to force chip to enter "low Pvdd and temperature" operation
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddTmode__a 'h0110
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddTmode__mask 'h04
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddTmode__shift 2
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action0---
// Custom handle for DSP interaction
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action0__a 'h0110
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action0__mask 'h08
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action0__shift 3
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action1---
// Custom handle for DSP interaction
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action1__a 'h0110
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action1__mask 'h10
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action1__shift 4
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action2---
// Custom handle for DSP interaction
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action2__a 'h0110
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action2__mask 'h20
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action2__shift 5
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action3---
// Custom handle for DSP interaction
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action3__a 'h0110
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action3__mask 'h40
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action3__shift 6
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__dsp_err0_action__reduceVol__a 'h00fa
`define MA_core__prot_sys__reg__dsp_err0_action__reduceVol__len 1
`define MA_core__prot_sys__reg__dsp_err0_action__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__dsp_err0_action__reduceVol__shift 0
`define MA_core__prot_sys__reg__dsp_err0_action__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__dsp_err0_action__mute_short__a 'h00fa
`define MA_core__prot_sys__reg__dsp_err0_action__mute_short__len 1
`define MA_core__prot_sys__reg__dsp_err0_action__mute_short__mask 'h02
`define MA_core__prot_sys__reg__dsp_err0_action__mute_short__shift 1
`define MA_core__prot_sys__reg__dsp_err0_action__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err0_action__ser_rapidFire_short__a 'h00fa
`define MA_core__prot_sys__reg__dsp_err0_action__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__dsp_err0_action__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__dsp_err0_action__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__dsp_err0_action__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err0_action__gd_dp_cont_short__a 'h00fa
`define MA_core__prot_sys__reg__dsp_err0_action__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__dsp_err0_action__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__dsp_err0_action__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__dsp_err0_action__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err0_action__dis_lf_clip_rec_short__a 'h00fa
`define MA_core__prot_sys__reg__dsp_err0_action__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__dsp_err0_action__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__dsp_err0_action__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__dsp_err0_action__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action0__a 'h00fb
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action1__a 'h00fb
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action2__a 'h00fb
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action3__a 'h00fb
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__dsp_err1_action__reduceVol__a 'h00fc
`define MA_core__prot_sys__reg__dsp_err1_action__reduceVol__len 1
`define MA_core__prot_sys__reg__dsp_err1_action__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__dsp_err1_action__reduceVol__shift 0
`define MA_core__prot_sys__reg__dsp_err1_action__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__dsp_err1_action__mute_short__a 'h00fc
`define MA_core__prot_sys__reg__dsp_err1_action__mute_short__len 1
`define MA_core__prot_sys__reg__dsp_err1_action__mute_short__mask 'h02
`define MA_core__prot_sys__reg__dsp_err1_action__mute_short__shift 1
`define MA_core__prot_sys__reg__dsp_err1_action__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err1_action__ser_rapidFire_short__a 'h00fc
`define MA_core__prot_sys__reg__dsp_err1_action__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__dsp_err1_action__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__dsp_err1_action__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__dsp_err1_action__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err1_action__gd_dp_cont_short__a 'h00fc
`define MA_core__prot_sys__reg__dsp_err1_action__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__dsp_err1_action__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__dsp_err1_action__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__dsp_err1_action__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err1_action__dis_lf_clip_rec_short__a 'h00fc
`define MA_core__prot_sys__reg__dsp_err1_action__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__dsp_err1_action__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__dsp_err1_action__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__dsp_err1_action__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action0__a 'h00fd
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action1__a 'h00fd
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action2__a 'h00fd
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action3__a 'h00fd
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__dsp_err2_action__reduceVol__a 'h00fe
`define MA_core__prot_sys__reg__dsp_err2_action__reduceVol__len 1
`define MA_core__prot_sys__reg__dsp_err2_action__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__dsp_err2_action__reduceVol__shift 0
`define MA_core__prot_sys__reg__dsp_err2_action__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__dsp_err2_action__mute_short__a 'h00fe
`define MA_core__prot_sys__reg__dsp_err2_action__mute_short__len 1
`define MA_core__prot_sys__reg__dsp_err2_action__mute_short__mask 'h02
`define MA_core__prot_sys__reg__dsp_err2_action__mute_short__shift 1
`define MA_core__prot_sys__reg__dsp_err2_action__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err2_action__ser_rapidFire_short__a 'h00fe
`define MA_core__prot_sys__reg__dsp_err2_action__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__dsp_err2_action__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__dsp_err2_action__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__dsp_err2_action__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err2_action__gd_dp_cont_short__a 'h00fe
`define MA_core__prot_sys__reg__dsp_err2_action__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__dsp_err2_action__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__dsp_err2_action__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__dsp_err2_action__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err2_action__dis_lf_clip_rec_short__a 'h00fe
`define MA_core__prot_sys__reg__dsp_err2_action__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__dsp_err2_action__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__dsp_err2_action__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__dsp_err2_action__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action0__a 'h00ff
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action1__a 'h00ff
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action2__a 'h00ff
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action3__a 'h00ff
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__dsp_err3_action__reduceVol__a 'h0100
`define MA_core__prot_sys__reg__dsp_err3_action__reduceVol__len 1
`define MA_core__prot_sys__reg__dsp_err3_action__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__dsp_err3_action__reduceVol__shift 0
`define MA_core__prot_sys__reg__dsp_err3_action__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__dsp_err3_action__mute_short__a 'h0100
`define MA_core__prot_sys__reg__dsp_err3_action__mute_short__len 1
`define MA_core__prot_sys__reg__dsp_err3_action__mute_short__mask 'h02
`define MA_core__prot_sys__reg__dsp_err3_action__mute_short__shift 1
`define MA_core__prot_sys__reg__dsp_err3_action__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err3_action__ser_rapidFire_short__a 'h0100
`define MA_core__prot_sys__reg__dsp_err3_action__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__dsp_err3_action__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__dsp_err3_action__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__dsp_err3_action__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err3_action__gd_dp_cont_short__a 'h0100
`define MA_core__prot_sys__reg__dsp_err3_action__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__dsp_err3_action__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__dsp_err3_action__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__dsp_err3_action__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err3_action__dis_lf_clip_rec_short__a 'h0100
`define MA_core__prot_sys__reg__dsp_err3_action__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__dsp_err3_action__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__dsp_err3_action__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__dsp_err3_action__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action0__a 'h0101
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action1__a 'h0101
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action2__a 'h0101
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action3__a 'h0101
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__errTrig_action__reduceVol__a 'h0102
`define MA_core__prot_sys__reg__errTrig_action__reduceVol__len 1
`define MA_core__prot_sys__reg__errTrig_action__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__errTrig_action__reduceVol__shift 0
`define MA_core__prot_sys__reg__errTrig_action__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__errTrig_action__mute_short__a 'h0102
`define MA_core__prot_sys__reg__errTrig_action__mute_short__len 1
`define MA_core__prot_sys__reg__errTrig_action__mute_short__mask 'h02
`define MA_core__prot_sys__reg__errTrig_action__mute_short__shift 1
`define MA_core__prot_sys__reg__errTrig_action__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__errTrig_action__ser_rapidFire_short__a 'h0102
`define MA_core__prot_sys__reg__errTrig_action__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__errTrig_action__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__errTrig_action__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__errTrig_action__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__errTrig_action__gd_dp_cont_short__a 'h0102
`define MA_core__prot_sys__reg__errTrig_action__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__errTrig_action__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__errTrig_action__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__errTrig_action__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__errTrig_action__dis_lf_clip_rec_short__a 'h0102
`define MA_core__prot_sys__reg__errTrig_action__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__errTrig_action__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__errTrig_action__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__errTrig_action__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action0__a 'h0103
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action1__a 'h0103
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action2__a 'h0103
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action3__a 'h0103
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_acc_ocp_ch0---
// Channel-0 OCP flag accumulator register			[q3b q2b q1b q0b q3a q2a q1a q0a]
`define MA_core__prot_sys__errVect_acc_ocp_ch0__a 'h0129
`define MA_core__prot_sys__errVect_acc_ocp_ch0__len 8
`define MA_core__prot_sys__errVect_acc_ocp_ch0__mask 'hff
`define MA_core__prot_sys__errVect_acc_ocp_ch0__shift 0
`define MA_core__prot_sys__errVect_acc_ocp_ch0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_acc_ocp_ch1---
// Channel-1 OCP flag accumulator register			[q3b q2b q1b q0b q3a q2a q1a q0a]
`define MA_core__prot_sys__errVect_acc_ocp_ch1__a 'h012a
`define MA_core__prot_sys__errVect_acc_ocp_ch1__len 8
`define MA_core__prot_sys__errVect_acc_ocp_ch1__mask 'hff
`define MA_core__prot_sys__errVect_acc_ocp_ch1__shift 0
`define MA_core__prot_sys__errVect_acc_ocp_ch1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_trig_ocp_ch0---
// Channel-0 OCP flag trigger-time register			[q3b q2b q1b q0b q3a q2a q1a q0a]
`define MA_core__prot_sys__errVect_trig_ocp_ch0__a 'h012b
`define MA_core__prot_sys__errVect_trig_ocp_ch0__len 8
`define MA_core__prot_sys__errVect_trig_ocp_ch0__mask 'hff
`define MA_core__prot_sys__errVect_trig_ocp_ch0__shift 0
`define MA_core__prot_sys__errVect_trig_ocp_ch0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_trig_ocp_ch1---
// Channel-1 OCP flag trigger-time register			[q3b q2b q1b q0b q3a q2a q1a q0a]
`define MA_core__prot_sys__errVect_trig_ocp_ch1__a 'h012c
`define MA_core__prot_sys__errVect_trig_ocp_ch1__len 8
`define MA_core__prot_sys__errVect_trig_ocp_ch1__mask 'hff
`define MA_core__prot_sys__errVect_trig_ocp_ch1__shift 0
`define MA_core__prot_sys__errVect_trig_ocp_ch1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_acc_vcf_ch0---
// Channel-0 Vcfly error flag accumulator register		[ov_b uv_b ob_a uv_a]
`define MA_core__prot_sys__errVect_acc_vcf_ch0__a 'h012d
`define MA_core__prot_sys__errVect_acc_vcf_ch0__len 4
`define MA_core__prot_sys__errVect_acc_vcf_ch0__mask 'h0f
`define MA_core__prot_sys__errVect_acc_vcf_ch0__shift 0
`define MA_core__prot_sys__errVect_acc_vcf_ch0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_acc_vcf_ch1---
// Channel-1 Vcfly error flag accumulator register		[ov_b uv_b ob_a uv_a
`define MA_core__prot_sys__errVect_acc_vcf_ch1__a 'h012d
`define MA_core__prot_sys__errVect_acc_vcf_ch1__len 4
`define MA_core__prot_sys__errVect_acc_vcf_ch1__mask 'hf0
`define MA_core__prot_sys__errVect_acc_vcf_ch1__shift 4
`define MA_core__prot_sys__errVect_acc_vcf_ch1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_trig_vcf_ch0---
// Channel-0 Vcfly error flag trigger-time register	[ov_b uv_b ob_a uv_a
`define MA_core__prot_sys__errVect_trig_vcf_ch0__a 'h012e
`define MA_core__prot_sys__errVect_trig_vcf_ch0__len 4
`define MA_core__prot_sys__errVect_trig_vcf_ch0__mask 'h0f
`define MA_core__prot_sys__errVect_trig_vcf_ch0__shift 0
`define MA_core__prot_sys__errVect_trig_vcf_ch0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__errVect_trig_vcf_ch1---
// Channel-1 Vcfly error flag trigger-time register	[ov_b uv_b ob_a uv_a
`define MA_core__prot_sys__errVect_trig_vcf_ch1__a 'h012e
`define MA_core__prot_sys__errVect_trig_vcf_ch1__len 4
`define MA_core__prot_sys__errVect_trig_vcf_ch1__mask 'hf0
`define MA_core__prot_sys__errVect_trig_vcf_ch1__shift 4
`define MA_core__prot_sys__errVect_trig_vcf_ch1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__otp__pb_protMode_lowlow---
// "Protection mode" behavior of power stage; "0"=>high-Z, "1"=>low-low
`define MA_core__prot_sys__otp__pb_protMode_lowlow__a 'h00c0
`define MA_core__prot_sys__otp__pb_protMode_lowlow__len 1
`define MA_core__prot_sys__otp__pb_protMode_lowlow__mask 'h01
`define MA_core__prot_sys__otp__pb_protMode_lowlow__shift 0
`define MA_core__prot_sys__otp__pb_protMode_lowlow__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_short---
// Trigger "short" protection state for all channel half bridges
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_short__a 'h00d3
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_short__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_short__mask 'h10
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_short__shift 4
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_short__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_long---
// Trigger "long" protection state for all channel half bridges
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_long__a 'h00d3
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_long__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_long__mask 'h20
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_long__shift 5
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_long__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_semi---
// Trigger latched protection state for channel half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_semi__a 'h00d3
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_semi__mask 'h40
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_semi__shift 6
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_perma---
// Trigger latched protection state for channel half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_perma__a 'h00d3
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_perma__mask 'h80
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_perma__shift 7
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_semi__a 'h00d5
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_perma__a 'h00d5
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_short---
// Trigger "short" protection state for all channel half bridges
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_short__a 'h00d7
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_short__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_short__mask 'h10
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_short__shift 4
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_long---
// Trigger "long" protection state for all channel half bridges
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_long__a 'h00d7
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_long__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_long__mask 'h20
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_long__shift 5
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_long__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_semi---
// Trigger latched protection state for channel half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_semi__a 'h00d7
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_semi__mask 'h40
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_semi__shift 6
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_semi__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_perma---
// Trigger latched protection state for channel half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_perma__a 'h00d7
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_perma__mask 'h80
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_perma__shift 7
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_semi__a 'h00d9
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_perma__a 'h00d9
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_short---
// Trigger "short" protection state for all channel half bridges
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_short__a 'h00db
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_short__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_short__mask 'h10
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_short__shift 4
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_long---
// Trigger "long" protection state for all channel half bridges
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_long__a 'h00db
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_long__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_long__mask 'h20
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_long__shift 5
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_long__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_semi---
// Trigger latched protection state for channel half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_semi__a 'h00db
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_semi__mask 'h40
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_semi__shift 6
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_perma---
// Trigger latched protection state for channel half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_perma__a 'h00db
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_perma__mask 'h80
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_perma__shift 7
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_semi__a 'h00dd
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_perma__a 'h00dd
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_short---
// Trigger "short" protection state for all channel half bridges
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_short__a 'h00df
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_short__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_short__mask 'h10
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_short__shift 4
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_long---
// Trigger "long" protection state for all channel half bridges
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_long__a 'h00df
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_long__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_long__mask 'h20
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_long__shift 5
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_long__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_semi---
// Trigger latched protection state for channel half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_semi__a 'h00df
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_semi__mask 'h40
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_semi__shift 6
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_semi__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_perma---
// Trigger latched protection state for channel half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_perma__a 'h00df
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_perma__mask 'h80
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_perma__shift 7
`define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_semi__a 'h00e1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_perma__a 'h00e1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_short---
// Trigger "short" protection state for all channel half bridges
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_short__a 'h00e3
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_short__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_short__mask 'h10
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_short__shift 4
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_long---
// Trigger "long" protection state for all channel half bridges
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_long__a 'h00e3
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_long__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_long__mask 'h20
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_long__shift 5
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_long__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_semi---
// Trigger latched protection state for channel half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_semi__a 'h00e3
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_semi__mask 'h40
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_semi__shift 6
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_perma---
// Trigger latched protection state for channel half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_perma__a 'h00e3
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_perma__mask 'h80
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_perma__shift 7
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_semi__a 'h00e5
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_perma__a 'h00e5
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__otw_action__pb_prot_latch_semi__a 'h00e7
`define MA_core__prot_sys__reg__otw_action__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__otw_action__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__otw_action__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__otw_action__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__otw_action__pb_prot_latch_perma__a 'h00e7
`define MA_core__prot_sys__reg__otw_action__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__otw_action__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__otw_action__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__otw_action__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__ote_action__pb_prot_latch_semi__a 'h00e9
`define MA_core__prot_sys__reg__ote_action__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__ote_action__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__ote_action__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__ote_action__pb_prot_latch_semi__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__ote_action__pb_prot_latch_perma__a 'h00e9
`define MA_core__prot_sys__reg__ote_action__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__ote_action__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__ote_action__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__ote_action__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_semi__a 'h00eb
`define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_perma__a 'h00eb
`define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_semi__a 'h00ed
`define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_perma__a 'h00ed
`define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_semi__a 'h00f1
`define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_semi__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_perma__a 'h00f1
`define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_semi__a 'h00f3
`define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_perma__a 'h00f3
`define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_semi__a 'h00f5
`define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_perma__a 'h00f5
`define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_semi__a 'h00f7
`define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_perma__a 'h00f7
`define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_semi__a 'h00f9
`define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_perma__a 'h00f9
`define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_semi__a 'h00fb
`define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_perma__a 'h00fb
`define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_semi__a 'h00fd
`define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_perma__a 'h00fd
`define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_semi__a 'h00ff
`define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_perma__a 'h00ff
`define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_semi__a 'h0101
`define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_perma__a 'h0101
`define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_semi__a 'h0103
`define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_semi__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_perma__a 'h0103
`define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_perma__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pb_prot_force---
// High to force protection state for full bridge Q0...7
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pb_prot_force__a 'h010e
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pb_prot_force__len 1
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pb_prot_force__mask 'h04
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pb_prot_force__shift 2
`define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pb_prot_force__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__otp__ote_thr---
// Over-temperature error threshold; 1 degree-C per step, 0 at -50 degree-C
`define MA_core__prot_sys__otp__ote_thr__a 'h00c5
`define MA_core__prot_sys__otp__ote_thr__len 8
`define MA_core__prot_sys__otp__ote_thr__mask 'hff
`define MA_core__prot_sys__otp__ote_thr__shift 0
`define MA_core__prot_sys__otp__ote_thr__reset 'haf

//------------------------------------------------------------------------------core__prot_sys__otp__otw_thr---
// Over-temperature warning threshold; 1 degree-C per step, 0 at -50 degree-C
`define MA_core__prot_sys__otp__otw_thr__a 'h00c6
`define MA_core__prot_sys__otp__otw_thr__len 8
`define MA_core__prot_sys__otp__otw_thr__mask 'hff
`define MA_core__prot_sys__otp__otw_thr__shift 0
`define MA_core__prot_sys__otp__otw_thr__reset 'ha5

//------------------------------------------------------------------------------core__prot_sys__otp__ot_thr_hyst---
// Overtemperature wanrning and error hysteresis
`define MA_core__prot_sys__otp__ot_thr_hyst__a 'h00c7
`define MA_core__prot_sys__otp__ot_thr_hyst__len 8
`define MA_core__prot_sys__otp__ot_thr_hyst__mask 'hff
`define MA_core__prot_sys__otp__ot_thr_hyst__shift 0
`define MA_core__prot_sys__otp__ot_thr_hyst__reset 'h05

//------------------------------------------------------------------------------core__prot_sys__otp__Pvdd_low_thr---
// Low-Pvdd warning treshold, 125 mV step per LSB
`define MA_core__prot_sys__otp__Pvdd_low_thr__a 'h00c9
`define MA_core__prot_sys__otp__Pvdd_low_thr__len 8
`define MA_core__prot_sys__otp__Pvdd_low_thr__mask 'hff
`define MA_core__prot_sys__otp__Pvdd_low_thr__shift 0
`define MA_core__prot_sys__otp__Pvdd_low_thr__reset 'h40

//------------------------------------------------------------------------------core__prot_sys__otp__Pvdd_low_thr_hyst---
// Low-Pvdd warning treshold hysteresis, 125 mV step per LSB
`define MA_core__prot_sys__otp__Pvdd_low_thr_hyst__a 'h00ca
`define MA_core__prot_sys__otp__Pvdd_low_thr_hyst__len 8
`define MA_core__prot_sys__otp__Pvdd_low_thr_hyst__mask 'hff
`define MA_core__prot_sys__otp__Pvdd_low_thr_hyst__shift 0
`define MA_core__prot_sys__otp__Pvdd_low_thr_hyst__reset 'h08

//------------------------------------------------------------------------------core__prot_sys__otp__ltw_thr---
// Low-temperature warning threshold; 1 degree-C per step, 0 at -50 degree-C
`define MA_core__prot_sys__otp__ltw_thr__a 'h00cd
`define MA_core__prot_sys__otp__ltw_thr__len 8
`define MA_core__prot_sys__otp__ltw_thr__mask 'hff
`define MA_core__prot_sys__otp__ltw_thr__shift 0
`define MA_core__prot_sys__otp__ltw_thr__reset 'h28

//------------------------------------------------------------------------------core__prot_sys__otp__lt_thr_hyst---
// Low-temperature warning threshold hysteresis
`define MA_core__prot_sys__otp__lt_thr_hyst__a 'h00ce
`define MA_core__prot_sys__otp__lt_thr_hyst__len 8
`define MA_core__prot_sys__otp__lt_thr_hyst__mask 'hff
`define MA_core__prot_sys__otp__lt_thr_hyst__shift 0
`define MA_core__prot_sys__otp__lt_thr_hyst__reset 'h05

//------------------------------------------------------------------------------core__prot_sys__otp__Pvdd_high_thr---
// High-Pvdd warning treshold, 125 mV step per LSB
`define MA_core__prot_sys__otp__Pvdd_high_thr__a 'h00cb
`define MA_core__prot_sys__otp__Pvdd_high_thr__len 8
`define MA_core__prot_sys__otp__Pvdd_high_thr__mask 'hff
`define MA_core__prot_sys__otp__Pvdd_high_thr__shift 0
`define MA_core__prot_sys__otp__Pvdd_high_thr__reset 'hac

//------------------------------------------------------------------------------core__prot_sys__otp__Pvdd_high_thr_hyst---
// High-Pvdd warning treshold hysteresis, 125 mV step per LSB
`define MA_core__prot_sys__otp__Pvdd_high_thr_hyst__a 'h00cc
`define MA_core__prot_sys__otp__Pvdd_high_thr_hyst__len 8
`define MA_core__prot_sys__otp__Pvdd_high_thr_hyst__mask 'hff
`define MA_core__prot_sys__otp__Pvdd_high_thr_hyst__shift 0
`define MA_core__prot_sys__otp__Pvdd_high_thr_hyst__reset 'h08

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
`define MA_core__prot_sys__reg__pvdd_high_action__reduceVol__a 'h00ee
`define MA_core__prot_sys__reg__pvdd_high_action__reduceVol__len 1
`define MA_core__prot_sys__reg__pvdd_high_action__reduceVol__mask 'h01
`define MA_core__prot_sys__reg__pvdd_high_action__reduceVol__shift 0
`define MA_core__prot_sys__reg__pvdd_high_action__reduceVol__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
`define MA_core__prot_sys__reg__pvdd_high_action__mute_short__a 'h00ee
`define MA_core__prot_sys__reg__pvdd_high_action__mute_short__len 1
`define MA_core__prot_sys__reg__pvdd_high_action__mute_short__mask 'h02
`define MA_core__prot_sys__reg__pvdd_high_action__mute_short__shift 1
`define MA_core__prot_sys__reg__pvdd_high_action__mute_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_high_action__ser_rapidFire_short__a 'h00ee
`define MA_core__prot_sys__reg__pvdd_high_action__ser_rapidFire_short__len 1
`define MA_core__prot_sys__reg__pvdd_high_action__ser_rapidFire_short__mask 'h04
`define MA_core__prot_sys__reg__pvdd_high_action__ser_rapidFire_short__shift 2
`define MA_core__prot_sys__reg__pvdd_high_action__ser_rapidFire_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_high_action__gd_dp_cont_short__a 'h00ee
`define MA_core__prot_sys__reg__pvdd_high_action__gd_dp_cont_short__len 1
`define MA_core__prot_sys__reg__pvdd_high_action__gd_dp_cont_short__mask 'h08
`define MA_core__prot_sys__reg__pvdd_high_action__gd_dp_cont_short__shift 3
`define MA_core__prot_sys__reg__pvdd_high_action__gd_dp_cont_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_high_action__dis_lf_clip_rec_short__a 'h00ee
`define MA_core__prot_sys__reg__pvdd_high_action__dis_lf_clip_rec_short__len 1
`define MA_core__prot_sys__reg__pvdd_high_action__dis_lf_clip_rec_short__mask 'h10
`define MA_core__prot_sys__reg__pvdd_high_action__dis_lf_clip_rec_short__shift 4
`define MA_core__prot_sys__reg__pvdd_high_action__dis_lf_clip_rec_short__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action0__a 'h00ef
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action0__len 1
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action0__mask 'h01
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action0__shift 0
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action0__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action1__a 'h00ef
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action1__len 1
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action1__mask 'h02
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action1__shift 1
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action1__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action2__a 'h00ef
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action2__len 1
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action2__mask 'h04
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action2__shift 2
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action2__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action3__a 'h00ef
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action3__len 1
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action3__mask 'h08
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action3__shift 3
`define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action3__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
`define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_semi__a 'h00ef
`define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_semi__len 1
`define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_semi__mask 'h10
`define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_semi__shift 4
`define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_semi__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
`define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_perma__a 'h00ef
`define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_perma__len 1
`define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_perma__mask 'h20
`define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_perma__shift 5
`define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_perma__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddMode__a 'h00d4
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddMode__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowTmode__a 'h00d4
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowTmode__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowTmode__shift 6
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddTmode__a 'h00d4
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddMode__a 'h00d8
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddMode__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowTmode__a 'h00d8
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowTmode__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowTmode__shift 6
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddTmode__a 'h00d8
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddMode__a 'h00dc
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddMode__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowTmode__a 'h00dc
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowTmode__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowTmode__shift 6
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddTmode__a 'h00dc
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddMode__a 'h00e0
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddMode__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowTmode__a 'h00e0
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowTmode__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowTmode__shift 6
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddTmode__a 'h00e0
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddMode__a 'h00e4
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddMode__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowTmode__a 'h00e4
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowTmode__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowTmode__shift 6
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddTmode__a 'h00e4
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__otw_action__lowPvddMode__a 'h00e6
`define MA_core__prot_sys__reg__otw_action__lowPvddMode__len 1
`define MA_core__prot_sys__reg__otw_action__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__otw_action__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__otw_action__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__otw_action__lowTmode__a 'h00e6
`define MA_core__prot_sys__reg__otw_action__lowTmode__len 1
`define MA_core__prot_sys__reg__otw_action__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__otw_action__lowTmode__shift 6
`define MA_core__prot_sys__reg__otw_action__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__otw_action__lowPvddTmode__a 'h00e6
`define MA_core__prot_sys__reg__otw_action__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__otw_action__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__otw_action__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__otw_action__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__ote_action__lowPvddMode__a 'h00e8
`define MA_core__prot_sys__reg__ote_action__lowPvddMode__len 1
`define MA_core__prot_sys__reg__ote_action__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__ote_action__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__ote_action__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__ote_action__lowTmode__a 'h00e8
`define MA_core__prot_sys__reg__ote_action__lowTmode__len 1
`define MA_core__prot_sys__reg__ote_action__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__ote_action__lowTmode__shift 6
`define MA_core__prot_sys__reg__ote_action__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__ote_action__lowPvddTmode__a 'h00e8
`define MA_core__prot_sys__reg__ote_action__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__ote_action__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__ote_action__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__ote_action__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddMode__a 'h00ea
`define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddMode__len 1
`define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_uv_action__lowTmode__a 'h00ea
`define MA_core__prot_sys__reg__pvdd_uv_action__lowTmode__len 1
`define MA_core__prot_sys__reg__pvdd_uv_action__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__pvdd_uv_action__lowTmode__shift 6
`define MA_core__prot_sys__reg__pvdd_uv_action__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddTmode__a 'h00ea
`define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_low_action__lowPvddMode__a 'h00ec
`define MA_core__prot_sys__reg__pvdd_low_action__lowPvddMode__len 1
`define MA_core__prot_sys__reg__pvdd_low_action__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__pvdd_low_action__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__pvdd_low_action__lowPvddMode__reset 'h01

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_low_action__lowTmode__a 'h00ec
`define MA_core__prot_sys__reg__pvdd_low_action__lowTmode__len 1
`define MA_core__prot_sys__reg__pvdd_low_action__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__pvdd_low_action__lowTmode__shift 6
`define MA_core__prot_sys__reg__pvdd_low_action__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_low_action__lowPvddTmode__a 'h00ec
`define MA_core__prot_sys__reg__pvdd_low_action__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__pvdd_low_action__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__pvdd_low_action__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__pvdd_low_action__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_high_action__lowPvddMode__a 'h00ee
`define MA_core__prot_sys__reg__pvdd_high_action__lowPvddMode__len 1
`define MA_core__prot_sys__reg__pvdd_high_action__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__pvdd_high_action__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__pvdd_high_action__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_high_action__lowTmode__a 'h00ee
`define MA_core__prot_sys__reg__pvdd_high_action__lowTmode__len 1
`define MA_core__prot_sys__reg__pvdd_high_action__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__pvdd_high_action__lowTmode__shift 6
`define MA_core__prot_sys__reg__pvdd_high_action__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_high_action__lowPvddTmode__a 'h00ee
`define MA_core__prot_sys__reg__pvdd_high_action__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__pvdd_high_action__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__pvdd_high_action__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__pvdd_high_action__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddMode__a 'h00f0
`define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddMode__len 1
`define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_ov_action__lowTmode__a 'h00f0
`define MA_core__prot_sys__reg__pvdd_ov_action__lowTmode__len 1
`define MA_core__prot_sys__reg__pvdd_ov_action__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__pvdd_ov_action__lowTmode__shift 6
`define MA_core__prot_sys__reg__pvdd_ov_action__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddTmode__a 'h00f0
`define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__no_clock_action__lowPvddMode__a 'h00f2
`define MA_core__prot_sys__reg__no_clock_action__lowPvddMode__len 1
`define MA_core__prot_sys__reg__no_clock_action__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__no_clock_action__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__no_clock_action__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__no_clock_action__lowTmode__a 'h00f2
`define MA_core__prot_sys__reg__no_clock_action__lowTmode__len 1
`define MA_core__prot_sys__reg__no_clock_action__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__no_clock_action__lowTmode__shift 6
`define MA_core__prot_sys__reg__no_clock_action__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__no_clock_action__lowPvddTmode__a 'h00f2
`define MA_core__prot_sys__reg__no_clock_action__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__no_clock_action__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__no_clock_action__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__no_clock_action__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__no_audio_action__lowPvddMode__a 'h00f4
`define MA_core__prot_sys__reg__no_audio_action__lowPvddMode__len 1
`define MA_core__prot_sys__reg__no_audio_action__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__no_audio_action__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__no_audio_action__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__no_audio_action__lowTmode__a 'h00f4
`define MA_core__prot_sys__reg__no_audio_action__lowTmode__len 1
`define MA_core__prot_sys__reg__no_audio_action__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__no_audio_action__lowTmode__shift 6
`define MA_core__prot_sys__reg__no_audio_action__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__no_audio_action__lowPvddTmode__a 'h00f4
`define MA_core__prot_sys__reg__no_audio_action__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__no_audio_action__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__no_audio_action__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__no_audio_action__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__temp_low_action__lowPvddMode__a 'h00f6
`define MA_core__prot_sys__reg__temp_low_action__lowPvddMode__len 1
`define MA_core__prot_sys__reg__temp_low_action__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__temp_low_action__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__temp_low_action__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__temp_low_action__lowTmode__a 'h00f6
`define MA_core__prot_sys__reg__temp_low_action__lowTmode__len 1
`define MA_core__prot_sys__reg__temp_low_action__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__temp_low_action__lowTmode__shift 6
`define MA_core__prot_sys__reg__temp_low_action__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__temp_low_action__lowPvddTmode__a 'h00f6
`define MA_core__prot_sys__reg__temp_low_action__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__temp_low_action__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__temp_low_action__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__temp_low_action__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__pvddT_low_action__lowPvddMode__a 'h00f8
`define MA_core__prot_sys__reg__pvddT_low_action__lowPvddMode__len 1
`define MA_core__prot_sys__reg__pvddT_low_action__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__pvddT_low_action__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__pvddT_low_action__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__pvddT_low_action__lowTmode__a 'h00f8
`define MA_core__prot_sys__reg__pvddT_low_action__lowTmode__len 1
`define MA_core__prot_sys__reg__pvddT_low_action__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__pvddT_low_action__lowTmode__shift 6
`define MA_core__prot_sys__reg__pvddT_low_action__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__pvddT_low_action__lowPvddTmode__a 'h00f8
`define MA_core__prot_sys__reg__pvddT_low_action__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__pvddT_low_action__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__pvddT_low_action__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__pvddT_low_action__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err0_action__lowPvddMode__a 'h00fa
`define MA_core__prot_sys__reg__dsp_err0_action__lowPvddMode__len 1
`define MA_core__prot_sys__reg__dsp_err0_action__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__dsp_err0_action__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__dsp_err0_action__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err0_action__lowTmode__a 'h00fa
`define MA_core__prot_sys__reg__dsp_err0_action__lowTmode__len 1
`define MA_core__prot_sys__reg__dsp_err0_action__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__dsp_err0_action__lowTmode__shift 6
`define MA_core__prot_sys__reg__dsp_err0_action__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err0_action__lowPvddTmode__a 'h00fa
`define MA_core__prot_sys__reg__dsp_err0_action__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__dsp_err0_action__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__dsp_err0_action__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__dsp_err0_action__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err1_action__lowPvddMode__a 'h00fc
`define MA_core__prot_sys__reg__dsp_err1_action__lowPvddMode__len 1
`define MA_core__prot_sys__reg__dsp_err1_action__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__dsp_err1_action__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__dsp_err1_action__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err1_action__lowTmode__a 'h00fc
`define MA_core__prot_sys__reg__dsp_err1_action__lowTmode__len 1
`define MA_core__prot_sys__reg__dsp_err1_action__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__dsp_err1_action__lowTmode__shift 6
`define MA_core__prot_sys__reg__dsp_err1_action__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err1_action__lowPvddTmode__a 'h00fc
`define MA_core__prot_sys__reg__dsp_err1_action__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__dsp_err1_action__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__dsp_err1_action__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__dsp_err1_action__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err2_action__lowPvddMode__a 'h00fe
`define MA_core__prot_sys__reg__dsp_err2_action__lowPvddMode__len 1
`define MA_core__prot_sys__reg__dsp_err2_action__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__dsp_err2_action__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__dsp_err2_action__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err2_action__lowTmode__a 'h00fe
`define MA_core__prot_sys__reg__dsp_err2_action__lowTmode__len 1
`define MA_core__prot_sys__reg__dsp_err2_action__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__dsp_err2_action__lowTmode__shift 6
`define MA_core__prot_sys__reg__dsp_err2_action__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err2_action__lowPvddTmode__a 'h00fe
`define MA_core__prot_sys__reg__dsp_err2_action__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__dsp_err2_action__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__dsp_err2_action__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__dsp_err2_action__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err3_action__lowPvddMode__a 'h0100
`define MA_core__prot_sys__reg__dsp_err3_action__lowPvddMode__len 1
`define MA_core__prot_sys__reg__dsp_err3_action__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__dsp_err3_action__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__dsp_err3_action__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err3_action__lowTmode__a 'h0100
`define MA_core__prot_sys__reg__dsp_err3_action__lowTmode__len 1
`define MA_core__prot_sys__reg__dsp_err3_action__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__dsp_err3_action__lowTmode__shift 6
`define MA_core__prot_sys__reg__dsp_err3_action__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__dsp_err3_action__lowPvddTmode__a 'h0100
`define MA_core__prot_sys__reg__dsp_err3_action__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__dsp_err3_action__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__dsp_err3_action__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__dsp_err3_action__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__errTrig_action__lowPvddMode__a 'h0102
`define MA_core__prot_sys__reg__errTrig_action__lowPvddMode__len 1
`define MA_core__prot_sys__reg__errTrig_action__lowPvddMode__mask 'h20
`define MA_core__prot_sys__reg__errTrig_action__lowPvddMode__shift 5
`define MA_core__prot_sys__reg__errTrig_action__lowPvddMode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__errTrig_action__lowTmode__a 'h0102
`define MA_core__prot_sys__reg__errTrig_action__lowTmode__len 1
`define MA_core__prot_sys__reg__errTrig_action__lowTmode__mask 'h40
`define MA_core__prot_sys__reg__errTrig_action__lowTmode__shift 6
`define MA_core__prot_sys__reg__errTrig_action__lowTmode__reset 'h00

//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
`define MA_core__prot_sys__reg__errTrig_action__lowPvddTmode__a 'h0102
`define MA_core__prot_sys__reg__errTrig_action__lowPvddTmode__len 1
`define MA_core__prot_sys__reg__errTrig_action__lowPvddTmode__mask 'h80
`define MA_core__prot_sys__reg__errTrig_action__lowPvddTmode__shift 7
`define MA_core__prot_sys__reg__errTrig_action__lowPvddTmode__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__pa_rtrim---
// Resistor trim code for countering R*C process variation
`define MA_core__pa_hw__otp__pa_rtrim__a 'h0140
`define MA_core__pa_hw__otp__pa_rtrim__len 4
`define MA_core__pa_hw__otp__pa_rtrim__mask 'h0f
`define MA_core__pa_hw__otp__pa_rtrim__shift 0
`define MA_core__pa_hw__otp__pa_rtrim__reset 'h08

//------------------------------------------------------------------------------core__pa_hw__otp__afir_vcmo_set---
// AFIR-DAC output common-mode operating point selection
`define MA_core__pa_hw__otp__afir_vcmo_set__a 'h0140
`define MA_core__pa_hw__otp__afir_vcmo_set__len 4
`define MA_core__pa_hw__otp__afir_vcmo_set__mask 'hf0
`define MA_core__pa_hw__otp__afir_vcmo_set__shift 4
`define MA_core__pa_hw__otp__afir_vcmo_set__reset 'h0b

//------------------------------------------------------------------------------core__pa_hw__otp__pb_dp_len---
// Level shifter pulse length setup
`define MA_core__pa_hw__otp__pb_dp_len__a 'h0141
`define MA_core__pa_hw__otp__pb_dp_len__len 2
`define MA_core__pa_hw__otp__pb_dp_len__mask 'h03
`define MA_core__pa_hw__otp__pb_dp_len__shift 0
`define MA_core__pa_hw__otp__pb_dp_len__reset 'h02

//------------------------------------------------------------------------------core__pa_hw__otp__force_dp_cont---
// Level shifter continuous-pulse forcing handle
`define MA_core__pa_hw__otp__force_dp_cont__a 'h0141
`define MA_core__pa_hw__otp__force_dp_cont__len 1
`define MA_core__pa_hw__otp__force_dp_cont__mask 'h04
`define MA_core__pa_hw__otp__force_dp_cont__shift 2
`define MA_core__pa_hw__otp__force_dp_cont__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__unmute_cnt---
// Unmute-mode delay from release request to actual unmute. 100us/1ms/10ms/100ms per step.
`define MA_core__pa_hw__otp__unmute_cnt__a 'h0142
`define MA_core__pa_hw__otp__unmute_cnt__len 4
`define MA_core__pa_hw__otp__unmute_cnt__mask 'h0f
`define MA_core__pa_hw__otp__unmute_cnt__shift 0
`define MA_core__pa_hw__otp__unmute_cnt__reset 'h03

//------------------------------------------------------------------------------core__pa_hw__otp__afir_pchg_cnt---
// AFIR startup bias filter precharge duration. 100us per step.
`define MA_core__pa_hw__otp__afir_pchg_cnt__a 'h0142
`define MA_core__pa_hw__otp__afir_pchg_cnt__len 4
`define MA_core__pa_hw__otp__afir_pchg_cnt__mask 'hf0
`define MA_core__pa_hw__otp__afir_pchg_cnt__shift 4
`define MA_core__pa_hw__otp__afir_pchg_cnt__reset 'h04

//------------------------------------------------------------------------------core__pa_hw__otp__cmctrl_pvddShift---
// Pvdd measurement scaling factor for DAC CM control machine.
`define MA_core__pa_hw__otp__cmctrl_pvddShift__a 'h0143
`define MA_core__pa_hw__otp__cmctrl_pvddShift__len 3
`define MA_core__pa_hw__otp__cmctrl_pvddShift__mask 'h07
`define MA_core__pa_hw__otp__cmctrl_pvddShift__shift 0
`define MA_core__pa_hw__otp__cmctrl_pvddShift__reset 'h02

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__0__sdm_d_thres---
// PWM-SDM output duty cycle setting where 3-level and 2-level operation intersect, if dac_ternary_en = 1.
`define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_thres__a 'h0144
`define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_thres__len 4
`define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_thres__mask 'h0f
`define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_thres__shift 0
`define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_thres__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__0__sdm_d_cm_fxd---
// Fixed PWM-SDM output common-mode level setting if dac_use_cmadj = 0.
`define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_cm_fxd__a 'h0144
`define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_cm_fxd__len 4
`define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_cm_fxd__mask 'hf0
`define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_cm_fxd__shift 4
`define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_cm_fxd__reset 'h08

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__0__cmadj_k1---
// Pvdd-prop. factor for calc of d_cm for dac_use_cmadj = 1.
`define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k1__a 'h0146
`define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k1__len 6
`define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k1__mask 'h3f
`define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k1__shift 0
`define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k1__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__0__dac_ternary_en---
// High to use ternary-mode AFIR.
`define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_ternary_en__a 'h0146
`define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_ternary_en__len 1
`define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_ternary_en__mask 'h40
`define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_ternary_en__shift 6
`define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_ternary_en__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__0__dac_use_cmadj---
// High to use Pvdd-based control of AFIR CM current level.
`define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_use_cmadj__a 'h0146
`define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_use_cmadj__len 1
`define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_use_cmadj__mask 'h80
`define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_use_cmadj__shift 7
`define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_use_cmadj__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__1__sdm_d_thres---
// PWM-SDM output duty cycle setting where 3-level and 2-level operation intersect, if dac_ternary_en = 1.
`define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_thres__a 'h0147
`define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_thres__len 4
`define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_thres__mask 'h0f
`define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_thres__shift 0
`define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_thres__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__1__sdm_d_cm_fxd---
// Fixed PWM-SDM output common-mode level setting if dac_use_cmadj = 0.
`define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_cm_fxd__a 'h0147
`define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_cm_fxd__len 4
`define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_cm_fxd__mask 'hf0
`define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_cm_fxd__shift 4
`define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_cm_fxd__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__1__cmadj_k1---
// Pvdd-prop. factor for calc of d_cm for dac_use_cmadj = 1.
`define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k1__a 'h0149
`define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k1__len 6
`define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k1__mask 'h3f
`define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k1__shift 0
`define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k1__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__1__dac_ternary_en---
// High to use ternary-mode AFIR.
`define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_ternary_en__a 'h0149
`define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_ternary_en__len 1
`define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_ternary_en__mask 'h40
`define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_ternary_en__shift 6
`define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_ternary_en__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__1__dac_use_cmadj---
// High to use Pvdd-based control of AFIR CM current level.
`define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_use_cmadj__a 'h0149
`define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_use_cmadj__len 1
`define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_use_cmadj__mask 'h80
`define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_use_cmadj__shift 7
`define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_use_cmadj__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__2__sdm_d_thres---
// PWM-SDM output duty cycle setting where 3-level and 2-level operation intersect, if dac_ternary_en = 1.
`define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_thres__a 'h014a
`define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_thres__len 4
`define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_thres__mask 'h0f
`define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_thres__shift 0
`define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_thres__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__2__sdm_d_cm_fxd---
// Fixed PWM-SDM output common-mode level setting if dac_use_cmadj = 0.
`define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_cm_fxd__a 'h014a
`define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_cm_fxd__len 4
`define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_cm_fxd__mask 'hf0
`define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_cm_fxd__shift 4
`define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_cm_fxd__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__2__cmadj_k1---
// Pvdd-prop. factor for calc of d_cm for dac_use_cmadj = 1.
`define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k1__a 'h014c
`define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k1__len 6
`define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k1__mask 'h3f
`define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k1__shift 0
`define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k1__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__2__dac_ternary_en---
// High to use ternary-mode AFIR.
`define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_ternary_en__a 'h014c
`define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_ternary_en__len 1
`define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_ternary_en__mask 'h40
`define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_ternary_en__shift 6
`define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_ternary_en__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__2__dac_use_cmadj---
// High to use Pvdd-based control of AFIR CM current level.
`define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_use_cmadj__a 'h014c
`define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_use_cmadj__len 1
`define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_use_cmadj__mask 'h80
`define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_use_cmadj__shift 7
`define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_use_cmadj__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__3__sdm_d_thres---
// PWM-SDM output duty cycle setting where 3-level and 2-level operation intersect, if dac_ternary_en = 1.
`define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_thres__a 'h014d
`define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_thres__len 4
`define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_thres__mask 'h0f
`define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_thres__shift 0
`define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_thres__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__3__sdm_d_cm_fxd---
// Fixed PWM-SDM output common-mode level setting if dac_use_cmadj = 0.
`define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_cm_fxd__a 'h014d
`define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_cm_fxd__len 4
`define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_cm_fxd__mask 'hf0
`define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_cm_fxd__shift 4
`define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_cm_fxd__reset 'h01

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__3__cmadj_k1---
// Pvdd-prop. factor for calc of d_cm for dac_use_cmadj = 1.
`define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k1__a 'h014f
`define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k1__len 6
`define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k1__mask 'h3f
`define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k1__shift 0
`define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k1__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__3__dac_ternary_en---
// High to use ternary-mode AFIR.
`define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_ternary_en__a 'h014f
`define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_ternary_en__len 1
`define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_ternary_en__mask 'h40
`define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_ternary_en__shift 6
`define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_ternary_en__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__3__dac_use_cmadj---
// High to use Pvdd-based control of AFIR CM current level.
`define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_use_cmadj__a 'h014f
`define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_use_cmadj__len 1
`define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_use_cmadj__mask 'h80
`define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_use_cmadj__shift 7
`define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_use_cmadj__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__gd_test_mode---
// Gate drive "test mode force" vector [b1 a1 b0 a0].
`define MA_core__pa_hw__reg__gd_test_mode__a 'h0157
`define MA_core__pa_hw__reg__gd_test_mode__len 4
`define MA_core__pa_hw__reg__gd_test_mode__mask 'h0f
`define MA_core__pa_hw__reg__gd_test_mode__shift 0
`define MA_core__pa_hw__reg__gd_test_mode__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__gd_ocp_dis---
// Gate driver "ocp disable" vector    [b1 a1 b0 a0].
`define MA_core__pa_hw__reg__gd_ocp_dis__a 'h0157
`define MA_core__pa_hw__reg__gd_ocp_dis__len 4
`define MA_core__pa_hw__reg__gd_ocp_dis__mask 'hf0
`define MA_core__pa_hw__reg__gd_ocp_dis__shift 4
`define MA_core__pa_hw__reg__gd_ocp_dis__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__gd_test_cfg---
// Gate drive "test mode" configuration.
`define MA_core__pa_hw__reg__gd_test_cfg__a 'h0158
`define MA_core__pa_hw__reg__gd_test_cfg__len 2
`define MA_core__pa_hw__reg__gd_test_cfg__mask 'h03
`define MA_core__pa_hw__reg__gd_test_cfg__shift 0
`define MA_core__pa_hw__reg__gd_test_cfg__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__gd_spare_cfg---
// Gate driver spare config. bits. 		[b1 a1 b0 a0].
`define MA_core__pa_hw__reg__gd_spare_cfg__a 'h0158
`define MA_core__pa_hw__reg__gd_spare_cfg__len 4
`define MA_core__pa_hw__reg__gd_spare_cfg__mask 'h3c
`define MA_core__pa_hw__reg__gd_spare_cfg__shift 2
`define MA_core__pa_hw__reg__gd_spare_cfg__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__afir_pchg_force---
// High to force AFIR bias filter into prechage mode.
`define MA_core__pa_hw__reg__afir_pchg_force__a 'h0158
`define MA_core__pa_hw__reg__afir_pchg_force__len 1
`define MA_core__pa_hw__reg__afir_pchg_force__mask 'h40
`define MA_core__pa_hw__reg__afir_pchg_force__shift 6
`define MA_core__pa_hw__reg__afir_pchg_force__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__OTP_supply_en_force---
// High to force enable for GD refgen, to provide dvdd_5v0 for OTP read.
`define MA_core__pa_hw__reg__OTP_supply_en_force__a 'h0158
`define MA_core__pa_hw__reg__OTP_supply_en_force__len 1
`define MA_core__pa_hw__reg__OTP_supply_en_force__mask 'h80
`define MA_core__pa_hw__reg__OTP_supply_en_force__shift 7
`define MA_core__pa_hw__reg__OTP_supply_en_force__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__sw_force_reg0---
// High to force channel 0 switch control vector from register.
`define MA_core__pa_hw__reg__sw_force_reg0__a 'h0159
`define MA_core__pa_hw__reg__sw_force_reg0__len 1
`define MA_core__pa_hw__reg__sw_force_reg0__mask 'h01
`define MA_core__pa_hw__reg__sw_force_reg0__shift 0
`define MA_core__pa_hw__reg__sw_force_reg0__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__sw_force_reg1---
// High to force channel 1 switch control vector from register.
`define MA_core__pa_hw__reg__sw_force_reg1__a 'h0159
`define MA_core__pa_hw__reg__sw_force_reg1__len 1
`define MA_core__pa_hw__reg__sw_force_reg1__mask 'h02
`define MA_core__pa_hw__reg__sw_force_reg1__shift 1
`define MA_core__pa_hw__reg__sw_force_reg1__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__gd_pchg_force---
// Gate driver "force precharge to reg setting" vector [b1 a1 b0 a0];
`define MA_core__pa_hw__reg__gd_pchg_force__a 'h0159
`define MA_core__pa_hw__reg__gd_pchg_force__len 4
`define MA_core__pa_hw__reg__gd_pchg_force__mask 'h3c
`define MA_core__pa_hw__reg__gd_pchg_force__shift 2
`define MA_core__pa_hw__reg__gd_pchg_force__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__clip_rec_dis_force0---
// High to force specific register value of ch 0 clip recovery disable bit.
`define MA_core__pa_hw__reg__clip_rec_dis_force0__a 'h0159
`define MA_core__pa_hw__reg__clip_rec_dis_force0__len 1
`define MA_core__pa_hw__reg__clip_rec_dis_force0__mask 'h40
`define MA_core__pa_hw__reg__clip_rec_dis_force0__shift 6
`define MA_core__pa_hw__reg__clip_rec_dis_force0__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__clip_rec_dis_force1---
// High to force specific register value of ch 0 clip recovery disable bit.
`define MA_core__pa_hw__reg__clip_rec_dis_force1__a 'h0159
`define MA_core__pa_hw__reg__clip_rec_dis_force1__len 1
`define MA_core__pa_hw__reg__clip_rec_dis_force1__mask 'h80
`define MA_core__pa_hw__reg__clip_rec_dis_force1__shift 7
`define MA_core__pa_hw__reg__clip_rec_dis_force1__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__sw_a0_reg---
// Channel 0, bridge A switch control vector for "register force".
`define MA_core__pa_hw__reg__sw_a0_reg__a 'h015a
`define MA_core__pa_hw__reg__sw_a0_reg__len 4
`define MA_core__pa_hw__reg__sw_a0_reg__mask 'h0f
`define MA_core__pa_hw__reg__sw_a0_reg__shift 0
`define MA_core__pa_hw__reg__sw_a0_reg__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__sw_b0_reg---
// Channel 0, bridge B switch control vector for "register force".
`define MA_core__pa_hw__reg__sw_b0_reg__a 'h015a
`define MA_core__pa_hw__reg__sw_b0_reg__len 4
`define MA_core__pa_hw__reg__sw_b0_reg__mask 'hf0
`define MA_core__pa_hw__reg__sw_b0_reg__shift 4
`define MA_core__pa_hw__reg__sw_b0_reg__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__sw_a1_reg---
// Channel 1, bridge A switch control vector for "register force".
`define MA_core__pa_hw__reg__sw_a1_reg__a 'h015b
`define MA_core__pa_hw__reg__sw_a1_reg__len 4
`define MA_core__pa_hw__reg__sw_a1_reg__mask 'h0f
`define MA_core__pa_hw__reg__sw_a1_reg__shift 0
`define MA_core__pa_hw__reg__sw_a1_reg__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__sw_b1_reg---
// Channel 1, bridge B switch control vector for "register force".
`define MA_core__pa_hw__reg__sw_b1_reg__a 'h015b
`define MA_core__pa_hw__reg__sw_b1_reg__len 4
`define MA_core__pa_hw__reg__sw_b1_reg__mask 'hf0
`define MA_core__pa_hw__reg__sw_b1_reg__shift 4
`define MA_core__pa_hw__reg__sw_b1_reg__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__gd_pchg_reg---
// Gate driver prechage settings vector for reg. force. [b1 a1 b0 a0];
`define MA_core__pa_hw__reg__gd_pchg_reg__a 'h015c
`define MA_core__pa_hw__reg__gd_pchg_reg__len 4
`define MA_core__pa_hw__reg__gd_pchg_reg__mask 'h0f
`define MA_core__pa_hw__reg__gd_pchg_reg__shift 0
`define MA_core__pa_hw__reg__gd_pchg_reg__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__clip_rec_dis_reg0---
// "Register force" value of channel 0 lf_clip_rec_dis bit.
`define MA_core__pa_hw__reg__clip_rec_dis_reg0__a 'h015c
`define MA_core__pa_hw__reg__clip_rec_dis_reg0__len 1
`define MA_core__pa_hw__reg__clip_rec_dis_reg0__mask 'h10
`define MA_core__pa_hw__reg__clip_rec_dis_reg0__shift 4
`define MA_core__pa_hw__reg__clip_rec_dis_reg0__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__clip_rec_dis_reg1---
// "Register force" value of channel 1 lf_clip_rec_dis bit.
`define MA_core__pa_hw__reg__clip_rec_dis_reg1__a 'h015c
`define MA_core__pa_hw__reg__clip_rec_dis_reg1__len 1
`define MA_core__pa_hw__reg__clip_rec_dis_reg1__mask 'h20
`define MA_core__pa_hw__reg__clip_rec_dis_reg1__shift 5
`define MA_core__pa_hw__reg__clip_rec_dis_reg1__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__status_ch0---
// Amplifier channel 0 status; 3: Muted BTL, 4: Unmuting BTL, 5: Playing BTL, 6: Muted PBTL master, 7: Unmuting PBTL master, 8: Playing PBTL master, Others: Disabled
`define MA_core__pa_hw__status_ch0__a 'h015e
`define MA_core__pa_hw__status_ch0__len 4
`define MA_core__pa_hw__status_ch0__mask 'h0f
`define MA_core__pa_hw__status_ch0__shift 0
`define MA_core__pa_hw__status_ch0__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__status_ch1---
// Amplifier channel 1 status; 1: Disabled PBTL slave, 2: Enabled PBTL slave, 3: Muted BTL, 4: Unmuting BTL, 5: Playing BTL, Others: Disabled
`define MA_core__pa_hw__status_ch1__a 'h015e
`define MA_core__pa_hw__status_ch1__len 4
`define MA_core__pa_hw__status_ch1__mask 'hf0
`define MA_core__pa_hw__status_ch1__shift 4
`define MA_core__pa_hw__status_ch1__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__pwmClkDiv_base---
// Base PWM frequency divider setting, nominally "10". (For 4.096MHz base.)
`define MA_core__pa_hw__otp__pwmClkDiv_base__a 'h0150
`define MA_core__pa_hw__otp__pwmClkDiv_base__len 2
`define MA_core__pa_hw__otp__pwmClkDiv_base__mask 'h06
`define MA_core__pa_hw__otp__pwmClkDiv_base__shift 1
`define MA_core__pa_hw__otp__pwmClkDiv_base__reset 'h02

//------------------------------------------------------------------------------core__pa_hw__otp__cmctrl_hyst---
// Hysteresis in DAC CM control machine
`define MA_core__pa_hw__otp__cmctrl_hyst__a 'h0143
`define MA_core__pa_hw__otp__cmctrl_hyst__len 4
`define MA_core__pa_hw__otp__cmctrl_hyst__mask 'h78
`define MA_core__pa_hw__otp__cmctrl_hyst__shift 3
`define MA_core__pa_hw__otp__cmctrl_hyst__reset 'h02

//------------------------------------------------------------------------------core__pa_hw__otp__clk_chop_32kHz---
// Low (default) to use 64kHz chop clock, otherwise 32kHz is selected.
`define MA_core__pa_hw__otp__clk_chop_32kHz__a 'h0154
`define MA_core__pa_hw__otp__clk_chop_32kHz__len 1
`define MA_core__pa_hw__otp__clk_chop_32kHz__mask 'h80
`define MA_core__pa_hw__otp__clk_chop_32kHz__shift 7
`define MA_core__pa_hw__otp__clk_chop_32kHz__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__afir_force_disable0---
// High to force disable of AFIR in channel 0.
`define MA_core__pa_hw__reg__afir_force_disable0__a 'h015d
`define MA_core__pa_hw__reg__afir_force_disable0__len 1
`define MA_core__pa_hw__reg__afir_force_disable0__mask 'h01
`define MA_core__pa_hw__reg__afir_force_disable0__shift 0
`define MA_core__pa_hw__reg__afir_force_disable0__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__afir_force_disable1---
// High to force disable of AFIR in channel 1.
`define MA_core__pa_hw__reg__afir_force_disable1__a 'h015d
`define MA_core__pa_hw__reg__afir_force_disable1__len 1
`define MA_core__pa_hw__reg__afir_force_disable1__mask 'h02
`define MA_core__pa_hw__reg__afir_force_disable1__shift 1
`define MA_core__pa_hw__reg__afir_force_disable1__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__lf_force_disable0---
// High to force disable of loop filter in channel 0.
`define MA_core__pa_hw__reg__lf_force_disable0__a 'h015d
`define MA_core__pa_hw__reg__lf_force_disable0__len 1
`define MA_core__pa_hw__reg__lf_force_disable0__mask 'h04
`define MA_core__pa_hw__reg__lf_force_disable0__shift 2
`define MA_core__pa_hw__reg__lf_force_disable0__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__lf_force_disable1---
// High to force disable of loop filter in channel 1.
`define MA_core__pa_hw__reg__lf_force_disable1__a 'h015d
`define MA_core__pa_hw__reg__lf_force_disable1__len 1
`define MA_core__pa_hw__reg__lf_force_disable1__mask 'h08
`define MA_core__pa_hw__reg__lf_force_disable1__shift 3
`define MA_core__pa_hw__reg__lf_force_disable1__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__pwm_force_disable0---
// High to force disable of PWM in channel 0.
`define MA_core__pa_hw__reg__pwm_force_disable0__a 'h015d
`define MA_core__pa_hw__reg__pwm_force_disable0__len 1
`define MA_core__pa_hw__reg__pwm_force_disable0__mask 'h10
`define MA_core__pa_hw__reg__pwm_force_disable0__shift 4
`define MA_core__pa_hw__reg__pwm_force_disable0__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__pwm_force_disable1---
// High to force disable of PWM in channel 1.
`define MA_core__pa_hw__reg__pwm_force_disable1__a 'h015d
`define MA_core__pa_hw__reg__pwm_force_disable1__len 1
`define MA_core__pa_hw__reg__pwm_force_disable1__mask 'h20
`define MA_core__pa_hw__reg__pwm_force_disable1__shift 5
`define MA_core__pa_hw__reg__pwm_force_disable1__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__gd_pd_strong---
// Gate driver strong pull down enable vector [b1 a1 b0 a0].
`define MA_core__pa_hw__otp__gd_pd_strong__a 'h0155
`define MA_core__pa_hw__otp__gd_pd_strong__len 4
`define MA_core__pa_hw__otp__gd_pd_strong__mask 'h0f
`define MA_core__pa_hw__otp__gd_pd_strong__shift 0
`define MA_core__pa_hw__otp__gd_pd_strong__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__gd_ser_clk_div---
// Gate driver serial link clock frequency setting. 00: 6MHz, 01: 3MHz, 10: 2MHz (default), 11: 1.5MHz [rev2]
`define MA_core__pa_hw__otp__gd_ser_clk_div__a 'h0155
`define MA_core__pa_hw__otp__gd_ser_clk_div__len 2
`define MA_core__pa_hw__otp__gd_ser_clk_div__mask 'h30
`define MA_core__pa_hw__otp__gd_ser_clk_div__shift 4
`define MA_core__pa_hw__otp__gd_ser_clk_div__reset 'h02

//------------------------------------------------------------------------------core__pa_hw__otp__bal_ipol_upd_del---
// Delay from GD serial link update to PWM Vcfly Ipol post-processing sampling. 00: 120ns (default), 01: 480ns, 10: 800ns, 11: 1000ns [rev2]
`define MA_core__pa_hw__otp__bal_ipol_upd_del__a 'h0155
`define MA_core__pa_hw__otp__bal_ipol_upd_del__len 2
`define MA_core__pa_hw__otp__bal_ipol_upd_del__mask 'hc0
`define MA_core__pa_hw__otp__bal_ipol_upd_del__shift 6
`define MA_core__pa_hw__otp__bal_ipol_upd_del__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__gd_ramp_up_cnt---
// Delay from PB enable to first GD serial update. 00: 100us, 01: 500us, 10: 1ms, 11: 5ms [rev2]
`define MA_core__pa_hw__otp__gd_ramp_up_cnt__a 'h0156
`define MA_core__pa_hw__otp__gd_ramp_up_cnt__len 2
`define MA_core__pa_hw__otp__gd_ramp_up_cnt__mask 'h03
`define MA_core__pa_hw__otp__gd_ramp_up_cnt__shift 0
`define MA_core__pa_hw__otp__gd_ramp_up_cnt__reset 'h01

//------------------------------------------------------------------------------core__pa_hw__reg__gd_ser_bist_sel---
// Select GD feedback line to use for BIST comparison [b1 a1 b0 a0]
`define MA_core__pa_hw__reg__gd_ser_bist_sel__a 'h015d
`define MA_core__pa_hw__reg__gd_ser_bist_sel__len 2
`define MA_core__pa_hw__reg__gd_ser_bist_sel__mask 'hc0
`define MA_core__pa_hw__reg__gd_ser_bist_sel__shift 6
`define MA_core__pa_hw__reg__gd_ser_bist_sel__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__gd_ser_bist_status---
// 
`define MA_core__pa_hw__gd_ser_bist_status__a 'h015f
`define MA_core__pa_hw__gd_ser_bist_status__len 4
`define MA_core__pa_hw__gd_ser_bist_status__mask 'h0f
`define MA_core__pa_hw__gd_ser_bist_status__shift 0
`define MA_core__pa_hw__gd_ser_bist_status__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__0__cmadj_k0---
// Constant-part of calculation of Pvdd-based d_cm for dac_use_cmadj = 1.
`define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k0__a 'h0145
`define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k0__len 4
`define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k0__mask 'h0f
`define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k0__shift 0
`define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k0__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__1__cmadj_k0---
// Constant-part of calculation of Pvdd-based d_cm for dac_use_cmadj = 1.
`define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k0__a 'h0148
`define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k0__len 4
`define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k0__mask 'h0f
`define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k0__shift 0
`define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k0__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__2__cmadj_k0---
// Constant-part of calculation of Pvdd-based d_cm for dac_use_cmadj = 1.
`define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k0__a 'h014b
`define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k0__len 4
`define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k0__mask 'h0f
`define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k0__shift 0
`define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k0__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__3__cmadj_k0---
// Constant-part of calculation of Pvdd-based d_cm for dac_use_cmadj = 1.
`define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k0__a 'h014e
`define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k0__len 4
`define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k0__mask 'h0f
`define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k0__shift 0
`define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k0__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__freerun_en---
// disable pwm synchronization to sync,										  default: '0'
`define MA_core__pa_hw__otp__freerun_en__a 'h0150
`define MA_core__pa_hw__otp__freerun_en__len 1
`define MA_core__pa_hw__otp__freerun_en__mask 'h01
`define MA_core__pa_hw__otp__freerun_en__shift 0
`define MA_core__pa_hw__otp__freerun_en__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__clk_pwm_phase---
// phase of derived clock (clk_pwm_base_4m096_o),							  default: "000"
`define MA_core__pa_hw__otp__clk_pwm_phase__a 'h0150
`define MA_core__pa_hw__otp__clk_pwm_phase__len 2
`define MA_core__pa_hw__otp__clk_pwm_phase__mask 'h18
`define MA_core__pa_hw__otp__clk_pwm_phase__shift 3
`define MA_core__pa_hw__otp__clk_pwm_phase__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__clk_pwm_invert---
// invert derived clock (clk_pwm_base_4m096),								  default: '0'
`define MA_core__pa_hw__otp__clk_pwm_invert__a 'h0150
`define MA_core__pa_hw__otp__clk_pwm_invert__len 1
`define MA_core__pa_hw__otp__clk_pwm_invert__mask 'h20
`define MA_core__pa_hw__otp__clk_pwm_invert__shift 5
`define MA_core__pa_hw__otp__clk_pwm_invert__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__clk_cp_phase_ls---
// phase (least significant) of derived clock (clk_cp_base_2m048_o),  default: "000"
`define MA_core__pa_hw__otp__clk_cp_phase_ls__a 'h0150
`define MA_core__pa_hw__otp__clk_cp_phase_ls__len 2
`define MA_core__pa_hw__otp__clk_cp_phase_ls__mask 'hc0
`define MA_core__pa_hw__otp__clk_cp_phase_ls__shift 6
`define MA_core__pa_hw__otp__clk_cp_phase_ls__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__clk_cp_phase_ms---
// phase (most significant) of derived clock (clk_cp_base_2m048_o),	 default: '0'
`define MA_core__pa_hw__otp__clk_cp_phase_ms__a 'h0151
`define MA_core__pa_hw__otp__clk_cp_phase_ms__len 1
`define MA_core__pa_hw__otp__clk_cp_phase_ms__mask 'h01
`define MA_core__pa_hw__otp__clk_cp_phase_ms__shift 0
`define MA_core__pa_hw__otp__clk_cp_phase_ms__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__clk_cp_invert---
// invert derived clock (clk_cp_base_2m048_o),								 default: '0'
`define MA_core__pa_hw__otp__clk_cp_invert__a 'h0151
`define MA_core__pa_hw__otp__clk_cp_invert__len 1
`define MA_core__pa_hw__otp__clk_cp_invert__mask 'h02
`define MA_core__pa_hw__otp__clk_cp_invert__shift 1
`define MA_core__pa_hw__otp__clk_cp_invert__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__cp_sync_phase---
// phase of sync tick on clk_cp,													 default: "000000"
`define MA_core__pa_hw__otp__cp_sync_phase__a 'h0151
`define MA_core__pa_hw__otp__cp_sync_phase__len 6
`define MA_core__pa_hw__otp__cp_sync_phase__mask 'hfc
`define MA_core__pa_hw__otp__cp_sync_phase__shift 2
`define MA_core__pa_hw__otp__cp_sync_phase__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__pwm_phase---
// phase delay of pwm signals in clk_pwm (4MHz) cycles
`define MA_core__pa_hw__otp__pwm_phase__a 'h0153
`define MA_core__pa_hw__otp__pwm_phase__len 7
`define MA_core__pa_hw__otp__pwm_phase__mask 'h7f
`define MA_core__pa_hw__otp__pwm_phase__shift 0
`define MA_core__pa_hw__otp__pwm_phase__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__pwm_ch1_phase---
// phase of ch1 pwm signals relative to ch0 in clk_pwm (4MHz) cycles
`define MA_core__pa_hw__otp__pwm_ch1_phase__a 'h0154
`define MA_core__pa_hw__otp__pwm_ch1_phase__len 7
`define MA_core__pa_hw__otp__pwm_ch1_phase__mask 'h7f
`define MA_core__pa_hw__otp__pwm_ch1_phase__shift 0
`define MA_core__pa_hw__otp__pwm_ch1_phase__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__reg__force_acfg_update---
// Trigger an update of the DCU related acfg register on each flip.
`define MA_core__pa_hw__reg__force_acfg_update__a 'h015c
`define MA_core__pa_hw__reg__force_acfg_update__len 1
`define MA_core__pa_hw__reg__force_acfg_update__mask 'h40
`define MA_core__pa_hw__reg__force_acfg_update__shift 6
`define MA_core__pa_hw__reg__force_acfg_update__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__gd_ref_sync_phase---
// phase of sync tick on clk_pwm,												 default: "0000000"
`define MA_core__pa_hw__otp__gd_ref_sync_phase__a 'h0152
`define MA_core__pa_hw__otp__gd_ref_sync_phase__len 7
`define MA_core__pa_hw__otp__gd_ref_sync_phase__mask 'h7f
`define MA_core__pa_hw__otp__gd_ref_sync_phase__shift 0
`define MA_core__pa_hw__otp__gd_ref_sync_phase__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__gd_dVdt_min---
// Minimum allowable value for the gate driver dV/dt setting [rev2]
`define MA_core__pa_hw__otp__gd_dVdt_min__a 'h0156
`define MA_core__pa_hw__otp__gd_dVdt_min__len 2
`define MA_core__pa_hw__otp__gd_dVdt_min__mask 'h0c
`define MA_core__pa_hw__otp__gd_dVdt_min__shift 2
`define MA_core__pa_hw__otp__gd_dVdt_min__reset 'h00

//------------------------------------------------------------------------------core__pa_hw__otp__gd_dVdt_max---
// Maximum allowable value for the gate driver dV/dt setting [rev2]
`define MA_core__pa_hw__otp__gd_dVdt_max__a 'h0156
`define MA_core__pa_hw__otp__gd_dVdt_max__len 2
`define MA_core__pa_hw__otp__gd_dVdt_max__mask 'h30
`define MA_core__pa_hw__otp__gd_dVdt_max__shift 4
`define MA_core__pa_hw__otp__gd_dVdt_max__reset 'h03

//------------------------------------------------------------------------------core__clk_sys__enable_dco_ow---
// 
`define MA_core__clk_sys__enable_dco_ow__a 'h0180
`define MA_core__clk_sys__enable_dco_ow__len 1
`define MA_core__clk_sys__enable_dco_ow__mask 'h01
`define MA_core__clk_sys__enable_dco_ow__shift 0
`define MA_core__clk_sys__enable_dco_ow__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__enable_dco---
// 
`define MA_core__clk_sys__enable_dco__a 'h0180
`define MA_core__clk_sys__enable_dco__len 1
`define MA_core__clk_sys__enable_dco__mask 'h02
`define MA_core__clk_sys__enable_dco__shift 1
`define MA_core__clk_sys__enable_dco__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_enable_ow_single_bits---
// 
`define MA_core__clk_sys__dco_enable_ow_single_bits__a 'h0180
`define MA_core__clk_sys__dco_enable_ow_single_bits__len 1
`define MA_core__clk_sys__dco_enable_ow_single_bits__mask 'h04
`define MA_core__clk_sys__dco_enable_ow_single_bits__shift 2
`define MA_core__clk_sys__dco_enable_ow_single_bits__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_bias_enable_single_bit---
// 
`define MA_core__clk_sys__dco_bias_enable_single_bit__a 'h0180
`define MA_core__clk_sys__dco_bias_enable_single_bit__len 1
`define MA_core__clk_sys__dco_bias_enable_single_bit__mask 'h08
`define MA_core__clk_sys__dco_bias_enable_single_bit__shift 3
`define MA_core__clk_sys__dco_bias_enable_single_bit__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_core_bias_enable_single_bit---
// 
`define MA_core__clk_sys__dco_core_bias_enable_single_bit__a 'h0180
`define MA_core__clk_sys__dco_core_bias_enable_single_bit__len 1
`define MA_core__clk_sys__dco_core_bias_enable_single_bit__mask 'h10
`define MA_core__clk_sys__dco_core_bias_enable_single_bit__shift 4
`define MA_core__clk_sys__dco_core_bias_enable_single_bit__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_core_enable_single_bit---
// 
`define MA_core__clk_sys__dco_core_enable_single_bit__a 'h0180
`define MA_core__clk_sys__dco_core_enable_single_bit__len 1
`define MA_core__clk_sys__dco_core_enable_single_bit__mask 'h20
`define MA_core__clk_sys__dco_core_enable_single_bit__shift 5
`define MA_core__clk_sys__dco_core_enable_single_bit__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_clk_enable_single_bit---
// 
`define MA_core__clk_sys__dco_clk_enable_single_bit__a 'h0180
`define MA_core__clk_sys__dco_clk_enable_single_bit__len 1
`define MA_core__clk_sys__dco_clk_enable_single_bit__mask 'h40
`define MA_core__clk_sys__dco_clk_enable_single_bit__shift 6
`define MA_core__clk_sys__dco_clk_enable_single_bit__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dpll_enable_ow---
// 
`define MA_core__clk_sys__dpll_enable_ow__a 'h0181
`define MA_core__clk_sys__dpll_enable_ow__len 1
`define MA_core__clk_sys__dpll_enable_ow__mask 'h01
`define MA_core__clk_sys__dpll_enable_ow__shift 0
`define MA_core__clk_sys__dpll_enable_ow__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dpll_enable---
// 
`define MA_core__clk_sys__dpll_enable__a 'h0181
`define MA_core__clk_sys__dpll_enable__len 1
`define MA_core__clk_sys__dpll_enable__mask 'h02
`define MA_core__clk_sys__dpll_enable__shift 1
`define MA_core__clk_sys__dpll_enable__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dpll_sleep_ow---
// 
`define MA_core__clk_sys__dpll_sleep_ow__a 'h0182
`define MA_core__clk_sys__dpll_sleep_ow__len 1
`define MA_core__clk_sys__dpll_sleep_ow__mask 'h40
`define MA_core__clk_sys__dpll_sleep_ow__shift 6
`define MA_core__clk_sys__dpll_sleep_ow__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dpll_sleep---
// 
`define MA_core__clk_sys__dpll_sleep__a 'h0182
`define MA_core__clk_sys__dpll_sleep__len 1
`define MA_core__clk_sys__dpll_sleep__mask 'h80
`define MA_core__clk_sys__dpll_sleep__shift 7
`define MA_core__clk_sys__dpll_sleep__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dpll_run_dco_free_ow---
// 
`define MA_core__clk_sys__dpll_run_dco_free_ow__a 'h0181
`define MA_core__clk_sys__dpll_run_dco_free_ow__len 1
`define MA_core__clk_sys__dpll_run_dco_free_ow__mask 'h04
`define MA_core__clk_sys__dpll_run_dco_free_ow__shift 2
`define MA_core__clk_sys__dpll_run_dco_free_ow__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dpll_run_dco_free---
// 
`define MA_core__clk_sys__dpll_run_dco_free__a 'h0181
`define MA_core__clk_sys__dpll_run_dco_free__len 1
`define MA_core__clk_sys__dpll_run_dco_free__mask 'h08
`define MA_core__clk_sys__dpll_run_dco_free__shift 3
`define MA_core__clk_sys__dpll_run_dco_free__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_trim_coarse---
// 
`define MA_core__clk_sys__dco_trim_coarse__a 'h0182
`define MA_core__clk_sys__dco_trim_coarse__len 5
`define MA_core__clk_sys__dco_trim_coarse__mask 'h1f
`define MA_core__clk_sys__dco_trim_coarse__shift 0
`define MA_core__clk_sys__dco_trim_coarse__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_trim_ow---
// 
`define MA_core__clk_sys__dco_trim_ow__a 'h0182
`define MA_core__clk_sys__dco_trim_ow__len 1
`define MA_core__clk_sys__dco_trim_ow__mask 'h20
`define MA_core__clk_sys__dco_trim_ow__shift 5
`define MA_core__clk_sys__dco_trim_ow__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_trim_fine---
// 
`define MA_core__clk_sys__dco_trim_fine__a 'h0183
`define MA_core__clk_sys__dco_trim_fine__len 6
`define MA_core__clk_sys__dco_trim_fine__mask 'h3f
`define MA_core__clk_sys__dco_trim_fine__shift 0
`define MA_core__clk_sys__dco_trim_fine__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__auto_detect_enable_ow---
// 
`define MA_core__clk_sys__auto_detect_enable_ow__a 'h0184
`define MA_core__clk_sys__auto_detect_enable_ow__len 1
`define MA_core__clk_sys__auto_detect_enable_ow__mask 'h01
`define MA_core__clk_sys__auto_detect_enable_ow__shift 0
`define MA_core__clk_sys__auto_detect_enable_ow__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__enable_auto_detect---
// 
`define MA_core__clk_sys__enable_auto_detect__a 'h0184
`define MA_core__clk_sys__enable_auto_detect__len 1
`define MA_core__clk_sys__enable_auto_detect__mask 'h02
`define MA_core__clk_sys__enable_auto_detect__shift 1
`define MA_core__clk_sys__enable_auto_detect__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__div_ow---
// 
`define MA_core__clk_sys__div_ow__a 'h0184
`define MA_core__clk_sys__div_ow__len 1
`define MA_core__clk_sys__div_ow__mask 'h04
`define MA_core__clk_sys__div_ow__shift 2
`define MA_core__clk_sys__div_ow__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__mode_m_div---
// 
`define MA_core__clk_sys__mode_m_div__a 'h0185
`define MA_core__clk_sys__mode_m_div__len 6
`define MA_core__clk_sys__mode_m_div__mask 'h3f
`define MA_core__clk_sys__mode_m_div__shift 0
`define MA_core__clk_sys__mode_m_div__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__mode_ref_div---
// 
`define MA_core__clk_sys__mode_ref_div__a 'h0185
`define MA_core__clk_sys__mode_ref_div__len 1
`define MA_core__clk_sys__mode_ref_div__mask 'h40
`define MA_core__clk_sys__mode_ref_div__shift 6
`define MA_core__clk_sys__mode_ref_div__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__mode_fb_div---
// 
`define MA_core__clk_sys__mode_fb_div__a 'h0185
`define MA_core__clk_sys__mode_fb_div__len 1
`define MA_core__clk_sys__mode_fb_div__mask 'h80
`define MA_core__clk_sys__mode_fb_div__shift 7
`define MA_core__clk_sys__mode_fb_div__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__sys_clk_div---
// 
`define MA_core__clk_sys__sys_clk_div__a 'h0186
`define MA_core__clk_sys__sys_clk_div__len 1
`define MA_core__clk_sys__sys_clk_div__mask 'h01
`define MA_core__clk_sys__sys_clk_div__shift 0
`define MA_core__clk_sys__sys_clk_div__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__i2s_frame_ow---
// 
`define MA_core__clk_sys__i2s_frame_ow__a 'h0186
`define MA_core__clk_sys__i2s_frame_ow__len 1
`define MA_core__clk_sys__i2s_frame_ow__mask 'h04
`define MA_core__clk_sys__i2s_frame_ow__shift 2
`define MA_core__clk_sys__i2s_frame_ow__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__i2s_sck_Fs_base---
// 
`define MA_core__clk_sys__i2s_sck_Fs_base__a 'h0186
`define MA_core__clk_sys__i2s_sck_Fs_base__len 2
`define MA_core__clk_sys__i2s_sck_Fs_base__mask 'h18
`define MA_core__clk_sys__i2s_sck_Fs_base__shift 3
`define MA_core__clk_sys__i2s_sck_Fs_base__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__bit_clk---
// 
`define MA_core__clk_sys__bit_clk__a 'h0188
`define MA_core__clk_sys__bit_clk__len 5
`define MA_core__clk_sys__bit_clk__mask 'h1f
`define MA_core__clk_sys__bit_clk__shift 0
`define MA_core__clk_sys__bit_clk__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_clk_ok_ow---
// 
`define MA_core__clk_sys__dco_clk_ok_ow__a 'h0189
`define MA_core__clk_sys__dco_clk_ok_ow__len 1
`define MA_core__clk_sys__dco_clk_ok_ow__mask 'h01
`define MA_core__clk_sys__dco_clk_ok_ow__shift 0
`define MA_core__clk_sys__dco_clk_ok_ow__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_clk_ok---
// 
`define MA_core__clk_sys__dco_clk_ok__a 'h0189
`define MA_core__clk_sys__dco_clk_ok__len 1
`define MA_core__clk_sys__dco_clk_ok__mask 'h02
`define MA_core__clk_sys__dco_clk_ok__shift 1
`define MA_core__clk_sys__dco_clk_ok__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__pll_locked_ow---
// 
`define MA_core__clk_sys__pll_locked_ow__a 'h0189
`define MA_core__clk_sys__pll_locked_ow__len 1
`define MA_core__clk_sys__pll_locked_ow__mask 'h04
`define MA_core__clk_sys__pll_locked_ow__shift 2
`define MA_core__clk_sys__pll_locked_ow__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__pll_locked---
// 
`define MA_core__clk_sys__pll_locked__a 'h0189
`define MA_core__clk_sys__pll_locked__len 1
`define MA_core__clk_sys__pll_locked__mask 'h08
`define MA_core__clk_sys__pll_locked__shift 3
`define MA_core__clk_sys__pll_locked__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__i2s_sck_ok_ow---
// 
`define MA_core__clk_sys__i2s_sck_ok_ow__a 'h0189
`define MA_core__clk_sys__i2s_sck_ok_ow__len 1
`define MA_core__clk_sys__i2s_sck_ok_ow__mask 'h20
`define MA_core__clk_sys__i2s_sck_ok_ow__shift 5
`define MA_core__clk_sys__i2s_sck_ok_ow__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__i2s_sck_ok---
// 
`define MA_core__clk_sys__i2s_sck_ok__a 'h0189
`define MA_core__clk_sys__i2s_sck_ok__len 1
`define MA_core__clk_sys__i2s_sck_ok__mask 'h40
`define MA_core__clk_sys__i2s_sck_ok__shift 6
`define MA_core__clk_sys__i2s_sck_ok__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__loopfilter_high_lim---
// -- 16*31 = 384
`define MA_core__clk_sys__loopfilter_high_lim__a 'h018d
`define MA_core__clk_sys__loopfilter_high_lim__len 5
`define MA_core__clk_sys__loopfilter_high_lim__mask 'h1f
`define MA_core__clk_sys__loopfilter_high_lim__shift 0
`define MA_core__clk_sys__loopfilter_high_lim__reset 'h1f

//------------------------------------------------------------------------------core__clk_sys__loopfilter_low_lim---
// -- 16* 0 =   0
`define MA_core__clk_sys__loopfilter_low_lim__a 'h018e
`define MA_core__clk_sys__loopfilter_low_lim__len 5
`define MA_core__clk_sys__loopfilter_low_lim__mask 'h1f
`define MA_core__clk_sys__loopfilter_low_lim__shift 0
`define MA_core__clk_sys__loopfilter_low_lim__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__loopfilter_reset_val---
// -- 16* X =
`define MA_core__clk_sys__loopfilter_reset_val__a 'h018f
`define MA_core__clk_sys__loopfilter_reset_val__len 5
`define MA_core__clk_sys__loopfilter_reset_val__mask 'h1f
`define MA_core__clk_sys__loopfilter_reset_val__shift 0
`define MA_core__clk_sys__loopfilter_reset_val__reset 'h10

//------------------------------------------------------------------------------core__clk_sys__loopfilter_force_reset---
// 
`define MA_core__clk_sys__loopfilter_force_reset__a 'h018f
`define MA_core__clk_sys__loopfilter_force_reset__len 1
`define MA_core__clk_sys__loopfilter_force_reset__mask 'h20
`define MA_core__clk_sys__loopfilter_force_reset__shift 5
`define MA_core__clk_sys__loopfilter_force_reset__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__phase_error_read---
// 
`define MA_core__clk_sys__phase_error_read__a 'h0190
`define MA_core__clk_sys__phase_error_read__len 1
`define MA_core__clk_sys__phase_error_read__mask 'h01
`define MA_core__clk_sys__phase_error_read__shift 0
`define MA_core__clk_sys__phase_error_read__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__loopfilter_read---
// 
`define MA_core__clk_sys__loopfilter_read__a 'h0190
`define MA_core__clk_sys__loopfilter_read__len 1
`define MA_core__clk_sys__loopfilter_read__mask 'h02
`define MA_core__clk_sys__loopfilter_read__shift 1
`define MA_core__clk_sys__loopfilter_read__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__sdm_read---
// 
`define MA_core__clk_sys__sdm_read__a 'h0190
`define MA_core__clk_sys__sdm_read__len 1
`define MA_core__clk_sys__sdm_read__mask 'h04
`define MA_core__clk_sys__sdm_read__shift 2
`define MA_core__clk_sys__sdm_read__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_coarse_read---
// 
`define MA_core__clk_sys__dco_coarse_read__a 'h0190
`define MA_core__clk_sys__dco_coarse_read__len 1
`define MA_core__clk_sys__dco_coarse_read__mask 'h08
`define MA_core__clk_sys__dco_coarse_read__shift 3
`define MA_core__clk_sys__dco_coarse_read__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_fine_read---
// 
`define MA_core__clk_sys__dco_fine_read__a 'h0190
`define MA_core__clk_sys__dco_fine_read__len 1
`define MA_core__clk_sys__dco_fine_read__mask 'h10
`define MA_core__clk_sys__dco_fine_read__shift 4
`define MA_core__clk_sys__dco_fine_read__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__enable_dco---
// 
`define MA_core__clk_sys__status__enable_dco__a 'h01a0
`define MA_core__clk_sys__status__enable_dco__len 1
`define MA_core__clk_sys__status__enable_dco__mask 'h01
`define MA_core__clk_sys__status__enable_dco__shift 0
`define MA_core__clk_sys__status__enable_dco__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_bias_enable---
// 
`define MA_core__clk_sys__status__dco_bias_enable__a 'h01a0
`define MA_core__clk_sys__status__dco_bias_enable__len 1
`define MA_core__clk_sys__status__dco_bias_enable__mask 'h02
`define MA_core__clk_sys__status__dco_bias_enable__shift 1
`define MA_core__clk_sys__status__dco_bias_enable__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_core_bias_enable---
// 
`define MA_core__clk_sys__status__dco_core_bias_enable__a 'h01a0
`define MA_core__clk_sys__status__dco_core_bias_enable__len 1
`define MA_core__clk_sys__status__dco_core_bias_enable__mask 'h04
`define MA_core__clk_sys__status__dco_core_bias_enable__shift 2
`define MA_core__clk_sys__status__dco_core_bias_enable__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_core_enable---
// 
`define MA_core__clk_sys__status__dco_core_enable__a 'h01a0
`define MA_core__clk_sys__status__dco_core_enable__len 1
`define MA_core__clk_sys__status__dco_core_enable__mask 'h08
`define MA_core__clk_sys__status__dco_core_enable__shift 3
`define MA_core__clk_sys__status__dco_core_enable__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_clk_enable---
// 
`define MA_core__clk_sys__status__dco_clk_enable__a 'h01a0
`define MA_core__clk_sys__status__dco_clk_enable__len 1
`define MA_core__clk_sys__status__dco_clk_enable__mask 'h10
`define MA_core__clk_sys__status__dco_clk_enable__shift 4
`define MA_core__clk_sys__status__dco_clk_enable__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dpll_enable---
// 
`define MA_core__clk_sys__status__dpll_enable__a 'h01a0
`define MA_core__clk_sys__status__dpll_enable__len 1
`define MA_core__clk_sys__status__dpll_enable__mask 'h20
`define MA_core__clk_sys__status__dpll_enable__shift 5
`define MA_core__clk_sys__status__dpll_enable__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dpll_sleep---
// 
`define MA_core__clk_sys__status__dpll_sleep__a 'h01a0
`define MA_core__clk_sys__status__dpll_sleep__len 1
`define MA_core__clk_sys__status__dpll_sleep__mask 'h40
`define MA_core__clk_sys__status__dpll_sleep__shift 6
`define MA_core__clk_sys__status__dpll_sleep__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dpll_run_dco_free---
// 
`define MA_core__clk_sys__status__dpll_run_dco_free__a 'h01a0
`define MA_core__clk_sys__status__dpll_run_dco_free__len 1
`define MA_core__clk_sys__status__dpll_run_dco_free__mask 'h80
`define MA_core__clk_sys__status__dpll_run_dco_free__shift 7
`define MA_core__clk_sys__status__dpll_run_dco_free__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__mode_m_div---
// 
`define MA_core__clk_sys__status__mode_m_div__a 'h01a2
`define MA_core__clk_sys__status__mode_m_div__len 6
`define MA_core__clk_sys__status__mode_m_div__mask 'h3f
`define MA_core__clk_sys__status__mode_m_div__shift 0
`define MA_core__clk_sys__status__mode_m_div__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__mode_ref_div---
// 
`define MA_core__clk_sys__status__mode_ref_div__a 'h01a2
`define MA_core__clk_sys__status__mode_ref_div__len 1
`define MA_core__clk_sys__status__mode_ref_div__mask 'h40
`define MA_core__clk_sys__status__mode_ref_div__shift 6
`define MA_core__clk_sys__status__mode_ref_div__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__mode_fb_div---
// 
`define MA_core__clk_sys__status__mode_fb_div__a 'h01a2
`define MA_core__clk_sys__status__mode_fb_div__len 1
`define MA_core__clk_sys__status__mode_fb_div__mask 'h80
`define MA_core__clk_sys__status__mode_fb_div__shift 7
`define MA_core__clk_sys__status__mode_fb_div__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__enable_auto_detect---
// 
`define MA_core__clk_sys__status__enable_auto_detect__a 'h01a3
`define MA_core__clk_sys__status__enable_auto_detect__len 1
`define MA_core__clk_sys__status__enable_auto_detect__mask 'h01
`define MA_core__clk_sys__status__enable_auto_detect__shift 0
`define MA_core__clk_sys__status__enable_auto_detect__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__i2s_sck_Fs_base---
// 
`define MA_core__clk_sys__status__i2s_sck_Fs_base__a 'h01a3
`define MA_core__clk_sys__status__i2s_sck_Fs_base__len 2
`define MA_core__clk_sys__status__i2s_sck_Fs_base__mask 'h06
`define MA_core__clk_sys__status__i2s_sck_Fs_base__shift 1
`define MA_core__clk_sys__status__i2s_sck_Fs_base__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__bit_clk---
// 
`define MA_core__clk_sys__status__bit_clk__a 'h01a5
`define MA_core__clk_sys__status__bit_clk__len 5
`define MA_core__clk_sys__status__bit_clk__mask 'h1f
`define MA_core__clk_sys__status__bit_clk__shift 0
`define MA_core__clk_sys__status__bit_clk__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__i2s_sck_ok---
// 
`define MA_core__clk_sys__status__i2s_sck_ok__a 'h01a6
`define MA_core__clk_sys__status__i2s_sck_ok__len 1
`define MA_core__clk_sys__status__i2s_sck_ok__mask 'h01
`define MA_core__clk_sys__status__i2s_sck_ok__shift 0
`define MA_core__clk_sys__status__i2s_sck_ok__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_clk_ok---
// 
`define MA_core__clk_sys__status__dco_clk_ok__a 'h01a6
`define MA_core__clk_sys__status__dco_clk_ok__len 1
`define MA_core__clk_sys__status__dco_clk_ok__mask 'h02
`define MA_core__clk_sys__status__dco_clk_ok__shift 1
`define MA_core__clk_sys__status__dco_clk_ok__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__pll_locked---
// 
`define MA_core__clk_sys__status__pll_locked__a 'h01a6
`define MA_core__clk_sys__status__pll_locked__len 1
`define MA_core__clk_sys__status__pll_locked__mask 'h04
`define MA_core__clk_sys__status__pll_locked__shift 2
`define MA_core__clk_sys__status__pll_locked__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__counters_syncronized---
// 
`define MA_core__clk_sys__status__counters_syncronized__a 'h01a6
`define MA_core__clk_sys__status__counters_syncronized__len 1
`define MA_core__clk_sys__status__counters_syncronized__mask 'h10
`define MA_core__clk_sys__status__counters_syncronized__shift 4
`define MA_core__clk_sys__status__counters_syncronized__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__phase_error__0---
// 
`define MA_core__clk_sys__outputs__phase_error__0__a 'h01ac
`define MA_core__clk_sys__outputs__phase_error__0__len 8
`define MA_core__clk_sys__outputs__phase_error__0__mask 'hff
`define MA_core__clk_sys__outputs__phase_error__0__shift 0
`define MA_core__clk_sys__outputs__phase_error__0__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__phase_error__1---
// 
`define MA_core__clk_sys__outputs__phase_error__1__a 'h01ad
`define MA_core__clk_sys__outputs__phase_error__1__len 2
`define MA_core__clk_sys__outputs__phase_error__1__mask 'h03
`define MA_core__clk_sys__outputs__phase_error__1__shift 0
`define MA_core__clk_sys__outputs__phase_error__1__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__loopfilter__0---
// 
`define MA_core__clk_sys__outputs__loopfilter__0__a 'h01ae
`define MA_core__clk_sys__outputs__loopfilter__0__len 8
`define MA_core__clk_sys__outputs__loopfilter__0__mask 'hff
`define MA_core__clk_sys__outputs__loopfilter__0__shift 0
`define MA_core__clk_sys__outputs__loopfilter__0__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__loopfilter__1---
// 
`define MA_core__clk_sys__outputs__loopfilter__1__a 'h01af
`define MA_core__clk_sys__outputs__loopfilter__1__len 8
`define MA_core__clk_sys__outputs__loopfilter__1__mask 'hff
`define MA_core__clk_sys__outputs__loopfilter__1__shift 0
`define MA_core__clk_sys__outputs__loopfilter__1__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__loopfilter__2---
// 
`define MA_core__clk_sys__outputs__loopfilter__2__a 'h01b0
`define MA_core__clk_sys__outputs__loopfilter__2__len 8
`define MA_core__clk_sys__outputs__loopfilter__2__mask 'hff
`define MA_core__clk_sys__outputs__loopfilter__2__shift 0
`define MA_core__clk_sys__outputs__loopfilter__2__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__sdm__0---
// 
`define MA_core__clk_sys__outputs__sdm__0__a 'h01b1
`define MA_core__clk_sys__outputs__sdm__0__len 8
`define MA_core__clk_sys__outputs__sdm__0__mask 'hff
`define MA_core__clk_sys__outputs__sdm__0__shift 0
`define MA_core__clk_sys__outputs__sdm__0__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__sdm__1---
// 
`define MA_core__clk_sys__outputs__sdm__1__a 'h01b2
`define MA_core__clk_sys__outputs__sdm__1__len 1
`define MA_core__clk_sys__outputs__sdm__1__mask 'h01
`define MA_core__clk_sys__outputs__sdm__1__shift 0
`define MA_core__clk_sys__outputs__sdm__1__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__dco_coarse---
// 
`define MA_core__clk_sys__outputs__dco_coarse__a 'h01b3
`define MA_core__clk_sys__outputs__dco_coarse__len 5
`define MA_core__clk_sys__outputs__dco_coarse__mask 'h1f
`define MA_core__clk_sys__outputs__dco_coarse__shift 0
`define MA_core__clk_sys__outputs__dco_coarse__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__dco_fine---
// 
`define MA_core__clk_sys__outputs__dco_fine__a 'h01b4
`define MA_core__clk_sys__outputs__dco_fine__len 6
`define MA_core__clk_sys__outputs__dco_fine__mask 'h3f
`define MA_core__clk_sys__outputs__dco_fine__shift 0
`define MA_core__clk_sys__outputs__dco_fine__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__dco_test_freq_count__0---
// 
`define MA_core__clk_sys__outputs__dco_test_freq_count__0__a 'h01b5
`define MA_core__clk_sys__outputs__dco_test_freq_count__0__len 8
`define MA_core__clk_sys__outputs__dco_test_freq_count__0__mask 'hff
`define MA_core__clk_sys__outputs__dco_test_freq_count__0__shift 0
`define MA_core__clk_sys__outputs__dco_test_freq_count__0__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__dco_test_freq_count__1---
// 
`define MA_core__clk_sys__outputs__dco_test_freq_count__1__a 'h01b6
`define MA_core__clk_sys__outputs__dco_test_freq_count__1__len 6
`define MA_core__clk_sys__outputs__dco_test_freq_count__1__mask 'h3f
`define MA_core__clk_sys__outputs__dco_test_freq_count__1__shift 0
`define MA_core__clk_sys__outputs__dco_test_freq_count__1__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_bias_trim---
// 
`define MA_core__clk_sys__dco_bias_trim__a 'h0191
`define MA_core__clk_sys__dco_bias_trim__len 3
`define MA_core__clk_sys__dco_bias_trim__mask 'h07
`define MA_core__clk_sys__dco_bias_trim__shift 0
`define MA_core__clk_sys__dco_bias_trim__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dpll_run_dco_free_allowed_ow---
// 
`define MA_core__clk_sys__dpll_run_dco_free_allowed_ow__a 'h0181
`define MA_core__clk_sys__dpll_run_dco_free_allowed_ow__len 1
`define MA_core__clk_sys__dpll_run_dco_free_allowed_ow__mask 'h10
`define MA_core__clk_sys__dpll_run_dco_free_allowed_ow__shift 4
`define MA_core__clk_sys__dpll_run_dco_free_allowed_ow__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__data_rate_ow---
// 
`define MA_core__clk_sys__data_rate_ow__a 'h0187
`define MA_core__clk_sys__data_rate_ow__len 1
`define MA_core__clk_sys__data_rate_ow__mask 'h10
`define MA_core__clk_sys__data_rate_ow__shift 4
`define MA_core__clk_sys__data_rate_ow__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__data_rate---
// 
`define MA_core__clk_sys__data_rate__a 'h0187
`define MA_core__clk_sys__data_rate__len 4
`define MA_core__clk_sys__data_rate__mask 'h0f
`define MA_core__clk_sys__data_rate__shift 0
`define MA_core__clk_sys__data_rate__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__data_rate---
// 
`define MA_core__clk_sys__status__data_rate__a 'h01a4
`define MA_core__clk_sys__status__data_rate__len 4
`define MA_core__clk_sys__status__data_rate__mask 'h0f
`define MA_core__clk_sys__status__data_rate__shift 0
`define MA_core__clk_sys__status__data_rate__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__calib_test_enable---
// 
`define MA_core__clk_sys__calib_test_enable__a 'h0192
`define MA_core__clk_sys__calib_test_enable__len 1
`define MA_core__clk_sys__calib_test_enable__mask 'h01
`define MA_core__clk_sys__calib_test_enable__shift 0
`define MA_core__clk_sys__calib_test_enable__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__calib_test_mode---
// 
`define MA_core__clk_sys__calib_test_mode__a 'h0192
`define MA_core__clk_sys__calib_test_mode__len 1
`define MA_core__clk_sys__calib_test_mode__mask 'h02
`define MA_core__clk_sys__calib_test_mode__shift 1
`define MA_core__clk_sys__calib_test_mode__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__calib_test_start---
// 
`define MA_core__clk_sys__calib_test_start__a 'h0192
`define MA_core__clk_sys__calib_test_start__len 1
`define MA_core__clk_sys__calib_test_start__mask 'h04
`define MA_core__clk_sys__calib_test_start__shift 2
`define MA_core__clk_sys__calib_test_start__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__calib_fine_trim_stop_bit---
// 
`define MA_core__clk_sys__calib_fine_trim_stop_bit__a 'h0192
`define MA_core__clk_sys__calib_fine_trim_stop_bit__len 2
`define MA_core__clk_sys__calib_fine_trim_stop_bit__mask 'h18
`define MA_core__clk_sys__calib_fine_trim_stop_bit__shift 3
`define MA_core__clk_sys__calib_fine_trim_stop_bit__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__calib_test_done---
// 
`define MA_core__clk_sys__status__calib_test_done__a 'h01a8
`define MA_core__clk_sys__status__calib_test_done__len 1
`define MA_core__clk_sys__status__calib_test_done__mask 'h10
`define MA_core__clk_sys__status__calib_test_done__shift 4
`define MA_core__clk_sys__status__calib_test_done__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__calib_test_ok---
// 
`define MA_core__clk_sys__status__calib_test_ok__a 'h01a8
`define MA_core__clk_sys__status__calib_test_ok__len 1
`define MA_core__clk_sys__status__calib_test_ok__mask 'h20
`define MA_core__clk_sys__status__calib_test_ok__shift 5
`define MA_core__clk_sys__status__calib_test_ok__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__calib_test_freq_count_high__0---
// 
`define MA_core__clk_sys__outputs__calib_test_freq_count_high__0__a 'h01b7
`define MA_core__clk_sys__outputs__calib_test_freq_count_high__0__len 8
`define MA_core__clk_sys__outputs__calib_test_freq_count_high__0__mask 'hff
`define MA_core__clk_sys__outputs__calib_test_freq_count_high__0__shift 0
`define MA_core__clk_sys__outputs__calib_test_freq_count_high__0__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__calib_test_freq_count_high__1---
// 
`define MA_core__clk_sys__outputs__calib_test_freq_count_high__1__a 'h01b8
`define MA_core__clk_sys__outputs__calib_test_freq_count_high__1__len 6
`define MA_core__clk_sys__outputs__calib_test_freq_count_high__1__mask 'h3f
`define MA_core__clk_sys__outputs__calib_test_freq_count_high__1__shift 0
`define MA_core__clk_sys__outputs__calib_test_freq_count_high__1__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__calib_test_freq_count_low__0---
// 
`define MA_core__clk_sys__outputs__calib_test_freq_count_low__0__a 'h01b9
`define MA_core__clk_sys__outputs__calib_test_freq_count_low__0__len 8
`define MA_core__clk_sys__outputs__calib_test_freq_count_low__0__mask 'hff
`define MA_core__clk_sys__outputs__calib_test_freq_count_low__0__shift 0
`define MA_core__clk_sys__outputs__calib_test_freq_count_low__0__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__calib_test_freq_count_low__1---
// 
`define MA_core__clk_sys__outputs__calib_test_freq_count_low__1__a 'h01ba
`define MA_core__clk_sys__outputs__calib_test_freq_count_low__1__len 6
`define MA_core__clk_sys__outputs__calib_test_freq_count_low__1__mask 'h3f
`define MA_core__clk_sys__outputs__calib_test_freq_count_low__1__shift 0
`define MA_core__clk_sys__outputs__calib_test_freq_count_low__1__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__calib_test_coarse---
// 
`define MA_core__clk_sys__outputs__calib_test_coarse__a 'h01bb
`define MA_core__clk_sys__outputs__calib_test_coarse__len 6
`define MA_core__clk_sys__outputs__calib_test_coarse__mask 'h3f
`define MA_core__clk_sys__outputs__calib_test_coarse__shift 0
`define MA_core__clk_sys__outputs__calib_test_coarse__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__outputs__calib_test_fine---
// 
`define MA_core__clk_sys__outputs__calib_test_fine__a 'h01bc
`define MA_core__clk_sys__outputs__calib_test_fine__len 6
`define MA_core__clk_sys__outputs__calib_test_fine__mask 'h3f
`define MA_core__clk_sys__outputs__calib_test_fine__shift 0
`define MA_core__clk_sys__outputs__calib_test_fine__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__clear_all_latched_bits---
// 
`define MA_core__clk_sys__clear_all_latched_bits__a 'h0193
`define MA_core__clk_sys__clear_all_latched_bits__len 1
`define MA_core__clk_sys__clear_all_latched_bits__mask 'h01
`define MA_core__clk_sys__clear_all_latched_bits__shift 0
`define MA_core__clk_sys__clear_all_latched_bits__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__clear_latched_div_bits---
// 
`define MA_core__clk_sys__clear_latched_div_bits__a 'h0193
`define MA_core__clk_sys__clear_latched_div_bits__len 1
`define MA_core__clk_sys__clear_latched_div_bits__mask 'h02
`define MA_core__clk_sys__clear_latched_div_bits__shift 1
`define MA_core__clk_sys__clear_latched_div_bits__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__clear_latched_ok_bits---
// 
`define MA_core__clk_sys__clear_latched_ok_bits__a 'h0193
`define MA_core__clk_sys__clear_latched_ok_bits__len 1
`define MA_core__clk_sys__clear_latched_ok_bits__mask 'h04
`define MA_core__clk_sys__clear_latched_ok_bits__shift 2
`define MA_core__clk_sys__clear_latched_ok_bits__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__clear_latched_pll_bits---
// 
`define MA_core__clk_sys__clear_latched_pll_bits__a 'h0193
`define MA_core__clk_sys__clear_latched_pll_bits__len 1
`define MA_core__clk_sys__clear_latched_pll_bits__mask 'h08
`define MA_core__clk_sys__clear_latched_pll_bits__shift 3
`define MA_core__clk_sys__clear_latched_pll_bits__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__mode_div_changed_latched---
// 
`define MA_core__clk_sys__status__mode_div_changed_latched__a 'h01aa
`define MA_core__clk_sys__status__mode_div_changed_latched__len 1
`define MA_core__clk_sys__status__mode_div_changed_latched__mask 'h01
`define MA_core__clk_sys__status__mode_div_changed_latched__shift 0
`define MA_core__clk_sys__status__mode_div_changed_latched__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__mode_m_div_changed_latched---
// 
`define MA_core__clk_sys__status__mode_m_div_changed_latched__a 'h01aa
`define MA_core__clk_sys__status__mode_m_div_changed_latched__len 1
`define MA_core__clk_sys__status__mode_m_div_changed_latched__mask 'h02
`define MA_core__clk_sys__status__mode_m_div_changed_latched__shift 1
`define MA_core__clk_sys__status__mode_m_div_changed_latched__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__mode_ref_div_changed_latched---
// 
`define MA_core__clk_sys__status__mode_ref_div_changed_latched__a 'h01aa
`define MA_core__clk_sys__status__mode_ref_div_changed_latched__len 1
`define MA_core__clk_sys__status__mode_ref_div_changed_latched__mask 'h04
`define MA_core__clk_sys__status__mode_ref_div_changed_latched__shift 2
`define MA_core__clk_sys__status__mode_ref_div_changed_latched__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__mode_fb_div_changed_latched---
// 
`define MA_core__clk_sys__status__mode_fb_div_changed_latched__a 'h01aa
`define MA_core__clk_sys__status__mode_fb_div_changed_latched__len 1
`define MA_core__clk_sys__status__mode_fb_div_changed_latched__mask 'h08
`define MA_core__clk_sys__status__mode_fb_div_changed_latched__shift 3
`define MA_core__clk_sys__status__mode_fb_div_changed_latched__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__pll_locked_error---
// 
`define MA_core__clk_sys__status__pll_locked_error__a 'h01ab
`define MA_core__clk_sys__status__pll_locked_error__len 1
`define MA_core__clk_sys__status__pll_locked_error__mask 'h01
`define MA_core__clk_sys__status__pll_locked_error__shift 0
`define MA_core__clk_sys__status__pll_locked_error__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__counters_syncronized_error---
// 
`define MA_core__clk_sys__status__counters_syncronized_error__a 'h01ab
`define MA_core__clk_sys__status__counters_syncronized_error__len 1
`define MA_core__clk_sys__status__counters_syncronized_error__mask 'h08
`define MA_core__clk_sys__status__counters_syncronized_error__shift 3
`define MA_core__clk_sys__status__counters_syncronized_error__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__afir_clk_div---
// 
`define MA_core__clk_sys__afir_clk_div__a 'h0186
`define MA_core__clk_sys__afir_clk_div__len 1
`define MA_core__clk_sys__afir_clk_div__mask 'h02
`define MA_core__clk_sys__afir_clk_div__shift 1
`define MA_core__clk_sys__afir_clk_div__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dpll_run_dco_free_allowed_50M---
// 
`define MA_core__clk_sys__dpll_run_dco_free_allowed_50M__a 'h0181
`define MA_core__clk_sys__dpll_run_dco_free_allowed_50M__len 1
`define MA_core__clk_sys__dpll_run_dco_free_allowed_50M__mask 'h20
`define MA_core__clk_sys__dpll_run_dco_free_allowed_50M__shift 5
`define MA_core__clk_sys__dpll_run_dco_free_allowed_50M__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__pll_locked_calib---
// 
`define MA_core__clk_sys__pll_locked_calib__a 'h0189
`define MA_core__clk_sys__pll_locked_calib__len 1
`define MA_core__clk_sys__pll_locked_calib__mask 'h10
`define MA_core__clk_sys__pll_locked_calib__shift 4
`define MA_core__clk_sys__pll_locked_calib__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__Kvco_f---
// 
`define MA_core__clk_sys__Kvco_f__a 'h018c
`define MA_core__clk_sys__Kvco_f__len 3
`define MA_core__clk_sys__Kvco_f__mask 'h07
`define MA_core__clk_sys__Kvco_f__shift 0
`define MA_core__clk_sys__Kvco_f__reset 'h03

//------------------------------------------------------------------------------core__clk_sys__LBW_f---
// 
`define MA_core__clk_sys__LBW_f__a 'h018c
`define MA_core__clk_sys__LBW_f__len 3
`define MA_core__clk_sys__LBW_f__mask 'h38
`define MA_core__clk_sys__LBW_f__shift 3
`define MA_core__clk_sys__LBW_f__reset 'h01

//------------------------------------------------------------------------------core__clk_sys__clk_auto_detect_low_window_min_cnt---
// 
`define MA_core__clk_sys__clk_auto_detect_low_window_min_cnt__a 'h0194
`define MA_core__clk_sys__clk_auto_detect_low_window_min_cnt__len 6
`define MA_core__clk_sys__clk_auto_detect_low_window_min_cnt__mask 'h3f
`define MA_core__clk_sys__clk_auto_detect_low_window_min_cnt__shift 0
`define MA_core__clk_sys__clk_auto_detect_low_window_min_cnt__reset 'h24

//------------------------------------------------------------------------------core__clk_sys__clk_auto_detect_low_window_max_cnt---
// 
`define MA_core__clk_sys__clk_auto_detect_low_window_max_cnt__a 'h0195
`define MA_core__clk_sys__clk_auto_detect_low_window_max_cnt__len 7
`define MA_core__clk_sys__clk_auto_detect_low_window_max_cnt__mask 'h7f
`define MA_core__clk_sys__clk_auto_detect_low_window_max_cnt__shift 0
`define MA_core__clk_sys__clk_auto_detect_low_window_max_cnt__reset 'h64

//------------------------------------------------------------------------------core__clk_sys__clk_auto_detect_high_window_min_cnt---
// 
`define MA_core__clk_sys__clk_auto_detect_high_window_min_cnt__a 'h0196
`define MA_core__clk_sys__clk_auto_detect_high_window_min_cnt__len 4
`define MA_core__clk_sys__clk_auto_detect_high_window_min_cnt__mask 'h0f
`define MA_core__clk_sys__clk_auto_detect_high_window_min_cnt__shift 0
`define MA_core__clk_sys__clk_auto_detect_high_window_min_cnt__reset 'h01

//------------------------------------------------------------------------------core__clk_sys__clk_auto_detect_high_window_max_cnt---
// 
`define MA_core__clk_sys__clk_auto_detect_high_window_max_cnt__a 'h0197
`define MA_core__clk_sys__clk_auto_detect_high_window_max_cnt__len 7
`define MA_core__clk_sys__clk_auto_detect_high_window_max_cnt__mask 'h7f
`define MA_core__clk_sys__clk_auto_detect_high_window_max_cnt__shift 0
`define MA_core__clk_sys__clk_auto_detect_high_window_max_cnt__reset 'h47

//------------------------------------------------------------------------------core__clk_sys__status__dpll_run_dco_free_allowed_50M---
// 
`define MA_core__clk_sys__status__dpll_run_dco_free_allowed_50M__a 'h01a1
`define MA_core__clk_sys__status__dpll_run_dco_free_allowed_50M__len 1
`define MA_core__clk_sys__status__dpll_run_dco_free_allowed_50M__mask 'h01
`define MA_core__clk_sys__status__dpll_run_dco_free_allowed_50M__shift 0
`define MA_core__clk_sys__status__dpll_run_dco_free_allowed_50M__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__pll_locked_calib---
// 
`define MA_core__clk_sys__status__pll_locked_calib__a 'h01a6
`define MA_core__clk_sys__status__pll_locked_calib__len 1
`define MA_core__clk_sys__status__pll_locked_calib__mask 'h08
`define MA_core__clk_sys__status__pll_locked_calib__shift 3
`define MA_core__clk_sys__status__pll_locked_calib__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__calib_audio_tick_en---
// 
`define MA_core__clk_sys__calib_audio_tick_en__a 'h0184
`define MA_core__clk_sys__calib_audio_tick_en__len 1
`define MA_core__clk_sys__calib_audio_tick_en__mask 'h08
`define MA_core__clk_sys__calib_audio_tick_en__shift 3
`define MA_core__clk_sys__calib_audio_tick_en__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__pll_status_readout_en---
// 
`define MA_core__clk_sys__pll_status_readout_en__a 'h0184
`define MA_core__clk_sys__pll_status_readout_en__len 1
`define MA_core__clk_sys__pll_status_readout_en__mask 'h10
`define MA_core__clk_sys__pll_status_readout_en__shift 4
`define MA_core__clk_sys__pll_status_readout_en__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__tdc_phase_max---
// 
`define MA_core__clk_sys__status__tdc_phase_max__a 'h01a6
`define MA_core__clk_sys__status__tdc_phase_max__len 1
`define MA_core__clk_sys__status__tdc_phase_max__mask 'h20
`define MA_core__clk_sys__status__tdc_phase_max__shift 5
`define MA_core__clk_sys__status__tdc_phase_max__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__mode_div_changed---
// 
`define MA_core__clk_sys__status__mode_div_changed__a 'h01a9
`define MA_core__clk_sys__status__mode_div_changed__len 1
`define MA_core__clk_sys__status__mode_div_changed__mask 'h01
`define MA_core__clk_sys__status__mode_div_changed__shift 0
`define MA_core__clk_sys__status__mode_div_changed__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__mode_m_div_changed---
// 
`define MA_core__clk_sys__status__mode_m_div_changed__a 'h01a9
`define MA_core__clk_sys__status__mode_m_div_changed__len 1
`define MA_core__clk_sys__status__mode_m_div_changed__mask 'h02
`define MA_core__clk_sys__status__mode_m_div_changed__shift 1
`define MA_core__clk_sys__status__mode_m_div_changed__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__mode_ref_div_changed---
// 
`define MA_core__clk_sys__status__mode_ref_div_changed__a 'h01a9
`define MA_core__clk_sys__status__mode_ref_div_changed__len 1
`define MA_core__clk_sys__status__mode_ref_div_changed__mask 'h04
`define MA_core__clk_sys__status__mode_ref_div_changed__shift 2
`define MA_core__clk_sys__status__mode_ref_div_changed__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__mode_fb_div_changed---
// 
`define MA_core__clk_sys__status__mode_fb_div_changed__a 'h01a9
`define MA_core__clk_sys__status__mode_fb_div_changed__len 1
`define MA_core__clk_sys__status__mode_fb_div_changed__mask 'h08
`define MA_core__clk_sys__status__mode_fb_div_changed__shift 3
`define MA_core__clk_sys__status__mode_fb_div_changed__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__tdc_phase_max_error---
// 
`define MA_core__clk_sys__status__tdc_phase_max_error__a 'h01ab
`define MA_core__clk_sys__status__tdc_phase_max_error__len 1
`define MA_core__clk_sys__status__tdc_phase_max_error__mask 'h04
`define MA_core__clk_sys__status__tdc_phase_max_error__shift 2
`define MA_core__clk_sys__status__tdc_phase_max_error__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__pll_locked_calib_error---
// 
`define MA_core__clk_sys__status__pll_locked_calib_error__a 'h01ab
`define MA_core__clk_sys__status__pll_locked_calib_error__len 1
`define MA_core__clk_sys__status__pll_locked_calib_error__mask 'h02
`define MA_core__clk_sys__status__pll_locked_calib_error__shift 1
`define MA_core__clk_sys__status__pll_locked_calib_error__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__mode_m_div_calib_reset---
// 
`define MA_core__clk_sys__mode_m_div_calib_reset__a 'h0198
`define MA_core__clk_sys__mode_m_div_calib_reset__len 6
`define MA_core__clk_sys__mode_m_div_calib_reset__mask 'h3f
`define MA_core__clk_sys__mode_m_div_calib_reset__shift 0
`define MA_core__clk_sys__mode_m_div_calib_reset__reset 'h02

//------------------------------------------------------------------------------core__clk_sys__mode_ref_div_calib_reset---
// 
`define MA_core__clk_sys__mode_ref_div_calib_reset__a 'h0198
`define MA_core__clk_sys__mode_ref_div_calib_reset__len 1
`define MA_core__clk_sys__mode_ref_div_calib_reset__mask 'h40
`define MA_core__clk_sys__mode_ref_div_calib_reset__shift 6
`define MA_core__clk_sys__mode_ref_div_calib_reset__reset 'h01

//------------------------------------------------------------------------------core__clk_sys__mode_fb_div_calib_reset---
// 
`define MA_core__clk_sys__mode_fb_div_calib_reset__a 'h0198
`define MA_core__clk_sys__mode_fb_div_calib_reset__len 1
`define MA_core__clk_sys__mode_fb_div_calib_reset__mask 'h80
`define MA_core__clk_sys__mode_fb_div_calib_reset__shift 7
`define MA_core__clk_sys__mode_fb_div_calib_reset__reset 'h01

//------------------------------------------------------------------------------core__clk_sys__status__calib_test_err---
// 
`define MA_core__clk_sys__status__calib_test_err__a 'h01a8
`define MA_core__clk_sys__status__calib_test_err__len 1
`define MA_core__clk_sys__status__calib_test_err__mask 'h40
`define MA_core__clk_sys__status__calib_test_err__shift 6
`define MA_core__clk_sys__status__calib_test_err__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__i2s_sck_err---
// 
`define MA_core__clk_sys__status__i2s_sck_err__a 'h01ab
`define MA_core__clk_sys__status__i2s_sck_err__len 1
`define MA_core__clk_sys__status__i2s_sck_err__mask 'h10
`define MA_core__clk_sys__status__i2s_sck_err__shift 4
`define MA_core__clk_sys__status__i2s_sck_err__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_clk_err---
// 
`define MA_core__clk_sys__status__dco_clk_err__a 'h01ab
`define MA_core__clk_sys__status__dco_clk_err__len 1
`define MA_core__clk_sys__status__dco_clk_err__mask 'h20
`define MA_core__clk_sys__status__dco_clk_err__shift 5
`define MA_core__clk_sys__status__dco_clk_err__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_test_enable---
// 
`define MA_core__clk_sys__dco_test_enable__a 'h018a
`define MA_core__clk_sys__dco_test_enable__len 1
`define MA_core__clk_sys__dco_test_enable__mask 'h01
`define MA_core__clk_sys__dco_test_enable__shift 0
`define MA_core__clk_sys__dco_test_enable__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_test_mode---
// 
`define MA_core__clk_sys__dco_test_mode__a 'h018a
`define MA_core__clk_sys__dco_test_mode__len 1
`define MA_core__clk_sys__dco_test_mode__mask 'h02
`define MA_core__clk_sys__dco_test_mode__shift 1
`define MA_core__clk_sys__dco_test_mode__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_test_sub_mode---
// 
`define MA_core__clk_sys__dco_test_sub_mode__a 'h018a
`define MA_core__clk_sys__dco_test_sub_mode__len 2
`define MA_core__clk_sys__dco_test_sub_mode__mask 'h0c
`define MA_core__clk_sys__dco_test_sub_mode__shift 2
`define MA_core__clk_sys__dco_test_sub_mode__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_test_start---
// 
`define MA_core__clk_sys__dco_test_start__a 'h018a
`define MA_core__clk_sys__dco_test_start__len 1
`define MA_core__clk_sys__dco_test_start__mask 'h10
`define MA_core__clk_sys__dco_test_start__shift 4
`define MA_core__clk_sys__dco_test_start__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_test_fine_cnt_step---
// 
`define MA_core__clk_sys__dco_test_fine_cnt_step__a 'h018b
`define MA_core__clk_sys__dco_test_fine_cnt_step__len 2
`define MA_core__clk_sys__dco_test_fine_cnt_step__mask 'h03
`define MA_core__clk_sys__dco_test_fine_cnt_step__shift 0
`define MA_core__clk_sys__dco_test_fine_cnt_step__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_test_coarse_cnt_step---
// 
`define MA_core__clk_sys__dco_test_coarse_cnt_step__a 'h018b
`define MA_core__clk_sys__dco_test_coarse_cnt_step__len 2
`define MA_core__clk_sys__dco_test_coarse_cnt_step__mask 'h0c
`define MA_core__clk_sys__dco_test_coarse_cnt_step__shift 2
`define MA_core__clk_sys__dco_test_coarse_cnt_step__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_test_i2s_cnt_lim---
// 
`define MA_core__clk_sys__dco_test_i2s_cnt_lim__a 'h018b
`define MA_core__clk_sys__dco_test_i2s_cnt_lim__len 1
`define MA_core__clk_sys__dco_test_i2s_cnt_lim__mask 'h10
`define MA_core__clk_sys__dco_test_i2s_cnt_lim__shift 4
`define MA_core__clk_sys__dco_test_i2s_cnt_lim__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__dco_test_wait_dco_cnt---
// 
`define MA_core__clk_sys__dco_test_wait_dco_cnt__a 'h018b
`define MA_core__clk_sys__dco_test_wait_dco_cnt__len 1
`define MA_core__clk_sys__dco_test_wait_dco_cnt__mask 'h20
`define MA_core__clk_sys__dco_test_wait_dco_cnt__shift 5
`define MA_core__clk_sys__dco_test_wait_dco_cnt__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_test_done---
// 
`define MA_core__clk_sys__status__dco_test_done__a 'h01a7
`define MA_core__clk_sys__status__dco_test_done__len 1
`define MA_core__clk_sys__status__dco_test_done__mask 'h01
`define MA_core__clk_sys__status__dco_test_done__shift 0
`define MA_core__clk_sys__status__dco_test_done__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_test_ok---
// 
`define MA_core__clk_sys__status__dco_test_ok__a 'h01a7
`define MA_core__clk_sys__status__dco_test_ok__len 1
`define MA_core__clk_sys__status__dco_test_ok__mask 'h02
`define MA_core__clk_sys__status__dco_test_ok__shift 1
`define MA_core__clk_sys__status__dco_test_ok__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_test_err---
// 
`define MA_core__clk_sys__status__dco_test_err__a 'h01a7
`define MA_core__clk_sys__status__dco_test_err__len 1
`define MA_core__clk_sys__status__dco_test_err__mask 'h04
`define MA_core__clk_sys__status__dco_test_err__shift 2
`define MA_core__clk_sys__status__dco_test_err__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_test_done_finetrim---
// 
`define MA_core__clk_sys__status__dco_test_done_finetrim__a 'h01a7
`define MA_core__clk_sys__status__dco_test_done_finetrim__len 1
`define MA_core__clk_sys__status__dco_test_done_finetrim__mask 'h08
`define MA_core__clk_sys__status__dco_test_done_finetrim__shift 3
`define MA_core__clk_sys__status__dco_test_done_finetrim__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_test_ok_finetrim---
// 
`define MA_core__clk_sys__status__dco_test_ok_finetrim__a 'h01a7
`define MA_core__clk_sys__status__dco_test_ok_finetrim__len 1
`define MA_core__clk_sys__status__dco_test_ok_finetrim__mask 'h10
`define MA_core__clk_sys__status__dco_test_ok_finetrim__shift 4
`define MA_core__clk_sys__status__dco_test_ok_finetrim__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_test_err_finetrim---
// 
`define MA_core__clk_sys__status__dco_test_err_finetrim__a 'h01a7
`define MA_core__clk_sys__status__dco_test_err_finetrim__len 1
`define MA_core__clk_sys__status__dco_test_err_finetrim__mask 'h20
`define MA_core__clk_sys__status__dco_test_err_finetrim__shift 5
`define MA_core__clk_sys__status__dco_test_err_finetrim__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_test_done_coarse_up---
// 
`define MA_core__clk_sys__status__dco_test_done_coarse_up__a 'h01a7
`define MA_core__clk_sys__status__dco_test_done_coarse_up__len 1
`define MA_core__clk_sys__status__dco_test_done_coarse_up__mask 'h40
`define MA_core__clk_sys__status__dco_test_done_coarse_up__shift 6
`define MA_core__clk_sys__status__dco_test_done_coarse_up__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_test_done_coarse_down---
// 
`define MA_core__clk_sys__status__dco_test_done_coarse_down__a 'h01a7
`define MA_core__clk_sys__status__dco_test_done_coarse_down__len 1
`define MA_core__clk_sys__status__dco_test_done_coarse_down__mask 'h80
`define MA_core__clk_sys__status__dco_test_done_coarse_down__shift 7
`define MA_core__clk_sys__status__dco_test_done_coarse_down__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_test_ok_coarse_up---
// 
`define MA_core__clk_sys__status__dco_test_ok_coarse_up__a 'h01a8
`define MA_core__clk_sys__status__dco_test_ok_coarse_up__len 1
`define MA_core__clk_sys__status__dco_test_ok_coarse_up__mask 'h01
`define MA_core__clk_sys__status__dco_test_ok_coarse_up__shift 0
`define MA_core__clk_sys__status__dco_test_ok_coarse_up__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_test_err_coarse_up---
// 
`define MA_core__clk_sys__status__dco_test_err_coarse_up__a 'h01a8
`define MA_core__clk_sys__status__dco_test_err_coarse_up__len 1
`define MA_core__clk_sys__status__dco_test_err_coarse_up__mask 'h02
`define MA_core__clk_sys__status__dco_test_err_coarse_up__shift 1
`define MA_core__clk_sys__status__dco_test_err_coarse_up__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_test_ok_coarse_down---
// 
`define MA_core__clk_sys__status__dco_test_ok_coarse_down__a 'h01a8
`define MA_core__clk_sys__status__dco_test_ok_coarse_down__len 1
`define MA_core__clk_sys__status__dco_test_ok_coarse_down__mask 'h04
`define MA_core__clk_sys__status__dco_test_ok_coarse_down__shift 2
`define MA_core__clk_sys__status__dco_test_ok_coarse_down__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__status__dco_test_err_coarse_down---
// 
`define MA_core__clk_sys__status__dco_test_err_coarse_down__a 'h01a8
`define MA_core__clk_sys__status__dco_test_err_coarse_down__len 1
`define MA_core__clk_sys__status__dco_test_err_coarse_down__mask 'h08
`define MA_core__clk_sys__status__dco_test_err_coarse_down__shift 3
`define MA_core__clk_sys__status__dco_test_err_coarse_down__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__pll_paused_ow---
// 
`define MA_core__clk_sys__pll_paused_ow__a 'h018b
`define MA_core__clk_sys__pll_paused_ow__len 1
`define MA_core__clk_sys__pll_paused_ow__mask 'h40
`define MA_core__clk_sys__pll_paused_ow__shift 6
`define MA_core__clk_sys__pll_paused_ow__reset 'h00

//------------------------------------------------------------------------------core__clk_sys__pll_paused---
// 
`define MA_core__clk_sys__pll_paused__a 'h018b
`define MA_core__clk_sys__pll_paused__len 1
`define MA_core__clk_sys__pll_paused__mask 'h80
`define MA_core__clk_sys__pll_paused__shift 7
`define MA_core__clk_sys__pll_paused__reset 'h00

//------------------------------------------------------------------------------core__asense__temp_en---
// Enable temperature measurement
`define MA_core__asense__temp_en__a 'h01e0
`define MA_core__asense__temp_en__len 1
`define MA_core__asense__temp_en__mask 'h01
`define MA_core__asense__temp_en__shift 0
`define MA_core__asense__temp_en__reset 'h01

//------------------------------------------------------------------------------core__asense__pvdd_en---
// Enable PVDD measurement
`define MA_core__asense__pvdd_en__a 'h01e0
`define MA_core__asense__pvdd_en__len 1
`define MA_core__asense__pvdd_en__mask 'h02
`define MA_core__asense__pvdd_en__shift 1
`define MA_core__asense__pvdd_en__reset 'h01

//------------------------------------------------------------------------------core__asense__pin_en---
// Enable adc_in measurement
`define MA_core__asense__pin_en__a 'h01e0
`define MA_core__asense__pin_en__len 1
`define MA_core__asense__pin_en__mask 'h04
`define MA_core__asense__pin_en__shift 2
`define MA_core__asense__pin_en__reset 'h01

//------------------------------------------------------------------------------core__asense__abus0_en---
// Enable analog debug bus 0 measurement
`define MA_core__asense__abus0_en__a 'h01e0
`define MA_core__asense__abus0_en__len 1
`define MA_core__asense__abus0_en__mask 'h08
`define MA_core__asense__abus0_en__shift 3
`define MA_core__asense__abus0_en__reset 'h00

//------------------------------------------------------------------------------core__asense__abus1_en---
// Enable analog debug bus 1 measurement
`define MA_core__asense__abus1_en__a 'h01e0
`define MA_core__asense__abus1_en__len 1
`define MA_core__asense__abus1_en__mask 'h10
`define MA_core__asense__abus1_en__shift 4
`define MA_core__asense__abus1_en__reset 'h00

//------------------------------------------------------------------------------core__asense__bgr_en---
// Enable bandgap voltage measurement
`define MA_core__asense__bgr_en__a 'h01e0
`define MA_core__asense__bgr_en__len 1
`define MA_core__asense__bgr_en__mask 'h20
`define MA_core__asense__bgr_en__shift 5
`define MA_core__asense__bgr_en__reset 'h00

//------------------------------------------------------------------------------core__asense__os_times---
// Select the number of samples to average when over sampling is enabled; 3: 16 samples; 2: 8 samples; 1: 4 samples, 0: 2 samples 
`define MA_core__asense__os_times__a 'h01e1
`define MA_core__asense__os_times__len 2
`define MA_core__asense__os_times__mask 'h03
`define MA_core__asense__os_times__shift 0
`define MA_core__asense__os_times__reset 'h00

//------------------------------------------------------------------------------core__asense__os_en---
// Over sampling enable for:  0: Temperature, 1: PVDD, 2: Pin, 3: Bandgap, 4: debug bus 0, 5: debug bus 1
`define MA_core__asense__os_en__a 'h01e1
`define MA_core__asense__os_en__len 6
`define MA_core__asense__os_en__mask 'hfc
`define MA_core__asense__os_en__shift 2
`define MA_core__asense__os_en__reset 'h00

//------------------------------------------------------------------------------core__asense__cal_rate---
// ADC calibration rate; 0: 16KHz, 1: 1KHz, 2: 8Hz, 3: no calibration
`define MA_core__asense__cal_rate__a 'h01e2
`define MA_core__asense__cal_rate__len 2
`define MA_core__asense__cal_rate__mask 'h03
`define MA_core__asense__cal_rate__shift 0
`define MA_core__asense__cal_rate__reset 'h00

//------------------------------------------------------------------------------core__asense__samp_rate---
// ADC sampling rate; 100: 16KHz, 101: 8KHz, 110: 4KHz, 111: 2 KHz, 000: 1 KHz, 001: 500Hz, 010: 250Hz, 011: 125Hz
`define MA_core__asense__samp_rate__a 'h01e2
`define MA_core__asense__samp_rate__len 3
`define MA_core__asense__samp_rate__mask 'h1c
`define MA_core__asense__samp_rate__shift 2
`define MA_core__asense__samp_rate__reset 'h00

//------------------------------------------------------------------------------core__asense__sync_phase__0---
// Phase shift of ADC sampling relative to internal sync tick
`define MA_core__asense__sync_phase__0__a 'h01e3
`define MA_core__asense__sync_phase__0__len 8
`define MA_core__asense__sync_phase__0__mask 'hff
`define MA_core__asense__sync_phase__0__shift 0
`define MA_core__asense__sync_phase__0__reset 'h00

//------------------------------------------------------------------------------core__asense__sync_phase__1---
// Phase shift of ADC sampling relative to internal sync tick
`define MA_core__asense__sync_phase__1__a 'h01e4
`define MA_core__asense__sync_phase__1__len 3
`define MA_core__asense__sync_phase__1__mask 'h07
`define MA_core__asense__sync_phase__1__shift 0
`define MA_core__asense__sync_phase__1__reset 'h00

//------------------------------------------------------------------------------core__asense__fe_zero_dur---
// Frontend auto zero duration; 0: 1280ns, 1: 640ns, 2: 2560ns, 3: 5120ns 
`define MA_core__asense__fe_zero_dur__a 'h01e5
`define MA_core__asense__fe_zero_dur__len 2
`define MA_core__asense__fe_zero_dur__mask 'h03
`define MA_core__asense__fe_zero_dur__shift 0
`define MA_core__asense__fe_zero_dur__reset 'h00

//------------------------------------------------------------------------------core__asense__fe_track_dur---
// Frontend tracking duration;  0: 1360ns, 1: 720ns, 2: 2640ns, 3: 5200ns 
`define MA_core__asense__fe_track_dur__a 'h01e5
`define MA_core__asense__fe_track_dur__len 2
`define MA_core__asense__fe_track_dur__mask 'h0c
`define MA_core__asense__fe_track_dur__shift 2
`define MA_core__asense__fe_track_dur__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_in_dur---
// 
`define MA_core__asense__adc_in_dur__a 'h01e5
`define MA_core__asense__adc_in_dur__len 2
`define MA_core__asense__adc_in_dur__mask 'h30
`define MA_core__asense__adc_in_dur__shift 4
`define MA_core__asense__adc_in_dur__reset 'h00

//------------------------------------------------------------------------------core__asense__fe_en---
// Debug handles for overriding and setting control signals for frontend
`define MA_core__asense__fe_en__a 'h01e6
`define MA_core__asense__fe_en__len 1
`define MA_core__asense__fe_en__mask 'h04
`define MA_core__asense__fe_en__shift 2
`define MA_core__asense__fe_en__reset 'h00

//------------------------------------------------------------------------------core__asense__fe_en_ow---
// 
`define MA_core__asense__fe_en_ow__a 'h01e6
`define MA_core__asense__fe_en_ow__len 1
`define MA_core__asense__fe_en_ow__mask 'h08
`define MA_core__asense__fe_en_ow__shift 3
`define MA_core__asense__fe_en_ow__reset 'h00

//------------------------------------------------------------------------------core__asense__fe_zero---
// 
`define MA_core__asense__fe_zero__a 'h01e6
`define MA_core__asense__fe_zero__len 1
`define MA_core__asense__fe_zero__mask 'h10
`define MA_core__asense__fe_zero__shift 4
`define MA_core__asense__fe_zero__reset 'h00

//------------------------------------------------------------------------------core__asense__fe_zero_ow---
// 
`define MA_core__asense__fe_zero_ow__a 'h01e6
`define MA_core__asense__fe_zero_ow__len 1
`define MA_core__asense__fe_zero_ow__mask 'h20
`define MA_core__asense__fe_zero_ow__shift 5
`define MA_core__asense__fe_zero_ow__reset 'h00

//------------------------------------------------------------------------------core__asense__fe_track---
// 
`define MA_core__asense__fe_track__a 'h01e6
`define MA_core__asense__fe_track__len 1
`define MA_core__asense__fe_track__mask 'h40
`define MA_core__asense__fe_track__shift 6
`define MA_core__asense__fe_track__reset 'h00

//------------------------------------------------------------------------------core__asense__fe_track_ow---
// 
`define MA_core__asense__fe_track_ow__a 'h01e6
`define MA_core__asense__fe_track_ow__len 1
`define MA_core__asense__fe_track_ow__mask 'h80
`define MA_core__asense__fe_track_ow__shift 7
`define MA_core__asense__fe_track_ow__reset 'h00

//------------------------------------------------------------------------------core__asense__fe_sel---
// 
`define MA_core__asense__fe_sel__a 'h01e7
`define MA_core__asense__fe_sel__len 3
`define MA_core__asense__fe_sel__mask 'h07
`define MA_core__asense__fe_sel__shift 0
`define MA_core__asense__fe_sel__reset 'h00

//------------------------------------------------------------------------------core__asense__fe_sel_ow---
// 
`define MA_core__asense__fe_sel_ow__a 'h01e7
`define MA_core__asense__fe_sel_ow__len 1
`define MA_core__asense__fe_sel_ow__mask 'h08
`define MA_core__asense__fe_sel_ow__shift 3
`define MA_core__asense__fe_sel_ow__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_en---
// Debug handles for overriding and setting control signals for ADC
`define MA_core__asense__adc_en__a 'h01e8
`define MA_core__asense__adc_en__len 1
`define MA_core__asense__adc_en__mask 'h01
`define MA_core__asense__adc_en__shift 0
`define MA_core__asense__adc_en__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_en_ow---
// 
`define MA_core__asense__adc_en_ow__a 'h01e8
`define MA_core__asense__adc_en_ow__len 1
`define MA_core__asense__adc_en_ow__mask 'h02
`define MA_core__asense__adc_en_ow__shift 1
`define MA_core__asense__adc_en_ow__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_start---
// 
`define MA_core__asense__adc_start__a 'h01e8
`define MA_core__asense__adc_start__len 1
`define MA_core__asense__adc_start__mask 'h04
`define MA_core__asense__adc_start__shift 2
`define MA_core__asense__adc_start__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_start_ow---
// 
`define MA_core__asense__adc_start_ow__a 'h01e8
`define MA_core__asense__adc_start_ow__len 1
`define MA_core__asense__adc_start_ow__mask 'h08
`define MA_core__asense__adc_start_ow__shift 3
`define MA_core__asense__adc_start_ow__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_pcal---
// 
`define MA_core__asense__adc_pcal__a 'h01e8
`define MA_core__asense__adc_pcal__len 1
`define MA_core__asense__adc_pcal__mask 'h10
`define MA_core__asense__adc_pcal__shift 4
`define MA_core__asense__adc_pcal__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_pcal_ow---
// 
`define MA_core__asense__adc_pcal_ow__a 'h01e8
`define MA_core__asense__adc_pcal_ow__len 1
`define MA_core__asense__adc_pcal_ow__mask 'h20
`define MA_core__asense__adc_pcal_ow__shift 5
`define MA_core__asense__adc_pcal_ow__reset 'h00

//------------------------------------------------------------------------------core__asense__samp_start---
// 
`define MA_core__asense__samp_start__a 'h01e6
`define MA_core__asense__samp_start__len 1
`define MA_core__asense__samp_start__mask 'h01
`define MA_core__asense__samp_start__shift 0
`define MA_core__asense__samp_start__reset 'h00

//------------------------------------------------------------------------------core__asense__samp_start_ow---
// 
`define MA_core__asense__samp_start_ow__a 'h01e6
`define MA_core__asense__samp_start_ow__len 1
`define MA_core__asense__samp_start_ow__mask 'h02
`define MA_core__asense__samp_start_ow__shift 1
`define MA_core__asense__samp_start_ow__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_override---
// Enable override of analog sense output values with *_value settings below; 0: Temperature, 1: PVDD, 2: Pin
`define MA_core__asense__adc_override__a 'h01e9
`define MA_core__asense__adc_override__len 3
`define MA_core__asense__adc_override__mask 'h07
`define MA_core__asense__adc_override__shift 0
`define MA_core__asense__adc_override__reset 'h00

//------------------------------------------------------------------------------core__asense__min_max_persist---
// Enable persistence of the min/max registers when in over sampling mode with outlier removal
`define MA_core__asense__min_max_persist__a 'h01e9
`define MA_core__asense__min_max_persist__len 1
`define MA_core__asense__min_max_persist__mask 'h08
`define MA_core__asense__min_max_persist__shift 3
`define MA_core__asense__min_max_persist__reset 'h00

//------------------------------------------------------------------------------core__asense__outlier_en---
// Enable outlier removal for given input: 0: Temperature, 1: PVDD, 2: Pin, 3: Bandgap, 4: debug bus 0, 5: debug bus 1
`define MA_core__asense__outlier_en__a 'h01ea
`define MA_core__asense__outlier_en__len 6
`define MA_core__asense__outlier_en__mask 'h3f
`define MA_core__asense__outlier_en__shift 0
`define MA_core__asense__outlier_en__reset 'h00

//------------------------------------------------------------------------------core__asense__temp_gain__0---
// Temperature gain value. In general output values are calculated using the folloging formula: out = gain * (adc_result + offset) >> shift
`define MA_core__asense__temp_gain__0__a 'h01eb
`define MA_core__asense__temp_gain__0__len 8
`define MA_core__asense__temp_gain__0__mask 'hff
`define MA_core__asense__temp_gain__0__shift 0
`define MA_core__asense__temp_gain__0__reset 'hc0

//------------------------------------------------------------------------------core__asense__temp_gain__1---
// Temperature gain value. In general output values are calculated using the folloging formula: out = gain * (adc_result + offset) >> shift
`define MA_core__asense__temp_gain__1__a 'h01ec
`define MA_core__asense__temp_gain__1__len 2
`define MA_core__asense__temp_gain__1__mask 'h03
`define MA_core__asense__temp_gain__1__shift 0
`define MA_core__asense__temp_gain__1__reset 'h03

//------------------------------------------------------------------------------core__asense__temp_shift---
// Temperature shift value
`define MA_core__asense__temp_shift__a 'h01ec
`define MA_core__asense__temp_shift__len 2
`define MA_core__asense__temp_shift__mask 'h0c
`define MA_core__asense__temp_shift__shift 2
`define MA_core__asense__temp_shift__reset 'h01

//------------------------------------------------------------------------------core__asense__temp_offset__0---
// Temperature offset value
`define MA_core__asense__temp_offset__0__a 'h01ed
`define MA_core__asense__temp_offset__0__len 8
`define MA_core__asense__temp_offset__0__mask 'hff
`define MA_core__asense__temp_offset__0__shift 0
`define MA_core__asense__temp_offset__0__reset 'h11

//------------------------------------------------------------------------------core__asense__temp_offset__1---
// Temperature offset value
`define MA_core__asense__temp_offset__1__a 'h01ee
`define MA_core__asense__temp_offset__1__len 2
`define MA_core__asense__temp_offset__1__mask 'h03
`define MA_core__asense__temp_offset__1__shift 0
`define MA_core__asense__temp_offset__1__reset 'hffffffff

//------------------------------------------------------------------------------core__asense__temp_value---
// Temperature value when ADC is overridden
`define MA_core__asense__temp_value__a 'h01ef
`define MA_core__asense__temp_value__len 8
`define MA_core__asense__temp_value__mask 'hff
`define MA_core__asense__temp_value__shift 0
`define MA_core__asense__temp_value__reset 'h4b

//------------------------------------------------------------------------------core__asense__pvdd_gain__0---
// PVDD gain value
`define MA_core__asense__pvdd_gain__0__a 'h01f0
`define MA_core__asense__pvdd_gain__0__len 8
`define MA_core__asense__pvdd_gain__0__mask 'hff
`define MA_core__asense__pvdd_gain__0__shift 0
`define MA_core__asense__pvdd_gain__0__reset 'h42

//------------------------------------------------------------------------------core__asense__pvdd_gain__1---
// PVDD gain value
`define MA_core__asense__pvdd_gain__1__a 'h01f1
`define MA_core__asense__pvdd_gain__1__len 2
`define MA_core__asense__pvdd_gain__1__mask 'h03
`define MA_core__asense__pvdd_gain__1__shift 0
`define MA_core__asense__pvdd_gain__1__reset 'h02

//------------------------------------------------------------------------------core__asense__pvdd_shift---
// PVDD shift value
`define MA_core__asense__pvdd_shift__a 'h01f1
`define MA_core__asense__pvdd_shift__len 2
`define MA_core__asense__pvdd_shift__mask 'h0c
`define MA_core__asense__pvdd_shift__shift 2
`define MA_core__asense__pvdd_shift__reset 'h01

//------------------------------------------------------------------------------core__asense__pvdd_offset__0---
// PVDD offset value
`define MA_core__asense__pvdd_offset__0__a 'h01f2
`define MA_core__asense__pvdd_offset__0__len 8
`define MA_core__asense__pvdd_offset__0__mask 'hff
`define MA_core__asense__pvdd_offset__0__shift 0
`define MA_core__asense__pvdd_offset__0__reset 'h00

//------------------------------------------------------------------------------core__asense__pvdd_offset__1---
// PVDD offset value
`define MA_core__asense__pvdd_offset__1__a 'h01f3
`define MA_core__asense__pvdd_offset__1__len 2
`define MA_core__asense__pvdd_offset__1__mask 'h03
`define MA_core__asense__pvdd_offset__1__shift 0
`define MA_core__asense__pvdd_offset__1__reset 'h00

//------------------------------------------------------------------------------core__asense__pvdd_value---
// PDVD value when ADC is overridden
`define MA_core__asense__pvdd_value__a 'h01f4
`define MA_core__asense__pvdd_value__len 8
`define MA_core__asense__pvdd_value__mask 'hff
`define MA_core__asense__pvdd_value__shift 0
`define MA_core__asense__pvdd_value__reset 'h90

//------------------------------------------------------------------------------core__asense__pin_gain__0---
// Pin gain value
`define MA_core__asense__pin_gain__0__a 'h01f5
`define MA_core__asense__pin_gain__0__len 8
`define MA_core__asense__pin_gain__0__mask 'hff
`define MA_core__asense__pin_gain__0__shift 0
`define MA_core__asense__pin_gain__0__reset 'h00

//------------------------------------------------------------------------------core__asense__pin_gain__1---
// Pin gain value
`define MA_core__asense__pin_gain__1__a 'h01f6
`define MA_core__asense__pin_gain__1__len 2
`define MA_core__asense__pin_gain__1__mask 'h03
`define MA_core__asense__pin_gain__1__shift 0
`define MA_core__asense__pin_gain__1__reset 'h00

//------------------------------------------------------------------------------core__asense__pin_shift---
// Pin shift value
`define MA_core__asense__pin_shift__a 'h01f6
`define MA_core__asense__pin_shift__len 2
`define MA_core__asense__pin_shift__mask 'h0c
`define MA_core__asense__pin_shift__shift 2
`define MA_core__asense__pin_shift__reset 'h00

//------------------------------------------------------------------------------core__asense__pin_offset__0---
// Pin offset value
`define MA_core__asense__pin_offset__0__a 'h01f7
`define MA_core__asense__pin_offset__0__len 8
`define MA_core__asense__pin_offset__0__mask 'hff
`define MA_core__asense__pin_offset__0__shift 0
`define MA_core__asense__pin_offset__0__reset 'h00

//------------------------------------------------------------------------------core__asense__pin_offset__1---
// Pin offset value
`define MA_core__asense__pin_offset__1__a 'h01f8
`define MA_core__asense__pin_offset__1__len 2
`define MA_core__asense__pin_offset__1__mask 'h03
`define MA_core__asense__pin_offset__1__shift 0
`define MA_core__asense__pin_offset__1__reset 'h00

//------------------------------------------------------------------------------core__asense__pin_value---
// Pin value when ADC is overridden
`define MA_core__asense__pin_value__a 'h01f9
`define MA_core__asense__pin_value__len 8
`define MA_core__asense__pin_value__mask 'hff
`define MA_core__asense__pin_value__shift 0
`define MA_core__asense__pin_value__reset 'h00

//------------------------------------------------------------------------------core__asense__debug_gain__0---
// Debug bus gain value
`define MA_core__asense__debug_gain__0__a 'h01fa
`define MA_core__asense__debug_gain__0__len 8
`define MA_core__asense__debug_gain__0__mask 'hff
`define MA_core__asense__debug_gain__0__shift 0
`define MA_core__asense__debug_gain__0__reset 'h00

//------------------------------------------------------------------------------core__asense__debug_gain__1---
// Debug bus gain value
`define MA_core__asense__debug_gain__1__a 'h01fb
`define MA_core__asense__debug_gain__1__len 2
`define MA_core__asense__debug_gain__1__mask 'h03
`define MA_core__asense__debug_gain__1__shift 0
`define MA_core__asense__debug_gain__1__reset 'h00

//------------------------------------------------------------------------------core__asense__debug_shift---
// Debug bus shift value
`define MA_core__asense__debug_shift__a 'h01fb
`define MA_core__asense__debug_shift__len 2
`define MA_core__asense__debug_shift__mask 'h0c
`define MA_core__asense__debug_shift__shift 2
`define MA_core__asense__debug_shift__reset 'h00

//------------------------------------------------------------------------------core__asense__debug_offset__0---
// Debug bus offset value
`define MA_core__asense__debug_offset__0__a 'h01fc
`define MA_core__asense__debug_offset__0__len 8
`define MA_core__asense__debug_offset__0__mask 'hff
`define MA_core__asense__debug_offset__0__shift 0
`define MA_core__asense__debug_offset__0__reset 'h00

//------------------------------------------------------------------------------core__asense__debug_offset__1---
// Debug bus offset value
`define MA_core__asense__debug_offset__1__a 'h01fd
`define MA_core__asense__debug_offset__1__len 2
`define MA_core__asense__debug_offset__1__mask 'h03
`define MA_core__asense__debug_offset__1__shift 0
`define MA_core__asense__debug_offset__1__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_chnr---
// ADC input channel selection: 0: Frontend, 1: adc_in pin
`define MA_core__asense__adc_chnr__a 'h01fe
`define MA_core__asense__adc_chnr__len 4
`define MA_core__asense__adc_chnr__mask 'h0f
`define MA_core__asense__adc_chnr__shift 0
`define MA_core__asense__adc_chnr__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_stc---
// ADC sample time control;  0: 32, 1: 16, 2: 64, 3: 128 clock cycles (24 MHz)
`define MA_core__asense__adc_stc__a 'h01fe
`define MA_core__asense__adc_stc__len 2
`define MA_core__asense__adc_stc__mask 'h30
`define MA_core__asense__adc_stc__shift 4
`define MA_core__asense__adc_stc__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_stc_cal---
// ADC sample time control for calibration; 0: 4, 1: 8, 2: 16, 3: 32 clock cycles (24 MHz)
`define MA_core__asense__adc_stc_cal__a 'h01fe
`define MA_core__asense__adc_stc_cal__len 2
`define MA_core__asense__adc_stc_cal__mask 'hc0
`define MA_core__asense__adc_stc_cal__shift 6
`define MA_core__asense__adc_stc_cal__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_comp_val__0---
// ADC compare mode value to compare with
`define MA_core__asense__adc_comp_val__0__a 'h01ff
`define MA_core__asense__adc_comp_val__0__len 8
`define MA_core__asense__adc_comp_val__0__mask 'hff
`define MA_core__asense__adc_comp_val__0__shift 0
`define MA_core__asense__adc_comp_val__0__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_comp_val__1---
// ADC compare mode value to compare with
`define MA_core__asense__adc_comp_val__1__a 'h0200
`define MA_core__asense__adc_comp_val__1__len 5
`define MA_core__asense__adc_comp_val__1__mask 'h1f
`define MA_core__asense__adc_comp_val__1__shift 0
`define MA_core__asense__adc_comp_val__1__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_comp_en---
// ADC enable compare mode
`define MA_core__asense__adc_comp_en__a 'h0200
`define MA_core__asense__adc_comp_en__len 1
`define MA_core__asense__adc_comp_en__mask 'h20
`define MA_core__asense__adc_comp_en__shift 5
`define MA_core__asense__adc_comp_en__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_sesp---
// ADC Spreaded Early Sampling Point Mode, see more in JAMA
`define MA_core__asense__adc_sesp__a 'h0200
`define MA_core__asense__adc_sesp__len 1
`define MA_core__asense__adc_sesp__mask 'h40
`define MA_core__asense__adc_sesp__shift 6
`define MA_core__asense__adc_sesp__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_dscal---
// ADC disable startup calibration
`define MA_core__asense__adc_dscal__a 'h0200
`define MA_core__asense__adc_dscal__len 1
`define MA_core__asense__adc_dscal__mask 'h80
`define MA_core__asense__adc_dscal__shift 7
`define MA_core__asense__adc_dscal__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_track_cfg---
// ADC number of tracking overconversion cycles; 0: 0 (standard 11-bit), 1: 1, 2: 3,  3: 7 (max noise suppression)  
`define MA_core__asense__adc_track_cfg__a 'h0201
`define MA_core__asense__adc_track_cfg__len 2
`define MA_core__asense__adc_track_cfg__mask 'h03
`define MA_core__asense__adc_track_cfg__shift 0
`define MA_core__asense__adc_track_cfg__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_overs_cfg---
// ADC number of overconversion cycles (this settings takes precedence over tracking); 0: 1 (standard 11-bit), 1: 2, 2: 4,  3: 5 (max noise suppression)  
`define MA_core__asense__adc_overs_cfg__a 'h0201
`define MA_core__asense__adc_overs_cfg__len 2
`define MA_core__asense__adc_overs_cfg__mask 'h0c
`define MA_core__asense__adc_overs_cfg__shift 2
`define MA_core__asense__adc_overs_cfg__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_dither_cfg---
// ADC add dither in overconsversion
`define MA_core__asense__adc_dither_cfg__a 'h0201
`define MA_core__asense__adc_dither_cfg__len 2
`define MA_core__asense__adc_dither_cfg__mask 'h30
`define MA_core__asense__adc_dither_cfg__shift 4
`define MA_core__asense__adc_dither_cfg__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_lv_gain---
// 
`define MA_core__asense__adc_lv_gain__a 'h01e8
`define MA_core__asense__adc_lv_gain__len 1
`define MA_core__asense__adc_lv_gain__mask 'h40
`define MA_core__asense__adc_lv_gain__shift 6
`define MA_core__asense__adc_lv_gain__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_tst_dig_in__0---
// ADC BIST input vector, see ADC documentation for description
`define MA_core__asense__adc_tst_dig_in__0__a 'h0203
`define MA_core__asense__adc_tst_dig_in__0__len 8
`define MA_core__asense__adc_tst_dig_in__0__mask 'hff
`define MA_core__asense__adc_tst_dig_in__0__shift 0
`define MA_core__asense__adc_tst_dig_in__0__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_tst_dig_in__1---
// ADC BIST input vector, see ADC documentation for description
`define MA_core__asense__adc_tst_dig_in__1__a 'h0204
`define MA_core__asense__adc_tst_dig_in__1__len 8
`define MA_core__asense__adc_tst_dig_in__1__mask 'hff
`define MA_core__asense__adc_tst_dig_in__1__shift 0
`define MA_core__asense__adc_tst_dig_in__1__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_tst_dig_in__2---
// ADC BIST input vector, see ADC documentation for description
`define MA_core__asense__adc_tst_dig_in__2__a 'h0205
`define MA_core__asense__adc_tst_dig_in__2__len 8
`define MA_core__asense__adc_tst_dig_in__2__mask 'hff
`define MA_core__asense__adc_tst_dig_in__2__shift 0
`define MA_core__asense__adc_tst_dig_in__2__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_tst_dig_in__3---
// ADC BIST input vector, see ADC documentation for description
`define MA_core__asense__adc_tst_dig_in__3__a 'h0206
`define MA_core__asense__adc_tst_dig_in__3__len 8
`define MA_core__asense__adc_tst_dig_in__3__mask 'hff
`define MA_core__asense__adc_tst_dig_in__3__shift 0
`define MA_core__asense__adc_tst_dig_in__3__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_tst_dig_in__4---
// ADC BIST input vector, see ADC documentation for description
`define MA_core__asense__adc_tst_dig_in__4__a 'h0207
`define MA_core__asense__adc_tst_dig_in__4__len 5
`define MA_core__asense__adc_tst_dig_in__4__mask 'h1f
`define MA_core__asense__adc_tst_dig_in__4__shift 0
`define MA_core__asense__adc_tst_dig_in__4__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_tst_stress---
// ADC stress test mode
`define MA_core__asense__adc_tst_stress__a 'h0207
`define MA_core__asense__adc_tst_stress__len 1
`define MA_core__asense__adc_tst_stress__mask 'h20
`define MA_core__asense__adc_tst_stress__shift 5
`define MA_core__asense__adc_tst_stress__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_tst_dig_out__0---
// ADC BIST output vector
`define MA_core__asense__adc_tst_dig_out__0__a 'h0208
`define MA_core__asense__adc_tst_dig_out__0__len 8
`define MA_core__asense__adc_tst_dig_out__0__mask 'hff
`define MA_core__asense__adc_tst_dig_out__0__shift 0
`define MA_core__asense__adc_tst_dig_out__0__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_tst_dig_out__1---
// ADC BIST output vector
`define MA_core__asense__adc_tst_dig_out__1__a 'h0209
`define MA_core__asense__adc_tst_dig_out__1__len 8
`define MA_core__asense__adc_tst_dig_out__1__mask 'hff
`define MA_core__asense__adc_tst_dig_out__1__shift 0
`define MA_core__asense__adc_tst_dig_out__1__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_tst_dig_out__2---
// ADC BIST output vector
`define MA_core__asense__adc_tst_dig_out__2__a 'h020a
`define MA_core__asense__adc_tst_dig_out__2__len 4
`define MA_core__asense__adc_tst_dig_out__2__mask 'h0f
`define MA_core__asense__adc_tst_dig_out__2__shift 0
`define MA_core__asense__adc_tst_dig_out__2__reset 'h00

//------------------------------------------------------------------------------core__asense__temp__0---
// Output temperature value
`define MA_core__asense__temp__0__a 'h020b
`define MA_core__asense__temp__0__len 8
`define MA_core__asense__temp__0__mask 'hff
`define MA_core__asense__temp__0__shift 0
`define MA_core__asense__temp__0__reset 'h00

//------------------------------------------------------------------------------core__asense__temp__1---
// Output temperature value
`define MA_core__asense__temp__1__a 'h020c
`define MA_core__asense__temp__1__len 4
`define MA_core__asense__temp__1__mask 'h0f
`define MA_core__asense__temp__1__shift 0
`define MA_core__asense__temp__1__reset 'h00

//------------------------------------------------------------------------------core__asense__pvdd__0---
// Output PVDD value
`define MA_core__asense__pvdd__0__a 'h020d
`define MA_core__asense__pvdd__0__len 8
`define MA_core__asense__pvdd__0__mask 'hff
`define MA_core__asense__pvdd__0__shift 0
`define MA_core__asense__pvdd__0__reset 'h00

//------------------------------------------------------------------------------core__asense__pvdd__1---
// Output PVDD value
`define MA_core__asense__pvdd__1__a 'h020e
`define MA_core__asense__pvdd__1__len 4
`define MA_core__asense__pvdd__1__mask 'h0f
`define MA_core__asense__pvdd__1__shift 0
`define MA_core__asense__pvdd__1__reset 'h00

//------------------------------------------------------------------------------core__asense__pin__0---
// Output pin value
`define MA_core__asense__pin__0__a 'h020f
`define MA_core__asense__pin__0__len 8
`define MA_core__asense__pin__0__mask 'hff
`define MA_core__asense__pin__0__shift 0
`define MA_core__asense__pin__0__reset 'h00

//------------------------------------------------------------------------------core__asense__pin__1---
// Output pin value
`define MA_core__asense__pin__1__a 'h0210
`define MA_core__asense__pin__1__len 4
`define MA_core__asense__pin__1__mask 'h0f
`define MA_core__asense__pin__1__shift 0
`define MA_core__asense__pin__1__reset 'h00

//------------------------------------------------------------------------------core__asense__debug0__0---
// Output debug bus 0 value
`define MA_core__asense__debug0__0__a 'h0211
`define MA_core__asense__debug0__0__len 8
`define MA_core__asense__debug0__0__mask 'hff
`define MA_core__asense__debug0__0__shift 0
`define MA_core__asense__debug0__0__reset 'h00

//------------------------------------------------------------------------------core__asense__debug0__1---
// Output debug bus 0 value
`define MA_core__asense__debug0__1__a 'h0212
`define MA_core__asense__debug0__1__len 4
`define MA_core__asense__debug0__1__mask 'h0f
`define MA_core__asense__debug0__1__shift 0
`define MA_core__asense__debug0__1__reset 'h00

//------------------------------------------------------------------------------core__asense__debug1__0---
// Output debug bus 1/bandgap evalue
`define MA_core__asense__debug1__0__a 'h0213
`define MA_core__asense__debug1__0__len 8
`define MA_core__asense__debug1__0__mask 'hff
`define MA_core__asense__debug1__0__shift 0
`define MA_core__asense__debug1__0__reset 'h00

//------------------------------------------------------------------------------core__asense__debug1__1---
// Output debug bus 1/bandgap evalue
`define MA_core__asense__debug1__1__a 'h0214
`define MA_core__asense__debug1__1__len 4
`define MA_core__asense__debug1__1__mask 'h0f
`define MA_core__asense__debug1__1__shift 0
`define MA_core__asense__debug1__1__reset 'h00

//------------------------------------------------------------------------------core__asense__outlier_max__0---
// Maximum outlier encountered with min_max_persist
`define MA_core__asense__outlier_max__0__a 'h0215
`define MA_core__asense__outlier_max__0__len 8
`define MA_core__asense__outlier_max__0__mask 'hff
`define MA_core__asense__outlier_max__0__shift 0
`define MA_core__asense__outlier_max__0__reset 'h00

//------------------------------------------------------------------------------core__asense__outlier_max__1---
// Maximum outlier encountered with min_max_persist
`define MA_core__asense__outlier_max__1__a 'h0216
`define MA_core__asense__outlier_max__1__len 4
`define MA_core__asense__outlier_max__1__mask 'h0f
`define MA_core__asense__outlier_max__1__shift 0
`define MA_core__asense__outlier_max__1__reset 'h00

//------------------------------------------------------------------------------core__asense__outlier_min__0---
// Minimum outlier encountered with min_max_persist
`define MA_core__asense__outlier_min__0__a 'h0217
`define MA_core__asense__outlier_min__0__len 8
`define MA_core__asense__outlier_min__0__mask 'hff
`define MA_core__asense__outlier_min__0__shift 0
`define MA_core__asense__outlier_min__0__reset 'h00

//------------------------------------------------------------------------------core__asense__outlier_min__1---
// Minimum outlier encountered with min_max_persist
`define MA_core__asense__outlier_min__1__a 'h0218
`define MA_core__asense__outlier_min__1__len 4
`define MA_core__asense__outlier_min__1__mask 'h0f
`define MA_core__asense__outlier_min__1__shift 0
`define MA_core__asense__outlier_min__1__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_lv_gain_ow---
// 
`define MA_core__asense__adc_lv_gain_ow__a 'h01e8
`define MA_core__asense__adc_lv_gain_ow__len 1
`define MA_core__asense__adc_lv_gain_ow__mask 'h80
`define MA_core__asense__adc_lv_gain_ow__shift 7
`define MA_core__asense__adc_lv_gain_ow__reset 'h00

//------------------------------------------------------------------------------core__asense__adc_lv_gain_src---
// ADC enable lv_gain for given input; [ debug1 debug0 bandgap pin pvdd temp ]
`define MA_core__asense__adc_lv_gain_src__a 'h0202
`define MA_core__asense__adc_lv_gain_src__len 6
`define MA_core__asense__adc_lv_gain_src__mask 'h3f
`define MA_core__asense__adc_lv_gain_src__shift 0
`define MA_core__asense__adc_lv_gain_src__reset 'h06

//------------------------------------------------------------------------------core__asense__fe_sel_en---
// 
`define MA_core__asense__fe_sel_en__a 'h01e7
`define MA_core__asense__fe_sel_en__len 1
`define MA_core__asense__fe_sel_en__mask 'h10
`define MA_core__asense__fe_sel_en__shift 4
`define MA_core__asense__fe_sel_en__reset 'h00

//------------------------------------------------------------------------------core__asense__fe_sel_en_ow---
// 
`define MA_core__asense__fe_sel_en_ow__a 'h01e7
`define MA_core__asense__fe_sel_en_ow__len 1
`define MA_core__asense__fe_sel_en_ow__mask 'h20
`define MA_core__asense__fe_sel_en_ow__shift 5
`define MA_core__asense__fe_sel_en_ow__reset 'h00

//------------------------------------------------------------------------------core__spare__spare_d_n_bits---
// 
`define MA_core__spare__spare_d_n_bits__a 'h0242
`define MA_core__spare__spare_d_n_bits__len 4
`define MA_core__spare__spare_d_n_bits__mask 'h0f
`define MA_core__spare__spare_d_n_bits__shift 0
`define MA_core__spare__spare_d_n_bits__reset 'h00

//------------------------------------------------------------------------------core__spare__spare_a_n_bits---
// 
`define MA_core__spare__spare_a_n_bits__a 'h0240
`define MA_core__spare__spare_a_n_bits__len 3
`define MA_core__spare__spare_a_n_bits__mask 'h07
`define MA_core__spare__spare_a_n_bits__shift 0
`define MA_core__spare__spare_a_n_bits__reset 'h00

//------------------------------------------------------------------------------core__spare__spare_a_s_bits---
// 
`define MA_core__spare__spare_a_s_bits__a 'h0244
`define MA_core__spare__spare_a_s_bits__len 4
`define MA_core__spare__spare_a_s_bits__mask 'h0f
`define MA_core__spare__spare_a_s_bits__shift 0
`define MA_core__spare__spare_a_s_bits__reset 'h00

//------------------------------------------------------------------------------core__spare__spare_d_s_bits---
// 
`define MA_core__spare__spare_d_s_bits__a 'h0246
`define MA_core__spare__spare_d_s_bits__len 6
`define MA_core__spare__spare_d_s_bits__mask 'h3f
`define MA_core__spare__spare_d_s_bits__shift 0
`define MA_core__spare__spare_d_s_bits__reset 'h00

//------------------------------------------------------------------------------core__spare__spare_d_n_mon---
// 
`define MA_core__spare__spare_d_n_mon__a 'h0243
`define MA_core__spare__spare_d_n_mon__len 4
`define MA_core__spare__spare_d_n_mon__mask 'h0f
`define MA_core__spare__spare_d_n_mon__shift 0
`define MA_core__spare__spare_d_n_mon__reset 'h0f

//------------------------------------------------------------------------------core__spare__spare_a_n_mon---
// 
`define MA_core__spare__spare_a_n_mon__a 'h0241
`define MA_core__spare__spare_a_n_mon__len 2
`define MA_core__spare__spare_a_n_mon__mask 'h03
`define MA_core__spare__spare_a_n_mon__shift 0
`define MA_core__spare__spare_a_n_mon__reset 'h03

//------------------------------------------------------------------------------core__spare__spare_a_s_mon---
// 
`define MA_core__spare__spare_a_s_mon__a 'h0245
`define MA_core__spare__spare_a_s_mon__len 4
`define MA_core__spare__spare_a_s_mon__mask 'h0f
`define MA_core__spare__spare_a_s_mon__shift 0
`define MA_core__spare__spare_a_s_mon__reset 'h0e

//------------------------------------------------------------------------------core__spare__spare_d_s_mon---
// 
`define MA_core__spare__spare_d_s_mon__a 'h0247
`define MA_core__spare__spare_d_s_mon__len 8
`define MA_core__spare__spare_d_s_mon__mask 'hff
`define MA_core__spare__spare_d_s_mon__shift 0
`define MA_core__spare__spare_d_s_mon__reset 'h00

//------------------------------------------------------------------------------core__spare__spare_bits_0---
// 
`define MA_core__spare__spare_bits_0__a 'h0248
`define MA_core__spare__spare_bits_0__len 8
`define MA_core__spare__spare_bits_0__mask 'hff
`define MA_core__spare__spare_bits_0__shift 0
`define MA_core__spare__spare_bits_0__reset 'h00

//------------------------------------------------------------------------------core__spare__spare_bits_1---
// 
`define MA_core__spare__spare_bits_1__a 'h0249
`define MA_core__spare__spare_bits_1__len 8
`define MA_core__spare__spare_bits_1__mask 'hff
`define MA_core__spare__spare_bits_1__shift 0
`define MA_core__spare__spare_bits_1__reset 'h00

//------------------------------------------------------------------------------core__test__i2c_in_en---
// 
`define MA_core__test__i2c_in_en__a 'h0220
`define MA_core__test__i2c_in_en__len 1
`define MA_core__test__i2c_in_en__mask 'h01
`define MA_core__test__i2c_in_en__shift 0
`define MA_core__test__i2c_in_en__reset 'h01

//------------------------------------------------------------------------------core__test__i2c_scl_out_en---
// 
`define MA_core__test__i2c_scl_out_en__a 'h0220
`define MA_core__test__i2c_scl_out_en__len 1
`define MA_core__test__i2c_scl_out_en__mask 'h02
`define MA_core__test__i2c_scl_out_en__shift 1
`define MA_core__test__i2c_scl_out_en__reset 'h01

//------------------------------------------------------------------------------core__test__i2c_sda_out_en---
// 
`define MA_core__test__i2c_sda_out_en__a 'h0220
`define MA_core__test__i2c_sda_out_en__len 1
`define MA_core__test__i2c_sda_out_en__mask 'h04
`define MA_core__test__i2c_sda_out_en__shift 2
`define MA_core__test__i2c_sda_out_en__reset 'h01

//------------------------------------------------------------------------------core__test__sif_mode_i2c---
// 
`define MA_core__test__sif_mode_i2c__a 'h0220
`define MA_core__test__sif_mode_i2c__len 1
`define MA_core__test__sif_mode_i2c__mask 'h08
`define MA_core__test__sif_mode_i2c__shift 3
`define MA_core__test__sif_mode_i2c__reset 'h01

//------------------------------------------------------------------------------core__test__xpin_mode---
// Mode select for nclip and nerr pins; 0: Open-drain (default), 1: Digital, 2: Power, 3: Analog unbuf, 4: Analog Cur, 5: Analog buffer, 6: Offset meas, 7: Analog CMOS
`define MA_core__test__xpin_mode__a 'h0221
`define MA_core__test__xpin_mode__len 3
`define MA_core__test__xpin_mode__mask 'h07
`define MA_core__test__xpin_mode__shift 0
`define MA_core__test__xpin_mode__reset 'h00

//------------------------------------------------------------------------------core__test__xpin_cfg---
// 
`define MA_core__test__xpin_cfg__a 'h0221
`define MA_core__test__xpin_cfg__len 3
`define MA_core__test__xpin_cfg__mask 'h70
`define MA_core__test__xpin_cfg__shift 4
`define MA_core__test__xpin_cfg__reset 'h01

//------------------------------------------------------------------------------core__test__xpin_cfg_force---
// 
`define MA_core__test__xpin_cfg_force__a 'h0221
`define MA_core__test__xpin_cfg_force__len 1
`define MA_core__test__xpin_cfg_force__mask 'h80
`define MA_core__test__xpin_cfg_force__shift 7
`define MA_core__test__xpin_cfg_force__reset 'h00

//------------------------------------------------------------------------------core__test__afir_bist_en---
// Start afir bist test
`define MA_core__test__afir_bist_en__a 'h0232
`define MA_core__test__afir_bist_en__len 1
`define MA_core__test__afir_bist_en__mask 'h01
`define MA_core__test__afir_bist_en__shift 0
`define MA_core__test__afir_bist_en__reset 'h00

//------------------------------------------------------------------------------core__test__afir_bist_results_0---
// afir_bist_results_0
`define MA_core__test__afir_bist_results_0__a 'h0239
`define MA_core__test__afir_bist_results_0__len 1
`define MA_core__test__afir_bist_results_0__mask 'h01
`define MA_core__test__afir_bist_results_0__shift 0
`define MA_core__test__afir_bist_results_0__reset 'h00

//------------------------------------------------------------------------------core__test__afir_bist_cfg---
// Afir bist mode
`define MA_core__test__afir_bist_cfg__a 'h0232
`define MA_core__test__afir_bist_cfg__len 2
`define MA_core__test__afir_bist_cfg__mask 'h18
`define MA_core__test__afir_bist_cfg__shift 3
`define MA_core__test__afir_bist_cfg__reset 'h00

//------------------------------------------------------------------------------core__test__afir_bist_results_1---
// afir_bist_results_1
`define MA_core__test__afir_bist_results_1__a 'h0239
`define MA_core__test__afir_bist_results_1__len 1
`define MA_core__test__afir_bist_results_1__mask 'h02
`define MA_core__test__afir_bist_results_1__shift 1
`define MA_core__test__afir_bist_results_1__reset 'h00

//------------------------------------------------------------------------------core__test__en_clk_pad---
// High to enable DCO clock probe pad
`define MA_core__test__en_clk_pad__a 'h0226
`define MA_core__test__en_clk_pad__len 1
`define MA_core__test__en_clk_pad__mask 'h10
`define MA_core__test__en_clk_pad__shift 4
`define MA_core__test__en_clk_pad__reset 'h00

//------------------------------------------------------------------------------core__test__nreset_lock---
// High to lock device in non-reset state
`define MA_core__test__nreset_lock__a 'h0226
`define MA_core__test__nreset_lock__len 1
`define MA_core__test__nreset_lock__mask 'h20
`define MA_core__test__nreset_lock__shift 5
`define MA_core__test__nreset_lock__reset 'h00

//------------------------------------------------------------------------------core__test__d0_mux_sel---
// Debug 0 (nclip) mux select when xpin_mode=1
`define MA_core__test__d0_mux_sel__a 'h0222
`define MA_core__test__d0_mux_sel__len 8
`define MA_core__test__d0_mux_sel__mask 'hff
`define MA_core__test__d0_mux_sel__shift 0
`define MA_core__test__d0_mux_sel__reset 'h00

//------------------------------------------------------------------------------core__test__d1_mux_sel---
// Debug 1 (nerr) mux select when xpin_mode=1
`define MA_core__test__d1_mux_sel__a 'h0223
`define MA_core__test__d1_mux_sel__len 8
`define MA_core__test__d1_mux_sel__mask 'hff
`define MA_core__test__d1_mux_sel__shift 0
`define MA_core__test__d1_mux_sel__reset 'h00

//------------------------------------------------------------------------------core__test__revision0---
// Subversion revision of the register bank
`define MA_core__test__revision0__a 'h0229
`define MA_core__test__revision0__len 8
`define MA_core__test__revision0__mask 'hff
`define MA_core__test__revision0__shift 0
`define MA_core__test__revision0__reset 'h00

//------------------------------------------------------------------------------core__test__revision1---
// Subversion revision of the register bank
`define MA_core__test__revision1__a 'h022a
`define MA_core__test__revision1__len 8
`define MA_core__test__revision1__mask 'hff
`define MA_core__test__revision1__shift 0
`define MA_core__test__revision1__reset 'h00

//------------------------------------------------------------------------------core__test__dsp_ram_pm_bist---
// DSP program memory bist config
`define MA_core__test__dsp_ram_pm_bist__a 'h022b
`define MA_core__test__dsp_ram_pm_bist__len 4
`define MA_core__test__dsp_ram_pm_bist__mask 'hf0
`define MA_core__test__dsp_ram_pm_bist__shift 4
`define MA_core__test__dsp_ram_pm_bist__reset 'h00

//------------------------------------------------------------------------------core__test__dsp_ram_dm_bist---
// DSP data memory bist config
`define MA_core__test__dsp_ram_dm_bist__a 'h022b
`define MA_core__test__dsp_ram_dm_bist__len 4
`define MA_core__test__dsp_ram_dm_bist__mask 'h0f
`define MA_core__test__dsp_ram_dm_bist__shift 0
`define MA_core__test__dsp_ram_dm_bist__reset 'h00

//------------------------------------------------------------------------------core__test__dsp_ram_pm_status---
// DSP program memory bist status
`define MA_core__test__dsp_ram_pm_status__a 'h022c
`define MA_core__test__dsp_ram_pm_status__len 8
`define MA_core__test__dsp_ram_pm_status__mask 'hff
`define MA_core__test__dsp_ram_pm_status__shift 0
`define MA_core__test__dsp_ram_pm_status__reset 'h00

//------------------------------------------------------------------------------core__test__dsp_ram_dm_status---
// DSP data memory bist status
`define MA_core__test__dsp_ram_dm_status__a 'h022d
`define MA_core__test__dsp_ram_dm_status__len 8
`define MA_core__test__dsp_ram_dm_status__mask 'hff
`define MA_core__test__dsp_ram_dm_status__shift 0
`define MA_core__test__dsp_ram_dm_status__reset 'h00

//------------------------------------------------------------------------------core__test__dsp_ram_pm_addr_lo---
// DSP program memory bist address ptr low bits
`define MA_core__test__dsp_ram_pm_addr_lo__a 'h022e
`define MA_core__test__dsp_ram_pm_addr_lo__len 8
`define MA_core__test__dsp_ram_pm_addr_lo__mask 'hff
`define MA_core__test__dsp_ram_pm_addr_lo__shift 0
`define MA_core__test__dsp_ram_pm_addr_lo__reset 'h00

//------------------------------------------------------------------------------core__test__dsp_ram_dm_addr_lo---
// DSP data memory bist address ptr low bits
`define MA_core__test__dsp_ram_dm_addr_lo__a 'h0230
`define MA_core__test__dsp_ram_dm_addr_lo__len 8
`define MA_core__test__dsp_ram_dm_addr_lo__mask 'hff
`define MA_core__test__dsp_ram_dm_addr_lo__shift 0
`define MA_core__test__dsp_ram_dm_addr_lo__reset 'h00

//------------------------------------------------------------------------------core__test__dsp_ram_pm_addr_hi---
// DSP program memory bist address ptr high bits
`define MA_core__test__dsp_ram_pm_addr_hi__a 'h022f
`define MA_core__test__dsp_ram_pm_addr_hi__len 2
`define MA_core__test__dsp_ram_pm_addr_hi__mask 'h03
`define MA_core__test__dsp_ram_pm_addr_hi__shift 0
`define MA_core__test__dsp_ram_pm_addr_hi__reset 'h00

//------------------------------------------------------------------------------core__test__dsp_ram_dm_addr_hi---
// DSP data memory bist address ptr high bits
`define MA_core__test__dsp_ram_dm_addr_hi__a 'h0231
`define MA_core__test__dsp_ram_dm_addr_hi__len 2
`define MA_core__test__dsp_ram_dm_addr_hi__mask 'h03
`define MA_core__test__dsp_ram_dm_addr_hi__shift 0
`define MA_core__test__dsp_ram_dm_addr_hi__reset 'h00

//------------------------------------------------------------------------------core__test__d2_mux_sel---
// Debug 2 (i2s_sdo) mux select
`define MA_core__test__d2_mux_sel__a 'h0224
`define MA_core__test__d2_mux_sel__len 8
`define MA_core__test__d2_mux_sel__mask 'hff
`define MA_core__test__d2_mux_sel__shift 0
`define MA_core__test__d2_mux_sel__reset 'h00

//------------------------------------------------------------------------------core__test__i2s_sdo_debug_out---
// High to enable debug 2 output on i2s_sdo
`define MA_core__test__i2s_sdo_debug_out__a 'h0226
`define MA_core__test__i2s_sdo_debug_out__len 1
`define MA_core__test__i2s_sdo_debug_out__mask 'h40
`define MA_core__test__i2s_sdo_debug_out__shift 6
`define MA_core__test__i2s_sdo_debug_out__reset 'h00

//------------------------------------------------------------------------------core__test__i2s_sdo_reclk_bypass---
// High to enable bypass of the output register on i2s_sdo located in the south pad segment.
`define MA_core__test__i2s_sdo_reclk_bypass__a 'h0226
`define MA_core__test__i2s_sdo_reclk_bypass__len 1
`define MA_core__test__i2s_sdo_reclk_bypass__mask 'h80
`define MA_core__test__i2s_sdo_reclk_bypass__shift 7
`define MA_core__test__i2s_sdo_reclk_bypass__reset 'h00

//------------------------------------------------------------------------------core__test__afir_bist_start---
// Start afir bist test
`define MA_core__test__afir_bist_start__a 'h0232
`define MA_core__test__afir_bist_start__len 1
`define MA_core__test__afir_bist_start__mask 'h02
`define MA_core__test__afir_bist_start__shift 1
`define MA_core__test__afir_bist_start__reset 'h00

//------------------------------------------------------------------------------core__test__afir_bist_cont---
// afir bist continuous test
`define MA_core__test__afir_bist_cont__a 'h0232
`define MA_core__test__afir_bist_cont__len 1
`define MA_core__test__afir_bist_cont__mask 'h04
`define MA_core__test__afir_bist_cont__shift 2
`define MA_core__test__afir_bist_cont__reset 'h00

//------------------------------------------------------------------------------core__test__afir_bist_prbg_seed_0---
// Pseudo random bit generator seed - 10 bits
`define MA_core__test__afir_bist_prbg_seed_0__a 'h0234
`define MA_core__test__afir_bist_prbg_seed_0__len 8
`define MA_core__test__afir_bist_prbg_seed_0__mask 'hff
`define MA_core__test__afir_bist_prbg_seed_0__shift 0
`define MA_core__test__afir_bist_prbg_seed_0__reset 'h00

//------------------------------------------------------------------------------core__test__afir_bist_prbg_seed_1---
// Pseudo random bit generator seed - 10 bits
`define MA_core__test__afir_bist_prbg_seed_1__a 'h0235
`define MA_core__test__afir_bist_prbg_seed_1__len 2
`define MA_core__test__afir_bist_prbg_seed_1__mask 'h03
`define MA_core__test__afir_bist_prbg_seed_1__shift 0
`define MA_core__test__afir_bist_prbg_seed_1__reset 'h00

//------------------------------------------------------------------------------core__test__afir_bist_error_prbg_seed_0---
// Pseudo random bit generator seed - 10 bits, latched when error
`define MA_core__test__afir_bist_error_prbg_seed_0__a 'h0236
`define MA_core__test__afir_bist_error_prbg_seed_0__len 8
`define MA_core__test__afir_bist_error_prbg_seed_0__mask 'hff
`define MA_core__test__afir_bist_error_prbg_seed_0__shift 0
`define MA_core__test__afir_bist_error_prbg_seed_0__reset 'h00

//------------------------------------------------------------------------------core__test__afir_bist_error_cnt---
// Afir element counter - latched counter value when error
`define MA_core__test__afir_bist_error_cnt__a 'h0238
`define MA_core__test__afir_bist_error_cnt__len 8
`define MA_core__test__afir_bist_error_cnt__mask 'hff
`define MA_core__test__afir_bist_error_cnt__shift 0
`define MA_core__test__afir_bist_error_cnt__reset 'h00

//------------------------------------------------------------------------------core__test__afir_bist_error_prbg_seed_1---
// Pseudo random bit generator seed - 10 bits, latched when error
`define MA_core__test__afir_bist_error_prbg_seed_1__a 'h0237
`define MA_core__test__afir_bist_error_prbg_seed_1__len 2
`define MA_core__test__afir_bist_error_prbg_seed_1__mask 'h03
`define MA_core__test__afir_bist_error_prbg_seed_1__shift 0
`define MA_core__test__afir_bist_error_prbg_seed_1__reset 'h00

//------------------------------------------------------------------------------core__test__afir_bist_results_2---
// afir_bist_results_2
`define MA_core__test__afir_bist_results_2__a 'h0239
`define MA_core__test__afir_bist_results_2__len 1
`define MA_core__test__afir_bist_results_2__mask 'h04
`define MA_core__test__afir_bist_results_2__shift 2
`define MA_core__test__afir_bist_results_2__reset 'h00

//------------------------------------------------------------------------------core__test__afir_bist_err_ch---
// 
`define MA_core__test__afir_bist_err_ch__a 'h0239
`define MA_core__test__afir_bist_err_ch__len 4
`define MA_core__test__afir_bist_err_ch__mask 'hf0
`define MA_core__test__afir_bist_err_ch__shift 4
`define MA_core__test__afir_bist_err_ch__reset 'h00

//------------------------------------------------------------------------------core__test__afir_bist_force_err_ch---
// Afir bist force error on channel
`define MA_core__test__afir_bist_force_err_ch__a 'h0233
`define MA_core__test__afir_bist_force_err_ch__len 4
`define MA_core__test__afir_bist_force_err_ch__mask 'h0f
`define MA_core__test__afir_bist_force_err_ch__shift 0
`define MA_core__test__afir_bist_force_err_ch__reset 'h00

//------------------------------------------------------------------------------core__test__afir_bist_force_err---
// Afir bist force error enable
`define MA_core__test__afir_bist_force_err__a 'h0233
`define MA_core__test__afir_bist_force_err__len 1
`define MA_core__test__afir_bist_force_err__mask 'h10
`define MA_core__test__afir_bist_force_err__shift 4
`define MA_core__test__afir_bist_force_err__reset 'h00

//------------------------------------------------------------------------------core__test__i2s_in_high_bw---
// Enable high bandwidth (50 MHz) I2S input.
`define MA_core__test__i2s_in_high_bw__a 'h0226
`define MA_core__test__i2s_in_high_bw__len 1
`define MA_core__test__i2s_in_high_bw__mask 'h08
`define MA_core__test__i2s_in_high_bw__shift 3
`define MA_core__test__i2s_in_high_bw__reset 'h00

//------------------------------------------------------------------------------core__test__nerr_in_en---
// Enable nerr input buffer
`define MA_core__test__nerr_in_en__a 'h0225
`define MA_core__test__nerr_in_en__len 1
`define MA_core__test__nerr_in_en__mask 'h02
`define MA_core__test__nerr_in_en__shift 1
`define MA_core__test__nerr_in_en__reset 'h00

//------------------------------------------------------------------------------core__test__nclip_in_en---
// Enable nclip input buffer, default to enable since it is used for multi-IC sync
`define MA_core__test__nclip_in_en__a 'h0225
`define MA_core__test__nclip_in_en__len 1
`define MA_core__test__nclip_in_en__mask 'h01
`define MA_core__test__nclip_in_en__shift 0
`define MA_core__test__nclip_in_en__reset 'h01

//------------------------------------------------------------------------------core__test__i2s_ws_freerun---
// Enable internal WS generation based on incoming i2s_sck (64 counter)
`define MA_core__test__i2s_ws_freerun__a 'h0226
`define MA_core__test__i2s_ws_freerun__len 1
`define MA_core__test__i2s_ws_freerun__mask 'h04
`define MA_core__test__i2s_ws_freerun__shift 2
`define MA_core__test__i2s_ws_freerun__reset 'h00

//------------------------------------------------------------------------------core__test__mlpin_din_en_force---
// Enable direct input for i2c_ad0, i2c_ad1, and msel
`define MA_core__test__mlpin_din_en_force__a 'h0220
`define MA_core__test__mlpin_din_en_force__len 1
`define MA_core__test__mlpin_din_en_force__mask 'h10
`define MA_core__test__mlpin_din_en_force__shift 4
`define MA_core__test__mlpin_din_en_force__reset 'h00

//------------------------------------------------------------------------------core__test__xpin_offset_sel---
// Select on which pad to measure analog buffer offset, 0: nclip, 1: nerr
`define MA_core__test__xpin_offset_sel__a 'h0221
`define MA_core__test__xpin_offset_sel__len 1
`define MA_core__test__xpin_offset_sel__mask 'h08
`define MA_core__test__xpin_offset_sel__shift 3
`define MA_core__test__xpin_offset_sel__reset 'h00

//------------------------------------------------------------------------------core__system__otp_boot_done---
// Indicate that trim values has been loaded
`define MA_core__system__otp_boot_done__a 'h0260
`define MA_core__system__otp_boot_done__len 1
`define MA_core__system__otp_boot_done__mask 'h01
`define MA_core__system__otp_boot_done__shift 0
`define MA_core__system__otp_boot_done__reset 'h00

//------------------------------------------------------------------------------core__system__dac_dither_level---
// DAC dither level: 00: Off, 01: Small, 10: Medium, 11: Large
`define MA_core__system__dac_dither_level__a 'h0261
`define MA_core__system__dac_dither_level__len 2
`define MA_core__system__dac_dither_level__mask 'h03
`define MA_core__system__dac_dither_level__shift 0
`define MA_core__system__dac_dither_level__reset 'h01

//------------------------------------------------------------------------------core__system__afir_clk_invert---
// Invert clock to afir
`define MA_core__system__afir_clk_invert__a 'h0262
`define MA_core__system__afir_clk_invert__len 1
`define MA_core__system__afir_clk_invert__mask 'h04
`define MA_core__system__afir_clk_invert__shift 2
`define MA_core__system__afir_clk_invert__reset 'h00

//------------------------------------------------------------------------------core__system__acfg_dcu_upd_block---
// High to block DCU update
`define MA_core__system__acfg_dcu_upd_block__a 'h0262
`define MA_core__system__acfg_dcu_upd_block__len 1
`define MA_core__system__acfg_dcu_upd_block__mask 'h08
`define MA_core__system__acfg_dcu_upd_block__shift 3
`define MA_core__system__acfg_dcu_upd_block__reset 'h00

//------------------------------------------------------------------------------core__system__otp_reg_start_time---
// Number of 10 us cycles to wait for regulators to settle before accessing OTP
`define MA_core__system__otp_reg_start_time__a 'h0265
`define MA_core__system__otp_reg_start_time__len 8
`define MA_core__system__otp_reg_start_time__mask 'hff
`define MA_core__system__otp_reg_start_time__shift 0
`define MA_core__system__otp_reg_start_time__reset 'h14

//------------------------------------------------------------------------------core__system__otp_write_time---
// Number of 10 us cycles to keep the OTP program pin asserted
`define MA_core__system__otp_write_time__a 'h0266
`define MA_core__system__otp_write_time__len 8
`define MA_core__system__otp_write_time__mask 'hff
`define MA_core__system__otp_write_time__shift 0
`define MA_core__system__otp_write_time__reset 'h64

//------------------------------------------------------------------------------core__system__force_play---
// Debug: Force sub blocks to play audio
`define MA_core__system__force_play__a 'h0262
`define MA_core__system__force_play__len 1
`define MA_core__system__force_play__mask 'h10
`define MA_core__system__force_play__shift 4
`define MA_core__system__force_play__reset 'h00

//------------------------------------------------------------------------------core__system__force_pll---
// Debug: Force pll enable
`define MA_core__system__force_pll__a 'h0262
`define MA_core__system__force_pll__len 1
`define MA_core__system__force_pll__mask 'h20
`define MA_core__system__force_pll__shift 5
`define MA_core__system__force_pll__reset 'h00

//------------------------------------------------------------------------------core__system__rb_protect---
// Register bank protection level; 0: public, 1: read only, 2: hidden
`define MA_core__system__rb_protect__a 'h0268
`define MA_core__system__rb_protect__len 3
`define MA_core__system__rb_protect__mask 'h07
`define MA_core__system__rb_protect__shift 0
`define MA_core__system__rb_protect__reset 'h00

//------------------------------------------------------------------------------core__system__rb_protect_override---
// Register bank protection override
`define MA_core__system__rb_protect_override__a 'h0269
`define MA_core__system__rb_protect_override__len 8
`define MA_core__system__rb_protect_override__mask 'hff
`define MA_core__system__rb_protect_override__shift 0
`define MA_core__system__rb_protect_override__reset 'h00

//------------------------------------------------------------------------------core__system__otp_write_enable---
// Magic value to enable OTP writes
`define MA_core__system__otp_write_enable__a 'h0267
`define MA_core__system__otp_write_enable__len 8
`define MA_core__system__otp_write_enable__mask 'hff
`define MA_core__system__otp_write_enable__shift 0
`define MA_core__system__otp_write_enable__reset 'h00

//------------------------------------------------------------------------------core__system__temp_chip_shift---
// Number of MSBs to discard on the ADC temperature measurement avail in pa.temp_chip
`define MA_core__system__temp_chip_shift__a 'h026b
`define MA_core__system__temp_chip_shift__len 3
`define MA_core__system__temp_chip_shift__mask 'h07
`define MA_core__system__temp_chip_shift__shift 0
`define MA_core__system__temp_chip_shift__reset 'h00

//------------------------------------------------------------------------------core__system__bgr_filt_div_1_not_3---
// Increase the frequency of the bandgap filter to 64 KHz instead of 192 KHz
`define MA_core__system__bgr_filt_div_1_not_3__a 'h0262
`define MA_core__system__bgr_filt_div_1_not_3__len 1
`define MA_core__system__bgr_filt_div_1_not_3__mask 'h01
`define MA_core__system__bgr_filt_div_1_not_3__shift 0
`define MA_core__system__bgr_filt_div_1_not_3__reset 'h00

//------------------------------------------------------------------------------core__system__dmem_protect---
// Write protect DSP data memory
`define MA_core__system__dmem_protect__a 'h026a
`define MA_core__system__dmem_protect__len 1
`define MA_core__system__dmem_protect__mask 'h08
`define MA_core__system__dmem_protect__shift 3
`define MA_core__system__dmem_protect__reset 'h00

//------------------------------------------------------------------------------core__system__pmem_protect---
// Write protect DSP program memory
`define MA_core__system__pmem_protect__a 'h026a
`define MA_core__system__pmem_protect__len 1
`define MA_core__system__pmem_protect__mask 'h04
`define MA_core__system__pmem_protect__shift 2
`define MA_core__system__pmem_protect__reset 'h00

//------------------------------------------------------------------------------core__system__mlp_protect---
// Write protect multi-level pin segment
`define MA_core__system__mlp_protect__a 'h026a
`define MA_core__system__mlp_protect__len 1
`define MA_core__system__mlp_protect__mask 'h01
`define MA_core__system__mlp_protect__shift 0
`define MA_core__system__mlp_protect__reset 'h00

//------------------------------------------------------------------------------core__system__acfg_protect---
// Write protect analog configuration segment
`define MA_core__system__acfg_protect__a 'h026a
`define MA_core__system__acfg_protect__len 1
`define MA_core__system__acfg_protect__mask 'h02
`define MA_core__system__acfg_protect__shift 1
`define MA_core__system__acfg_protect__reset 'h00

//------------------------------------------------------------------------------core__system__otp_ecc_disable---
// Disable ECC on reads from OTP
`define MA_core__system__otp_ecc_disable__a 'h0262
`define MA_core__system__otp_ecc_disable__len 1
`define MA_core__system__otp_ecc_disable__mask 'h40
`define MA_core__system__otp_ecc_disable__shift 6
`define MA_core__system__otp_ecc_disable__reset 'h00

//------------------------------------------------------------------------------core__system__otp_ecc_status---
// Status of the OTP ECC logic
`define MA_core__system__otp_ecc_status__a 'h026f
`define MA_core__system__otp_ecc_status__len 4
`define MA_core__system__otp_ecc_status__mask 'h0f
`define MA_core__system__otp_ecc_status__shift 0
`define MA_core__system__otp_ecc_status__reset 'h00

//------------------------------------------------------------------------------core__system__otp_ecc_status_clr---
// Clear the OTP ECC status register
`define MA_core__system__otp_ecc_status_clr__a 'h0262
`define MA_core__system__otp_ecc_status_clr__len 1
`define MA_core__system__otp_ecc_status_clr__mask 'h80
`define MA_core__system__otp_ecc_status_clr__shift 7
`define MA_core__system__otp_ecc_status_clr__reset 'h00

//------------------------------------------------------------------------------core__system__gain_trim---
// Gain trim for both audio channels, trim range [0dB;3.34dB]. "0000": 0dB, "1111": 3.34dB
`define MA_core__system__gain_trim__a 'h026c
`define MA_core__system__gain_trim__len 4
`define MA_core__system__gain_trim__mask 'h0f
`define MA_core__system__gain_trim__shift 0
`define MA_core__system__gain_trim__reset 'h00

//------------------------------------------------------------------------------core__system__offset_trim_0---
// Offset trim for channel 0, trim range [-FS/1024;FS/1024]
`define MA_core__system__offset_trim_0__a 'h026d
`define MA_core__system__offset_trim_0__len 6
`define MA_core__system__offset_trim_0__mask 'h3f
`define MA_core__system__offset_trim_0__shift 0
`define MA_core__system__offset_trim_0__reset 'h00

//------------------------------------------------------------------------------core__system__offset_trim_1---
// Offset trim for channel 1, trim range [-FS/1024;FS/1024]
`define MA_core__system__offset_trim_1__a 'h026e
`define MA_core__system__offset_trim_1__len 6
`define MA_core__system__offset_trim_1__mask 'h3f
`define MA_core__system__offset_trim_1__shift 0
`define MA_core__system__offset_trim_1__reset 'h00

//------------------------------------------------------------------------------mlpin__mlp__limit0---
// 120 KOhm upper limit
`define MA_mlpin__mlp__limit0__a 'h0500
`define MA_mlpin__mlp__limit0__len 6
`define MA_mlpin__mlp__limit0__mask 'h3f
`define MA_mlpin__mlp__limit0__shift 0
`define MA_mlpin__mlp__limit0__reset 'h01

//------------------------------------------------------------------------------mlpin__mlp__limit1---
// 62 KOhm upper limit
`define MA_mlpin__mlp__limit1__a 'h0501
`define MA_mlpin__mlp__limit1__len 6
`define MA_mlpin__mlp__limit1__mask 'h3f
`define MA_mlpin__mlp__limit1__shift 0
`define MA_mlpin__mlp__limit1__reset 'h05

//------------------------------------------------------------------------------mlpin__mlp__limit2---
// 39 KOhm upper limit
`define MA_mlpin__mlp__limit2__a 'h0502
`define MA_mlpin__mlp__limit2__len 6
`define MA_mlpin__mlp__limit2__mask 'h3f
`define MA_mlpin__mlp__limit2__shift 0
`define MA_mlpin__mlp__limit2__reset 'h09

//------------------------------------------------------------------------------mlpin__mlp__limit3---
// 30 KOhm upper limit
`define MA_mlpin__mlp__limit3__a 'h0503
`define MA_mlpin__mlp__limit3__len 6
`define MA_mlpin__mlp__limit3__mask 'h3f
`define MA_mlpin__mlp__limit3__shift 0
`define MA_mlpin__mlp__limit3__reset 'h0e

//------------------------------------------------------------------------------mlpin__mlp__limit4---
// 24 KOhm upper limit
`define MA_mlpin__mlp__limit4__a 'h0504
`define MA_mlpin__mlp__limit4__len 6
`define MA_mlpin__mlp__limit4__mask 'h3f
`define MA_mlpin__mlp__limit4__shift 0
`define MA_mlpin__mlp__limit4__reset 'h12

//------------------------------------------------------------------------------mlpin__mlp__limit5---
// 20 KOhm upper limit
`define MA_mlpin__mlp__limit5__a 'h0505
`define MA_mlpin__mlp__limit5__len 6
`define MA_mlpin__mlp__limit5__mask 'h3f
`define MA_mlpin__mlp__limit5__shift 0
`define MA_mlpin__mlp__limit5__reset 'h16

//------------------------------------------------------------------------------mlpin__mlp__limit6---
// 15 KOhm upper limit
`define MA_mlpin__mlp__limit6__a 'h0506
`define MA_mlpin__mlp__limit6__len 6
`define MA_mlpin__mlp__limit6__mask 'h3f
`define MA_mlpin__mlp__limit6__shift 0
`define MA_mlpin__mlp__limit6__reset 'h1c

//------------------------------------------------------------------------------mlpin__mlp__limit7---
// 10 KOhm upper limit
`define MA_mlpin__mlp__limit7__a 'h0507
`define MA_mlpin__mlp__limit7__len 6
`define MA_mlpin__mlp__limit7__mask 'h3f
`define MA_mlpin__mlp__limit7__shift 0
`define MA_mlpin__mlp__limit7__reset 'h28

//------------------------------------------------------------------------------mlpin__mlp__limit8---
// 10 KOhm lower limit
`define MA_mlpin__mlp__limit8__a 'h0508
`define MA_mlpin__mlp__limit8__len 6
`define MA_mlpin__mlp__limit8__mask 'h3f
`define MA_mlpin__mlp__limit8__shift 0
`define MA_mlpin__mlp__limit8__reset 'h36

//------------------------------------------------------------------------------mlpin__mlp__decrement---
// Enable auto-decrement of the select register allowing you to do sequential messurements of several pins
`define MA_mlpin__mlp__decrement__a 'h0509
`define MA_mlpin__mlp__decrement__len 1
`define MA_mlpin__mlp__decrement__mask 'h08
`define MA_mlpin__mlp__decrement__shift 3
`define MA_mlpin__mlp__decrement__reset 'h01

//------------------------------------------------------------------------------mlpin__mlp__sel---
// Start decode of the given pin (see coding on the config registers) or apply test mode load (sel=6)
`define MA_mlpin__mlp__sel__a 'h0509
`define MA_mlpin__mlp__sel__len 3
`define MA_mlpin__mlp__sel__mask 'h07
`define MA_mlpin__mlp__sel__shift 0
`define MA_mlpin__mlp__sel__reset 'h05

//------------------------------------------------------------------------------mlpin__mlp__msel_cfg---
// msel pin configuration (sel=1); 0: tie high, 1: 120 KOhm
`define MA_mlpin__mlp__msel_cfg__a 'h050c
`define MA_mlpin__mlp__msel_cfg__len 4
`define MA_mlpin__mlp__msel_cfg__mask 'h0f
`define MA_mlpin__mlp__msel_cfg__shift 0
`define MA_mlpin__mlp__msel_cfg__reset 'h00

//------------------------------------------------------------------------------mlpin__mlp__i2c_ad0_cfg---
// i2c_ad0 pin configuration (sel=3); 2: 62 KOhm, 3: 39 KOhm
`define MA_mlpin__mlp__i2c_ad0_cfg__a 'h050e
`define MA_mlpin__mlp__i2c_ad0_cfg__len 4
`define MA_mlpin__mlp__i2c_ad0_cfg__mask 'h0f
`define MA_mlpin__mlp__i2c_ad0_cfg__shift 0
`define MA_mlpin__mlp__i2c_ad0_cfg__reset 'h00

//------------------------------------------------------------------------------mlpin__mlp__i2c_ad1_cfg---
// i2c_ad1 pin configuration (sel=2); 4: 30 KOhm, 5: 24 KOhm
`define MA_mlpin__mlp__i2c_ad1_cfg__a 'h050d
`define MA_mlpin__mlp__i2c_ad1_cfg__len 4
`define MA_mlpin__mlp__i2c_ad1_cfg__mask 'h0f
`define MA_mlpin__mlp__i2c_ad1_cfg__shift 0
`define MA_mlpin__mlp__i2c_ad1_cfg__reset 'h00

//------------------------------------------------------------------------------mlpin__mlp__i2c_sda_cfg---
// i2c_sda pin configuration (sel=4); 6: 20 KOhm, 7: 15 KOhm
`define MA_mlpin__mlp__i2c_sda_cfg__a 'h050f
`define MA_mlpin__mlp__i2c_sda_cfg__len 4
`define MA_mlpin__mlp__i2c_sda_cfg__mask 'h0f
`define MA_mlpin__mlp__i2c_sda_cfg__shift 0
`define MA_mlpin__mlp__i2c_sda_cfg__reset 'h00

//------------------------------------------------------------------------------mlpin__mlp__i2c_scl_cfg---
// i2c_scl pin configuration (sel=5); 8: 10 KOhm, 9: tie low
`define MA_mlpin__mlp__i2c_scl_cfg__a 'h0510
`define MA_mlpin__mlp__i2c_scl_cfg__len 4
`define MA_mlpin__mlp__i2c_scl_cfg__mask 'h0f
`define MA_mlpin__mlp__i2c_scl_cfg__shift 0
`define MA_mlpin__mlp__i2c_scl_cfg__reset 'h00

//------------------------------------------------------------------------------mlpin__mlp__timeout---
// Number of calibration clock cycles to wait for ADC to settle
`define MA_mlpin__mlp__timeout__a 'h050a
`define MA_mlpin__mlp__timeout__len 8
`define MA_mlpin__mlp__timeout__mask 'hff
`define MA_mlpin__mlp__timeout__shift 0
`define MA_mlpin__mlp__timeout__reset 'h80

//------------------------------------------------------------------------------mlpin__mlp__iset---
// Number of enabled current sources in the last messurement
`define MA_mlpin__mlp__iset__a 'h050b
`define MA_mlpin__mlp__iset__len 6
`define MA_mlpin__mlp__iset__mask 'h3f
`define MA_mlpin__mlp__iset__shift 0
`define MA_mlpin__mlp__iset__reset 'h00

//------------------------------------------------------------------------------mlpin__mlp__sar_disable---
// Test mode where SAR is disabled and the current sources are enabled directly from the iset register
`define MA_mlpin__mlp__sar_disable__a 'h0509
`define MA_mlpin__mlp__sar_disable__len 1
`define MA_mlpin__mlp__sar_disable__mask 'h10
`define MA_mlpin__mlp__sar_disable__shift 4
`define MA_mlpin__mlp__sar_disable__reset 'h00

//------------------------------------------------------------------------------acfg__avdd__osc_3m_ctrim---
// 3MHz RC oscillator coarse trim
`define MA_acfg__avdd__osc_3m_ctrim__a 'h0608
`define MA_acfg__avdd__osc_3m_ctrim__len 6
`define MA_acfg__avdd__osc_3m_ctrim__mask 'h3f
`define MA_acfg__avdd__osc_3m_ctrim__shift 0
`define MA_acfg__avdd__osc_3m_ctrim__reset 'h00

//------------------------------------------------------------------------------acfg__avdd__osc_3m_ftrim---
// 3MHz RC oscillator fine trim
`define MA_acfg__avdd__osc_3m_ftrim__a 'h0609
`define MA_acfg__avdd__osc_3m_ftrim__len 6
`define MA_acfg__avdd__osc_3m_ftrim__mask 'h3f
`define MA_acfg__avdd__osc_3m_ftrim__shift 0
`define MA_acfg__avdd__osc_3m_ftrim__reset 'h00

//------------------------------------------------------------------------------acfg__avdd__test_mode---
// Unused/spare (see atest_mode in nb_trim segment)
`define MA_acfg__avdd__test_mode__a 'h0608
`define MA_acfg__avdd__test_mode__len 1
`define MA_acfg__avdd__test_mode__mask 'h40
`define MA_acfg__avdd__test_mode__shift 6
`define MA_acfg__avdd__test_mode__reset 'h00

//------------------------------------------------------------------------------acfg__avdd__spare_bits_2---
// 
`define MA_acfg__avdd__spare_bits_2__a 'h0608
`define MA_acfg__avdd__spare_bits_2__len 1
`define MA_acfg__avdd__spare_bits_2__mask 'h80
`define MA_acfg__avdd__spare_bits_2__shift 7
`define MA_acfg__avdd__spare_bits_2__reset 'h00

//------------------------------------------------------------------------------acfg__avdd__dvbe_seq_cfg---
// Width of dVbe sampling pulse in 64 KHz cycles; 0: 5 (default), 1: 1, 2: 3, 3: 7
`define MA_acfg__avdd__dvbe_seq_cfg__a 'h0609
`define MA_acfg__avdd__dvbe_seq_cfg__len 2
`define MA_acfg__avdd__dvbe_seq_cfg__mask 'hc0
`define MA_acfg__avdd__dvbe_seq_cfg__shift 6
`define MA_acfg__avdd__dvbe_seq_cfg__reset 'h00

//------------------------------------------------------------------------------acfg__avdd__rxtrim---
// Bandgap reference V-to-I converter resistor trim (try 152)
`define MA_acfg__avdd__rxtrim__a 'h060a
`define MA_acfg__avdd__rxtrim__len 8
`define MA_acfg__avdd__rxtrim__mask 'hff
`define MA_acfg__avdd__rxtrim__shift 0
`define MA_acfg__avdd__rxtrim__reset 'h00

//------------------------------------------------------------------------------acfg__avdd__amux_ch0---
// Amux ch0
`define MA_acfg__avdd__amux_ch0__a 'h060b
`define MA_acfg__avdd__amux_ch0__len 4
`define MA_acfg__avdd__amux_ch0__mask 'h0f
`define MA_acfg__avdd__amux_ch0__shift 0
`define MA_acfg__avdd__amux_ch0__reset 'h00

//------------------------------------------------------------------------------acfg__avdd__hw_id---
// Hardware id
`define MA_acfg__avdd__hw_id__a 'h060c
`define MA_acfg__avdd__hw_id__len 8
`define MA_acfg__avdd__hw_id__mask 'hff
`define MA_acfg__avdd__hw_id__shift 0
`define MA_acfg__avdd__hw_id__reset 'h15

//------------------------------------------------------------------------------acfg__avdd__amux_ch1---
// Amux ch1
`define MA_acfg__avdd__amux_ch1__a 'h060b
`define MA_acfg__avdd__amux_ch1__len 4
`define MA_acfg__avdd__amux_ch1__mask 'hf0
`define MA_acfg__avdd__amux_ch1__shift 4
`define MA_acfg__avdd__amux_ch1__reset 'h00

//------------------------------------------------------------------------------acfg__nb_trim__ldo_vtrim---
// Set ldo vtrim XXX range from to mapping
`define MA_acfg__nb_trim__ldo_vtrim__a 'h0610
`define MA_acfg__nb_trim__ldo_vtrim__len 6
`define MA_acfg__nb_trim__ldo_vtrim__mask 'h3f
`define MA_acfg__nb_trim__ldo_vtrim__shift 0
`define MA_acfg__nb_trim__ldo_vtrim__reset 'h00

//------------------------------------------------------------------------------acfg__nb_trim__ldo_vset---
// Set the supply voltage for digital core; 100: 1.3V, 101: 1.0V, 110: 1.1V, 111: 1.2V, 000: 1.3V, 001: 1.35V, 010: 1.4V, 011: 1.3V
`define MA_acfg__nb_trim__ldo_vset__a 'h0611
`define MA_acfg__nb_trim__ldo_vset__len 3
`define MA_acfg__nb_trim__ldo_vset__mask 'he0
`define MA_acfg__nb_trim__ldo_vset__shift 5
`define MA_acfg__nb_trim__ldo_vset__reset 'h00

//------------------------------------------------------------------------------acfg__nb_trim__dvdd_trim---
// Dvdd 1.5V V-to-I converter resistor trim
`define MA_acfg__nb_trim__dvdd_trim__a 'h0611
`define MA_acfg__nb_trim__dvdd_trim__len 5
`define MA_acfg__nb_trim__dvdd_trim__mask 'h1f
`define MA_acfg__nb_trim__dvdd_trim__shift 0
`define MA_acfg__nb_trim__dvdd_trim__reset 'h00

//------------------------------------------------------------------------------acfg__nb_trim__spare_1---
// Spare
`define MA_acfg__nb_trim__spare_1__a 'h0610
`define MA_acfg__nb_trim__spare_1__len 2
`define MA_acfg__nb_trim__spare_1__mask 'hc0
`define MA_acfg__nb_trim__spare_1__shift 6
`define MA_acfg__nb_trim__spare_1__reset 'h00

//------------------------------------------------------------------------------acfg__nb_trim__avdd_trim---
// Avdd 1.5V V-to-I converter resistor trim
`define MA_acfg__nb_trim__avdd_trim__a 'h0612
`define MA_acfg__nb_trim__avdd_trim__len 5
`define MA_acfg__nb_trim__avdd_trim__mask 'h1f
`define MA_acfg__nb_trim__avdd_trim__shift 0
`define MA_acfg__nb_trim__avdd_trim__reset 'h00

//------------------------------------------------------------------------------acfg__nb_trim__cgm_trim---
// Constant GM trim for dvdd and avdd regulators
`define MA_acfg__nb_trim__cgm_trim__a 'h0613
`define MA_acfg__nb_trim__cgm_trim__len 4
`define MA_acfg__nb_trim__cgm_trim__mask 'h0f
`define MA_acfg__nb_trim__cgm_trim__shift 0
`define MA_acfg__nb_trim__cgm_trim__reset 'h00

//------------------------------------------------------------------------------acfg__nb_trim__avdd_1v5_ok_force---
// bit to override avdd_1v5_ok and force it "high"<br>
`define MA_acfg__nb_trim__avdd_1v5_ok_force__a 'h0613
`define MA_acfg__nb_trim__avdd_1v5_ok_force__len 1
`define MA_acfg__nb_trim__avdd_1v5_ok_force__mask 'h10
`define MA_acfg__nb_trim__avdd_1v5_ok_force__shift 4
`define MA_acfg__nb_trim__avdd_1v5_ok_force__reset 'h00

//------------------------------------------------------------------------------acfg__nb_trim__dvdd_1v5_ok_force---
// bit to override dvdd_1v5_ok and force it "high"
`define MA_acfg__nb_trim__dvdd_1v5_ok_force__a 'h0613
`define MA_acfg__nb_trim__dvdd_1v5_ok_force__len 1
`define MA_acfg__nb_trim__dvdd_1v5_ok_force__mask 'h20
`define MA_acfg__nb_trim__dvdd_1v5_ok_force__shift 5
`define MA_acfg__nb_trim__dvdd_1v5_ok_force__reset 'h00

//------------------------------------------------------------------------------acfg__nb_trim__dig_supply_ok_force---
// bit to override dig_supply_ok and force it "high"
`define MA_acfg__nb_trim__dig_supply_ok_force__a 'h0613
`define MA_acfg__nb_trim__dig_supply_ok_force__len 1
`define MA_acfg__nb_trim__dig_supply_ok_force__mask 'h40
`define MA_acfg__nb_trim__dig_supply_ok_force__shift 6
`define MA_acfg__nb_trim__dig_supply_ok_force__reset 'h00

//------------------------------------------------------------------------------acfg__nb_trim__lv_supply_ok_force---
// bit to override lv_supply_ok and force it "high"
`define MA_acfg__nb_trim__lv_supply_ok_force__a 'h0613
`define MA_acfg__nb_trim__lv_supply_ok_force__len 1
`define MA_acfg__nb_trim__lv_supply_ok_force__mask 'h80
`define MA_acfg__nb_trim__lv_supply_ok_force__shift 7
`define MA_acfg__nb_trim__lv_supply_ok_force__reset 'h00

//------------------------------------------------------------------------------acfg__nb_trim__atest_mode---
// Override power-on-reset circuit and force all regulators on
`define MA_acfg__nb_trim__atest_mode__a 'h0612
`define MA_acfg__nb_trim__atest_mode__len 1
`define MA_acfg__nb_trim__atest_mode__mask 'h20
`define MA_acfg__nb_trim__atest_mode__shift 5
`define MA_acfg__nb_trim__atest_mode__reset 'h00

//------------------------------------------------------------------------------acfg__nb_trim__por_avdd_5v0_crude_force---
// Force enable crude analog 5.0V regulator
`define MA_acfg__nb_trim__por_avdd_5v0_crude_force__a 'h0612
`define MA_acfg__nb_trim__por_avdd_5v0_crude_force__len 1
`define MA_acfg__nb_trim__por_avdd_5v0_crude_force__mask 'h40
`define MA_acfg__nb_trim__por_avdd_5v0_crude_force__shift 6
`define MA_acfg__nb_trim__por_avdd_5v0_crude_force__reset 'h00

//------------------------------------------------------------------------------acfg__nb_trim__por_1v2_ok_force---
// 
`define MA_acfg__nb_trim__por_1v2_ok_force__a 'h0612
`define MA_acfg__nb_trim__por_1v2_ok_force__len 1
`define MA_acfg__nb_trim__por_1v2_ok_force__mask 'h80
`define MA_acfg__nb_trim__por_1v2_ok_force__shift 7
`define MA_acfg__nb_trim__por_1v2_ok_force__reset 'h00

//------------------------------------------------------------------------------acfg__nb_amux__sel_ch0_gdref---
// sel_ch0_gd_psu_ref
`define MA_acfg__nb_amux__sel_ch0_gdref__a 'h0618
`define MA_acfg__nb_amux__sel_ch0_gdref__len 4
`define MA_acfg__nb_amux__sel_ch0_gdref__mask 'h0f
`define MA_acfg__nb_amux__sel_ch0_gdref__shift 0
`define MA_acfg__nb_amux__sel_ch0_gdref__reset 'h00

//------------------------------------------------------------------------------acfg__nb_amux__sel_ch1_gdref---
// sel_ch1_gd_psu_ref
`define MA_acfg__nb_amux__sel_ch1_gdref__a 'h0618
`define MA_acfg__nb_amux__sel_ch1_gdref__len 4
`define MA_acfg__nb_amux__sel_ch1_gdref__mask 'hf0
`define MA_acfg__nb_amux__sel_ch1_gdref__shift 4
`define MA_acfg__nb_amux__sel_ch1_gdref__reset 'h00

//------------------------------------------------------------------------------acfg__nb_amux__sel_ch0_reg---
// sel_ch0_regulators
`define MA_acfg__nb_amux__sel_ch0_reg__a 'h0619
`define MA_acfg__nb_amux__sel_ch0_reg__len 4
`define MA_acfg__nb_amux__sel_ch0_reg__mask 'h0f
`define MA_acfg__nb_amux__sel_ch0_reg__shift 0
`define MA_acfg__nb_amux__sel_ch0_reg__reset 'h00

//------------------------------------------------------------------------------acfg__nb_amux__sel_ch1_reg---
// sel_ch1_regulators
`define MA_acfg__nb_amux__sel_ch1_reg__a 'h0619
`define MA_acfg__nb_amux__sel_ch1_reg__len 4
`define MA_acfg__nb_amux__sel_ch1_reg__mask 'hf0
`define MA_acfg__nb_amux__sel_ch1_reg__shift 4
`define MA_acfg__nb_amux__sel_ch1_reg__reset 'h00

//------------------------------------------------------------------------------acfg__nb_amux__gd_vtrim---
// gd_vtrim
`define MA_acfg__nb_amux__gd_vtrim__a 'h061b
`define MA_acfg__nb_amux__gd_vtrim__len 4
`define MA_acfg__nb_amux__gd_vtrim__mask 'h0f
`define MA_acfg__nb_amux__gd_vtrim__shift 0
`define MA_acfg__nb_amux__gd_vtrim__reset 'h00

//------------------------------------------------------------------------------acfg__nb_amux__gd_vtrim_low---
// gd_vtrim_low XXX fill in
`define MA_acfg__nb_amux__gd_vtrim_low__a 'h061b
`define MA_acfg__nb_amux__gd_vtrim_low__len 1
`define MA_acfg__nb_amux__gd_vtrim_low__mask 'h10
`define MA_acfg__nb_amux__gd_vtrim_low__shift 4
`define MA_acfg__nb_amux__gd_vtrim_low__reset 'h00

//------------------------------------------------------------------------------acfg__nb_amux__enable_dvdd_5v0---
// Enable monitoring of dvdd_5v0 (divided by 5) on debug bus.
`define MA_acfg__nb_amux__enable_dvdd_5v0__a 'h061a
`define MA_acfg__nb_amux__enable_dvdd_5v0__len 1
`define MA_acfg__nb_amux__enable_dvdd_5v0__mask 'h01
`define MA_acfg__nb_amux__enable_dvdd_5v0__shift 0
`define MA_acfg__nb_amux__enable_dvdd_5v0__reset 'h00

//------------------------------------------------------------------------------acfg__nb_amux__dvdd_5v0_vset---
// Dvdd 5.0V regulator set-point; 00: nominal, 01: high, 10: lowest, 11: low
`define MA_acfg__nb_amux__dvdd_5v0_vset__a 'h061a
`define MA_acfg__nb_amux__dvdd_5v0_vset__len 2
`define MA_acfg__nb_amux__dvdd_5v0_vset__mask 'h06
`define MA_acfg__nb_amux__dvdd_5v0_vset__shift 1
`define MA_acfg__nb_amux__dvdd_5v0_vset__reset 'h00

//------------------------------------------------------------------------------acfg__nb_amux__avdd_5v0_vset---
// Avdd 5.0V regulator set-point; 00: nominal, 01: high, 10: lowest, 11: low
`define MA_acfg__nb_amux__avdd_5v0_vset__a 'h061a
`define MA_acfg__nb_amux__avdd_5v0_vset__len 2
`define MA_acfg__nb_amux__avdd_5v0_vset__mask 'h30
`define MA_acfg__nb_amux__avdd_5v0_vset__shift 4
`define MA_acfg__nb_amux__avdd_5v0_vset__reset 'h00

//------------------------------------------------------------------------------acfg__nb_amux__avdd_5v_force_dis---
// Force disable of analog 5V supply (avdd_5v0)
`define MA_acfg__nb_amux__avdd_5v_force_dis__a 'h061a
`define MA_acfg__nb_amux__avdd_5v_force_dis__len 1
`define MA_acfg__nb_amux__avdd_5v_force_dis__mask 'h08
`define MA_acfg__nb_amux__avdd_5v_force_dis__shift 3
`define MA_acfg__nb_amux__avdd_5v_force_dis__reset 'h00

//------------------------------------------------------------------------------acfg__nb_amux__spare_1---
// 
`define MA_acfg__nb_amux__spare_1__a 'h061a
`define MA_acfg__nb_amux__spare_1__len 2
`define MA_acfg__nb_amux__spare_1__mask 'hc0
`define MA_acfg__nb_amux__spare_1__shift 6
`define MA_acfg__nb_amux__spare_1__reset 'h00

//------------------------------------------------------------------------------acfg__nb_amux__spare_2---
// 
`define MA_acfg__nb_amux__spare_2__a 'h061b
`define MA_acfg__nb_amux__spare_2__len 3
`define MA_acfg__nb_amux__spare_2__mask 'he0
`define MA_acfg__nb_amux__spare_2__shift 5
`define MA_acfg__nb_amux__spare_2__reset 'h00

//------------------------------------------------------------------------------acfg__afir0__biasfilt_fsel---
// test
`define MA_acfg__afir0__biasfilt_fsel__a 'h0641
`define MA_acfg__afir0__biasfilt_fsel__len 2
`define MA_acfg__afir0__biasfilt_fsel__mask 'h60
`define MA_acfg__afir0__biasfilt_fsel__shift 5
`define MA_acfg__afir0__biasfilt_fsel__reset 'h00

//------------------------------------------------------------------------------acfg__afir0__dout_en---
// Enable feedback from FIR delay line to digital core<br>
`define MA_acfg__afir0__dout_en__a 'h0641
`define MA_acfg__afir0__dout_en__len 1
`define MA_acfg__afir0__dout_en__mask 'h80
`define MA_acfg__afir0__dout_en__shift 7
`define MA_acfg__afir0__dout_en__reset 'h00

//------------------------------------------------------------------------------acfg__afir0__vdsat_trim---
// vdsat trim
`define MA_acfg__afir0__vdsat_trim__a 'h0641
`define MA_acfg__afir0__vdsat_trim__len 4
`define MA_acfg__afir0__vdsat_trim__mask 'h1e
`define MA_acfg__afir0__vdsat_trim__shift 1
`define MA_acfg__afir0__vdsat_trim__reset 'h00

//------------------------------------------------------------------------------acfg__afir0__icmctrl_trim_en---
// icmctrl_trim_en
`define MA_acfg__afir0__icmctrl_trim_en__a 'h0641
`define MA_acfg__afir0__icmctrl_trim_en__len 1
`define MA_acfg__afir0__icmctrl_trim_en__mask 'h01
`define MA_acfg__afir0__icmctrl_trim_en__shift 0
`define MA_acfg__afir0__icmctrl_trim_en__reset 'h00

//------------------------------------------------------------------------------acfg__afir0__cmctrl_dis---
// Disable common-mode voltage controller
`define MA_acfg__afir0__cmctrl_dis__a 'h0640
`define MA_acfg__afir0__cmctrl_dis__len 1
`define MA_acfg__afir0__cmctrl_dis__mask 'h01
`define MA_acfg__afir0__cmctrl_dis__shift 0
`define MA_acfg__afir0__cmctrl_dis__reset 'h00

//------------------------------------------------------------------------------acfg__afir0__afir_4v0_vset---
// 
`define MA_acfg__afir0__afir_4v0_vset__a 'h0640
`define MA_acfg__afir0__afir_4v0_vset__len 2
`define MA_acfg__afir0__afir_4v0_vset__mask 'h06
`define MA_acfg__afir0__afir_4v0_vset__shift 1
`define MA_acfg__afir0__afir_4v0_vset__reset 'h00

//------------------------------------------------------------------------------acfg__afir0__clk_skip_one---
// 
`define MA_acfg__afir0__clk_skip_one__a 'h0640
`define MA_acfg__afir0__clk_skip_one__len 1
`define MA_acfg__afir0__clk_skip_one__mask 'h08
`define MA_acfg__afir0__clk_skip_one__shift 3
`define MA_acfg__afir0__clk_skip_one__reset 'h00

//------------------------------------------------------------------------------acfg__afir0__dac_fsel_3m072---
// 
`define MA_acfg__afir0__dac_fsel_3m072__a 'h0640
`define MA_acfg__afir0__dac_fsel_3m072__len 1
`define MA_acfg__afir0__dac_fsel_3m072__mask 'h10
`define MA_acfg__afir0__dac_fsel_3m072__shift 4
`define MA_acfg__afir0__dac_fsel_3m072__reset 'h00

//------------------------------------------------------------------------------acfg__afir0__dmy_idle_mod_en---
// 
`define MA_acfg__afir0__dmy_idle_mod_en__a 'h0640
`define MA_acfg__afir0__dmy_idle_mod_en__len 1
`define MA_acfg__afir0__dmy_idle_mod_en__mask 'h20
`define MA_acfg__afir0__dmy_idle_mod_en__shift 5
`define MA_acfg__afir0__dmy_idle_mod_en__reset 'h00

//------------------------------------------------------------------------------acfg__afir0__bgfilt_fset---
// 
`define MA_acfg__afir0__bgfilt_fset__a 'h0640
`define MA_acfg__afir0__bgfilt_fset__len 2
`define MA_acfg__afir0__bgfilt_fset__mask 'hc0
`define MA_acfg__afir0__bgfilt_fset__shift 6
`define MA_acfg__afir0__bgfilt_fset__reset 'h00

//------------------------------------------------------------------------------acfg__lf0l__aaf_fsel---
// 
`define MA_acfg__lf0l__aaf_fsel__a 'h064b
`define MA_acfg__lf0l__aaf_fsel__len 2
`define MA_acfg__lf0l__aaf_fsel__mask 'hc0
`define MA_acfg__lf0l__aaf_fsel__shift 6
`define MA_acfg__lf0l__aaf_fsel__reset 'h00

//------------------------------------------------------------------------------acfg__lf0l__afir_rref_trim---
// AFIR-DAC output current scale fine-trim
`define MA_acfg__lf0l__afir_rref_trim__a 'h064b
`define MA_acfg__lf0l__afir_rref_trim__len 6
`define MA_acfg__lf0l__afir_rref_trim__mask 'h3f
`define MA_acfg__lf0l__afir_rref_trim__shift 0
`define MA_acfg__lf0l__afir_rref_trim__reset 'h00

//------------------------------------------------------------------------------acfg__lf0l__chop_en---
// chop_en XXX fill in
`define MA_acfg__lf0l__chop_en__a 'h064a
`define MA_acfg__lf0l__chop_en__len 1
`define MA_acfg__lf0l__chop_en__mask 'h40
`define MA_acfg__lf0l__chop_en__shift 6
`define MA_acfg__lf0l__chop_en__reset 'h00

//------------------------------------------------------------------------------acfg__lf0l__chop_dis_state---
// chop_dis_state XXX fill in
`define MA_acfg__lf0l__chop_dis_state__a 'h064a
`define MA_acfg__lf0l__chop_dis_state__len 1
`define MA_acfg__lf0l__chop_dis_state__mask 'h20
`define MA_acfg__lf0l__chop_dis_state__shift 5
`define MA_acfg__lf0l__chop_dis_state__reset 'h00

//------------------------------------------------------------------------------acfg__lf0l__spare_2_4---
// 
`define MA_acfg__lf0l__spare_2_4__a 'h064a
`define MA_acfg__lf0l__spare_2_4__len 1
`define MA_acfg__lf0l__spare_2_4__mask 'h10
`define MA_acfg__lf0l__spare_2_4__shift 4
`define MA_acfg__lf0l__spare_2_4__reset 'h00

//------------------------------------------------------------------------------acfg__lf0l__rtrim---
// rtrim XXX fill in
`define MA_acfg__lf0l__rtrim__a 'h064a
`define MA_acfg__lf0l__rtrim__len 4
`define MA_acfg__lf0l__rtrim__mask 'h0f
`define MA_acfg__lf0l__rtrim__shift 0
`define MA_acfg__lf0l__rtrim__reset 'h00

//------------------------------------------------------------------------------acfg__lf0l__cmr_ctrim_p---
// cmr_ctrim_p XXX fill in
`define MA_acfg__lf0l__cmr_ctrim_p__a 'h0649
`define MA_acfg__lf0l__cmr_ctrim_p__len 4
`define MA_acfg__lf0l__cmr_ctrim_p__mask 'hf0
`define MA_acfg__lf0l__cmr_ctrim_p__shift 4
`define MA_acfg__lf0l__cmr_ctrim_p__reset 'h00

//------------------------------------------------------------------------------acfg__lf0l__cmr_ctrim_n---
// cmr_ctrim_n XXX fill in
`define MA_acfg__lf0l__cmr_ctrim_n__a 'h0649
`define MA_acfg__lf0l__cmr_ctrim_n__len 4
`define MA_acfg__lf0l__cmr_ctrim_n__mask 'h0f
`define MA_acfg__lf0l__cmr_ctrim_n__shift 0
`define MA_acfg__lf0l__cmr_ctrim_n__reset 'h00

//------------------------------------------------------------------------------acfg__lf0l__cmr_rtrim_p---
// cmr_rtrim_p XXX fill in
`define MA_acfg__lf0l__cmr_rtrim_p__a 'h0648
`define MA_acfg__lf0l__cmr_rtrim_p__len 4
`define MA_acfg__lf0l__cmr_rtrim_p__mask 'hf0
`define MA_acfg__lf0l__cmr_rtrim_p__shift 4
`define MA_acfg__lf0l__cmr_rtrim_p__reset 'h00

//------------------------------------------------------------------------------acfg__lf0l__cmr_rtrim_n---
// cmr_rtrim_n XXX fill in
`define MA_acfg__lf0l__cmr_rtrim_n__a 'h0648
`define MA_acfg__lf0l__cmr_rtrim_n__len 4
`define MA_acfg__lf0l__cmr_rtrim_n__mask 'h0f
`define MA_acfg__lf0l__cmr_rtrim_n__shift 0
`define MA_acfg__lf0l__cmr_rtrim_n__reset 'h00

//------------------------------------------------------------------------------acfg__lf0l__sel_vcm_0p5vdd---
// 
`define MA_acfg__lf0l__sel_vcm_0p5vdd__a 'h064a
`define MA_acfg__lf0l__sel_vcm_0p5vdd__len 1
`define MA_acfg__lf0l__sel_vcm_0p5vdd__mask 'h80
`define MA_acfg__lf0l__sel_vcm_0p5vdd__shift 7
`define MA_acfg__lf0l__sel_vcm_0p5vdd__reset 'h00

//------------------------------------------------------------------------------acfg__lf0h__ch0_mux---
// select debug ch0 amux
`define MA_acfg__lf0h__ch0_mux__a 'h0651
`define MA_acfg__lf0h__ch0_mux__len 4
`define MA_acfg__lf0h__ch0_mux__mask 'h0f
`define MA_acfg__lf0h__ch0_mux__shift 0
`define MA_acfg__lf0h__ch0_mux__reset 'h00

//------------------------------------------------------------------------------acfg__lf0h__spare_1---
// spare_1
`define MA_acfg__lf0h__spare_1__a 'h0650
`define MA_acfg__lf0h__spare_1__len 2
`define MA_acfg__lf0h__spare_1__mask 'hc0
`define MA_acfg__lf0h__spare_1__shift 6
`define MA_acfg__lf0h__spare_1__reset 'h00

//------------------------------------------------------------------------------acfg__lf0h__gain_fwd---
// loopfilter gain_fwd
`define MA_acfg__lf0h__gain_fwd__a 'h0650
`define MA_acfg__lf0h__gain_fwd__len 3
`define MA_acfg__lf0h__gain_fwd__mask 'h07
`define MA_acfg__lf0h__gain_fwd__shift 0
`define MA_acfg__lf0h__gain_fwd__reset 'h00

//------------------------------------------------------------------------------acfg__lf0h__ch1_mux---
// select debug ch1 amux
`define MA_acfg__lf0h__ch1_mux__a 'h0651
`define MA_acfg__lf0h__ch1_mux__len 4
`define MA_acfg__lf0h__ch1_mux__mask 'hf0
`define MA_acfg__lf0h__ch1_mux__shift 4
`define MA_acfg__lf0h__ch1_mux__reset 'h00

//------------------------------------------------------------------------------acfg__lf0h__int3_c_scale---
// integrator3 c scale
`define MA_acfg__lf0h__int3_c_scale__a 'h0650
`define MA_acfg__lf0h__int3_c_scale__len 3
`define MA_acfg__lf0h__int3_c_scale__mask 'h38
`define MA_acfg__lf0h__int3_c_scale__shift 3
`define MA_acfg__lf0h__int3_c_scale__reset 'h00

//------------------------------------------------------------------------------acfg__lf0h__avdd_4v5_vset---
// 
`define MA_acfg__lf0h__avdd_4v5_vset__a 'h0652
`define MA_acfg__lf0h__avdd_4v5_vset__len 2
`define MA_acfg__lf0h__avdd_4v5_vset__mask 'h03
`define MA_acfg__lf0h__avdd_4v5_vset__shift 0
`define MA_acfg__lf0h__avdd_4v5_vset__reset 'h00

//------------------------------------------------------------------------------acfg__lf0h__spare_2_7_2---
// 
`define MA_acfg__lf0h__spare_2_7_2__a 'h0652
`define MA_acfg__lf0h__spare_2_7_2__len 6
`define MA_acfg__lf0h__spare_2_7_2__mask 'hfc
`define MA_acfg__lf0h__spare_2_7_2__shift 2
`define MA_acfg__lf0h__spare_2_7_2__reset 'h00

//------------------------------------------------------------------------------acfg__lf0h__spare_3---
// 
`define MA_acfg__lf0h__spare_3__a 'h0653
`define MA_acfg__lf0h__spare_3__len 8
`define MA_acfg__lf0h__spare_3__mask 'hff
`define MA_acfg__lf0h__spare_3__shift 0
`define MA_acfg__lf0h__spare_3__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__sel_ch1_amux0---
// select debug ch1 amux XXX fill in coding
`define MA_acfg__pwm0__sel_ch1_amux0__a 'h0659
`define MA_acfg__pwm0__sel_ch1_amux0__len 4
`define MA_acfg__pwm0__sel_ch1_amux0__mask 'hf0
`define MA_acfg__pwm0__sel_ch1_amux0__shift 4
`define MA_acfg__pwm0__sel_ch1_amux0__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__sel_ch0_amux0---
// select debug ch0 amux XXX fill in coding
`define MA_acfg__pwm0__sel_ch0_amux0__a 'h0659
`define MA_acfg__pwm0__sel_ch0_amux0__len 4
`define MA_acfg__pwm0__sel_ch0_amux0__mask 'h0f
`define MA_acfg__pwm0__sel_ch0_amux0__shift 0
`define MA_acfg__pwm0__sel_ch0_amux0__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__ipol_pos_b---
// ipol_pos_b XXX fill in
`define MA_acfg__pwm0__ipol_pos_b__a 'h065d
`define MA_acfg__pwm0__ipol_pos_b__len 1
`define MA_acfg__pwm0__ipol_pos_b__mask 'h80
`define MA_acfg__pwm0__ipol_pos_b__shift 7
`define MA_acfg__pwm0__ipol_pos_b__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__ipol_neither_b---
// ipol_neither_b XXX fill in
`define MA_acfg__pwm0__ipol_neither_b__a 'h065d
`define MA_acfg__pwm0__ipol_neither_b__len 1
`define MA_acfg__pwm0__ipol_neither_b__mask 'h40
`define MA_acfg__pwm0__ipol_neither_b__shift 6
`define MA_acfg__pwm0__ipol_neither_b__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__ipol_neg_b---
// ipol_neg_b XXX fill in
`define MA_acfg__pwm0__ipol_neg_b__a 'h065d
`define MA_acfg__pwm0__ipol_neg_b__len 1
`define MA_acfg__pwm0__ipol_neg_b__mask 'h20
`define MA_acfg__pwm0__ipol_neg_b__shift 5
`define MA_acfg__pwm0__ipol_neg_b__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__clk_vcf_upd_b---
// clk_vcf_upd_b XXX fill in
`define MA_acfg__pwm0__clk_vcf_upd_b__a 'h065d
`define MA_acfg__pwm0__clk_vcf_upd_b__len 1
`define MA_acfg__pwm0__clk_vcf_upd_b__mask 'h10
`define MA_acfg__pwm0__clk_vcf_upd_b__shift 4
`define MA_acfg__pwm0__clk_vcf_upd_b__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__ipol_pos_a---
// ipol_pos_a XXX fill in
`define MA_acfg__pwm0__ipol_pos_a__a 'h065d
`define MA_acfg__pwm0__ipol_pos_a__len 1
`define MA_acfg__pwm0__ipol_pos_a__mask 'h08
`define MA_acfg__pwm0__ipol_pos_a__shift 3
`define MA_acfg__pwm0__ipol_pos_a__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__ipol_neither_a---
// ipol_neither_a XXX fill in
`define MA_acfg__pwm0__ipol_neither_a__a 'h065d
`define MA_acfg__pwm0__ipol_neither_a__len 1
`define MA_acfg__pwm0__ipol_neither_a__mask 'h04
`define MA_acfg__pwm0__ipol_neither_a__shift 2
`define MA_acfg__pwm0__ipol_neither_a__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__ipol_neg_a---
// ipol_neg_a XXX fill in
`define MA_acfg__pwm0__ipol_neg_a__a 'h065d
`define MA_acfg__pwm0__ipol_neg_a__len 1
`define MA_acfg__pwm0__ipol_neg_a__mask 'h02
`define MA_acfg__pwm0__ipol_neg_a__shift 1
`define MA_acfg__pwm0__ipol_neg_a__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__clk_vcf_upd_a---
// clk_vcf_upd_a XXX fill in
`define MA_acfg__pwm0__clk_vcf_upd_a__a 'h065d
`define MA_acfg__pwm0__clk_vcf_upd_a__len 1
`define MA_acfg__pwm0__clk_vcf_upd_a__mask 'h01
`define MA_acfg__pwm0__clk_vcf_upd_a__shift 0
`define MA_acfg__pwm0__clk_vcf_upd_a__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__pwm_vc_ctrim---
// PWM triangle gen cap trim
`define MA_acfg__pwm0__pwm_vc_ctrim__a 'h0658
`define MA_acfg__pwm0__pwm_vc_ctrim__len 5
`define MA_acfg__pwm0__pwm_vc_ctrim__mask 'h1f
`define MA_acfg__pwm0__pwm_vc_ctrim__shift 0
`define MA_acfg__pwm0__pwm_vc_ctrim__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__pwm_comp_bias_setz---
// 
`define MA_acfg__pwm0__pwm_comp_bias_setz__a 'h0658
`define MA_acfg__pwm0__pwm_comp_bias_setz__len 2
`define MA_acfg__pwm0__pwm_comp_bias_setz__mask 'h60
`define MA_acfg__pwm0__pwm_comp_bias_setz__shift 5
`define MA_acfg__pwm0__pwm_comp_bias_setz__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__pwm_comp_pfb_en---
// 
`define MA_acfg__pwm0__pwm_comp_pfb_en__a 'h0658
`define MA_acfg__pwm0__pwm_comp_pfb_en__len 1
`define MA_acfg__pwm0__pwm_comp_pfb_en__mask 'h80
`define MA_acfg__pwm0__pwm_comp_pfb_en__shift 7
`define MA_acfg__pwm0__pwm_comp_pfb_en__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__sel_ch1_amux1---
// select debug ch1 amux XXX fill in coding
`define MA_acfg__pwm0__sel_ch1_amux1__a 'h065b
`define MA_acfg__pwm0__sel_ch1_amux1__len 4
`define MA_acfg__pwm0__sel_ch1_amux1__mask 'hf0
`define MA_acfg__pwm0__sel_ch1_amux1__shift 4
`define MA_acfg__pwm0__sel_ch1_amux1__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__sel_ch0_amux1---
// select debug ch0 amux XXX fill in coding
`define MA_acfg__pwm0__sel_ch0_amux1__a 'h065b
`define MA_acfg__pwm0__sel_ch0_amux1__len 4
`define MA_acfg__pwm0__sel_ch0_amux1__mask 'h0f
`define MA_acfg__pwm0__sel_ch0_amux1__shift 0
`define MA_acfg__pwm0__sel_ch0_amux1__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__bal_disable_acfg---
// 
`define MA_acfg__pwm0__bal_disable_acfg__a 'h065a
`define MA_acfg__pwm0__bal_disable_acfg__len 1
`define MA_acfg__pwm0__bal_disable_acfg__mask 'h01
`define MA_acfg__pwm0__bal_disable_acfg__shift 0
`define MA_acfg__pwm0__bal_disable_acfg__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__bal_lpf---
// 
`define MA_acfg__pwm0__bal_lpf__a 'h065a
`define MA_acfg__pwm0__bal_lpf__len 2
`define MA_acfg__pwm0__bal_lpf__mask 'h06
`define MA_acfg__pwm0__bal_lpf__shift 1
`define MA_acfg__pwm0__bal_lpf__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__pb_test_d50---
// 
`define MA_acfg__pwm0__pb_test_d50__a 'h065a
`define MA_acfg__pwm0__pb_test_d50__len 1
`define MA_acfg__pwm0__pb_test_d50__mask 'h08
`define MA_acfg__pwm0__pb_test_d50__shift 3
`define MA_acfg__pwm0__pb_test_d50__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__pwm_comp_gfr_bal_dis---
// 
`define MA_acfg__pwm0__pwm_comp_gfr_bal_dis__a 'h065a
`define MA_acfg__pwm0__pwm_comp_gfr_bal_dis__len 1
`define MA_acfg__pwm0__pwm_comp_gfr_bal_dis__mask 'h10
`define MA_acfg__pwm0__pwm_comp_gfr_bal_dis__shift 4
`define MA_acfg__pwm0__pwm_comp_gfr_bal_dis__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__pwm_comp_gfr_comp_dis---
// 
`define MA_acfg__pwm0__pwm_comp_gfr_comp_dis__a 'h065a
`define MA_acfg__pwm0__pwm_comp_gfr_comp_dis__len 1
`define MA_acfg__pwm0__pwm_comp_gfr_comp_dis__mask 'h20
`define MA_acfg__pwm0__pwm_comp_gfr_comp_dis__shift 5
`define MA_acfg__pwm0__pwm_comp_gfr_comp_dis__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__pwm_dcorr_dis---
// 
`define MA_acfg__pwm0__pwm_dcorr_dis__a 'h065a
`define MA_acfg__pwm0__pwm_dcorr_dis__len 1
`define MA_acfg__pwm0__pwm_dcorr_dis__mask 'h40
`define MA_acfg__pwm0__pwm_dcorr_dis__shift 6
`define MA_acfg__pwm0__pwm_dcorr_dis__reset 'h00

//------------------------------------------------------------------------------acfg__pwm0__pwm_dcorr_no_dis_on_clip---
// 
`define MA_acfg__pwm0__pwm_dcorr_no_dis_on_clip__a 'h065a
`define MA_acfg__pwm0__pwm_dcorr_no_dis_on_clip__len 1
`define MA_acfg__pwm0__pwm_dcorr_no_dis_on_clip__mask 'h80
`define MA_acfg__pwm0__pwm_dcorr_no_dis_on_clip__shift 7
`define MA_acfg__pwm0__pwm_dcorr_no_dis_on_clip__reset 'h00

//------------------------------------------------------------------------------acfg__lf1l__aaf_fsel---
// 
`define MA_acfg__lf1l__aaf_fsel__a 'h066b
`define MA_acfg__lf1l__aaf_fsel__len 2
`define MA_acfg__lf1l__aaf_fsel__mask 'hc0
`define MA_acfg__lf1l__aaf_fsel__shift 6
`define MA_acfg__lf1l__aaf_fsel__reset 'h00

//------------------------------------------------------------------------------acfg__lf1l__afir_rref_trim---
// AFIR-DAC output current scale fine-trim
`define MA_acfg__lf1l__afir_rref_trim__a 'h066b
`define MA_acfg__lf1l__afir_rref_trim__len 6
`define MA_acfg__lf1l__afir_rref_trim__mask 'h3f
`define MA_acfg__lf1l__afir_rref_trim__shift 0
`define MA_acfg__lf1l__afir_rref_trim__reset 'h00

//------------------------------------------------------------------------------acfg__lf1l__sel_vcm_0p5vdd---
// 
`define MA_acfg__lf1l__sel_vcm_0p5vdd__a 'h066a
`define MA_acfg__lf1l__sel_vcm_0p5vdd__len 1
`define MA_acfg__lf1l__sel_vcm_0p5vdd__mask 'h80
`define MA_acfg__lf1l__sel_vcm_0p5vdd__shift 7
`define MA_acfg__lf1l__sel_vcm_0p5vdd__reset 'h00

//------------------------------------------------------------------------------acfg__lf1l__chop_en---
// chop_en XXX fill in
`define MA_acfg__lf1l__chop_en__a 'h066a
`define MA_acfg__lf1l__chop_en__len 1
`define MA_acfg__lf1l__chop_en__mask 'h40
`define MA_acfg__lf1l__chop_en__shift 6
`define MA_acfg__lf1l__chop_en__reset 'h00

//------------------------------------------------------------------------------acfg__lf1l__chop_dis_state---
// chop_dis_state XXX fill in
`define MA_acfg__lf1l__chop_dis_state__a 'h066a
`define MA_acfg__lf1l__chop_dis_state__len 1
`define MA_acfg__lf1l__chop_dis_state__mask 'h20
`define MA_acfg__lf1l__chop_dis_state__shift 5
`define MA_acfg__lf1l__chop_dis_state__reset 'h00

//------------------------------------------------------------------------------acfg__lf1l__spare_2_4---
// 
`define MA_acfg__lf1l__spare_2_4__a 'h066a
`define MA_acfg__lf1l__spare_2_4__len 1
`define MA_acfg__lf1l__spare_2_4__mask 'h10
`define MA_acfg__lf1l__spare_2_4__shift 4
`define MA_acfg__lf1l__spare_2_4__reset 'h00

//------------------------------------------------------------------------------acfg__lf1l__rtrim---
// rtrim XXX fill in
`define MA_acfg__lf1l__rtrim__a 'h066a
`define MA_acfg__lf1l__rtrim__len 4
`define MA_acfg__lf1l__rtrim__mask 'h0f
`define MA_acfg__lf1l__rtrim__shift 0
`define MA_acfg__lf1l__rtrim__reset 'h00

//------------------------------------------------------------------------------acfg__lf1l__cmr_ctrim_p---
// cmr_ctrim_p XXX fill in
`define MA_acfg__lf1l__cmr_ctrim_p__a 'h0669
`define MA_acfg__lf1l__cmr_ctrim_p__len 4
`define MA_acfg__lf1l__cmr_ctrim_p__mask 'hf0
`define MA_acfg__lf1l__cmr_ctrim_p__shift 4
`define MA_acfg__lf1l__cmr_ctrim_p__reset 'h00

//------------------------------------------------------------------------------acfg__lf1l__cmr_ctrim_n---
// cmr_ctrim_n XXX fill in
`define MA_acfg__lf1l__cmr_ctrim_n__a 'h0669
`define MA_acfg__lf1l__cmr_ctrim_n__len 4
`define MA_acfg__lf1l__cmr_ctrim_n__mask 'h0f
`define MA_acfg__lf1l__cmr_ctrim_n__shift 0
`define MA_acfg__lf1l__cmr_ctrim_n__reset 'h00

//------------------------------------------------------------------------------acfg__lf1l__cmr_rtrim_p---
// cmr_rtrim_p XXX fill in
`define MA_acfg__lf1l__cmr_rtrim_p__a 'h0668
`define MA_acfg__lf1l__cmr_rtrim_p__len 4
`define MA_acfg__lf1l__cmr_rtrim_p__mask 'hf0
`define MA_acfg__lf1l__cmr_rtrim_p__shift 4
`define MA_acfg__lf1l__cmr_rtrim_p__reset 'h00

//------------------------------------------------------------------------------acfg__lf1l__cmr_rtrim_n---
// cmr_rtrim_n XXX fill in
`define MA_acfg__lf1l__cmr_rtrim_n__a 'h0668
`define MA_acfg__lf1l__cmr_rtrim_n__len 4
`define MA_acfg__lf1l__cmr_rtrim_n__mask 'h0f
`define MA_acfg__lf1l__cmr_rtrim_n__shift 0
`define MA_acfg__lf1l__cmr_rtrim_n__reset 'h00

//------------------------------------------------------------------------------acfg__lf1h__ch1_amux---
// select debug ch1 amux
`define MA_acfg__lf1h__ch1_amux__a 'h0671
`define MA_acfg__lf1h__ch1_amux__len 4
`define MA_acfg__lf1h__ch1_amux__mask 'hf0
`define MA_acfg__lf1h__ch1_amux__shift 4
`define MA_acfg__lf1h__ch1_amux__reset 'h00

//------------------------------------------------------------------------------acfg__lf1h__ch0_amux---
// select debug ch0 amux
`define MA_acfg__lf1h__ch0_amux__a 'h0671
`define MA_acfg__lf1h__ch0_amux__len 4
`define MA_acfg__lf1h__ch0_amux__mask 'h0f
`define MA_acfg__lf1h__ch0_amux__shift 0
`define MA_acfg__lf1h__ch0_amux__reset 'h00

//------------------------------------------------------------------------------acfg__lf1h__spare_1---
// spare_1
`define MA_acfg__lf1h__spare_1__a 'h0670
`define MA_acfg__lf1h__spare_1__len 2
`define MA_acfg__lf1h__spare_1__mask 'hc0
`define MA_acfg__lf1h__spare_1__shift 6
`define MA_acfg__lf1h__spare_1__reset 'h00

//------------------------------------------------------------------------------acfg__lf1h__gain_fwd---
// loopfilter gain_fwd
`define MA_acfg__lf1h__gain_fwd__a 'h0670
`define MA_acfg__lf1h__gain_fwd__len 3
`define MA_acfg__lf1h__gain_fwd__mask 'h07
`define MA_acfg__lf1h__gain_fwd__shift 0
`define MA_acfg__lf1h__gain_fwd__reset 'h00

//------------------------------------------------------------------------------acfg__lf1h__int3_c_scale---
// Integrator3 c scale
`define MA_acfg__lf1h__int3_c_scale__a 'h0670
`define MA_acfg__lf1h__int3_c_scale__len 3
`define MA_acfg__lf1h__int3_c_scale__mask 'h38
`define MA_acfg__lf1h__int3_c_scale__shift 3
`define MA_acfg__lf1h__int3_c_scale__reset 'h00

//------------------------------------------------------------------------------acfg__lf1h__avdd_4v5_vset---
// 
`define MA_acfg__lf1h__avdd_4v5_vset__a 'h0672
`define MA_acfg__lf1h__avdd_4v5_vset__len 2
`define MA_acfg__lf1h__avdd_4v5_vset__mask 'h03
`define MA_acfg__lf1h__avdd_4v5_vset__shift 0
`define MA_acfg__lf1h__avdd_4v5_vset__reset 'h00

//------------------------------------------------------------------------------acfg__lf1h__spare_2_7_2---
// 
`define MA_acfg__lf1h__spare_2_7_2__a 'h0672
`define MA_acfg__lf1h__spare_2_7_2__len 6
`define MA_acfg__lf1h__spare_2_7_2__mask 'hfc
`define MA_acfg__lf1h__spare_2_7_2__shift 2
`define MA_acfg__lf1h__spare_2_7_2__reset 'h00

//------------------------------------------------------------------------------acfg__lf1h__spare_3---
// 
`define MA_acfg__lf1h__spare_3__a 'h0673
`define MA_acfg__lf1h__spare_3__len 8
`define MA_acfg__lf1h__spare_3__mask 'hff
`define MA_acfg__lf1h__spare_3__shift 0
`define MA_acfg__lf1h__spare_3__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__ipol_pos_b---
// ipol_pos_b XXX fill in
`define MA_acfg__pwm1__ipol_pos_b__a 'h067d
`define MA_acfg__pwm1__ipol_pos_b__len 1
`define MA_acfg__pwm1__ipol_pos_b__mask 'h80
`define MA_acfg__pwm1__ipol_pos_b__shift 7
`define MA_acfg__pwm1__ipol_pos_b__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__ipol_neither_b---
// ipol_neither_b XXX fill in
`define MA_acfg__pwm1__ipol_neither_b__a 'h067d
`define MA_acfg__pwm1__ipol_neither_b__len 1
`define MA_acfg__pwm1__ipol_neither_b__mask 'h40
`define MA_acfg__pwm1__ipol_neither_b__shift 6
`define MA_acfg__pwm1__ipol_neither_b__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__ipol_neg_b---
// ipol_neg_b XXX fill in
`define MA_acfg__pwm1__ipol_neg_b__a 'h067d
`define MA_acfg__pwm1__ipol_neg_b__len 1
`define MA_acfg__pwm1__ipol_neg_b__mask 'h20
`define MA_acfg__pwm1__ipol_neg_b__shift 5
`define MA_acfg__pwm1__ipol_neg_b__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__clk_vcf_upd_b---
// clk_vcf_upd_b XXX fill in
`define MA_acfg__pwm1__clk_vcf_upd_b__a 'h067d
`define MA_acfg__pwm1__clk_vcf_upd_b__len 1
`define MA_acfg__pwm1__clk_vcf_upd_b__mask 'h10
`define MA_acfg__pwm1__clk_vcf_upd_b__shift 4
`define MA_acfg__pwm1__clk_vcf_upd_b__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__ipol_pos_a---
// ipol_pos_a XXX fill in
`define MA_acfg__pwm1__ipol_pos_a__a 'h067d
`define MA_acfg__pwm1__ipol_pos_a__len 1
`define MA_acfg__pwm1__ipol_pos_a__mask 'h08
`define MA_acfg__pwm1__ipol_pos_a__shift 3
`define MA_acfg__pwm1__ipol_pos_a__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__ipol_neither_a---
// ipol_neither_a XXX fill in
`define MA_acfg__pwm1__ipol_neither_a__a 'h067d
`define MA_acfg__pwm1__ipol_neither_a__len 1
`define MA_acfg__pwm1__ipol_neither_a__mask 'h04
`define MA_acfg__pwm1__ipol_neither_a__shift 2
`define MA_acfg__pwm1__ipol_neither_a__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__ipol_neg_a---
// ipol_neg_a XXX fill in
`define MA_acfg__pwm1__ipol_neg_a__a 'h067d
`define MA_acfg__pwm1__ipol_neg_a__len 1
`define MA_acfg__pwm1__ipol_neg_a__mask 'h02
`define MA_acfg__pwm1__ipol_neg_a__shift 1
`define MA_acfg__pwm1__ipol_neg_a__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__clk_vcf_upd_a---
// clk_vcf_upd_a XXX fill in
`define MA_acfg__pwm1__clk_vcf_upd_a__a 'h067d
`define MA_acfg__pwm1__clk_vcf_upd_a__len 1
`define MA_acfg__pwm1__clk_vcf_upd_a__mask 'h01
`define MA_acfg__pwm1__clk_vcf_upd_a__shift 0
`define MA_acfg__pwm1__clk_vcf_upd_a__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__pwm_vc_ctrim---
// PWM triangle gen cap trim
`define MA_acfg__pwm1__pwm_vc_ctrim__a 'h0678
`define MA_acfg__pwm1__pwm_vc_ctrim__len 5
`define MA_acfg__pwm1__pwm_vc_ctrim__mask 'h1f
`define MA_acfg__pwm1__pwm_vc_ctrim__shift 0
`define MA_acfg__pwm1__pwm_vc_ctrim__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__pwm_comp_bias_setz---
// 
`define MA_acfg__pwm1__pwm_comp_bias_setz__a 'h0678
`define MA_acfg__pwm1__pwm_comp_bias_setz__len 2
`define MA_acfg__pwm1__pwm_comp_bias_setz__mask 'h60
`define MA_acfg__pwm1__pwm_comp_bias_setz__shift 5
`define MA_acfg__pwm1__pwm_comp_bias_setz__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__pwm_comp_pfb_en---
// 
`define MA_acfg__pwm1__pwm_comp_pfb_en__a 'h0678
`define MA_acfg__pwm1__pwm_comp_pfb_en__len 1
`define MA_acfg__pwm1__pwm_comp_pfb_en__mask 'h80
`define MA_acfg__pwm1__pwm_comp_pfb_en__shift 7
`define MA_acfg__pwm1__pwm_comp_pfb_en__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__bal_disable_acfg---
// 
`define MA_acfg__pwm1__bal_disable_acfg__a 'h067a
`define MA_acfg__pwm1__bal_disable_acfg__len 1
`define MA_acfg__pwm1__bal_disable_acfg__mask 'h01
`define MA_acfg__pwm1__bal_disable_acfg__shift 0
`define MA_acfg__pwm1__bal_disable_acfg__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__bal_lpf---
// 
`define MA_acfg__pwm1__bal_lpf__a 'h067a
`define MA_acfg__pwm1__bal_lpf__len 2
`define MA_acfg__pwm1__bal_lpf__mask 'h06
`define MA_acfg__pwm1__bal_lpf__shift 1
`define MA_acfg__pwm1__bal_lpf__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__pb_test_d50---
// 
`define MA_acfg__pwm1__pb_test_d50__a 'h067a
`define MA_acfg__pwm1__pb_test_d50__len 1
`define MA_acfg__pwm1__pb_test_d50__mask 'h08
`define MA_acfg__pwm1__pb_test_d50__shift 3
`define MA_acfg__pwm1__pb_test_d50__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__sel_ch0_amux1---
// select debug ch0 amux XXX fill in coding
`define MA_acfg__pwm1__sel_ch0_amux1__a 'h067b
`define MA_acfg__pwm1__sel_ch0_amux1__len 4
`define MA_acfg__pwm1__sel_ch0_amux1__mask 'h0f
`define MA_acfg__pwm1__sel_ch0_amux1__shift 0
`define MA_acfg__pwm1__sel_ch0_amux1__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__sel_ch0_amux0---
// select debug ch0 amux XXX fill in coding
`define MA_acfg__pwm1__sel_ch0_amux0__a 'h0679
`define MA_acfg__pwm1__sel_ch0_amux0__len 4
`define MA_acfg__pwm1__sel_ch0_amux0__mask 'h0f
`define MA_acfg__pwm1__sel_ch0_amux0__shift 0
`define MA_acfg__pwm1__sel_ch0_amux0__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__sel_ch1_amux0---
// select debug ch1 amux XXX fill in coding
`define MA_acfg__pwm1__sel_ch1_amux0__a 'h0679
`define MA_acfg__pwm1__sel_ch1_amux0__len 4
`define MA_acfg__pwm1__sel_ch1_amux0__mask 'hf0
`define MA_acfg__pwm1__sel_ch1_amux0__shift 4
`define MA_acfg__pwm1__sel_ch1_amux0__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__sel_ch1_amux1---
// select debug ch1 amux XXX fill in coding
`define MA_acfg__pwm1__sel_ch1_amux1__a 'h067b
`define MA_acfg__pwm1__sel_ch1_amux1__len 4
`define MA_acfg__pwm1__sel_ch1_amux1__mask 'hf0
`define MA_acfg__pwm1__sel_ch1_amux1__shift 4
`define MA_acfg__pwm1__sel_ch1_amux1__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__pwm_dcorr_dis---
// Force disable PWM Dcorrector
`define MA_acfg__pwm1__pwm_dcorr_dis__a 'h067a
`define MA_acfg__pwm1__pwm_dcorr_dis__len 1
`define MA_acfg__pwm1__pwm_dcorr_dis__mask 'h40
`define MA_acfg__pwm1__pwm_dcorr_dis__shift 6
`define MA_acfg__pwm1__pwm_dcorr_dis__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__pwm_comp_gfr_bal_dis---
// 
`define MA_acfg__pwm1__pwm_comp_gfr_bal_dis__a 'h067a
`define MA_acfg__pwm1__pwm_comp_gfr_bal_dis__len 1
`define MA_acfg__pwm1__pwm_comp_gfr_bal_dis__mask 'h10
`define MA_acfg__pwm1__pwm_comp_gfr_bal_dis__shift 4
`define MA_acfg__pwm1__pwm_comp_gfr_bal_dis__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__pwm_comp_gfr_comp_dis---
// 
`define MA_acfg__pwm1__pwm_comp_gfr_comp_dis__a 'h067a
`define MA_acfg__pwm1__pwm_comp_gfr_comp_dis__len 1
`define MA_acfg__pwm1__pwm_comp_gfr_comp_dis__mask 'h20
`define MA_acfg__pwm1__pwm_comp_gfr_comp_dis__shift 5
`define MA_acfg__pwm1__pwm_comp_gfr_comp_dis__reset 'h00

//------------------------------------------------------------------------------acfg__pwm1__pwm_dcorr_no_dis_on_clip---
// 
`define MA_acfg__pwm1__pwm_dcorr_no_dis_on_clip__a 'h067a
`define MA_acfg__pwm1__pwm_dcorr_no_dis_on_clip__len 1
`define MA_acfg__pwm1__pwm_dcorr_no_dis_on_clip__mask 'h80
`define MA_acfg__pwm1__pwm_dcorr_no_dis_on_clip__shift 7
`define MA_acfg__pwm1__pwm_dcorr_no_dis_on_clip__reset 'h00

//------------------------------------------------------------------------------acfg__afir1__biasfilt_fsel---
// 
`define MA_acfg__afir1__biasfilt_fsel__a 'h0661
`define MA_acfg__afir1__biasfilt_fsel__len 2
`define MA_acfg__afir1__biasfilt_fsel__mask 'h60
`define MA_acfg__afir1__biasfilt_fsel__shift 5
`define MA_acfg__afir1__biasfilt_fsel__reset 'h00

//------------------------------------------------------------------------------acfg__afir1__icmctrl_trim_en---
// icmctrl_trim_en
`define MA_acfg__afir1__icmctrl_trim_en__a 'h0661
`define MA_acfg__afir1__icmctrl_trim_en__len 1
`define MA_acfg__afir1__icmctrl_trim_en__mask 'h01
`define MA_acfg__afir1__icmctrl_trim_en__shift 0
`define MA_acfg__afir1__icmctrl_trim_en__reset 'h00

//------------------------------------------------------------------------------acfg__afir1__vdsat_trim---
// vdsat_trim
`define MA_acfg__afir1__vdsat_trim__a 'h0661
`define MA_acfg__afir1__vdsat_trim__len 4
`define MA_acfg__afir1__vdsat_trim__mask 'h1e
`define MA_acfg__afir1__vdsat_trim__shift 1
`define MA_acfg__afir1__vdsat_trim__reset 'h00

//------------------------------------------------------------------------------acfg__afir1__dout_en---
// dout enable
`define MA_acfg__afir1__dout_en__a 'h0661
`define MA_acfg__afir1__dout_en__len 1
`define MA_acfg__afir1__dout_en__mask 'h80
`define MA_acfg__afir1__dout_en__shift 7
`define MA_acfg__afir1__dout_en__reset 'h00

//------------------------------------------------------------------------------acfg__afir1__cmctrl_dis---
// Disable common-mode voltage controller
`define MA_acfg__afir1__cmctrl_dis__a 'h0660
`define MA_acfg__afir1__cmctrl_dis__len 1
`define MA_acfg__afir1__cmctrl_dis__mask 'h01
`define MA_acfg__afir1__cmctrl_dis__shift 0
`define MA_acfg__afir1__cmctrl_dis__reset 'h00

//------------------------------------------------------------------------------acfg__afir1__afir_4v0_vset---
// 
`define MA_acfg__afir1__afir_4v0_vset__a 'h0660
`define MA_acfg__afir1__afir_4v0_vset__len 2
`define MA_acfg__afir1__afir_4v0_vset__mask 'h06
`define MA_acfg__afir1__afir_4v0_vset__shift 1
`define MA_acfg__afir1__afir_4v0_vset__reset 'h00

//------------------------------------------------------------------------------acfg__afir1__clk_skip_one---
// 
`define MA_acfg__afir1__clk_skip_one__a 'h0660
`define MA_acfg__afir1__clk_skip_one__len 1
`define MA_acfg__afir1__clk_skip_one__mask 'h08
`define MA_acfg__afir1__clk_skip_one__shift 3
`define MA_acfg__afir1__clk_skip_one__reset 'h00

//------------------------------------------------------------------------------acfg__afir1__dac_fsel_3m072---
// 
`define MA_acfg__afir1__dac_fsel_3m072__a 'h0660
`define MA_acfg__afir1__dac_fsel_3m072__len 1
`define MA_acfg__afir1__dac_fsel_3m072__mask 'h10
`define MA_acfg__afir1__dac_fsel_3m072__shift 4
`define MA_acfg__afir1__dac_fsel_3m072__reset 'h00

//------------------------------------------------------------------------------acfg__afir1__dmy_idle_mod_en---
// 
`define MA_acfg__afir1__dmy_idle_mod_en__a 'h0660
`define MA_acfg__afir1__dmy_idle_mod_en__len 1
`define MA_acfg__afir1__dmy_idle_mod_en__mask 'h20
`define MA_acfg__afir1__dmy_idle_mod_en__shift 5
`define MA_acfg__afir1__dmy_idle_mod_en__reset 'h00

//------------------------------------------------------------------------------acfg__afir1__bgfilt_fset---
// 
`define MA_acfg__afir1__bgfilt_fset__a 'h0660
`define MA_acfg__afir1__bgfilt_fset__len 2
`define MA_acfg__afir1__bgfilt_fset__mask 'hc0
`define MA_acfg__afir1__bgfilt_fset__shift 6
`define MA_acfg__afir1__bgfilt_fset__reset 'h00

//------------------------------------------------------------------------------acfg__adc__bypass_ppong_buf_adc---
// Bypass buffering of bandgap voltage on ADC vref input
`define MA_acfg__adc__bypass_ppong_buf_adc__a 'h0620
`define MA_acfg__adc__bypass_ppong_buf_adc__len 1
`define MA_acfg__adc__bypass_ppong_buf_adc__mask 'h01
`define MA_acfg__adc__bypass_ppong_buf_adc__shift 0
`define MA_acfg__adc__bypass_ppong_buf_adc__reset 'h00

//------------------------------------------------------------------------------acfg__adc__spare_0---
// 
`define MA_acfg__adc__spare_0__a 'h0620
`define MA_acfg__adc__spare_0__len 6
`define MA_acfg__adc__spare_0__mask 'hfc
`define MA_acfg__adc__spare_0__shift 2
`define MA_acfg__adc__spare_0__reset 'h00

//------------------------------------------------------------------------------acfg__adc__asense_amux_ch0---
// Analog debug mux select, see coding on ch1
`define MA_acfg__adc__asense_amux_ch0__a 'h0621
`define MA_acfg__adc__asense_amux_ch0__len 4
`define MA_acfg__adc__asense_amux_ch0__mask 'h0f
`define MA_acfg__adc__asense_amux_ch0__shift 0
`define MA_acfg__adc__asense_amux_ch0__reset 'h00

//------------------------------------------------------------------------------acfg__adc__asense_amux_ch1---
// 0: Disabled, 1: Disconnected, 2: vbg_0v6, 3:bgr_dVbe, 4: adc_in_pin_int, 5: pvdd_div_in, 6-15: no connect
`define MA_acfg__adc__asense_amux_ch1__a 'h0621
`define MA_acfg__adc__asense_amux_ch1__len 4
`define MA_acfg__adc__asense_amux_ch1__mask 'hf0
`define MA_acfg__adc__asense_amux_ch1__shift 4
`define MA_acfg__adc__asense_amux_ch1__reset 'h00

//------------------------------------------------------------------------------acfg__adc__bypass_ppong_buf_dVbe---
// Bypass buffer on sense frontend dVbe input
`define MA_acfg__adc__bypass_ppong_buf_dVbe__a 'h0620
`define MA_acfg__adc__bypass_ppong_buf_dVbe__len 1
`define MA_acfg__adc__bypass_ppong_buf_dVbe__mask 'h02
`define MA_acfg__adc__bypass_ppong_buf_dVbe__shift 1
`define MA_acfg__adc__bypass_ppong_buf_dVbe__reset 'h00

//------------------------------------------------------------------------------acfg__sb_amux__sel_ch0---
// Analog debug mux select, see coding on ch1
`define MA_acfg__sb_amux__sel_ch0__a 'h0630
`define MA_acfg__sb_amux__sel_ch0__len 4
`define MA_acfg__sb_amux__sel_ch0__mask 'h0f
`define MA_acfg__sb_amux__sel_ch0__shift 0
`define MA_acfg__sb_amux__sel_ch0__reset 'h00

//------------------------------------------------------------------------------acfg__sb_amux__sel_ch1---
// 0: Disabled, 1: Disconnected, 2: pvdd_div30_buf[1], 3: pvdd_div30_buf[0], 4-15: no connect
`define MA_acfg__sb_amux__sel_ch1__a 'h0630
`define MA_acfg__sb_amux__sel_ch1__len 4
`define MA_acfg__sb_amux__sel_ch1__mask 'hf0
`define MA_acfg__sb_amux__sel_ch1__shift 4
`define MA_acfg__sb_amux__sel_ch1__reset 'h00

//------------------------------------------------------------------------------acfg__sb_amux__pwm_refgen_vc_reset_div2---
// Divide PWM refgen vc_reset and vcmr_reset signals by 2
`define MA_acfg__sb_amux__pwm_refgen_vc_reset_div2__a 'h0631
`define MA_acfg__sb_amux__pwm_refgen_vc_reset_div2__len 1
`define MA_acfg__sb_amux__pwm_refgen_vc_reset_div2__mask 'h01
`define MA_acfg__sb_amux__pwm_refgen_vc_reset_div2__shift 0
`define MA_acfg__sb_amux__pwm_refgen_vc_reset_div2__reset 'h00

//------------------------------------------------------------------------------acfg__sb_amux__i2s_en_sck_mx_out---
// Loop i2s_sck back to i2s_sdo
`define MA_acfg__sb_amux__i2s_en_sck_mx_out__a 'h0631
`define MA_acfg__sb_amux__i2s_en_sck_mx_out__len 1
`define MA_acfg__sb_amux__i2s_en_sck_mx_out__mask 'h02
`define MA_acfg__sb_amux__i2s_en_sck_mx_out__shift 1
`define MA_acfg__sb_amux__i2s_en_sck_mx_out__reset 'h00

//------------------------------------------------------------------------------acfg__sb_amux__xpin_force_abuff_cfg_nerr---
// Unused
`define MA_acfg__sb_amux__xpin_force_abuff_cfg_nerr__a 'h0631
`define MA_acfg__sb_amux__xpin_force_abuff_cfg_nerr__len 1
`define MA_acfg__sb_amux__xpin_force_abuff_cfg_nerr__mask 'h04
`define MA_acfg__sb_amux__xpin_force_abuff_cfg_nerr__shift 2
`define MA_acfg__sb_amux__xpin_force_abuff_cfg_nerr__reset 'h00

//------------------------------------------------------------------------------acfg__sb_amux__xpin_force_abuff_cfg_nclip---
// Unused
`define MA_acfg__sb_amux__xpin_force_abuff_cfg_nclip__a 'h0631
`define MA_acfg__sb_amux__xpin_force_abuff_cfg_nclip__len 1
`define MA_acfg__sb_amux__xpin_force_abuff_cfg_nclip__mask 'h08
`define MA_acfg__sb_amux__xpin_force_abuff_cfg_nclip__shift 3
`define MA_acfg__sb_amux__xpin_force_abuff_cfg_nclip__reset 'h00

//------------------------------------------------------------------------------acfg__sb_amux__test_mode_pvdd_div45---
// Change pvdd divider to 45 instead of 30
`define MA_acfg__sb_amux__test_mode_pvdd_div45__a 'h0631
`define MA_acfg__sb_amux__test_mode_pvdd_div45__len 1
`define MA_acfg__sb_amux__test_mode_pvdd_div45__mask 'h10
`define MA_acfg__sb_amux__test_mode_pvdd_div45__shift 4
`define MA_acfg__sb_amux__test_mode_pvdd_div45__reset 'h00

//------------------------------------------------------------------------------acfg__sb_amux__spare---
// 
`define MA_acfg__sb_amux__spare__a 'h0631
`define MA_acfg__sb_amux__spare__len 3
`define MA_acfg__sb_amux__spare__mask 'he0
`define MA_acfg__sb_amux__spare__shift 5
`define MA_acfg__sb_amux__spare__reset 'h00

//------------------------------------------------------------------------------acfg__avddl__vcf_trim---
// Flying capacitor UVP/OVP resistor trim
`define MA_acfg__avddl__vcf_trim__a 'h0601
`define MA_acfg__avddl__vcf_trim__len 4
`define MA_acfg__avddl__vcf_trim__mask 'h0f
`define MA_acfg__avddl__vcf_trim__shift 0
`define MA_acfg__avddl__vcf_trim__reset 'h00

//------------------------------------------------------------------------------acfg__avddl__spare_bits2---
// 
`define MA_acfg__avddl__spare_bits2__a 'h0601
`define MA_acfg__avddl__spare_bits2__len 4
`define MA_acfg__avddl__spare_bits2__mask 'hf0
`define MA_acfg__avddl__spare_bits2__shift 4
`define MA_acfg__avddl__spare_bits2__reset 'h00

//------------------------------------------------------------------------------acfg__avddl__cf_trim---
// Bandgap reference feedback capacitor trim
`define MA_acfg__avddl__cf_trim__a 'h0600
`define MA_acfg__avddl__cf_trim__len 4
`define MA_acfg__avddl__cf_trim__mask 'h0f
`define MA_acfg__avddl__cf_trim__shift 0
`define MA_acfg__avddl__cf_trim__reset 'h00

//------------------------------------------------------------------------------acfg__avddl__spare_bits3---
// 
`define MA_acfg__avddl__spare_bits3__a 'h0600
`define MA_acfg__avddl__spare_bits3__len 4
`define MA_acfg__avddl__spare_bits3__mask 'hf0
`define MA_acfg__avddl__spare_bits3__shift 4
`define MA_acfg__avddl__spare_bits3__reset 'h00

//------------------------------------------------------------------------------dsp__pmem__addr0_0---
// Program memory address 0 least significant byte
`define MA_dsp__pmem__addr0_0__a 'h1000
`define MA_dsp__pmem__addr0_0__len 8
`define MA_dsp__pmem__addr0_0__mask 'hff
`define MA_dsp__pmem__addr0_0__shift 0
`define MA_dsp__pmem__addr0_0__reset 'h00

//------------------------------------------------------------------------------dsp__pmem__addr0_1---
// Program memory address 0 middle byte
`define MA_dsp__pmem__addr0_1__a 'h1001
`define MA_dsp__pmem__addr0_1__len 8
`define MA_dsp__pmem__addr0_1__mask 'hff
`define MA_dsp__pmem__addr0_1__shift 0
`define MA_dsp__pmem__addr0_1__reset 'h00

//------------------------------------------------------------------------------dsp__pmem__addr0_2---
// Program memory address 0 most signficant  byte (writing commits to hardblock memory)
`define MA_dsp__pmem__addr0_2__a 'h1002
`define MA_dsp__pmem__addr0_2__len 8
`define MA_dsp__pmem__addr0_2__mask 'hff
`define MA_dsp__pmem__addr0_2__shift 0
`define MA_dsp__pmem__addr0_2__reset 'h00

//------------------------------------------------------------------------------dsp__pmem__addr1_0---
// Program memory address 1 least significant byte
`define MA_dsp__pmem__addr1_0__a 'h1004
`define MA_dsp__pmem__addr1_0__len 8
`define MA_dsp__pmem__addr1_0__mask 'hff
`define MA_dsp__pmem__addr1_0__shift 0
`define MA_dsp__pmem__addr1_0__reset 'h00

//------------------------------------------------------------------------------dsp__pmem__addr1_1---
// Program memory address 1 middle byte
`define MA_dsp__pmem__addr1_1__a 'h1005
`define MA_dsp__pmem__addr1_1__len 8
`define MA_dsp__pmem__addr1_1__mask 'hff
`define MA_dsp__pmem__addr1_1__shift 0
`define MA_dsp__pmem__addr1_1__reset 'h00

//------------------------------------------------------------------------------dsp__pmem__addr1_2---
// Program memory address 1 most signficant  byte (writing commits to hardblock memory)
`define MA_dsp__pmem__addr1_2__a 'h1006
`define MA_dsp__pmem__addr1_2__len 8
`define MA_dsp__pmem__addr1_2__mask 'hff
`define MA_dsp__pmem__addr1_2__shift 0
`define MA_dsp__pmem__addr1_2__reset 'h00

//------------------------------------------------------------------------------otp__otpmem__byte_0---
// OTP memory byte
`define MA_otp__otpmem__byte_0__a 'h8000
`define MA_otp__otpmem__byte_0__len 8
`define MA_otp__otpmem__byte_0__mask 'hff
`define MA_otp__otpmem__byte_0__shift 0
`define MA_otp__otpmem__byte_0__reset 'hff

//------------------------------------------------------------------------------otp__otpmem__byte_1---
// OTP memory byte
`define MA_otp__otpmem__byte_1__a 'h8001
`define MA_otp__otpmem__byte_1__len 8
`define MA_otp__otpmem__byte_1__mask 'hff
`define MA_otp__otpmem__byte_1__shift 0
`define MA_otp__otpmem__byte_1__reset 'hff

//------------------------------------------------------------------------------otp__otpmem__byte_2---
// OTP memory byte
`define MA_otp__otpmem__byte_2__a 'h8002
`define MA_otp__otpmem__byte_2__len 8
`define MA_otp__otpmem__byte_2__mask 'hff
`define MA_otp__otpmem__byte_2__shift 0
`define MA_otp__otpmem__byte_2__reset 'hff

//------------------------------------------------------------------------------otp__otpmem__byte_3---
// OTP memory byte
`define MA_otp__otpmem__byte_3__a 'h8003
`define MA_otp__otpmem__byte_3__len 8
`define MA_otp__otpmem__byte_3__mask 'hff
`define MA_otp__otpmem__byte_3__shift 0
`define MA_otp__otpmem__byte_3__reset 'hff

//------------------------------------------------------------------------------otp__otptrack__device_id__3---
// Device ID [31:24]
`define MA_otp__otptrack__device_id__3__a 'h81f1
`define MA_otp__otptrack__device_id__3__len 8
`define MA_otp__otptrack__device_id__3__mask 'hff
`define MA_otp__otptrack__device_id__3__shift 0
`define MA_otp__otptrack__device_id__3__reset 'hff

//------------------------------------------------------------------------------otp__otptrack__device_id__2---
// Device ID [23:16]
`define MA_otp__otptrack__device_id__2__a 'h81f2
`define MA_otp__otptrack__device_id__2__len 8
`define MA_otp__otptrack__device_id__2__mask 'hff
`define MA_otp__otptrack__device_id__2__shift 0
`define MA_otp__otptrack__device_id__2__reset 'hff

//------------------------------------------------------------------------------otp__otptrack__ate_site---
// 0-23: Wafernumber, 25: Meruslab, 26: Salland preproduction, 27: ASE, 31:untested
`define MA_otp__otptrack__ate_site__a 'h81f5
`define MA_otp__otptrack__ate_site__len 2
`define MA_otp__otptrack__ate_site__mask 'hc0
`define MA_otp__otptrack__ate_site__shift 6
`define MA_otp__otptrack__ate_site__reset 'h03

//------------------------------------------------------------------------------otp__otptrack__ate_version_minor---
// ATE program version, minor
`define MA_otp__otptrack__ate_version_minor__a 'h81f5
`define MA_otp__otptrack__ate_version_minor__len 6
`define MA_otp__otptrack__ate_version_minor__mask 'h3f
`define MA_otp__otptrack__ate_version_minor__shift 0
`define MA_otp__otptrack__ate_version_minor__reset 'h3f

//------------------------------------------------------------------------------otp__otptrack__device_id__1---
// Device ID [15:8]
`define MA_otp__otptrack__device_id__1__a 'h81f3
`define MA_otp__otptrack__device_id__1__len 8
`define MA_otp__otptrack__device_id__1__mask 'hff
`define MA_otp__otptrack__device_id__1__shift 0
`define MA_otp__otptrack__device_id__1__reset 'hff

//------------------------------------------------------------------------------otp__otptrack__device_id__0---
// Device ID [7:0]
`define MA_otp__otptrack__device_id__0__a 'h81f4
`define MA_otp__otptrack__device_id__0__len 8
`define MA_otp__otptrack__device_id__0__mask 'hff
`define MA_otp__otptrack__device_id__0__shift 0
`define MA_otp__otptrack__device_id__0__reset 'hff

//------------------------------------------------------------------------------otp__otptrack__test_result---
// Test result; msb:tested,bit2:afirbist,bit1:dspmembist,bit0:vdd_reg
`define MA_otp__otptrack__test_result__a 'h81f7
`define MA_otp__otptrack__test_result__len 8
`define MA_otp__otptrack__test_result__mask 'hff
`define MA_otp__otptrack__test_result__shift 0
`define MA_otp__otptrack__test_result__reset 'hff

//------------------------------------------------------------------------------otp__otptrack__ate_version_major---
// ATE program version, major
`define MA_otp__otptrack__ate_version_major__a 'h81f0
`define MA_otp__otptrack__ate_version_major__len 8
`define MA_otp__otptrack__ate_version_major__mask 'hff
`define MA_otp__otptrack__ate_version_major__shift 0
`define MA_otp__otptrack__ate_version_major__reset 'hff

//------------------------------------------------------------------------------otp__otptrack__otp_version_minor---
// OTP layout version, minor
`define MA_otp__otptrack__otp_version_minor__a 'h81f6
`define MA_otp__otptrack__otp_version_minor__len 4
`define MA_otp__otptrack__otp_version_minor__mask 'h0f
`define MA_otp__otptrack__otp_version_minor__shift 0
`define MA_otp__otptrack__otp_version_minor__reset 'h0f

//------------------------------------------------------------------------------otp__otptrack__otp_version_major---
// OTP layout version, major
`define MA_otp__otptrack__otp_version_major__a 'h81f6
`define MA_otp__otptrack__otp_version_major__len 4
`define MA_otp__otptrack__otp_version_major__mask 'hf0
`define MA_otp__otptrack__otp_version_major__shift 4
`define MA_otp__otptrack__otp_version_major__reset 'h0f

//------------------------------------------------------------------------------otp__otptrack__wafer_x_pos---
// Wafer position, X
`define MA_otp__otptrack__wafer_x_pos__a 'h81f8
`define MA_otp__otptrack__wafer_x_pos__len 8
`define MA_otp__otptrack__wafer_x_pos__mask 'hff
`define MA_otp__otptrack__wafer_x_pos__shift 0
`define MA_otp__otptrack__wafer_x_pos__reset 'hff

//------------------------------------------------------------------------------otp__otptrack__wafer_y_pos---
// Wafer position, Y
`define MA_otp__otptrack__wafer_y_pos__a 'h81f9
`define MA_otp__otptrack__wafer_y_pos__len 8
`define MA_otp__otptrack__wafer_y_pos__mask 'hff
`define MA_otp__otptrack__wafer_y_pos__shift 0
`define MA_otp__otptrack__wafer_y_pos__reset 'hff

// End symbol def
`endif   //_ma120_rev2_v_
