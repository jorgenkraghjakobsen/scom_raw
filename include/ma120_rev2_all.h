/*---------------------------------------------------------------------------------------*/
/*   Merus Audio MA120   register map                                                    */
/*                                                                                       */
/*   Provides : Defines for registers and symbols in merus audio amplifiers              */
/*              Macros for set and get content of symbols                                */
/*              Read-modify-write on write to symbols less then 8 bits                   */
/*                                                                                       */
/*   Symbols is a collection of 1 to 8 bits within a single address                      */
/*                                                                                       */
/*   Provided as is for internal use only - do not copy - do not share                   */
/*                                                                                       */
/*   Timestamp                        :                         Fri Sep  4 13:23:47 2020 */
/*   Created from database            :                                       ma120_rev2 */
/*   Errors and updates please contact:       Jorgen Kragh Jakobsen, jkj@merus-audio.com */
/*---------------------------------------------------------------------------------------*/

#include <stdint.h>


#ifndef _MA120_H_
#define _MA120_H_


//------------------------------------------------------------------------------core__pa__PMP_select---
// Power Mode Profile selection
#define MA_core__pa__PMP_select__a 0x0000
#define MA_core__pa__PMP_select__len 3
#define MA_core__pa__PMP_select__mask 0x07
#define MA_core__pa__PMP_select__shift 0x00
#define MA_core__pa__PMP_select__reset 0x02
#define MA_core__pa__PMP_select__inputonly 0
//------------------------------------------------------------------------------core__pa__mode_pbtl---
// High to use PBTL mode
#define MA_core__pa__mode_pbtl__a 0x0000
#define MA_core__pa__mode_pbtl__len 1
#define MA_core__pa__mode_pbtl__mask 0x08
#define MA_core__pa__mode_pbtl__shift 0x03
#define MA_core__pa__mode_pbtl__reset 0x00
#define MA_core__pa__mode_pbtl__inputonly 0
//------------------------------------------------------------------------------core__pa__pvdd_scale---
// Pvdd level config. for DNR optimization.
#define MA_core__pa__pvdd_scale__a 0x0000
#define MA_core__pa__pvdd_scale__len 2
#define MA_core__pa__pvdd_scale__mask 0x30
#define MA_core__pa__pvdd_scale__shift 0x04
#define MA_core__pa__pvdd_scale__reset 0x03
#define MA_core__pa__pvdd_scale__inputonly 0
//------------------------------------------------------------------------------core__pa__TBD_reg_ctrl---
// High: override pin programmed settings with register stettings<br>
#define MA_core__pa__TBD_reg_ctrl__a 0x0000
#define MA_core__pa__TBD_reg_ctrl__len 1
#define MA_core__pa__TBD_reg_ctrl__mask 0x40
#define MA_core__pa__TBD_reg_ctrl__shift 0x06
#define MA_core__pa__TBD_reg_ctrl__reset 0x00
#define MA_core__pa__TBD_reg_ctrl__inputonly 0
//------------------------------------------------------------------------------core__pa__gd_dVdt---
// Gate driver dV/dt (strength) selection. "00" = lowest, "11" = highest<br>
#define MA_core__pa__gd_dVdt__a 0x0001
#define MA_core__pa__gd_dVdt__len 2
#define MA_core__pa__gd_dVdt__mask 0x03
#define MA_core__pa__gd_dVdt__shift 0x00
#define MA_core__pa__gd_dVdt__reset 0x03
#define MA_core__pa__gd_dVdt__inputonly 0
//------------------------------------------------------------------------------core__pa__mute_ch0---
// High to force channel 0 to mute
#define MA_core__pa__mute_ch0__a 0x0002
#define MA_core__pa__mute_ch0__len 1
#define MA_core__pa__mute_ch0__mask 0x01
#define MA_core__pa__mute_ch0__shift 0x00
#define MA_core__pa__mute_ch0__reset 0x00
#define MA_core__pa__mute_ch0__inputonly 0
//------------------------------------------------------------------------------core__pa__mute_ch1---
// High to force channel 1 to mute
#define MA_core__pa__mute_ch1__a 0x0002
#define MA_core__pa__mute_ch1__len 1
#define MA_core__pa__mute_ch1__mask 0x02
#define MA_core__pa__mute_ch1__shift 0x01
#define MA_core__pa__mute_ch1__reset 0x00
#define MA_core__pa__mute_ch1__inputonly 0
//------------------------------------------------------------------------------core__pa__disable_ch0---
// High to disable channel 0
#define MA_core__pa__disable_ch0__a 0x0002
#define MA_core__pa__disable_ch0__len 1
#define MA_core__pa__disable_ch0__mask 0x04
#define MA_core__pa__disable_ch0__shift 0x02
#define MA_core__pa__disable_ch0__reset 0x00
#define MA_core__pa__disable_ch0__inputonly 0
//------------------------------------------------------------------------------core__pa__disable_ch1---
// High to disable channel 1
#define MA_core__pa__disable_ch1__a 0x0002
#define MA_core__pa__disable_ch1__len 1
#define MA_core__pa__disable_ch1__mask 0x08
#define MA_core__pa__disable_ch1__shift 0x03
#define MA_core__pa__disable_ch1__reset 0x00
#define MA_core__pa__disable_ch1__inputonly 0
//------------------------------------------------------------------------------core__pa__standby---
// High to force chip standby.
#define MA_core__pa__standby__a 0x0002
#define MA_core__pa__standby__len 1
#define MA_core__pa__standby__mask 0x10
#define MA_core__pa__standby__shift 0x04
#define MA_core__pa__standby__reset 0x00
#define MA_core__pa__standby__inputonly 0
//------------------------------------------------------------------------------core__pa__dsp_enable---
// High to enable the digital audio processor
#define MA_core__pa__dsp_enable__a 0x0005
#define MA_core__pa__dsp_enable__len 1
#define MA_core__pa__dsp_enable__mask 0x02
#define MA_core__pa__dsp_enable__shift 0x01
#define MA_core__pa__dsp_enable__reset 0x00
#define MA_core__pa__dsp_enable__inputonly 0
//------------------------------------------------------------------------------core__pa__dsp_restart---
// High: the DSP is halted, Low: the DSP is running
#define MA_core__pa__dsp_restart__a 0x0005
#define MA_core__pa__dsp_restart__len 1
#define MA_core__pa__dsp_restart__mask 0x04
#define MA_core__pa__dsp_restart__shift 0x02
#define MA_core__pa__dsp_restart__reset 0x00
#define MA_core__pa__dsp_restart__inputonly 0
//------------------------------------------------------------------------------core__pa__volume_ch0---
// Channel 0 volume setting
#define MA_core__pa__volume_ch0__a 0x0003
#define MA_core__pa__volume_ch0__len 8
#define MA_core__pa__volume_ch0__mask 0xff
#define MA_core__pa__volume_ch0__shift 0x00
#define MA_core__pa__volume_ch0__reset 0x20
#define MA_core__pa__volume_ch0__inputonly 0
//------------------------------------------------------------------------------core__pa__volume_ch1---
// Channel 1 volume setting
#define MA_core__pa__volume_ch1__a 0x0004
#define MA_core__pa__volume_ch1__len 8
#define MA_core__pa__volume_ch1__mask 0xff
#define MA_core__pa__volume_ch1__shift 0x00
#define MA_core__pa__volume_ch1__reset 0x20
#define MA_core__pa__volume_ch1__inputonly 0
//------------------------------------------------------------------------------core__pa__dsp_bypass---
// High to take audio directly from i2s/tdm input
#define MA_core__pa__dsp_bypass__a 0x0005
#define MA_core__pa__dsp_bypass__len 1
#define MA_core__pa__dsp_bypass__mask 0x08
#define MA_core__pa__dsp_bypass__shift 0x03
#define MA_core__pa__dsp_bypass__reset 0x00
#define MA_core__pa__dsp_bypass__inputonly 0
//------------------------------------------------------------------------------core__pa__vol_instant---
// High: Apply volume settings instantly - without ramp
#define MA_core__pa__vol_instant__a 0x0005
#define MA_core__pa__vol_instant__len 1
#define MA_core__pa__vol_instant__mask 0x01
#define MA_core__pa__vol_instant__shift 0x00
#define MA_core__pa__vol_instant__reset 0x00
#define MA_core__pa__vol_instant__inputonly 0
//------------------------------------------------------------------------------core__pa__clip_pin---
// State of the "clip" signal driving the nClip pin -- "1" means "clip"<br>
#define MA_core__pa__clip_pin__a 0x0006
#define MA_core__pa__clip_pin__len 1
#define MA_core__pa__clip_pin__mask 0x01
#define MA_core__pa__clip_pin__shift 0x00
#define MA_core__pa__clip_pin__reset 0x00
#define MA_core__pa__clip_pin__inputonly 1
//------------------------------------------------------------------------------core__pa__err_pin---
// Status of the "err" signal driving the nErr pin -- "1" means "error"<br>
#define MA_core__pa__err_pin__a 0x0006
#define MA_core__pa__err_pin__len 1
#define MA_core__pa__err_pin__mask 0x02
#define MA_core__pa__err_pin__shift 0x01
#define MA_core__pa__err_pin__reset 0x00
#define MA_core__pa__err_pin__inputonly 1
//------------------------------------------------------------------------------core__pa__temp_chip---
// Current chip temperature reading
#define MA_core__pa__temp_chip__a 0x0008
#define MA_core__pa__temp_chip__len 8
#define MA_core__pa__temp_chip__mask 0xff
#define MA_core__pa__temp_chip__shift 0x00
#define MA_core__pa__temp_chip__reset 0x00
#define MA_core__pa__temp_chip__inputonly 1
//------------------------------------------------------------------------------core__pa__pvdd_chip---
// Current chip Pvdd reading
#define MA_core__pa__pvdd_chip__a 0x0009
#define MA_core__pa__pvdd_chip__len 8
#define MA_core__pa__pvdd_chip__mask 0xff
#define MA_core__pa__pvdd_chip__shift 0x00
#define MA_core__pa__pvdd_chip__reset 0x00
#define MA_core__pa__pvdd_chip__inputonly 1
//------------------------------------------------------------------------------core__pa__attack_ch1---
// Channel 1 attack time for limiter
#define MA_core__pa__attack_ch1__a 0x000b
#define MA_core__pa__attack_ch1__len 5
#define MA_core__pa__attack_ch1__mask 0x1f
#define MA_core__pa__attack_ch1__shift 0x00
#define MA_core__pa__attack_ch1__reset 0x00
#define MA_core__pa__attack_ch1__inputonly 0
//------------------------------------------------------------------------------core__pa__attack_ch0---
// Channel 0 attack time for limiter
#define MA_core__pa__attack_ch0__a 0x000a
#define MA_core__pa__attack_ch0__len 5
#define MA_core__pa__attack_ch0__mask 0x1f
#define MA_core__pa__attack_ch0__shift 0x00
#define MA_core__pa__attack_ch0__reset 0x00
#define MA_core__pa__attack_ch0__inputonly 0
//------------------------------------------------------------------------------core__pa__release_ch0---
// Channel 0 release time for limiter
#define MA_core__pa__release_ch0__a 0x000c
#define MA_core__pa__release_ch0__len 5
#define MA_core__pa__release_ch0__mask 0x1f
#define MA_core__pa__release_ch0__shift 0x00
#define MA_core__pa__release_ch0__reset 0x12
#define MA_core__pa__release_ch0__inputonly 0
//------------------------------------------------------------------------------core__pa__release_ch1---
// Channel 1 release time for limiter
#define MA_core__pa__release_ch1__a 0x000d
#define MA_core__pa__release_ch1__len 5
#define MA_core__pa__release_ch1__mask 0x1f
#define MA_core__pa__release_ch1__shift 0x00
#define MA_core__pa__release_ch1__reset 0x12
#define MA_core__pa__release_ch1__inputonly 0
//------------------------------------------------------------------------------core__pa__threshold_ch0---
// Channel 0 limiter threshold
#define MA_core__pa__threshold_ch0__a 0x000e
#define MA_core__pa__threshold_ch0__len 8
#define MA_core__pa__threshold_ch0__mask 0xff
#define MA_core__pa__threshold_ch0__shift 0x00
#define MA_core__pa__threshold_ch0__reset 0x00
#define MA_core__pa__threshold_ch0__inputonly 0
//------------------------------------------------------------------------------core__pa__threshold_ch1---
// Channel 1 limiter threshold
#define MA_core__pa__threshold_ch1__a 0x000f
#define MA_core__pa__threshold_ch1__len 8
#define MA_core__pa__threshold_ch1__mask 0xff
#define MA_core__pa__threshold_ch1__shift 0x00
#define MA_core__pa__threshold_ch1__reset 0x00
#define MA_core__pa__threshold_ch1__inputonly 0
//------------------------------------------------------------------------------core__pa__gpio_sync_zclip---
// High to use the GPIO pin for inter IC synchronization. Low to use the GPIO pin to indicate amplifier clipping
#define MA_core__pa__gpio_sync_zclip__a 0x0005
#define MA_core__pa__gpio_sync_zclip__len 1
#define MA_core__pa__gpio_sync_zclip__mask 0x10
#define MA_core__pa__gpio_sync_zclip__shift 0x04
#define MA_core__pa__gpio_sync_zclip__reset 0x00
#define MA_core__pa__gpio_sync_zclip__inputonly 0
//------------------------------------------------------------------------------core__pa__mute_source---
// Select source for the internal mute signal; 0: nmute pin, 1: mute0/1 register settings
#define MA_core__pa__mute_source__a 0x0002
#define MA_core__pa__mute_source__len 1
#define MA_core__pa__mute_source__mask 0x20
#define MA_core__pa__mute_source__shift 0x05
#define MA_core__pa__mute_source__reset 0x00
#define MA_core__pa__mute_source__inputonly 0
//------------------------------------------------------------------------------core__pa__adc_pin---
// Value representing the level on the ADC input pin
#define MA_core__pa__adc_pin__a 0x0007
#define MA_core__pa__adc_pin__len 8
#define MA_core__pa__adc_pin__mask 0xff
#define MA_core__pa__adc_pin__shift 0x00
#define MA_core__pa__adc_pin__reset 0x00
#define MA_core__pa__adc_pin__inputonly 1
//------------------------------------------------------------------------------core__pa__dsp_flags---
// Flags set by the DSP
#define MA_core__pa__dsp_flags__a 0x0006
#define MA_core__pa__dsp_flags__len 6
#define MA_core__pa__dsp_flags__mask 0xfc
#define MA_core__pa__dsp_flags__shift 0x02
#define MA_core__pa__dsp_flags__reset 0x00
#define MA_core__pa__dsp_flags__inputonly 1
//------------------------------------------------------------------------------core__i2s_tdm__data_alignment---
// 00: I2S, 01: Left Justified, 10: Right Justified
#define MA_core__i2s_tdm__data_alignment__a 0x0010
#define MA_core__i2s_tdm__data_alignment__len 2
#define MA_core__i2s_tdm__data_alignment__mask 0x03
#define MA_core__i2s_tdm__data_alignment__shift 0x00
#define MA_core__i2s_tdm__data_alignment__reset 0x00
#define MA_core__i2s_tdm__data_alignment__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__sck_pol---
// 0: Data changes on rising edge of SCK, 1: Data changes on falling edge of SCK
#define MA_core__i2s_tdm__sck_pol__a 0x0010
#define MA_core__i2s_tdm__sck_pol__len 1
#define MA_core__i2s_tdm__sck_pol__mask 0x10
#define MA_core__i2s_tdm__sck_pol__shift 0x04
#define MA_core__i2s_tdm__sck_pol__reset 0x01
#define MA_core__i2s_tdm__sck_pol__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__slot_size---
// Channel slot size: 00: 32bit, 01: 24bit, 10: 16bit
#define MA_core__i2s_tdm__slot_size__a 0x0010
#define MA_core__i2s_tdm__slot_size__len 2
#define MA_core__i2s_tdm__slot_size__mask 0x60
#define MA_core__i2s_tdm__slot_size__shift 0x05
#define MA_core__i2s_tdm__slot_size__reset 0x00
#define MA_core__i2s_tdm__slot_size__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__ws_fs_rising---
// 0: Frame starts at falling FS, 1: Frame starts at rising FS
#define MA_core__i2s_tdm__ws_fs_rising__a 0x0010
#define MA_core__i2s_tdm__ws_fs_rising__len 1
#define MA_core__i2s_tdm__ws_fs_rising__mask 0x80
#define MA_core__i2s_tdm__ws_fs_rising__shift 0x07
#define MA_core__i2s_tdm__ws_fs_rising__reset 0x00
#define MA_core__i2s_tdm__ws_fs_rising__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__lsb_first---
// 0: The msb is transmitted first, 1: The lsb is transmitted first
#define MA_core__i2s_tdm__lsb_first__a 0x0011
#define MA_core__i2s_tdm__lsb_first__len 1
#define MA_core__i2s_tdm__lsb_first__mask 0x01
#define MA_core__i2s_tdm__lsb_first__shift 0x00
#define MA_core__i2s_tdm__lsb_first__reset 0x00
#define MA_core__i2s_tdm__lsb_first__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_input_map0---
// Recieved slot number for Ch0 input [0 to 31]
#define MA_core__i2s_tdm__tdm_input_map0__a 0x0012
#define MA_core__i2s_tdm__tdm_input_map0__len 5
#define MA_core__i2s_tdm__tdm_input_map0__mask 0x1f
#define MA_core__i2s_tdm__tdm_input_map0__shift 0x00
#define MA_core__i2s_tdm__tdm_input_map0__reset 0x00
#define MA_core__i2s_tdm__tdm_input_map0__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_input_map1---
// Recieved slot number for Ch1 input [0 to 31]
#define MA_core__i2s_tdm__tdm_input_map1__a 0x0013
#define MA_core__i2s_tdm__tdm_input_map1__len 5
#define MA_core__i2s_tdm__tdm_input_map1__mask 0x1f
#define MA_core__i2s_tdm__tdm_input_map1__shift 0x00
#define MA_core__i2s_tdm__tdm_input_map1__reset 0x01
#define MA_core__i2s_tdm__tdm_input_map1__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_input_map2---
// Reserved
#define MA_core__i2s_tdm__tdm_input_map2__a 0x0014
#define MA_core__i2s_tdm__tdm_input_map2__len 5
#define MA_core__i2s_tdm__tdm_input_map2__mask 0x1f
#define MA_core__i2s_tdm__tdm_input_map2__shift 0x00
#define MA_core__i2s_tdm__tdm_input_map2__reset 0x00
#define MA_core__i2s_tdm__tdm_input_map2__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_input_map3---
// Reserved
#define MA_core__i2s_tdm__tdm_input_map3__a 0x0015
#define MA_core__i2s_tdm__tdm_input_map3__len 5
#define MA_core__i2s_tdm__tdm_input_map3__mask 0x1f
#define MA_core__i2s_tdm__tdm_input_map3__shift 0x00
#define MA_core__i2s_tdm__tdm_input_map3__reset 0x00
#define MA_core__i2s_tdm__tdm_input_map3__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map0---
// Signal transmitted in slot0. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map0__a 0x0016
#define MA_core__i2s_tdm__tdm_output_map0__len 3
#define MA_core__i2s_tdm__tdm_output_map0__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map0__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map0__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map0__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map1---
// Signal transmitted in slot1. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map1__a 0x0016
#define MA_core__i2s_tdm__tdm_output_map1__len 3
#define MA_core__i2s_tdm__tdm_output_map1__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map1__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map1__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map1__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map2---
// Signal transmitted in slot2. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map2__a 0x0017
#define MA_core__i2s_tdm__tdm_output_map2__len 3
#define MA_core__i2s_tdm__tdm_output_map2__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map2__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map2__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map2__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map3---
// Signal transmitted in slot3. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map3__a 0x0017
#define MA_core__i2s_tdm__tdm_output_map3__len 3
#define MA_core__i2s_tdm__tdm_output_map3__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map3__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map3__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map3__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map4---
// Signal transmitted in slot4. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map4__a 0x0018
#define MA_core__i2s_tdm__tdm_output_map4__len 3
#define MA_core__i2s_tdm__tdm_output_map4__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map4__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map4__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map4__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map5---
// Signal transmitted in slot5. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map5__a 0x0018
#define MA_core__i2s_tdm__tdm_output_map5__len 3
#define MA_core__i2s_tdm__tdm_output_map5__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map5__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map5__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map5__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map6---
// Signal transmitted in slot6. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map6__a 0x0019
#define MA_core__i2s_tdm__tdm_output_map6__len 3
#define MA_core__i2s_tdm__tdm_output_map6__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map6__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map6__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map6__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map7---
// Signal transmitted in slot7. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map7__a 0x0019
#define MA_core__i2s_tdm__tdm_output_map7__len 3
#define MA_core__i2s_tdm__tdm_output_map7__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map7__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map7__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map7__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map8---
// Signal transmitted in slot8. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map8__a 0x001a
#define MA_core__i2s_tdm__tdm_output_map8__len 3
#define MA_core__i2s_tdm__tdm_output_map8__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map8__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map8__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map8__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map9---
// Signal transmitted in slot9. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map9__a 0x001a
#define MA_core__i2s_tdm__tdm_output_map9__len 3
#define MA_core__i2s_tdm__tdm_output_map9__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map9__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map9__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map9__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map10---
// Signal transmitted in slot10. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map10__a 0x001b
#define MA_core__i2s_tdm__tdm_output_map10__len 3
#define MA_core__i2s_tdm__tdm_output_map10__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map10__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map10__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map10__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map11---
// Signal transmitted in slot11. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map11__a 0x001b
#define MA_core__i2s_tdm__tdm_output_map11__len 3
#define MA_core__i2s_tdm__tdm_output_map11__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map11__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map11__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map11__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map12---
// Signal transmitted in slot12. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map12__a 0x001c
#define MA_core__i2s_tdm__tdm_output_map12__len 3
#define MA_core__i2s_tdm__tdm_output_map12__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map12__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map12__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map12__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map13---
// Signal transmitted in slot13. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map13__a 0x001c
#define MA_core__i2s_tdm__tdm_output_map13__len 3
#define MA_core__i2s_tdm__tdm_output_map13__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map13__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map13__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map13__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map14---
// Signal transmitted in slot14. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map14__a 0x001d
#define MA_core__i2s_tdm__tdm_output_map14__len 3
#define MA_core__i2s_tdm__tdm_output_map14__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map14__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map14__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map14__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map15---
// Signal transmitted in slot15. 000: Zero, 001: High-Z, 010: DSP Output Ch0, 011: DSP Output Ch1, 1XX: Reserved
#define MA_core__i2s_tdm__tdm_output_map15__a 0x001d
#define MA_core__i2s_tdm__tdm_output_map15__len 3
#define MA_core__i2s_tdm__tdm_output_map15__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map15__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map15__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map15__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map16---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map16__a 0x001e
#define MA_core__i2s_tdm__tdm_output_map16__len 3
#define MA_core__i2s_tdm__tdm_output_map16__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map16__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map16__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map16__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map17---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map17__a 0x001e
#define MA_core__i2s_tdm__tdm_output_map17__len 3
#define MA_core__i2s_tdm__tdm_output_map17__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map17__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map17__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map17__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map18---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map18__a 0x001f
#define MA_core__i2s_tdm__tdm_output_map18__len 3
#define MA_core__i2s_tdm__tdm_output_map18__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map18__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map18__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map18__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map19---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map19__a 0x001f
#define MA_core__i2s_tdm__tdm_output_map19__len 3
#define MA_core__i2s_tdm__tdm_output_map19__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map19__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map19__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map19__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map20---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map20__a 0x0020
#define MA_core__i2s_tdm__tdm_output_map20__len 3
#define MA_core__i2s_tdm__tdm_output_map20__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map20__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map20__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map20__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map21---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map21__a 0x0020
#define MA_core__i2s_tdm__tdm_output_map21__len 3
#define MA_core__i2s_tdm__tdm_output_map21__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map21__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map21__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map21__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map22---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map22__a 0x0021
#define MA_core__i2s_tdm__tdm_output_map22__len 3
#define MA_core__i2s_tdm__tdm_output_map22__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map22__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map22__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map22__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map23---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map23__a 0x0021
#define MA_core__i2s_tdm__tdm_output_map23__len 3
#define MA_core__i2s_tdm__tdm_output_map23__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map23__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map23__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map23__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map24---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map24__a 0x0022
#define MA_core__i2s_tdm__tdm_output_map24__len 3
#define MA_core__i2s_tdm__tdm_output_map24__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map24__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map24__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map24__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map25---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map25__a 0x0022
#define MA_core__i2s_tdm__tdm_output_map25__len 3
#define MA_core__i2s_tdm__tdm_output_map25__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map25__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map25__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map25__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map26---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map26__a 0x0023
#define MA_core__i2s_tdm__tdm_output_map26__len 3
#define MA_core__i2s_tdm__tdm_output_map26__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map26__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map26__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map26__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map27---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map27__a 0x0023
#define MA_core__i2s_tdm__tdm_output_map27__len 3
#define MA_core__i2s_tdm__tdm_output_map27__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map27__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map27__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map27__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map28---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map28__a 0x0024
#define MA_core__i2s_tdm__tdm_output_map28__len 3
#define MA_core__i2s_tdm__tdm_output_map28__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map28__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map28__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map28__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map29---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map29__a 0x0024
#define MA_core__i2s_tdm__tdm_output_map29__len 3
#define MA_core__i2s_tdm__tdm_output_map29__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map29__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map29__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map29__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map30---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map30__a 0x0025
#define MA_core__i2s_tdm__tdm_output_map30__len 3
#define MA_core__i2s_tdm__tdm_output_map30__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map30__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map30__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map30__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map31---
// Reserved
#define MA_core__i2s_tdm__tdm_output_map31__a 0x0025
#define MA_core__i2s_tdm__tdm_output_map31__len 3
#define MA_core__i2s_tdm__tdm_output_map31__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map31__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map31__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map31__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tx_loopback---
// 1: Transmitted audio data is a loop-back of the received audio data
#define MA_core__i2s_tdm__tx_loopback__a 0x0026
#define MA_core__i2s_tdm__tx_loopback__len 1
#define MA_core__i2s_tdm__tx_loopback__mask 0x01
#define MA_core__i2s_tdm__tx_loopback__shift 0x00
#define MA_core__i2s_tdm__tx_loopback__reset 0x00
#define MA_core__i2s_tdm__tx_loopback__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tx_enable---
// 1: Enable the I2S/TDM data transmitter
#define MA_core__i2s_tdm__tx_enable__a 0x0026
#define MA_core__i2s_tdm__tx_enable__len 1
#define MA_core__i2s_tdm__tx_enable__mask 0x04
#define MA_core__i2s_tdm__tx_enable__shift 0x02
#define MA_core__i2s_tdm__tx_enable__reset 0x00
#define MA_core__i2s_tdm__tx_enable__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__rx_enable---
// 1: Enable the I2S/TDM receiver. (Must be enabled to play audio)
#define MA_core__i2s_tdm__rx_enable__a 0x0026
#define MA_core__i2s_tdm__rx_enable__len 1
#define MA_core__i2s_tdm__rx_enable__mask 0x02
#define MA_core__i2s_tdm__rx_enable__shift 0x01
#define MA_core__i2s_tdm__rx_enable__reset 0x01
#define MA_core__i2s_tdm__rx_enable__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__tx_strong_drive---
// 1: Enable extra drive strength on I2S/TDM transmitter data output pin
#define MA_core__i2s_tdm__tx_strong_drive__a 0x0026
#define MA_core__i2s_tdm__tx_strong_drive__len 1
#define MA_core__i2s_tdm__tx_strong_drive__mask 0x08
#define MA_core__i2s_tdm__tx_strong_drive__shift 0x03
#define MA_core__i2s_tdm__tx_strong_drive__reset 0x01
#define MA_core__i2s_tdm__tx_strong_drive__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__sync_in_enable---
// 1: Enable the amplifier PWM to synchronize to the synchronization pulse on the GPIO pin
#define MA_core__i2s_tdm__sync_in_enable__a 0x0027
#define MA_core__i2s_tdm__sync_in_enable__len 1
#define MA_core__i2s_tdm__sync_in_enable__mask 0x01
#define MA_core__i2s_tdm__sync_in_enable__shift 0x00
#define MA_core__i2s_tdm__sync_in_enable__reset 0x00
#define MA_core__i2s_tdm__sync_in_enable__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__sync_out_enable---
// 1: Enable the internal amplifier PWM synchronization signal to drive the GPIO pin (open-drain)
#define MA_core__i2s_tdm__sync_out_enable__a 0x0027
#define MA_core__i2s_tdm__sync_out_enable__len 1
#define MA_core__i2s_tdm__sync_out_enable__mask 0x02
#define MA_core__i2s_tdm__sync_out_enable__shift 0x01
#define MA_core__i2s_tdm__sync_out_enable__reset 0x00
#define MA_core__i2s_tdm__sync_out_enable__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__fast_sync---
// Select frequency of the synchronization signal on the GPIO pin; 0: fs/12288, 1: fs/12
#define MA_core__i2s_tdm__fast_sync__a 0x0027
#define MA_core__i2s_tdm__fast_sync__len 1
#define MA_core__i2s_tdm__fast_sync__mask 0x04
#define MA_core__i2s_tdm__fast_sync__shift 0x02
#define MA_core__i2s_tdm__fast_sync__reset 0x01
#define MA_core__i2s_tdm__fast_sync__inputonly 0
//------------------------------------------------------------------------------core__i2s_tdm__data_size---
// 00: 24bit, 01: 20bit, 10: 18bit, 11: 16bit
#define MA_core__i2s_tdm__data_size__a 0x0010
#define MA_core__i2s_tdm__data_size__len 2
#define MA_core__i2s_tdm__data_size__mask 0x0c
#define MA_core__i2s_tdm__data_size__shift 0x02
#define MA_core__i2s_tdm__data_size__reset 0x00
#define MA_core__i2s_tdm__data_size__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__0__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__0__pwmFreqMode__a 0x0030
#define MA_core__pmc__pm_cfg__0__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__0__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__0__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__0__pwmFreqMode__reset 0x03
#define MA_core__pmc__pm_cfg__0__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__0__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__0__gdsFreqMode__a 0x0030
#define MA_core__pmc__pm_cfg__0__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__0__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__0__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__0__gdsFreqMode__reset 0x03
#define MA_core__pmc__pm_cfg__0__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__0__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__0__modType__a 0x0030
#define MA_core__pmc__pm_cfg__0__modType__len 2
#define MA_core__pmc__pm_cfg__0__modType__mask 0x30
#define MA_core__pmc__pm_cfg__0__modType__shift 0x04
#define MA_core__pmc__pm_cfg__0__modType__reset 0x03
#define MA_core__pmc__pm_cfg__0__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__0__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__0__lf_bw_scale__a 0x0030
#define MA_core__pmc__pm_cfg__0__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__0__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__0__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__0__lf_bw_scale__reset 0x00
#define MA_core__pmc__pm_cfg__0__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__0__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__0__pbtl_half__a 0x0031
#define MA_core__pmc__pm_cfg__0__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__0__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__0__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__0__pbtl_half__reset 0x01
#define MA_core__pmc__pm_cfg__0__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__0__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__0__gd_hvpu_low__a 0x0031
#define MA_core__pmc__pm_cfg__0__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__0__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__0__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__0__gd_hvpu_low__reset 0x01
#define MA_core__pmc__pm_cfg__0__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__0__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__0__dtsteps_nom__a 0x0031
#define MA_core__pmc__pm_cfg__0__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__0__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__0__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__0__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__0__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__0__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__0__bal_bw__a 0x0031
#define MA_core__pmc__pm_cfg__0__bal_bw__len 2
#define MA_core__pmc__pm_cfg__0__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__0__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__0__bal_bw__reset 0x01
#define MA_core__pmc__pm_cfg__0__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__1__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__1__pwmFreqMode__a 0x0033
#define MA_core__pmc__pm_cfg__1__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__1__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__1__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__1__pwmFreqMode__reset 0x03
#define MA_core__pmc__pm_cfg__1__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__1__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__1__gdsFreqMode__a 0x0033
#define MA_core__pmc__pm_cfg__1__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__1__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__1__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__1__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__1__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__1__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__1__modType__a 0x0033
#define MA_core__pmc__pm_cfg__1__modType__len 2
#define MA_core__pmc__pm_cfg__1__modType__mask 0x30
#define MA_core__pmc__pm_cfg__1__modType__shift 0x04
#define MA_core__pmc__pm_cfg__1__modType__reset 0x03
#define MA_core__pmc__pm_cfg__1__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__1__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__1__lf_bw_scale__a 0x0033
#define MA_core__pmc__pm_cfg__1__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__1__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__1__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__1__lf_bw_scale__reset 0x00
#define MA_core__pmc__pm_cfg__1__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__1__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__1__pbtl_half__a 0x0034
#define MA_core__pmc__pm_cfg__1__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__1__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__1__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__1__pbtl_half__reset 0x00
#define MA_core__pmc__pm_cfg__1__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__1__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__1__gd_hvpu_low__a 0x0034
#define MA_core__pmc__pm_cfg__1__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__1__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__1__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__1__gd_hvpu_low__reset 0x00
#define MA_core__pmc__pm_cfg__1__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__1__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__1__dtsteps_nom__a 0x0034
#define MA_core__pmc__pm_cfg__1__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__1__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__1__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__1__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__1__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__1__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__1__bal_bw__a 0x0034
#define MA_core__pmc__pm_cfg__1__bal_bw__len 2
#define MA_core__pmc__pm_cfg__1__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__1__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__1__bal_bw__reset 0x02
#define MA_core__pmc__pm_cfg__1__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__2__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__2__pwmFreqMode__a 0x0036
#define MA_core__pmc__pm_cfg__2__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__2__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__2__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__2__pwmFreqMode__reset 0x03
#define MA_core__pmc__pm_cfg__2__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__2__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__2__gdsFreqMode__a 0x0036
#define MA_core__pmc__pm_cfg__2__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__2__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__2__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__2__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__2__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__2__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__2__modType__a 0x0036
#define MA_core__pmc__pm_cfg__2__modType__len 2
#define MA_core__pmc__pm_cfg__2__modType__mask 0x30
#define MA_core__pmc__pm_cfg__2__modType__shift 0x04
#define MA_core__pmc__pm_cfg__2__modType__reset 0x03
#define MA_core__pmc__pm_cfg__2__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__2__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__2__lf_bw_scale__a 0x0036
#define MA_core__pmc__pm_cfg__2__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__2__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__2__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__2__lf_bw_scale__reset 0x00
#define MA_core__pmc__pm_cfg__2__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__2__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__2__pbtl_half__a 0x0037
#define MA_core__pmc__pm_cfg__2__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__2__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__2__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__2__pbtl_half__reset 0x00
#define MA_core__pmc__pm_cfg__2__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__2__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__2__gd_hvpu_low__a 0x0037
#define MA_core__pmc__pm_cfg__2__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__2__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__2__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__2__gd_hvpu_low__reset 0x00
#define MA_core__pmc__pm_cfg__2__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__2__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__2__dtsteps_nom__a 0x0037
#define MA_core__pmc__pm_cfg__2__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__2__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__2__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__2__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__2__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__2__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__2__bal_bw__a 0x0037
#define MA_core__pmc__pm_cfg__2__bal_bw__len 2
#define MA_core__pmc__pm_cfg__2__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__2__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__2__bal_bw__reset 0x03
#define MA_core__pmc__pm_cfg__2__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__3__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__3__pwmFreqMode__a 0x0039
#define MA_core__pmc__pm_cfg__3__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__3__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__3__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__3__pwmFreqMode__reset 0x02
#define MA_core__pmc__pm_cfg__3__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__3__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__3__gdsFreqMode__a 0x0039
#define MA_core__pmc__pm_cfg__3__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__3__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__3__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__3__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__3__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__3__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__3__modType__a 0x0039
#define MA_core__pmc__pm_cfg__3__modType__len 2
#define MA_core__pmc__pm_cfg__3__modType__mask 0x30
#define MA_core__pmc__pm_cfg__3__modType__shift 0x04
#define MA_core__pmc__pm_cfg__3__modType__reset 0x02
#define MA_core__pmc__pm_cfg__3__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__3__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__3__lf_bw_scale__a 0x0039
#define MA_core__pmc__pm_cfg__3__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__3__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__3__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__3__lf_bw_scale__reset 0x00
#define MA_core__pmc__pm_cfg__3__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__3__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__3__pbtl_half__a 0x003a
#define MA_core__pmc__pm_cfg__3__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__3__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__3__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__3__pbtl_half__reset 0x00
#define MA_core__pmc__pm_cfg__3__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__3__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__3__gd_hvpu_low__a 0x003a
#define MA_core__pmc__pm_cfg__3__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__3__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__3__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__3__gd_hvpu_low__reset 0x00
#define MA_core__pmc__pm_cfg__3__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__3__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__3__dtsteps_nom__a 0x003a
#define MA_core__pmc__pm_cfg__3__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__3__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__3__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__3__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__3__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__3__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__3__bal_bw__a 0x003a
#define MA_core__pmc__pm_cfg__3__bal_bw__len 2
#define MA_core__pmc__pm_cfg__3__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__3__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__3__bal_bw__reset 0x03
#define MA_core__pmc__pm_cfg__3__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__4__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__4__pwmFreqMode__a 0x003c
#define MA_core__pmc__pm_cfg__4__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__4__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__4__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__4__pwmFreqMode__reset 0x02
#define MA_core__pmc__pm_cfg__4__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__4__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__4__gdsFreqMode__a 0x003c
#define MA_core__pmc__pm_cfg__4__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__4__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__4__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__4__gdsFreqMode__reset 0x03
#define MA_core__pmc__pm_cfg__4__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__4__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__4__modType__a 0x003c
#define MA_core__pmc__pm_cfg__4__modType__len 2
#define MA_core__pmc__pm_cfg__4__modType__mask 0x30
#define MA_core__pmc__pm_cfg__4__modType__shift 0x04
#define MA_core__pmc__pm_cfg__4__modType__reset 0x03
#define MA_core__pmc__pm_cfg__4__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__4__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__4__lf_bw_scale__a 0x003c
#define MA_core__pmc__pm_cfg__4__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__4__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__4__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__4__lf_bw_scale__reset 0x01
#define MA_core__pmc__pm_cfg__4__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__4__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__4__pbtl_half__a 0x003d
#define MA_core__pmc__pm_cfg__4__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__4__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__4__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__4__pbtl_half__reset 0x01
#define MA_core__pmc__pm_cfg__4__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__4__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__4__gd_hvpu_low__a 0x003d
#define MA_core__pmc__pm_cfg__4__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__4__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__4__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__4__gd_hvpu_low__reset 0x01
#define MA_core__pmc__pm_cfg__4__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__4__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__4__dtsteps_nom__a 0x003d
#define MA_core__pmc__pm_cfg__4__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__4__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__4__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__4__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__4__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__4__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__4__bal_bw__a 0x003d
#define MA_core__pmc__pm_cfg__4__bal_bw__len 2
#define MA_core__pmc__pm_cfg__4__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__4__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__4__bal_bw__reset 0x01
#define MA_core__pmc__pm_cfg__4__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__5__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__5__pwmFreqMode__a 0x003f
#define MA_core__pmc__pm_cfg__5__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__5__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__5__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__5__pwmFreqMode__reset 0x02
#define MA_core__pmc__pm_cfg__5__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__5__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__5__gdsFreqMode__a 0x003f
#define MA_core__pmc__pm_cfg__5__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__5__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__5__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__5__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__5__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__5__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__5__modType__a 0x003f
#define MA_core__pmc__pm_cfg__5__modType__len 2
#define MA_core__pmc__pm_cfg__5__modType__mask 0x30
#define MA_core__pmc__pm_cfg__5__modType__shift 0x04
#define MA_core__pmc__pm_cfg__5__modType__reset 0x03
#define MA_core__pmc__pm_cfg__5__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__5__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__5__lf_bw_scale__a 0x003f
#define MA_core__pmc__pm_cfg__5__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__5__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__5__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__5__lf_bw_scale__reset 0x01
#define MA_core__pmc__pm_cfg__5__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__5__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__5__pbtl_half__a 0x0040
#define MA_core__pmc__pm_cfg__5__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__5__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__5__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__5__pbtl_half__reset 0x00
#define MA_core__pmc__pm_cfg__5__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__5__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__5__gd_hvpu_low__a 0x0040
#define MA_core__pmc__pm_cfg__5__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__5__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__5__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__5__gd_hvpu_low__reset 0x00
#define MA_core__pmc__pm_cfg__5__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__5__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__5__dtsteps_nom__a 0x0040
#define MA_core__pmc__pm_cfg__5__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__5__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__5__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__5__dtsteps_nom__reset 0x06
#define MA_core__pmc__pm_cfg__5__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__5__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__5__bal_bw__a 0x0040
#define MA_core__pmc__pm_cfg__5__bal_bw__len 2
#define MA_core__pmc__pm_cfg__5__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__5__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__5__bal_bw__reset 0x02
#define MA_core__pmc__pm_cfg__5__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__6__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__6__pwmFreqMode__a 0x0042
#define MA_core__pmc__pm_cfg__6__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__6__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__6__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__6__pwmFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__6__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__6__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__6__gdsFreqMode__a 0x0042
#define MA_core__pmc__pm_cfg__6__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__6__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__6__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__6__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__6__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__6__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__6__modType__a 0x0042
#define MA_core__pmc__pm_cfg__6__modType__len 2
#define MA_core__pmc__pm_cfg__6__modType__mask 0x30
#define MA_core__pmc__pm_cfg__6__modType__shift 0x04
#define MA_core__pmc__pm_cfg__6__modType__reset 0x03
#define MA_core__pmc__pm_cfg__6__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__6__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__6__lf_bw_scale__a 0x0042
#define MA_core__pmc__pm_cfg__6__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__6__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__6__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__6__lf_bw_scale__reset 0x01
#define MA_core__pmc__pm_cfg__6__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__6__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__6__pbtl_half__a 0x0043
#define MA_core__pmc__pm_cfg__6__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__6__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__6__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__6__pbtl_half__reset 0x00
#define MA_core__pmc__pm_cfg__6__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__6__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__6__gd_hvpu_low__a 0x0043
#define MA_core__pmc__pm_cfg__6__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__6__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__6__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__6__gd_hvpu_low__reset 0x00
#define MA_core__pmc__pm_cfg__6__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__6__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__6__dtsteps_nom__a 0x0043
#define MA_core__pmc__pm_cfg__6__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__6__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__6__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__6__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__6__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__6__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__6__bal_bw__a 0x0043
#define MA_core__pmc__pm_cfg__6__bal_bw__len 2
#define MA_core__pmc__pm_cfg__6__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__6__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__6__bal_bw__reset 0x03
#define MA_core__pmc__pm_cfg__6__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__7__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__7__pwmFreqMode__a 0x0045
#define MA_core__pmc__pm_cfg__7__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__7__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__7__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__7__pwmFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__7__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__7__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__7__gdsFreqMode__a 0x0045
#define MA_core__pmc__pm_cfg__7__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__7__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__7__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__7__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__7__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__7__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__7__modType__a 0x0045
#define MA_core__pmc__pm_cfg__7__modType__len 2
#define MA_core__pmc__pm_cfg__7__modType__mask 0x30
#define MA_core__pmc__pm_cfg__7__modType__shift 0x04
#define MA_core__pmc__pm_cfg__7__modType__reset 0x02
#define MA_core__pmc__pm_cfg__7__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__7__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__7__lf_bw_scale__a 0x0045
#define MA_core__pmc__pm_cfg__7__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__7__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__7__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__7__lf_bw_scale__reset 0x01
#define MA_core__pmc__pm_cfg__7__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__7__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__7__pbtl_half__a 0x0046
#define MA_core__pmc__pm_cfg__7__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__7__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__7__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__7__pbtl_half__reset 0x00
#define MA_core__pmc__pm_cfg__7__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__7__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__7__gd_hvpu_low__a 0x0046
#define MA_core__pmc__pm_cfg__7__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__7__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__7__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__7__gd_hvpu_low__reset 0x00
#define MA_core__pmc__pm_cfg__7__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__7__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__7__dtsteps_nom__a 0x0046
#define MA_core__pmc__pm_cfg__7__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__7__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__7__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__7__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__7__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__7__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__7__bal_bw__a 0x0046
#define MA_core__pmc__pm_cfg__7__bal_bw__len 2
#define MA_core__pmc__pm_cfg__7__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__7__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__7__bal_bw__reset 0x03
#define MA_core__pmc__pm_cfg__7__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__8__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__8__pwmFreqMode__a 0x0048
#define MA_core__pmc__pm_cfg__8__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__8__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__8__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__8__pwmFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__8__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__8__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__8__gdsFreqMode__a 0x0048
#define MA_core__pmc__pm_cfg__8__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__8__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__8__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__8__gdsFreqMode__reset 0x03
#define MA_core__pmc__pm_cfg__8__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__8__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__8__modType__a 0x0048
#define MA_core__pmc__pm_cfg__8__modType__len 2
#define MA_core__pmc__pm_cfg__8__modType__mask 0x30
#define MA_core__pmc__pm_cfg__8__modType__shift 0x04
#define MA_core__pmc__pm_cfg__8__modType__reset 0x03
#define MA_core__pmc__pm_cfg__8__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__8__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__8__lf_bw_scale__a 0x0048
#define MA_core__pmc__pm_cfg__8__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__8__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__8__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__8__lf_bw_scale__reset 0x03
#define MA_core__pmc__pm_cfg__8__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__8__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__8__pbtl_half__a 0x0049
#define MA_core__pmc__pm_cfg__8__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__8__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__8__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__8__pbtl_half__reset 0x01
#define MA_core__pmc__pm_cfg__8__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__8__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__8__gd_hvpu_low__a 0x0049
#define MA_core__pmc__pm_cfg__8__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__8__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__8__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__8__gd_hvpu_low__reset 0x01
#define MA_core__pmc__pm_cfg__8__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__8__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__8__dtsteps_nom__a 0x0049
#define MA_core__pmc__pm_cfg__8__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__8__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__8__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__8__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__8__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__8__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__8__bal_bw__a 0x0049
#define MA_core__pmc__pm_cfg__8__bal_bw__len 2
#define MA_core__pmc__pm_cfg__8__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__8__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__8__bal_bw__reset 0x01
#define MA_core__pmc__pm_cfg__8__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__9__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__9__pwmFreqMode__a 0x004b
#define MA_core__pmc__pm_cfg__9__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__9__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__9__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__9__pwmFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__9__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__9__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__9__gdsFreqMode__a 0x004b
#define MA_core__pmc__pm_cfg__9__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__9__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__9__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__9__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__9__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__9__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__9__modType__a 0x004b
#define MA_core__pmc__pm_cfg__9__modType__len 2
#define MA_core__pmc__pm_cfg__9__modType__mask 0x30
#define MA_core__pmc__pm_cfg__9__modType__shift 0x04
#define MA_core__pmc__pm_cfg__9__modType__reset 0x03
#define MA_core__pmc__pm_cfg__9__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__9__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__9__lf_bw_scale__a 0x004b
#define MA_core__pmc__pm_cfg__9__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__9__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__9__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__9__lf_bw_scale__reset 0x03
#define MA_core__pmc__pm_cfg__9__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__9__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__9__pbtl_half__a 0x004c
#define MA_core__pmc__pm_cfg__9__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__9__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__9__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__9__pbtl_half__reset 0x00
#define MA_core__pmc__pm_cfg__9__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__9__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__9__gd_hvpu_low__a 0x004c
#define MA_core__pmc__pm_cfg__9__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__9__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__9__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__9__gd_hvpu_low__reset 0x00
#define MA_core__pmc__pm_cfg__9__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__9__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__9__dtsteps_nom__a 0x004c
#define MA_core__pmc__pm_cfg__9__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__9__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__9__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__9__dtsteps_nom__reset 0x06
#define MA_core__pmc__pm_cfg__9__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__9__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__9__bal_bw__a 0x004c
#define MA_core__pmc__pm_cfg__9__bal_bw__len 2
#define MA_core__pmc__pm_cfg__9__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__9__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__9__bal_bw__reset 0x02
#define MA_core__pmc__pm_cfg__9__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__10__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__10__pwmFreqMode__a 0x004e
#define MA_core__pmc__pm_cfg__10__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__10__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__10__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__10__pwmFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__10__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__10__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__10__gdsFreqMode__a 0x004e
#define MA_core__pmc__pm_cfg__10__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__10__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__10__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__10__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__10__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__10__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__10__modType__a 0x004e
#define MA_core__pmc__pm_cfg__10__modType__len 2
#define MA_core__pmc__pm_cfg__10__modType__mask 0x30
#define MA_core__pmc__pm_cfg__10__modType__shift 0x04
#define MA_core__pmc__pm_cfg__10__modType__reset 0x03
#define MA_core__pmc__pm_cfg__10__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__10__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__10__lf_bw_scale__a 0x004e
#define MA_core__pmc__pm_cfg__10__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__10__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__10__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__10__lf_bw_scale__reset 0x03
#define MA_core__pmc__pm_cfg__10__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__10__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__10__pbtl_half__a 0x004f
#define MA_core__pmc__pm_cfg__10__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__10__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__10__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__10__pbtl_half__reset 0x00
#define MA_core__pmc__pm_cfg__10__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__10__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__10__gd_hvpu_low__a 0x004f
#define MA_core__pmc__pm_cfg__10__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__10__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__10__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__10__gd_hvpu_low__reset 0x00
#define MA_core__pmc__pm_cfg__10__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__10__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__10__dtsteps_nom__a 0x004f
#define MA_core__pmc__pm_cfg__10__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__10__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__10__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__10__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__10__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__10__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__10__bal_bw__a 0x004f
#define MA_core__pmc__pm_cfg__10__bal_bw__len 2
#define MA_core__pmc__pm_cfg__10__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__10__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__10__bal_bw__reset 0x03
#define MA_core__pmc__pm_cfg__10__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__11__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__11__pwmFreqMode__a 0x0051
#define MA_core__pmc__pm_cfg__11__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__11__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__11__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__11__pwmFreqMode__reset 0x02
#define MA_core__pmc__pm_cfg__11__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__11__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__11__gdsFreqMode__a 0x0051
#define MA_core__pmc__pm_cfg__11__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__11__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__11__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__11__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__11__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__11__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__11__modType__a 0x0051
#define MA_core__pmc__pm_cfg__11__modType__len 2
#define MA_core__pmc__pm_cfg__11__modType__mask 0x30
#define MA_core__pmc__pm_cfg__11__modType__shift 0x04
#define MA_core__pmc__pm_cfg__11__modType__reset 0x03
#define MA_core__pmc__pm_cfg__11__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__11__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__11__lf_bw_scale__a 0x0051
#define MA_core__pmc__pm_cfg__11__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__11__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__11__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__11__lf_bw_scale__reset 0x01
#define MA_core__pmc__pm_cfg__11__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__11__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__11__pbtl_half__a 0x0052
#define MA_core__pmc__pm_cfg__11__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__11__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__11__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__11__pbtl_half__reset 0x01
#define MA_core__pmc__pm_cfg__11__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__11__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__11__gd_hvpu_low__a 0x0052
#define MA_core__pmc__pm_cfg__11__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__11__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__11__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__11__gd_hvpu_low__reset 0x01
#define MA_core__pmc__pm_cfg__11__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__11__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__11__dtsteps_nom__a 0x0052
#define MA_core__pmc__pm_cfg__11__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__11__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__11__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__11__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__11__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__11__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__11__bal_bw__a 0x0052
#define MA_core__pmc__pm_cfg__11__bal_bw__len 2
#define MA_core__pmc__pm_cfg__11__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__11__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__11__bal_bw__reset 0x01
#define MA_core__pmc__pm_cfg__11__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__12__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__12__pwmFreqMode__a 0x0054
#define MA_core__pmc__pm_cfg__12__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__12__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__12__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__12__pwmFreqMode__reset 0x02
#define MA_core__pmc__pm_cfg__12__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__12__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__12__gdsFreqMode__a 0x0054
#define MA_core__pmc__pm_cfg__12__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__12__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__12__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__12__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__12__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__12__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__12__modType__a 0x0054
#define MA_core__pmc__pm_cfg__12__modType__len 2
#define MA_core__pmc__pm_cfg__12__modType__mask 0x30
#define MA_core__pmc__pm_cfg__12__modType__shift 0x04
#define MA_core__pmc__pm_cfg__12__modType__reset 0x03
#define MA_core__pmc__pm_cfg__12__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__12__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__12__lf_bw_scale__a 0x0054
#define MA_core__pmc__pm_cfg__12__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__12__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__12__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__12__lf_bw_scale__reset 0x01
#define MA_core__pmc__pm_cfg__12__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__12__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__12__pbtl_half__a 0x0055
#define MA_core__pmc__pm_cfg__12__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__12__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__12__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__12__pbtl_half__reset 0x01
#define MA_core__pmc__pm_cfg__12__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__12__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__12__gd_hvpu_low__a 0x0055
#define MA_core__pmc__pm_cfg__12__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__12__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__12__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__12__gd_hvpu_low__reset 0x01
#define MA_core__pmc__pm_cfg__12__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__12__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__12__dtsteps_nom__a 0x0055
#define MA_core__pmc__pm_cfg__12__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__12__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__12__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__12__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__12__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__12__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__12__bal_bw__a 0x0055
#define MA_core__pmc__pm_cfg__12__bal_bw__len 2
#define MA_core__pmc__pm_cfg__12__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__12__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__12__bal_bw__reset 0x01
#define MA_core__pmc__pm_cfg__12__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__13__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__13__pwmFreqMode__a 0x0057
#define MA_core__pmc__pm_cfg__13__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__13__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__13__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__13__pwmFreqMode__reset 0x02
#define MA_core__pmc__pm_cfg__13__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__13__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__13__gdsFreqMode__a 0x0057
#define MA_core__pmc__pm_cfg__13__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__13__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__13__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__13__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__13__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__13__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__13__modType__a 0x0057
#define MA_core__pmc__pm_cfg__13__modType__len 2
#define MA_core__pmc__pm_cfg__13__modType__mask 0x30
#define MA_core__pmc__pm_cfg__13__modType__shift 0x04
#define MA_core__pmc__pm_cfg__13__modType__reset 0x03
#define MA_core__pmc__pm_cfg__13__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__13__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__13__lf_bw_scale__a 0x0057
#define MA_core__pmc__pm_cfg__13__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__13__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__13__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__13__lf_bw_scale__reset 0x01
#define MA_core__pmc__pm_cfg__13__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__13__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__13__pbtl_half__a 0x0058
#define MA_core__pmc__pm_cfg__13__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__13__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__13__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__13__pbtl_half__reset 0x00
#define MA_core__pmc__pm_cfg__13__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__13__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__13__gd_hvpu_low__a 0x0058
#define MA_core__pmc__pm_cfg__13__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__13__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__13__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__13__gd_hvpu_low__reset 0x00
#define MA_core__pmc__pm_cfg__13__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__13__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__13__dtsteps_nom__a 0x0058
#define MA_core__pmc__pm_cfg__13__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__13__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__13__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__13__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__13__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__13__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__13__bal_bw__a 0x0058
#define MA_core__pmc__pm_cfg__13__bal_bw__len 2
#define MA_core__pmc__pm_cfg__13__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__13__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__13__bal_bw__reset 0x02
#define MA_core__pmc__pm_cfg__13__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__14__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__14__pwmFreqMode__a 0x005a
#define MA_core__pmc__pm_cfg__14__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__14__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__14__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__14__pwmFreqMode__reset 0x02
#define MA_core__pmc__pm_cfg__14__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__14__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__14__gdsFreqMode__a 0x005a
#define MA_core__pmc__pm_cfg__14__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__14__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__14__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__14__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__14__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__14__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__14__modType__a 0x005a
#define MA_core__pmc__pm_cfg__14__modType__len 2
#define MA_core__pmc__pm_cfg__14__modType__mask 0x30
#define MA_core__pmc__pm_cfg__14__modType__shift 0x04
#define MA_core__pmc__pm_cfg__14__modType__reset 0x03
#define MA_core__pmc__pm_cfg__14__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__14__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__14__lf_bw_scale__a 0x005a
#define MA_core__pmc__pm_cfg__14__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__14__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__14__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__14__lf_bw_scale__reset 0x01
#define MA_core__pmc__pm_cfg__14__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__14__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__14__pbtl_half__a 0x005b
#define MA_core__pmc__pm_cfg__14__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__14__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__14__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__14__pbtl_half__reset 0x00
#define MA_core__pmc__pm_cfg__14__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__14__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__14__gd_hvpu_low__a 0x005b
#define MA_core__pmc__pm_cfg__14__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__14__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__14__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__14__gd_hvpu_low__reset 0x00
#define MA_core__pmc__pm_cfg__14__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__14__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__14__dtsteps_nom__a 0x005b
#define MA_core__pmc__pm_cfg__14__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__14__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__14__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__14__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__14__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__14__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__14__bal_bw__a 0x005b
#define MA_core__pmc__pm_cfg__14__bal_bw__len 2
#define MA_core__pmc__pm_cfg__14__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__14__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__14__bal_bw__reset 0x03
#define MA_core__pmc__pm_cfg__14__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__15__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__15__pwmFreqMode__a 0x005d
#define MA_core__pmc__pm_cfg__15__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__15__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__15__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__15__pwmFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__15__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__15__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__15__gdsFreqMode__a 0x005d
#define MA_core__pmc__pm_cfg__15__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__15__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__15__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__15__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__15__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__15__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__15__modType__a 0x005d
#define MA_core__pmc__pm_cfg__15__modType__len 2
#define MA_core__pmc__pm_cfg__15__modType__mask 0x30
#define MA_core__pmc__pm_cfg__15__modType__shift 0x04
#define MA_core__pmc__pm_cfg__15__modType__reset 0x02
#define MA_core__pmc__pm_cfg__15__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__15__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__15__lf_bw_scale__a 0x005d
#define MA_core__pmc__pm_cfg__15__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__15__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__15__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__15__lf_bw_scale__reset 0x01
#define MA_core__pmc__pm_cfg__15__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__15__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__15__pbtl_half__a 0x005e
#define MA_core__pmc__pm_cfg__15__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__15__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__15__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__15__pbtl_half__reset 0x00
#define MA_core__pmc__pm_cfg__15__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__15__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__15__gd_hvpu_low__a 0x005e
#define MA_core__pmc__pm_cfg__15__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__15__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__15__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__15__gd_hvpu_low__reset 0x00
#define MA_core__pmc__pm_cfg__15__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__15__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__15__dtsteps_nom__a 0x005e
#define MA_core__pmc__pm_cfg__15__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__15__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__15__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__15__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__15__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__15__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__15__bal_bw__a 0x005e
#define MA_core__pmc__pm_cfg__15__bal_bw__len 2
#define MA_core__pmc__pm_cfg__15__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__15__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__15__bal_bw__reset 0x03
#define MA_core__pmc__pm_cfg__15__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__16__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__16__pwmFreqMode__a 0x0060
#define MA_core__pmc__pm_cfg__16__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__16__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__16__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__16__pwmFreqMode__reset 0x02
#define MA_core__pmc__pm_cfg__16__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__16__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__16__gdsFreqMode__a 0x0060
#define MA_core__pmc__pm_cfg__16__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__16__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__16__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__16__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__16__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__16__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__16__modType__a 0x0060
#define MA_core__pmc__pm_cfg__16__modType__len 2
#define MA_core__pmc__pm_cfg__16__modType__mask 0x30
#define MA_core__pmc__pm_cfg__16__modType__shift 0x04
#define MA_core__pmc__pm_cfg__16__modType__reset 0x01
#define MA_core__pmc__pm_cfg__16__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__16__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__16__lf_bw_scale__a 0x0060
#define MA_core__pmc__pm_cfg__16__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__16__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__16__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__16__lf_bw_scale__reset 0x00
#define MA_core__pmc__pm_cfg__16__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__16__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__16__pbtl_half__a 0x0061
#define MA_core__pmc__pm_cfg__16__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__16__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__16__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__16__pbtl_half__reset 0x00
#define MA_core__pmc__pm_cfg__16__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__16__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__16__gd_hvpu_low__a 0x0061
#define MA_core__pmc__pm_cfg__16__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__16__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__16__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__16__gd_hvpu_low__reset 0x00
#define MA_core__pmc__pm_cfg__16__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__16__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__16__dtsteps_nom__a 0x0061
#define MA_core__pmc__pm_cfg__16__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__16__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__16__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__16__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__16__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__16__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__16__bal_bw__a 0x0061
#define MA_core__pmc__pm_cfg__16__bal_bw__len 2
#define MA_core__pmc__pm_cfg__16__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__16__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__16__bal_bw__reset 0x03
#define MA_core__pmc__pm_cfg__16__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__17__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__17__pwmFreqMode__a 0x0063
#define MA_core__pmc__pm_cfg__17__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__17__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__17__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__17__pwmFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__17__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__17__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__17__gdsFreqMode__a 0x0063
#define MA_core__pmc__pm_cfg__17__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__17__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__17__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__17__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__17__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__17__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__17__modType__a 0x0063
#define MA_core__pmc__pm_cfg__17__modType__len 2
#define MA_core__pmc__pm_cfg__17__modType__mask 0x30
#define MA_core__pmc__pm_cfg__17__modType__shift 0x04
#define MA_core__pmc__pm_cfg__17__modType__reset 0x01
#define MA_core__pmc__pm_cfg__17__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__17__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__17__lf_bw_scale__a 0x0063
#define MA_core__pmc__pm_cfg__17__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__17__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__17__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__17__lf_bw_scale__reset 0x01
#define MA_core__pmc__pm_cfg__17__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__17__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__17__pbtl_half__a 0x0064
#define MA_core__pmc__pm_cfg__17__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__17__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__17__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__17__pbtl_half__reset 0x00
#define MA_core__pmc__pm_cfg__17__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__17__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__17__gd_hvpu_low__a 0x0064
#define MA_core__pmc__pm_cfg__17__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__17__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__17__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__17__gd_hvpu_low__reset 0x00
#define MA_core__pmc__pm_cfg__17__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__17__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__17__dtsteps_nom__a 0x0064
#define MA_core__pmc__pm_cfg__17__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__17__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__17__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__17__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__17__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__17__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__17__bal_bw__a 0x0064
#define MA_core__pmc__pm_cfg__17__bal_bw__len 2
#define MA_core__pmc__pm_cfg__17__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__17__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__17__bal_bw__reset 0x03
#define MA_core__pmc__pm_cfg__17__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__18__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__18__pwmFreqMode__a 0x0066
#define MA_core__pmc__pm_cfg__18__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__18__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__18__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__18__pwmFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__18__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__18__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__18__gdsFreqMode__a 0x0066
#define MA_core__pmc__pm_cfg__18__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__18__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__18__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__18__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__18__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__18__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__18__modType__a 0x0066
#define MA_core__pmc__pm_cfg__18__modType__len 2
#define MA_core__pmc__pm_cfg__18__modType__mask 0x30
#define MA_core__pmc__pm_cfg__18__modType__shift 0x04
#define MA_core__pmc__pm_cfg__18__modType__reset 0x01
#define MA_core__pmc__pm_cfg__18__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__18__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__18__lf_bw_scale__a 0x0066
#define MA_core__pmc__pm_cfg__18__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__18__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__18__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__18__lf_bw_scale__reset 0x01
#define MA_core__pmc__pm_cfg__18__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__18__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__18__pbtl_half__a 0x0067
#define MA_core__pmc__pm_cfg__18__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__18__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__18__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__18__pbtl_half__reset 0x00
#define MA_core__pmc__pm_cfg__18__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__18__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__18__gd_hvpu_low__a 0x0067
#define MA_core__pmc__pm_cfg__18__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__18__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__18__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__18__gd_hvpu_low__reset 0x00
#define MA_core__pmc__pm_cfg__18__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__18__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__18__dtsteps_nom__a 0x0067
#define MA_core__pmc__pm_cfg__18__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__18__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__18__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__18__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__18__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__18__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__18__bal_bw__a 0x0067
#define MA_core__pmc__pm_cfg__18__bal_bw__len 2
#define MA_core__pmc__pm_cfg__18__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__18__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__18__bal_bw__reset 0x03
#define MA_core__pmc__pm_cfg__18__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__19__pwmFreqMode---
// 0:Base, 1:Base/2, 2:Base/4, 3:Base/8
#define MA_core__pmc__pm_cfg__19__pwmFreqMode__a 0x0069
#define MA_core__pmc__pm_cfg__19__pwmFreqMode__len 2
#define MA_core__pmc__pm_cfg__19__pwmFreqMode__mask 0x03
#define MA_core__pmc__pm_cfg__19__pwmFreqMode__shift 0x00
#define MA_core__pmc__pm_cfg__19__pwmFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__19__pwmFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__19__gdsFreqMode---
// GD serial bus refresh rate; 0: fsw*(2/3), 1: fsw*(2/5), 2: fsw*(2/9), 3: fsw*(2/17)
#define MA_core__pmc__pm_cfg__19__gdsFreqMode__a 0x0069
#define MA_core__pmc__pm_cfg__19__gdsFreqMode__len 2
#define MA_core__pmc__pm_cfg__19__gdsFreqMode__mask 0x0c
#define MA_core__pmc__pm_cfg__19__gdsFreqMode__shift 0x02
#define MA_core__pmc__pm_cfg__19__gdsFreqMode__reset 0x01
#define MA_core__pmc__pm_cfg__19__gdsFreqMode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__19__modType---
// PWM BTL modulation type; 0 => 2-level (AD), 1 => 3-level (BD), 2 => 3-level (FC no-CM), 3 => 5-level
#define MA_core__pmc__pm_cfg__19__modType__a 0x0069
#define MA_core__pmc__pm_cfg__19__modType__len 2
#define MA_core__pmc__pm_cfg__19__modType__mask 0x30
#define MA_core__pmc__pm_cfg__19__modType__shift 0x04
#define MA_core__pmc__pm_cfg__19__modType__reset 0x01
#define MA_core__pmc__pm_cfg__19__modType__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__19__lf_bw_scale---
// Loop filter freq. resp. mode; 0 => low-bw, 1=> mid-bw; 2,3=> high-bw
#define MA_core__pmc__pm_cfg__19__lf_bw_scale__a 0x0069
#define MA_core__pmc__pm_cfg__19__lf_bw_scale__len 2
#define MA_core__pmc__pm_cfg__19__lf_bw_scale__mask 0xc0
#define MA_core__pmc__pm_cfg__19__lf_bw_scale__shift 0x06
#define MA_core__pmc__pm_cfg__19__lf_bw_scale__reset 0x01
#define MA_core__pmc__pm_cfg__19__lf_bw_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__19__pbtl_half---
// High to use only a single channel for PBTL operation (power saving feature), low for std. PBTL.
#define MA_core__pmc__pm_cfg__19__pbtl_half__a 0x006a
#define MA_core__pmc__pm_cfg__19__pbtl_half__len 1
#define MA_core__pmc__pm_cfg__19__pbtl_half__mask 0x01
#define MA_core__pmc__pm_cfg__19__pbtl_half__shift 0x00
#define MA_core__pmc__pm_cfg__19__pbtl_half__reset 0x00
#define MA_core__pmc__pm_cfg__19__pbtl_half__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__19__gd_hvpu_low---
// High to use reduced-pullup (x1/4) in gate driver for gate charge power saving.
#define MA_core__pmc__pm_cfg__19__gd_hvpu_low__a 0x006a
#define MA_core__pmc__pm_cfg__19__gd_hvpu_low__len 1
#define MA_core__pmc__pm_cfg__19__gd_hvpu_low__mask 0x02
#define MA_core__pmc__pm_cfg__19__gd_hvpu_low__shift 0x01
#define MA_core__pmc__pm_cfg__19__gd_hvpu_low__reset 0x00
#define MA_core__pmc__pm_cfg__19__gd_hvpu_low__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__19__dtsteps_nom---
// Nominal number of dead time steps (5-ish ns per step.)
#define MA_core__pmc__pm_cfg__19__dtsteps_nom__a 0x006a
#define MA_core__pmc__pm_cfg__19__dtsteps_nom__len 4
#define MA_core__pmc__pm_cfg__19__dtsteps_nom__mask 0x3c
#define MA_core__pmc__pm_cfg__19__dtsteps_nom__shift 0x02
#define MA_core__pmc__pm_cfg__19__dtsteps_nom__reset 0x04
#define MA_core__pmc__pm_cfg__19__dtsteps_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__19__bal_bw---
// Vcfly balancing HW loop gain/bandwidth. "00" => lowest. "11" => highest.
#define MA_core__pmc__pm_cfg__19__bal_bw__a 0x006a
#define MA_core__pmc__pm_cfg__19__bal_bw__len 2
#define MA_core__pmc__pm_cfg__19__bal_bw__mask 0xc0
#define MA_core__pmc__pm_cfg__19__bal_bw__shift 0x06
#define MA_core__pmc__pm_cfg__19__bal_bw__reset 0x03
#define MA_core__pmc__pm_cfg__19__bal_bw__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP0__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
#define MA_core__pmc__otp__PMP0__PMcfg0_idx__a 0x006c
#define MA_core__pmc__otp__PMP0__PMcfg0_idx__len 4
#define MA_core__pmc__otp__PMP0__PMcfg0_idx__mask 0x0f
#define MA_core__pmc__otp__PMP0__PMcfg0_idx__shift 0x00
#define MA_core__pmc__otp__PMP0__PMcfg0_idx__reset 0x00
#define MA_core__pmc__otp__PMP0__PMcfg0_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP0__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
#define MA_core__pmc__otp__PMP0__PMcfg1_idx__a 0x006c
#define MA_core__pmc__otp__PMP0__PMcfg1_idx__len 4
#define MA_core__pmc__otp__PMP0__PMcfg1_idx__mask 0xf0
#define MA_core__pmc__otp__PMP0__PMcfg1_idx__shift 0x04
#define MA_core__pmc__otp__PMP0__PMcfg1_idx__reset 0x00
#define MA_core__pmc__otp__PMP0__PMcfg1_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP0__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
#define MA_core__pmc__otp__PMP0__PMcfg2_idx__a 0x006d
#define MA_core__pmc__otp__PMP0__PMcfg2_idx__len 4
#define MA_core__pmc__otp__PMP0__PMcfg2_idx__mask 0x0f
#define MA_core__pmc__otp__PMP0__PMcfg2_idx__shift 0x00
#define MA_core__pmc__otp__PMP0__PMcfg2_idx__reset 0x01
#define MA_core__pmc__otp__PMP0__PMcfg2_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP0__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
#define MA_core__pmc__otp__PMP0__PMcfg3_idx__a 0x006d
#define MA_core__pmc__otp__PMP0__PMcfg3_idx__len 4
#define MA_core__pmc__otp__PMP0__PMcfg3_idx__mask 0xf0
#define MA_core__pmc__otp__PMP0__PMcfg3_idx__shift 0x04
#define MA_core__pmc__otp__PMP0__PMcfg3_idx__reset 0x02
#define MA_core__pmc__otp__PMP0__PMcfg3_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP0__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
#define MA_core__pmc__otp__PMP0__PMcfg_lowPvdd_idx__a 0x006e
#define MA_core__pmc__otp__PMP0__PMcfg_lowPvdd_idx__len 2
#define MA_core__pmc__otp__PMP0__PMcfg_lowPvdd_idx__mask 0x03
#define MA_core__pmc__otp__PMP0__PMcfg_lowPvdd_idx__shift 0x00
#define MA_core__pmc__otp__PMP0__PMcfg_lowPvdd_idx__reset 0x00
#define MA_core__pmc__otp__PMP0__PMcfg_lowPvdd_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP0__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
#define MA_core__pmc__otp__PMP0__PMcfg_lowPvddT_idx__a 0x006e
#define MA_core__pmc__otp__PMP0__PMcfg_lowPvddT_idx__len 2
#define MA_core__pmc__otp__PMP0__PMcfg_lowPvddT_idx__mask 0x0c
#define MA_core__pmc__otp__PMP0__PMcfg_lowPvddT_idx__shift 0x02
#define MA_core__pmc__otp__PMP0__PMcfg_lowPvddT_idx__reset 0x00
#define MA_core__pmc__otp__PMP0__PMcfg_lowPvddT_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP0__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__otp__PMP0__PM_max__a 0x006e
#define MA_core__pmc__otp__PMP0__PM_max__len 2
#define MA_core__pmc__otp__PMP0__PM_max__mask 0x30
#define MA_core__pmc__otp__PMP0__PM_max__shift 0x04
#define MA_core__pmc__otp__PMP0__PM_max__reset 0x03
#define MA_core__pmc__otp__PMP0__PM_max__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP0__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__otp__PMP0__PM_min__a 0x006e
#define MA_core__pmc__otp__PMP0__PM_min__len 2
#define MA_core__pmc__otp__PMP0__PM_min__mask 0xc0
#define MA_core__pmc__otp__PMP0__PM_min__shift 0x06
#define MA_core__pmc__otp__PMP0__PM_min__reset 0x01
#define MA_core__pmc__otp__PMP0__PM_min__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP0__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
#define MA_core__pmc__otp__PMP0__lf_bias_scale__a 0x006f
#define MA_core__pmc__otp__PMP0__lf_bias_scale__len 2
#define MA_core__pmc__otp__PMP0__lf_bias_scale__mask 0x06
#define MA_core__pmc__otp__PMP0__lf_bias_scale__shift 0x01
#define MA_core__pmc__otp__PMP0__lf_bias_scale__reset 0x02
#define MA_core__pmc__otp__PMP0__lf_bias_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP0__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
#define MA_core__pmc__otp__PMP0__lf_int3_c_scale__a 0x006f
#define MA_core__pmc__otp__PMP0__lf_int3_c_scale__len 2
#define MA_core__pmc__otp__PMP0__lf_int3_c_scale__mask 0x18
#define MA_core__pmc__otp__PMP0__lf_int3_c_scale__shift 0x03
#define MA_core__pmc__otp__PMP0__lf_int3_c_scale__reset 0x03
#define MA_core__pmc__otp__PMP0__lf_int3_c_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP0__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
#define MA_core__pmc__otp__PMP0__lf_gain_fwd__a 0x006f
#define MA_core__pmc__otp__PMP0__lf_gain_fwd__len 3
#define MA_core__pmc__otp__PMP0__lf_gain_fwd__mask 0xe0
#define MA_core__pmc__otp__PMP0__lf_gain_fwd__shift 0x05
#define MA_core__pmc__otp__PMP0__lf_gain_fwd__reset 0x05
#define MA_core__pmc__otp__PMP0__lf_gain_fwd__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP1__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
#define MA_core__pmc__otp__PMP1__PMcfg0_idx__a 0x0071
#define MA_core__pmc__otp__PMP1__PMcfg0_idx__len 4
#define MA_core__pmc__otp__PMP1__PMcfg0_idx__mask 0x0f
#define MA_core__pmc__otp__PMP1__PMcfg0_idx__shift 0x00
#define MA_core__pmc__otp__PMP1__PMcfg0_idx__reset 0x00
#define MA_core__pmc__otp__PMP1__PMcfg0_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP1__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
#define MA_core__pmc__otp__PMP1__PMcfg1_idx__a 0x0071
#define MA_core__pmc__otp__PMP1__PMcfg1_idx__len 4
#define MA_core__pmc__otp__PMP1__PMcfg1_idx__mask 0xf0
#define MA_core__pmc__otp__PMP1__PMcfg1_idx__shift 0x04
#define MA_core__pmc__otp__PMP1__PMcfg1_idx__reset 0x00
#define MA_core__pmc__otp__PMP1__PMcfg1_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP1__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
#define MA_core__pmc__otp__PMP1__PMcfg2_idx__a 0x0072
#define MA_core__pmc__otp__PMP1__PMcfg2_idx__len 4
#define MA_core__pmc__otp__PMP1__PMcfg2_idx__mask 0x0f
#define MA_core__pmc__otp__PMP1__PMcfg2_idx__shift 0x00
#define MA_core__pmc__otp__PMP1__PMcfg2_idx__reset 0x01
#define MA_core__pmc__otp__PMP1__PMcfg2_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP1__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
#define MA_core__pmc__otp__PMP1__PMcfg3_idx__a 0x0072
#define MA_core__pmc__otp__PMP1__PMcfg3_idx__len 4
#define MA_core__pmc__otp__PMP1__PMcfg3_idx__mask 0xf0
#define MA_core__pmc__otp__PMP1__PMcfg3_idx__shift 0x04
#define MA_core__pmc__otp__PMP1__PMcfg3_idx__reset 0x03
#define MA_core__pmc__otp__PMP1__PMcfg3_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP1__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
#define MA_core__pmc__otp__PMP1__PMcfg_lowPvdd_idx__a 0x0073
#define MA_core__pmc__otp__PMP1__PMcfg_lowPvdd_idx__len 2
#define MA_core__pmc__otp__PMP1__PMcfg_lowPvdd_idx__mask 0x03
#define MA_core__pmc__otp__PMP1__PMcfg_lowPvdd_idx__shift 0x00
#define MA_core__pmc__otp__PMP1__PMcfg_lowPvdd_idx__reset 0x00
#define MA_core__pmc__otp__PMP1__PMcfg_lowPvdd_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP1__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
#define MA_core__pmc__otp__PMP1__PMcfg_lowPvddT_idx__a 0x0073
#define MA_core__pmc__otp__PMP1__PMcfg_lowPvddT_idx__len 2
#define MA_core__pmc__otp__PMP1__PMcfg_lowPvddT_idx__mask 0x0c
#define MA_core__pmc__otp__PMP1__PMcfg_lowPvddT_idx__shift 0x02
#define MA_core__pmc__otp__PMP1__PMcfg_lowPvddT_idx__reset 0x00
#define MA_core__pmc__otp__PMP1__PMcfg_lowPvddT_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP1__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__otp__PMP1__PM_max__a 0x0073
#define MA_core__pmc__otp__PMP1__PM_max__len 2
#define MA_core__pmc__otp__PMP1__PM_max__mask 0x30
#define MA_core__pmc__otp__PMP1__PM_max__shift 0x04
#define MA_core__pmc__otp__PMP1__PM_max__reset 0x03
#define MA_core__pmc__otp__PMP1__PM_max__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP1__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__otp__PMP1__PM_min__a 0x0073
#define MA_core__pmc__otp__PMP1__PM_min__len 2
#define MA_core__pmc__otp__PMP1__PM_min__mask 0xc0
#define MA_core__pmc__otp__PMP1__PM_min__shift 0x06
#define MA_core__pmc__otp__PMP1__PM_min__reset 0x01
#define MA_core__pmc__otp__PMP1__PM_min__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP1__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
#define MA_core__pmc__otp__PMP1__lf_bias_scale__a 0x0074
#define MA_core__pmc__otp__PMP1__lf_bias_scale__len 2
#define MA_core__pmc__otp__PMP1__lf_bias_scale__mask 0x06
#define MA_core__pmc__otp__PMP1__lf_bias_scale__shift 0x01
#define MA_core__pmc__otp__PMP1__lf_bias_scale__reset 0x02
#define MA_core__pmc__otp__PMP1__lf_bias_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP1__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
#define MA_core__pmc__otp__PMP1__lf_int3_c_scale__a 0x0074
#define MA_core__pmc__otp__PMP1__lf_int3_c_scale__len 2
#define MA_core__pmc__otp__PMP1__lf_int3_c_scale__mask 0x18
#define MA_core__pmc__otp__PMP1__lf_int3_c_scale__shift 0x03
#define MA_core__pmc__otp__PMP1__lf_int3_c_scale__reset 0x03
#define MA_core__pmc__otp__PMP1__lf_int3_c_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP1__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
#define MA_core__pmc__otp__PMP1__lf_gain_fwd__a 0x0074
#define MA_core__pmc__otp__PMP1__lf_gain_fwd__len 3
#define MA_core__pmc__otp__PMP1__lf_gain_fwd__mask 0xe0
#define MA_core__pmc__otp__PMP1__lf_gain_fwd__shift 0x05
#define MA_core__pmc__otp__PMP1__lf_gain_fwd__reset 0x05
#define MA_core__pmc__otp__PMP1__lf_gain_fwd__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP2__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
#define MA_core__pmc__otp__PMP2__PMcfg0_idx__a 0x0076
#define MA_core__pmc__otp__PMP2__PMcfg0_idx__len 4
#define MA_core__pmc__otp__PMP2__PMcfg0_idx__mask 0x0f
#define MA_core__pmc__otp__PMP2__PMcfg0_idx__shift 0x00
#define MA_core__pmc__otp__PMP2__PMcfg0_idx__reset 0x04
#define MA_core__pmc__otp__PMP2__PMcfg0_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP2__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
#define MA_core__pmc__otp__PMP2__PMcfg1_idx__a 0x0076
#define MA_core__pmc__otp__PMP2__PMcfg1_idx__len 4
#define MA_core__pmc__otp__PMP2__PMcfg1_idx__mask 0xf0
#define MA_core__pmc__otp__PMP2__PMcfg1_idx__shift 0x04
#define MA_core__pmc__otp__PMP2__PMcfg1_idx__reset 0x04
#define MA_core__pmc__otp__PMP2__PMcfg1_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP2__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
#define MA_core__pmc__otp__PMP2__PMcfg2_idx__a 0x0077
#define MA_core__pmc__otp__PMP2__PMcfg2_idx__len 4
#define MA_core__pmc__otp__PMP2__PMcfg2_idx__mask 0x0f
#define MA_core__pmc__otp__PMP2__PMcfg2_idx__shift 0x00
#define MA_core__pmc__otp__PMP2__PMcfg2_idx__reset 0x05
#define MA_core__pmc__otp__PMP2__PMcfg2_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP2__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
#define MA_core__pmc__otp__PMP2__PMcfg3_idx__a 0x0077
#define MA_core__pmc__otp__PMP2__PMcfg3_idx__len 4
#define MA_core__pmc__otp__PMP2__PMcfg3_idx__mask 0xf0
#define MA_core__pmc__otp__PMP2__PMcfg3_idx__shift 0x04
#define MA_core__pmc__otp__PMP2__PMcfg3_idx__reset 0x06
#define MA_core__pmc__otp__PMP2__PMcfg3_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP2__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
#define MA_core__pmc__otp__PMP2__PMcfg_lowPvdd_idx__a 0x0078
#define MA_core__pmc__otp__PMP2__PMcfg_lowPvdd_idx__len 2
#define MA_core__pmc__otp__PMP2__PMcfg_lowPvdd_idx__mask 0x03
#define MA_core__pmc__otp__PMP2__PMcfg_lowPvdd_idx__shift 0x00
#define MA_core__pmc__otp__PMP2__PMcfg_lowPvdd_idx__reset 0x01
#define MA_core__pmc__otp__PMP2__PMcfg_lowPvdd_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP2__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
#define MA_core__pmc__otp__PMP2__PMcfg_lowPvddT_idx__a 0x0078
#define MA_core__pmc__otp__PMP2__PMcfg_lowPvddT_idx__len 2
#define MA_core__pmc__otp__PMP2__PMcfg_lowPvddT_idx__mask 0x0c
#define MA_core__pmc__otp__PMP2__PMcfg_lowPvddT_idx__shift 0x02
#define MA_core__pmc__otp__PMP2__PMcfg_lowPvddT_idx__reset 0x01
#define MA_core__pmc__otp__PMP2__PMcfg_lowPvddT_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP2__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__otp__PMP2__PM_max__a 0x0078
#define MA_core__pmc__otp__PMP2__PM_max__len 2
#define MA_core__pmc__otp__PMP2__PM_max__mask 0x30
#define MA_core__pmc__otp__PMP2__PM_max__shift 0x04
#define MA_core__pmc__otp__PMP2__PM_max__reset 0x03
#define MA_core__pmc__otp__PMP2__PM_max__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP2__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__otp__PMP2__PM_min__a 0x0078
#define MA_core__pmc__otp__PMP2__PM_min__len 2
#define MA_core__pmc__otp__PMP2__PM_min__mask 0xc0
#define MA_core__pmc__otp__PMP2__PM_min__shift 0x06
#define MA_core__pmc__otp__PMP2__PM_min__reset 0x01
#define MA_core__pmc__otp__PMP2__PM_min__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP2__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
#define MA_core__pmc__otp__PMP2__lf_bias_scale__a 0x0079
#define MA_core__pmc__otp__PMP2__lf_bias_scale__len 2
#define MA_core__pmc__otp__PMP2__lf_bias_scale__mask 0x06
#define MA_core__pmc__otp__PMP2__lf_bias_scale__shift 0x01
#define MA_core__pmc__otp__PMP2__lf_bias_scale__reset 0x02
#define MA_core__pmc__otp__PMP2__lf_bias_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP2__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
#define MA_core__pmc__otp__PMP2__lf_int3_c_scale__a 0x0079
#define MA_core__pmc__otp__PMP2__lf_int3_c_scale__len 2
#define MA_core__pmc__otp__PMP2__lf_int3_c_scale__mask 0x18
#define MA_core__pmc__otp__PMP2__lf_int3_c_scale__shift 0x03
#define MA_core__pmc__otp__PMP2__lf_int3_c_scale__reset 0x02
#define MA_core__pmc__otp__PMP2__lf_int3_c_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP2__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
#define MA_core__pmc__otp__PMP2__lf_gain_fwd__a 0x0079
#define MA_core__pmc__otp__PMP2__lf_gain_fwd__len 3
#define MA_core__pmc__otp__PMP2__lf_gain_fwd__mask 0xe0
#define MA_core__pmc__otp__PMP2__lf_gain_fwd__shift 0x05
#define MA_core__pmc__otp__PMP2__lf_gain_fwd__reset 0x05
#define MA_core__pmc__otp__PMP2__lf_gain_fwd__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP3__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
#define MA_core__pmc__otp__PMP3__PMcfg0_idx__a 0x007b
#define MA_core__pmc__otp__PMP3__PMcfg0_idx__len 4
#define MA_core__pmc__otp__PMP3__PMcfg0_idx__mask 0x0f
#define MA_core__pmc__otp__PMP3__PMcfg0_idx__shift 0x00
#define MA_core__pmc__otp__PMP3__PMcfg0_idx__reset 0x04
#define MA_core__pmc__otp__PMP3__PMcfg0_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP3__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
#define MA_core__pmc__otp__PMP3__PMcfg1_idx__a 0x007b
#define MA_core__pmc__otp__PMP3__PMcfg1_idx__len 4
#define MA_core__pmc__otp__PMP3__PMcfg1_idx__mask 0xf0
#define MA_core__pmc__otp__PMP3__PMcfg1_idx__shift 0x04
#define MA_core__pmc__otp__PMP3__PMcfg1_idx__reset 0x04
#define MA_core__pmc__otp__PMP3__PMcfg1_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP3__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
#define MA_core__pmc__otp__PMP3__PMcfg2_idx__a 0x007c
#define MA_core__pmc__otp__PMP3__PMcfg2_idx__len 4
#define MA_core__pmc__otp__PMP3__PMcfg2_idx__mask 0x0f
#define MA_core__pmc__otp__PMP3__PMcfg2_idx__shift 0x00
#define MA_core__pmc__otp__PMP3__PMcfg2_idx__reset 0x05
#define MA_core__pmc__otp__PMP3__PMcfg2_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP3__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
#define MA_core__pmc__otp__PMP3__PMcfg3_idx__a 0x007c
#define MA_core__pmc__otp__PMP3__PMcfg3_idx__len 4
#define MA_core__pmc__otp__PMP3__PMcfg3_idx__mask 0xf0
#define MA_core__pmc__otp__PMP3__PMcfg3_idx__shift 0x04
#define MA_core__pmc__otp__PMP3__PMcfg3_idx__reset 0x07
#define MA_core__pmc__otp__PMP3__PMcfg3_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP3__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
#define MA_core__pmc__otp__PMP3__PMcfg_lowPvdd_idx__a 0x007d
#define MA_core__pmc__otp__PMP3__PMcfg_lowPvdd_idx__len 2
#define MA_core__pmc__otp__PMP3__PMcfg_lowPvdd_idx__mask 0x03
#define MA_core__pmc__otp__PMP3__PMcfg_lowPvdd_idx__shift 0x00
#define MA_core__pmc__otp__PMP3__PMcfg_lowPvdd_idx__reset 0x01
#define MA_core__pmc__otp__PMP3__PMcfg_lowPvdd_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP3__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
#define MA_core__pmc__otp__PMP3__PMcfg_lowPvddT_idx__a 0x007d
#define MA_core__pmc__otp__PMP3__PMcfg_lowPvddT_idx__len 2
#define MA_core__pmc__otp__PMP3__PMcfg_lowPvddT_idx__mask 0x0c
#define MA_core__pmc__otp__PMP3__PMcfg_lowPvddT_idx__shift 0x02
#define MA_core__pmc__otp__PMP3__PMcfg_lowPvddT_idx__reset 0x01
#define MA_core__pmc__otp__PMP3__PMcfg_lowPvddT_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP3__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__otp__PMP3__PM_max__a 0x007d
#define MA_core__pmc__otp__PMP3__PM_max__len 2
#define MA_core__pmc__otp__PMP3__PM_max__mask 0x30
#define MA_core__pmc__otp__PMP3__PM_max__shift 0x04
#define MA_core__pmc__otp__PMP3__PM_max__reset 0x03
#define MA_core__pmc__otp__PMP3__PM_max__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP3__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__otp__PMP3__PM_min__a 0x007d
#define MA_core__pmc__otp__PMP3__PM_min__len 2
#define MA_core__pmc__otp__PMP3__PM_min__mask 0xc0
#define MA_core__pmc__otp__PMP3__PM_min__shift 0x06
#define MA_core__pmc__otp__PMP3__PM_min__reset 0x01
#define MA_core__pmc__otp__PMP3__PM_min__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP3__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
#define MA_core__pmc__otp__PMP3__lf_bias_scale__a 0x007e
#define MA_core__pmc__otp__PMP3__lf_bias_scale__len 2
#define MA_core__pmc__otp__PMP3__lf_bias_scale__mask 0x06
#define MA_core__pmc__otp__PMP3__lf_bias_scale__shift 0x01
#define MA_core__pmc__otp__PMP3__lf_bias_scale__reset 0x02
#define MA_core__pmc__otp__PMP3__lf_bias_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP3__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
#define MA_core__pmc__otp__PMP3__lf_int3_c_scale__a 0x007e
#define MA_core__pmc__otp__PMP3__lf_int3_c_scale__len 2
#define MA_core__pmc__otp__PMP3__lf_int3_c_scale__mask 0x18
#define MA_core__pmc__otp__PMP3__lf_int3_c_scale__shift 0x03
#define MA_core__pmc__otp__PMP3__lf_int3_c_scale__reset 0x01
#define MA_core__pmc__otp__PMP3__lf_int3_c_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP3__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
#define MA_core__pmc__otp__PMP3__lf_gain_fwd__a 0x007e
#define MA_core__pmc__otp__PMP3__lf_gain_fwd__len 3
#define MA_core__pmc__otp__PMP3__lf_gain_fwd__mask 0xe0
#define MA_core__pmc__otp__PMP3__lf_gain_fwd__shift 0x05
#define MA_core__pmc__otp__PMP3__lf_gain_fwd__reset 0x05
#define MA_core__pmc__otp__PMP3__lf_gain_fwd__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP4__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
#define MA_core__pmc__otp__PMP4__PMcfg0_idx__a 0x0080
#define MA_core__pmc__otp__PMP4__PMcfg0_idx__len 4
#define MA_core__pmc__otp__PMP4__PMcfg0_idx__mask 0x0f
#define MA_core__pmc__otp__PMP4__PMcfg0_idx__shift 0x00
#define MA_core__pmc__otp__PMP4__PMcfg0_idx__reset 0x08
#define MA_core__pmc__otp__PMP4__PMcfg0_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP4__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
#define MA_core__pmc__otp__PMP4__PMcfg1_idx__a 0x0080
#define MA_core__pmc__otp__PMP4__PMcfg1_idx__len 4
#define MA_core__pmc__otp__PMP4__PMcfg1_idx__mask 0xf0
#define MA_core__pmc__otp__PMP4__PMcfg1_idx__shift 0x04
#define MA_core__pmc__otp__PMP4__PMcfg1_idx__reset 0x08
#define MA_core__pmc__otp__PMP4__PMcfg1_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP4__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
#define MA_core__pmc__otp__PMP4__PMcfg2_idx__a 0x0081
#define MA_core__pmc__otp__PMP4__PMcfg2_idx__len 4
#define MA_core__pmc__otp__PMP4__PMcfg2_idx__mask 0x0f
#define MA_core__pmc__otp__PMP4__PMcfg2_idx__shift 0x00
#define MA_core__pmc__otp__PMP4__PMcfg2_idx__reset 0x09
#define MA_core__pmc__otp__PMP4__PMcfg2_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP4__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
#define MA_core__pmc__otp__PMP4__PMcfg3_idx__a 0x0081
#define MA_core__pmc__otp__PMP4__PMcfg3_idx__len 4
#define MA_core__pmc__otp__PMP4__PMcfg3_idx__mask 0xf0
#define MA_core__pmc__otp__PMP4__PMcfg3_idx__shift 0x04
#define MA_core__pmc__otp__PMP4__PMcfg3_idx__reset 0x0a
#define MA_core__pmc__otp__PMP4__PMcfg3_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP4__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
#define MA_core__pmc__otp__PMP4__PMcfg_lowPvdd_idx__a 0x0082
#define MA_core__pmc__otp__PMP4__PMcfg_lowPvdd_idx__len 2
#define MA_core__pmc__otp__PMP4__PMcfg_lowPvdd_idx__mask 0x03
#define MA_core__pmc__otp__PMP4__PMcfg_lowPvdd_idx__shift 0x00
#define MA_core__pmc__otp__PMP4__PMcfg_lowPvdd_idx__reset 0x02
#define MA_core__pmc__otp__PMP4__PMcfg_lowPvdd_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP4__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
#define MA_core__pmc__otp__PMP4__PMcfg_lowPvddT_idx__a 0x0082
#define MA_core__pmc__otp__PMP4__PMcfg_lowPvddT_idx__len 2
#define MA_core__pmc__otp__PMP4__PMcfg_lowPvddT_idx__mask 0x0c
#define MA_core__pmc__otp__PMP4__PMcfg_lowPvddT_idx__shift 0x02
#define MA_core__pmc__otp__PMP4__PMcfg_lowPvddT_idx__reset 0x01
#define MA_core__pmc__otp__PMP4__PMcfg_lowPvddT_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP4__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__otp__PMP4__PM_max__a 0x0082
#define MA_core__pmc__otp__PMP4__PM_max__len 2
#define MA_core__pmc__otp__PMP4__PM_max__mask 0x30
#define MA_core__pmc__otp__PMP4__PM_max__shift 0x04
#define MA_core__pmc__otp__PMP4__PM_max__reset 0x03
#define MA_core__pmc__otp__PMP4__PM_max__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP4__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__otp__PMP4__PM_min__a 0x0082
#define MA_core__pmc__otp__PMP4__PM_min__len 2
#define MA_core__pmc__otp__PMP4__PM_min__mask 0xc0
#define MA_core__pmc__otp__PMP4__PM_min__shift 0x06
#define MA_core__pmc__otp__PMP4__PM_min__reset 0x01
#define MA_core__pmc__otp__PMP4__PM_min__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP4__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
#define MA_core__pmc__otp__PMP4__lf_bias_scale__a 0x0083
#define MA_core__pmc__otp__PMP4__lf_bias_scale__len 2
#define MA_core__pmc__otp__PMP4__lf_bias_scale__mask 0x06
#define MA_core__pmc__otp__PMP4__lf_bias_scale__shift 0x01
#define MA_core__pmc__otp__PMP4__lf_bias_scale__reset 0x02
#define MA_core__pmc__otp__PMP4__lf_bias_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP4__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
#define MA_core__pmc__otp__PMP4__lf_int3_c_scale__a 0x0083
#define MA_core__pmc__otp__PMP4__lf_int3_c_scale__len 2
#define MA_core__pmc__otp__PMP4__lf_int3_c_scale__mask 0x18
#define MA_core__pmc__otp__PMP4__lf_int3_c_scale__shift 0x03
#define MA_core__pmc__otp__PMP4__lf_int3_c_scale__reset 0x03
#define MA_core__pmc__otp__PMP4__lf_int3_c_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP4__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
#define MA_core__pmc__otp__PMP4__lf_gain_fwd__a 0x0083
#define MA_core__pmc__otp__PMP4__lf_gain_fwd__len 3
#define MA_core__pmc__otp__PMP4__lf_gain_fwd__mask 0xe0
#define MA_core__pmc__otp__PMP4__lf_gain_fwd__shift 0x05
#define MA_core__pmc__otp__PMP4__lf_gain_fwd__reset 0x05
#define MA_core__pmc__otp__PMP4__lf_gain_fwd__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP5__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
#define MA_core__pmc__otp__PMP5__PMcfg0_idx__a 0x0085
#define MA_core__pmc__otp__PMP5__PMcfg0_idx__len 4
#define MA_core__pmc__otp__PMP5__PMcfg0_idx__mask 0x0f
#define MA_core__pmc__otp__PMP5__PMcfg0_idx__shift 0x00
#define MA_core__pmc__otp__PMP5__PMcfg0_idx__reset 0x08
#define MA_core__pmc__otp__PMP5__PMcfg0_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP5__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
#define MA_core__pmc__otp__PMP5__PMcfg1_idx__a 0x0085
#define MA_core__pmc__otp__PMP5__PMcfg1_idx__len 4
#define MA_core__pmc__otp__PMP5__PMcfg1_idx__mask 0xf0
#define MA_core__pmc__otp__PMP5__PMcfg1_idx__shift 0x04
#define MA_core__pmc__otp__PMP5__PMcfg1_idx__reset 0x08
#define MA_core__pmc__otp__PMP5__PMcfg1_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP5__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
#define MA_core__pmc__otp__PMP5__PMcfg2_idx__a 0x0086
#define MA_core__pmc__otp__PMP5__PMcfg2_idx__len 4
#define MA_core__pmc__otp__PMP5__PMcfg2_idx__mask 0x0f
#define MA_core__pmc__otp__PMP5__PMcfg2_idx__shift 0x00
#define MA_core__pmc__otp__PMP5__PMcfg2_idx__reset 0x09
#define MA_core__pmc__otp__PMP5__PMcfg2_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP5__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
#define MA_core__pmc__otp__PMP5__PMcfg3_idx__a 0x0086
#define MA_core__pmc__otp__PMP5__PMcfg3_idx__len 4
#define MA_core__pmc__otp__PMP5__PMcfg3_idx__mask 0xf0
#define MA_core__pmc__otp__PMP5__PMcfg3_idx__shift 0x04
#define MA_core__pmc__otp__PMP5__PMcfg3_idx__reset 0x07
#define MA_core__pmc__otp__PMP5__PMcfg3_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP5__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
#define MA_core__pmc__otp__PMP5__PMcfg_lowPvdd_idx__a 0x0087
#define MA_core__pmc__otp__PMP5__PMcfg_lowPvdd_idx__len 2
#define MA_core__pmc__otp__PMP5__PMcfg_lowPvdd_idx__mask 0x03
#define MA_core__pmc__otp__PMP5__PMcfg_lowPvdd_idx__shift 0x00
#define MA_core__pmc__otp__PMP5__PMcfg_lowPvdd_idx__reset 0x02
#define MA_core__pmc__otp__PMP5__PMcfg_lowPvdd_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP5__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
#define MA_core__pmc__otp__PMP5__PMcfg_lowPvddT_idx__a 0x0087
#define MA_core__pmc__otp__PMP5__PMcfg_lowPvddT_idx__len 2
#define MA_core__pmc__otp__PMP5__PMcfg_lowPvddT_idx__mask 0x0c
#define MA_core__pmc__otp__PMP5__PMcfg_lowPvddT_idx__shift 0x02
#define MA_core__pmc__otp__PMP5__PMcfg_lowPvddT_idx__reset 0x01
#define MA_core__pmc__otp__PMP5__PMcfg_lowPvddT_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP5__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__otp__PMP5__PM_max__a 0x0087
#define MA_core__pmc__otp__PMP5__PM_max__len 2
#define MA_core__pmc__otp__PMP5__PM_max__mask 0x30
#define MA_core__pmc__otp__PMP5__PM_max__shift 0x04
#define MA_core__pmc__otp__PMP5__PM_max__reset 0x03
#define MA_core__pmc__otp__PMP5__PM_max__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP5__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__otp__PMP5__PM_min__a 0x0087
#define MA_core__pmc__otp__PMP5__PM_min__len 2
#define MA_core__pmc__otp__PMP5__PM_min__mask 0xc0
#define MA_core__pmc__otp__PMP5__PM_min__shift 0x06
#define MA_core__pmc__otp__PMP5__PM_min__reset 0x01
#define MA_core__pmc__otp__PMP5__PM_min__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP5__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
#define MA_core__pmc__otp__PMP5__lf_bias_scale__a 0x0088
#define MA_core__pmc__otp__PMP5__lf_bias_scale__len 2
#define MA_core__pmc__otp__PMP5__lf_bias_scale__mask 0x06
#define MA_core__pmc__otp__PMP5__lf_bias_scale__shift 0x01
#define MA_core__pmc__otp__PMP5__lf_bias_scale__reset 0x02
#define MA_core__pmc__otp__PMP5__lf_bias_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP5__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
#define MA_core__pmc__otp__PMP5__lf_int3_c_scale__a 0x0088
#define MA_core__pmc__otp__PMP5__lf_int3_c_scale__len 2
#define MA_core__pmc__otp__PMP5__lf_int3_c_scale__mask 0x18
#define MA_core__pmc__otp__PMP5__lf_int3_c_scale__shift 0x03
#define MA_core__pmc__otp__PMP5__lf_int3_c_scale__reset 0x03
#define MA_core__pmc__otp__PMP5__lf_int3_c_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP5__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
#define MA_core__pmc__otp__PMP5__lf_gain_fwd__a 0x0088
#define MA_core__pmc__otp__PMP5__lf_gain_fwd__len 3
#define MA_core__pmc__otp__PMP5__lf_gain_fwd__mask 0xe0
#define MA_core__pmc__otp__PMP5__lf_gain_fwd__shift 0x05
#define MA_core__pmc__otp__PMP5__lf_gain_fwd__reset 0x05
#define MA_core__pmc__otp__PMP5__lf_gain_fwd__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__0---
// PWM iramp setting for each pwmFreqMode.
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__0__a 0x008d
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__0__len 4
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__0__mask 0x0f
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__0__shift 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__0__reset 0x07
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__0__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__1---
// PWM iramp setting for each pwmFreqMode.
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__1__a 0x008d
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__1__len 4
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__1__mask 0xf0
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__1__shift 0x04
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__1__reset 0x07
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__1__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__2---
// PWM iramp setting for each pwmFreqMode.
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__2__a 0x008e
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__2__len 4
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__2__mask 0x0f
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__2__shift 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__2__reset 0x03
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__2__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__3---
// PWM iramp setting for each pwmFreqMode.
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__3__a 0x008e
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__3__len 4
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__3__mask 0xf0
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__3__shift 0x04
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__3__reset 0x01
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_iramp_table__3__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__0---
// dtsteps modification depending on gd_str.
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__0__a 0x008a
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__0__len 4
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__0__mask 0x0f
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__0__shift 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__0__reset 0x03
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__0__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__1---
// dtsteps modification depending on gd_str.
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__1__a 0x008a
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__1__len 4
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__1__mask 0xf0
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__1__shift 0x04
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__1__reset 0x02
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__1__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__2---
// dtsteps modification depending on gd_str.
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__2__a 0x008b
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__2__len 4
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__2__mask 0x0f
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__2__shift 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__2__reset 0x01
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__2__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__3---
// dtsteps modification depending on gd_str.
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__3__a 0x008b
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__3__len 4
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__3__mask 0xf0
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__3__shift 0x04
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__3__reset 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__dtsteps_delta_table__3__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__0---
// ocp_blnk setting for each gd_str.
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__0__a 0x008c
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__0__len 2
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__0__mask 0x03
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__0__shift 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__0__reset 0x03
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__0__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__1---
// ocp_blnk setting for each gd_str.
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__1__a 0x008c
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__1__len 2
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__1__mask 0x0c
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__1__shift 0x02
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__1__reset 0x03
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__1__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__2---
// ocp_blnk setting for each gd_str.
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__2__a 0x008c
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__2__len 2
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__2__mask 0x30
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__2__shift 0x04
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__2__reset 0x03
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__2__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__3---
// ocp_blnk setting for each gd_str.
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__3__a 0x008c
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__3__len 2
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__3__mask 0xc0
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__3__shift 0x06
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__3__reset 0x03
#define MA_core__pmc__otp__pmHwCfg_suppl__ocp_blnk_table__3__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__Mthr_0to1---
// PM 0->1 M limit; M=0...255; 0=>0.0, 255=>1.0
#define MA_core__pmc__otp__Mthr_0to1__a 0x0094
#define MA_core__pmc__otp__Mthr_0to1__len 8
#define MA_core__pmc__otp__Mthr_0to1__mask 0xff
#define MA_core__pmc__otp__Mthr_0to1__shift 0x00
#define MA_core__pmc__otp__Mthr_0to1__reset 0x23
#define MA_core__pmc__otp__Mthr_0to1__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__Mthr_1to2---
// PM 1->2 M limit
#define MA_core__pmc__otp__Mthr_1to2__a 0x0095
#define MA_core__pmc__otp__Mthr_1to2__len 8
#define MA_core__pmc__otp__Mthr_1to2__mask 0xff
#define MA_core__pmc__otp__Mthr_1to2__shift 0x00
#define MA_core__pmc__otp__Mthr_1to2__reset 0x2d
#define MA_core__pmc__otp__Mthr_1to2__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__Mthr_2to3---
// PM 2->3 M limit
#define MA_core__pmc__otp__Mthr_2to3__a 0x0096
#define MA_core__pmc__otp__Mthr_2to3__len 8
#define MA_core__pmc__otp__Mthr_2to3__mask 0xff
#define MA_core__pmc__otp__Mthr_2to3__shift 0x00
#define MA_core__pmc__otp__Mthr_2to3__reset 0x37
#define MA_core__pmc__otp__Mthr_2to3__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__Mthr_1to0_hyst---
// PM 1->0 M hysteresis
#define MA_core__pmc__otp__Mthr_1to0_hyst__a 0x0097
#define MA_core__pmc__otp__Mthr_1to0_hyst__len 4
#define MA_core__pmc__otp__Mthr_1to0_hyst__mask 0x0f
#define MA_core__pmc__otp__Mthr_1to0_hyst__shift 0x00
#define MA_core__pmc__otp__Mthr_1to0_hyst__reset 0x05
#define MA_core__pmc__otp__Mthr_1to0_hyst__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__Mthr_2to1_hyst---
// PM 2->1 M hysteresis
#define MA_core__pmc__otp__Mthr_2to1_hyst__a 0x0097
#define MA_core__pmc__otp__Mthr_2to1_hyst__len 4
#define MA_core__pmc__otp__Mthr_2to1_hyst__mask 0xf0
#define MA_core__pmc__otp__Mthr_2to1_hyst__shift 0x04
#define MA_core__pmc__otp__Mthr_2to1_hyst__reset 0x04
#define MA_core__pmc__otp__Mthr_2to1_hyst__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__Mthr_3to2_hyst---
// PM 3->2 M hysteresis
#define MA_core__pmc__otp__Mthr_3to2_hyst__a 0x0098
#define MA_core__pmc__otp__Mthr_3to2_hyst__len 4
#define MA_core__pmc__otp__Mthr_3to2_hyst__mask 0x0f
#define MA_core__pmc__otp__Mthr_3to2_hyst__shift 0x00
#define MA_core__pmc__otp__Mthr_3to2_hyst__reset 0x06
#define MA_core__pmc__otp__Mthr_3to2_hyst__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__Ncycles_avg---
// Number of swithcing cycles averaged per M calc. update
#define MA_core__pmc__otp__Ncycles_avg__a 0x0098
#define MA_core__pmc__otp__Ncycles_avg__len 4
#define MA_core__pmc__otp__Ncycles_avg__mask 0xf0
#define MA_core__pmc__otp__Ncycles_avg__shift 0x04
#define MA_core__pmc__otp__Ncycles_avg__reset 0x04
#define MA_core__pmc__otp__Ncycles_avg__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__N_Mupd_PMup---
// Number of M updates to be above threshold for PM increase
#define MA_core__pmc__otp__N_Mupd_PMup__a 0x0099
#define MA_core__pmc__otp__N_Mupd_PMup__len 4
#define MA_core__pmc__otp__N_Mupd_PMup__mask 0x0f
#define MA_core__pmc__otp__N_Mupd_PMup__shift 0x00
#define MA_core__pmc__otp__N_Mupd_PMup__reset 0x01
#define MA_core__pmc__otp__N_Mupd_PMup__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__Ncount_mute_off---
// Number of consequtive audio sample above threshold amplitude for wake-up from power-down
#define MA_core__pmc__otp__Ncount_mute_off__a 0x0099
#define MA_core__pmc__otp__Ncount_mute_off__len 4
#define MA_core__pmc__otp__Ncount_mute_off__mask 0xf0
#define MA_core__pmc__otp__Ncount_mute_off__shift 0x04
#define MA_core__pmc__otp__Ncount_mute_off__reset 0x01
#define MA_core__pmc__otp__Ncount_mute_off__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__N_Mupd_PMdn__0---
// Number of M updates to be below threshold for PM decrease
#define MA_core__pmc__otp__N_Mupd_PMdn__0__a 0x009a
#define MA_core__pmc__otp__N_Mupd_PMdn__0__len 8
#define MA_core__pmc__otp__N_Mupd_PMdn__0__mask 0xff
#define MA_core__pmc__otp__N_Mupd_PMdn__0__shift 0x00
#define MA_core__pmc__otp__N_Mupd_PMdn__0__reset 0x40
#define MA_core__pmc__otp__N_Mupd_PMdn__0__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__N_Mupd_PMdn__1---
// Number of M updates to be below threshold for PM decrease
#define MA_core__pmc__otp__N_Mupd_PMdn__1__a 0x009b
#define MA_core__pmc__otp__N_Mupd_PMdn__1__len 8
#define MA_core__pmc__otp__N_Mupd_PMdn__1__mask 0xff
#define MA_core__pmc__otp__N_Mupd_PMdn__1__shift 0x00
#define MA_core__pmc__otp__N_Mupd_PMdn__1__reset 0x40
#define MA_core__pmc__otp__N_Mupd_PMdn__1__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__mute_signal_thr---
// Audio signal activity detector "no activity" threshold
#define MA_core__pmc__otp__mute_signal_thr__a 0x009c
#define MA_core__pmc__otp__mute_signal_thr__len 8
#define MA_core__pmc__otp__mute_signal_thr__mask 0xff
#define MA_core__pmc__otp__mute_signal_thr__shift 0x00
#define MA_core__pmc__otp__mute_signal_thr__reset 0x20
#define MA_core__pmc__otp__mute_signal_thr__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__Ncount_mute_on__0---
// Number of consequtive audio samples w/ sub-threshold amplitude for auto-power-down
#define MA_core__pmc__otp__Ncount_mute_on__0__a 0x009d
#define MA_core__pmc__otp__Ncount_mute_on__0__len 8
#define MA_core__pmc__otp__Ncount_mute_on__0__mask 0xff
#define MA_core__pmc__otp__Ncount_mute_on__0__shift 0x00
#define MA_core__pmc__otp__Ncount_mute_on__0__reset 0x40
#define MA_core__pmc__otp__Ncount_mute_on__0__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__Ncount_mute_on__1---
// Number of consequtive audio samples w/ sub-threshold amplitude for auto-power-down
#define MA_core__pmc__otp__Ncount_mute_on__1__a 0x009e
#define MA_core__pmc__otp__Ncount_mute_on__1__len 8
#define MA_core__pmc__otp__Ncount_mute_on__1__mask 0xff
#define MA_core__pmc__otp__Ncount_mute_on__1__shift 0x00
#define MA_core__pmc__otp__Ncount_mute_on__1__reset 0x40
#define MA_core__pmc__otp__Ncount_mute_on__1__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP_disableMask---
// OTP handle for flagging PMPs that may not be selected; MSB=>MPM7, LSB=>PMP0
#define MA_core__pmc__otp__PMP_disableMask__a 0x009f
#define MA_core__pmc__otp__PMP_disableMask__len 8
#define MA_core__pmc__otp__PMP_disableMask__mask 0xff
#define MA_core__pmc__otp__PMP_disableMask__shift 0x00
#define MA_core__pmc__otp__PMP_disableMask__reset 0x00
#define MA_core__pmc__otp__PMP_disableMask__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMC_disHighPerfAudio---
// OTP handle for disabling high-performance audio HW settings (int1_rscale_low="1", lf_bias_scale="11") in any PMP
#define MA_core__pmc__otp__PMC_disHighPerfAudio__a 0x00a0
#define MA_core__pmc__otp__PMC_disHighPerfAudio__len 1
#define MA_core__pmc__otp__PMC_disHighPerfAudio__mask 0x01
#define MA_core__pmc__otp__PMC_disHighPerfAudio__shift 0x00
#define MA_core__pmc__otp__PMC_disHighPerfAudio__reset 0x00
#define MA_core__pmc__otp__PMC_disHighPerfAudio__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__mute_signal_gate---
// High to let audio signal activity detector power down amplifier if no/low signal
#define MA_core__pmc__otp__mute_signal_gate__a 0x00a0
#define MA_core__pmc__otp__mute_signal_gate__len 1
#define MA_core__pmc__otp__mute_signal_gate__mask 0x02
#define MA_core__pmc__otp__mute_signal_gate__shift 0x01
#define MA_core__pmc__otp__mute_signal_gate__reset 0x01
#define MA_core__pmc__otp__mute_signal_gate__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__mute_signal_the_hyst---
// Hysteresis for wake-up from power-down
#define MA_core__pmc__otp__mute_signal_the_hyst__a 0x00a0
#define MA_core__pmc__otp__mute_signal_the_hyst__len 4
#define MA_core__pmc__otp__mute_signal_the_hyst__mask 0x3c
#define MA_core__pmc__otp__mute_signal_the_hyst__shift 0x02
#define MA_core__pmc__otp__mute_signal_the_hyst__reset 0x04
#define MA_core__pmc__otp__mute_signal_the_hyst__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMC_nDavg_nom---
// Number of duty cycle averages for max. switching frequency (pwmFreqMode = "00")
#define MA_core__pmc__otp__PMC_nDavg_nom__a 0x00a1
#define MA_core__pmc__otp__PMC_nDavg_nom__len 5
#define MA_core__pmc__otp__PMC_nDavg_nom__mask 0x1f
#define MA_core__pmc__otp__PMC_nDavg_nom__shift 0x00
#define MA_core__pmc__otp__PMC_nDavg_nom__reset 0x04
#define MA_core__pmc__otp__PMC_nDavg_nom__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP6__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
#define MA_core__pmc__reg__PMP6__PMcfg0_idx__a 0x00a4
#define MA_core__pmc__reg__PMP6__PMcfg0_idx__len 4
#define MA_core__pmc__reg__PMP6__PMcfg0_idx__mask 0x0f
#define MA_core__pmc__reg__PMP6__PMcfg0_idx__shift 0x00
#define MA_core__pmc__reg__PMP6__PMcfg0_idx__reset 0x04
#define MA_core__pmc__reg__PMP6__PMcfg0_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP6__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
#define MA_core__pmc__reg__PMP6__PMcfg1_idx__a 0x00a4
#define MA_core__pmc__reg__PMP6__PMcfg1_idx__len 4
#define MA_core__pmc__reg__PMP6__PMcfg1_idx__mask 0xf0
#define MA_core__pmc__reg__PMP6__PMcfg1_idx__shift 0x04
#define MA_core__pmc__reg__PMP6__PMcfg1_idx__reset 0x04
#define MA_core__pmc__reg__PMP6__PMcfg1_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP6__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
#define MA_core__pmc__reg__PMP6__PMcfg2_idx__a 0x00a5
#define MA_core__pmc__reg__PMP6__PMcfg2_idx__len 4
#define MA_core__pmc__reg__PMP6__PMcfg2_idx__mask 0x0f
#define MA_core__pmc__reg__PMP6__PMcfg2_idx__shift 0x00
#define MA_core__pmc__reg__PMP6__PMcfg2_idx__reset 0x05
#define MA_core__pmc__reg__PMP6__PMcfg2_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP6__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
#define MA_core__pmc__reg__PMP6__PMcfg3_idx__a 0x00a5
#define MA_core__pmc__reg__PMP6__PMcfg3_idx__len 4
#define MA_core__pmc__reg__PMP6__PMcfg3_idx__mask 0xf0
#define MA_core__pmc__reg__PMP6__PMcfg3_idx__shift 0x04
#define MA_core__pmc__reg__PMP6__PMcfg3_idx__reset 0x06
#define MA_core__pmc__reg__PMP6__PMcfg3_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP6__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
#define MA_core__pmc__reg__PMP6__PMcfg_lowPvdd_idx__a 0x00a6
#define MA_core__pmc__reg__PMP6__PMcfg_lowPvdd_idx__len 2
#define MA_core__pmc__reg__PMP6__PMcfg_lowPvdd_idx__mask 0x03
#define MA_core__pmc__reg__PMP6__PMcfg_lowPvdd_idx__shift 0x00
#define MA_core__pmc__reg__PMP6__PMcfg_lowPvdd_idx__reset 0x01
#define MA_core__pmc__reg__PMP6__PMcfg_lowPvdd_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP6__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
#define MA_core__pmc__reg__PMP6__PMcfg_lowPvddT_idx__a 0x00a6
#define MA_core__pmc__reg__PMP6__PMcfg_lowPvddT_idx__len 2
#define MA_core__pmc__reg__PMP6__PMcfg_lowPvddT_idx__mask 0x0c
#define MA_core__pmc__reg__PMP6__PMcfg_lowPvddT_idx__shift 0x02
#define MA_core__pmc__reg__PMP6__PMcfg_lowPvddT_idx__reset 0x01
#define MA_core__pmc__reg__PMP6__PMcfg_lowPvddT_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP6__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__reg__PMP6__PM_max__a 0x00a6
#define MA_core__pmc__reg__PMP6__PM_max__len 2
#define MA_core__pmc__reg__PMP6__PM_max__mask 0x30
#define MA_core__pmc__reg__PMP6__PM_max__shift 0x04
#define MA_core__pmc__reg__PMP6__PM_max__reset 0x03
#define MA_core__pmc__reg__PMP6__PM_max__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP6__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__reg__PMP6__PM_min__a 0x00a6
#define MA_core__pmc__reg__PMP6__PM_min__len 2
#define MA_core__pmc__reg__PMP6__PM_min__mask 0xc0
#define MA_core__pmc__reg__PMP6__PM_min__shift 0x06
#define MA_core__pmc__reg__PMP6__PM_min__reset 0x01
#define MA_core__pmc__reg__PMP6__PM_min__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP6__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
#define MA_core__pmc__reg__PMP6__lf_bias_scale__a 0x00a7
#define MA_core__pmc__reg__PMP6__lf_bias_scale__len 2
#define MA_core__pmc__reg__PMP6__lf_bias_scale__mask 0x06
#define MA_core__pmc__reg__PMP6__lf_bias_scale__shift 0x01
#define MA_core__pmc__reg__PMP6__lf_bias_scale__reset 0x01
#define MA_core__pmc__reg__PMP6__lf_bias_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP6__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
#define MA_core__pmc__reg__PMP6__lf_int3_c_scale__a 0x00a7
#define MA_core__pmc__reg__PMP6__lf_int3_c_scale__len 2
#define MA_core__pmc__reg__PMP6__lf_int3_c_scale__mask 0x18
#define MA_core__pmc__reg__PMP6__lf_int3_c_scale__shift 0x03
#define MA_core__pmc__reg__PMP6__lf_int3_c_scale__reset 0x03
#define MA_core__pmc__reg__PMP6__lf_int3_c_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP6__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
#define MA_core__pmc__reg__PMP6__lf_gain_fwd__a 0x00a7
#define MA_core__pmc__reg__PMP6__lf_gain_fwd__len 3
#define MA_core__pmc__reg__PMP6__lf_gain_fwd__mask 0xe0
#define MA_core__pmc__reg__PMP6__lf_gain_fwd__shift 0x05
#define MA_core__pmc__reg__PMP6__lf_gain_fwd__reset 0x04
#define MA_core__pmc__reg__PMP6__lf_gain_fwd__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP7__PMcfg0_idx---
// 4b. PowerMode 0 settings pointer.
#define MA_core__pmc__reg__PMP7__PMcfg0_idx__a 0x00a9
#define MA_core__pmc__reg__PMP7__PMcfg0_idx__len 4
#define MA_core__pmc__reg__PMP7__PMcfg0_idx__mask 0x0f
#define MA_core__pmc__reg__PMP7__PMcfg0_idx__shift 0x00
#define MA_core__pmc__reg__PMP7__PMcfg0_idx__reset 0x04
#define MA_core__pmc__reg__PMP7__PMcfg0_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP7__PMcfg1_idx---
// 4b. PowerMode 1 settings pointer.
#define MA_core__pmc__reg__PMP7__PMcfg1_idx__a 0x00a9
#define MA_core__pmc__reg__PMP7__PMcfg1_idx__len 4
#define MA_core__pmc__reg__PMP7__PMcfg1_idx__mask 0xf0
#define MA_core__pmc__reg__PMP7__PMcfg1_idx__shift 0x04
#define MA_core__pmc__reg__PMP7__PMcfg1_idx__reset 0x04
#define MA_core__pmc__reg__PMP7__PMcfg1_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP7__PMcfg2_idx---
// 4b. PowerMode 2 settings pointer.
#define MA_core__pmc__reg__PMP7__PMcfg2_idx__a 0x00aa
#define MA_core__pmc__reg__PMP7__PMcfg2_idx__len 4
#define MA_core__pmc__reg__PMP7__PMcfg2_idx__mask 0x0f
#define MA_core__pmc__reg__PMP7__PMcfg2_idx__shift 0x00
#define MA_core__pmc__reg__PMP7__PMcfg2_idx__reset 0x05
#define MA_core__pmc__reg__PMP7__PMcfg2_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP7__PMcfg3_idx---
// 4b. PowerMode 3 settings pointer.
#define MA_core__pmc__reg__PMP7__PMcfg3_idx__a 0x00aa
#define MA_core__pmc__reg__PMP7__PMcfg3_idx__len 4
#define MA_core__pmc__reg__PMP7__PMcfg3_idx__mask 0xf0
#define MA_core__pmc__reg__PMP7__PMcfg3_idx__shift 0x04
#define MA_core__pmc__reg__PMP7__PMcfg3_idx__reset 0x06
#define MA_core__pmc__reg__PMP7__PMcfg3_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP7__PMcfg_lowPvdd_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 5)
#define MA_core__pmc__reg__PMP7__PMcfg_lowPvdd_idx__a 0x00ab
#define MA_core__pmc__reg__PMP7__PMcfg_lowPvdd_idx__len 2
#define MA_core__pmc__reg__PMP7__PMcfg_lowPvdd_idx__mask 0x03
#define MA_core__pmc__reg__PMP7__PMcfg_lowPvdd_idx__shift 0x00
#define MA_core__pmc__reg__PMP7__PMcfg_lowPvdd_idx__reset 0x01
#define MA_core__pmc__reg__PMP7__PMcfg_lowPvdd_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP7__PMcfg_lowPvddT_idx---
// 2b. Pointer to settings for PowerMode for low-Pvdd operation (PowerMode 6)
#define MA_core__pmc__reg__PMP7__PMcfg_lowPvddT_idx__a 0x00ab
#define MA_core__pmc__reg__PMP7__PMcfg_lowPvddT_idx__len 2
#define MA_core__pmc__reg__PMP7__PMcfg_lowPvddT_idx__mask 0x0c
#define MA_core__pmc__reg__PMP7__PMcfg_lowPvddT_idx__shift 0x02
#define MA_core__pmc__reg__PMP7__PMcfg_lowPvddT_idx__reset 0x01
#define MA_core__pmc__reg__PMP7__PMcfg_lowPvddT_idx__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP7__PM_max---
// 2b.  Max. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__reg__PMP7__PM_max__a 0x00ab
#define MA_core__pmc__reg__PMP7__PM_max__len 2
#define MA_core__pmc__reg__PMP7__PM_max__mask 0x30
#define MA_core__pmc__reg__PMP7__PM_max__shift 0x04
#define MA_core__pmc__reg__PMP7__PM_max__reset 0x03
#define MA_core__pmc__reg__PMP7__PM_max__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP7__PM_min---
// 2b.  Min. PowerMode (among PM0-3) to be used by auto-PM selector
#define MA_core__pmc__reg__PMP7__PM_min__a 0x00ab
#define MA_core__pmc__reg__PMP7__PM_min__len 2
#define MA_core__pmc__reg__PMP7__PM_min__mask 0xc0
#define MA_core__pmc__reg__PMP7__PM_min__shift 0x06
#define MA_core__pmc__reg__PMP7__PM_min__reset 0x01
#define MA_core__pmc__reg__PMP7__PM_min__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP7__lf_bias_scale---
// 2b. Loop filter bias setting; 0 => low-bias, 1 => mid-bias, 2,3 => high-bias (low-noise)
#define MA_core__pmc__reg__PMP7__lf_bias_scale__a 0x00ac
#define MA_core__pmc__reg__PMP7__lf_bias_scale__len 2
#define MA_core__pmc__reg__PMP7__lf_bias_scale__mask 0x06
#define MA_core__pmc__reg__PMP7__lf_bias_scale__shift 0x01
#define MA_core__pmc__reg__PMP7__lf_bias_scale__reset 0x01
#define MA_core__pmc__reg__PMP7__lf_bias_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP7__lf_int3_c_scale---
// 2b. Loop filter integrator 3 time constant tuning handle. "00" => fast (least stable), "11" => normal/slow.
#define MA_core__pmc__reg__PMP7__lf_int3_c_scale__a 0x00ac
#define MA_core__pmc__reg__PMP7__lf_int3_c_scale__len 2
#define MA_core__pmc__reg__PMP7__lf_int3_c_scale__mask 0x18
#define MA_core__pmc__reg__PMP7__lf_int3_c_scale__shift 0x03
#define MA_core__pmc__reg__PMP7__lf_int3_c_scale__reset 0x03
#define MA_core__pmc__reg__PMP7__lf_int3_c_scale__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP7__lf_gain_fwd---
// 3b. Loop filter forward gain setting. "100" = nominal/middle.
#define MA_core__pmc__reg__PMP7__lf_gain_fwd__a 0x00ac
#define MA_core__pmc__reg__PMP7__lf_gain_fwd__len 3
#define MA_core__pmc__reg__PMP7__lf_gain_fwd__mask 0xe0
#define MA_core__pmc__reg__PMP7__lf_gain_fwd__shift 0x05
#define MA_core__pmc__reg__PMP7__lf_gain_fwd__reset 0x04
#define MA_core__pmc__reg__PMP7__lf_gain_fwd__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PM_man_force0---
// 1b. High to force manually selected PM on channel 0
#define MA_core__pmc__reg__PM_man_force0__a 0x00ae
#define MA_core__pmc__reg__PM_man_force0__len 1
#define MA_core__pmc__reg__PM_man_force0__mask 0x01
#define MA_core__pmc__reg__PM_man_force0__shift 0x00
#define MA_core__pmc__reg__PM_man_force0__reset 0x00
#define MA_core__pmc__reg__PM_man_force0__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PM_man_force1---
// 1b. High to force manually selected PM on channel 1
#define MA_core__pmc__reg__PM_man_force1__a 0x00ae
#define MA_core__pmc__reg__PM_man_force1__len 1
#define MA_core__pmc__reg__PM_man_force1__mask 0x02
#define MA_core__pmc__reg__PM_man_force1__shift 0x01
#define MA_core__pmc__reg__PM_man_force1__reset 0x00
#define MA_core__pmc__reg__PM_man_force1__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PM_sel_man0---
// 2b. Channel 0 manually selected PM, used if PM_man_force0 is high.
#define MA_core__pmc__reg__PM_sel_man0__a 0x00ae
#define MA_core__pmc__reg__PM_sel_man0__len 3
#define MA_core__pmc__reg__PM_sel_man0__mask 0x1c
#define MA_core__pmc__reg__PM_sel_man0__shift 0x02
#define MA_core__pmc__reg__PM_sel_man0__reset 0x00
#define MA_core__pmc__reg__PM_sel_man0__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PM_sel_man1---
// 2b. Channel 1 manually selected PM, used if PM_man_force1 is high.
#define MA_core__pmc__reg__PM_sel_man1__a 0x00ae
#define MA_core__pmc__reg__PM_sel_man1__len 3
#define MA_core__pmc__reg__PM_sel_man1__mask 0xe0
#define MA_core__pmc__reg__PM_sel_man1__shift 0x05
#define MA_core__pmc__reg__PM_sel_man1__reset 0x00
#define MA_core__pmc__reg__PM_sel_man1__inputonly 0
//------------------------------------------------------------------------------core__pmc__PMP_selected---
// Currently selected Power Mode Profile (PMP)
#define MA_core__pmc__PMP_selected__a 0x00bc
#define MA_core__pmc__PMP_selected__len 3
#define MA_core__pmc__PMP_selected__mask 0x07
#define MA_core__pmc__PMP_selected__shift 0x00
#define MA_core__pmc__PMP_selected__reset 0x00
#define MA_core__pmc__PMP_selected__inputonly 1
//------------------------------------------------------------------------------core__pmc__PM_ch0---
// Current selected Power Mode for channel 0
#define MA_core__pmc__PM_ch0__a 0x00bd
#define MA_core__pmc__PM_ch0__len 3
#define MA_core__pmc__PM_ch0__mask 0x07
#define MA_core__pmc__PM_ch0__shift 0x00
#define MA_core__pmc__PM_ch0__reset 0x00
#define MA_core__pmc__PM_ch0__inputonly 1
//------------------------------------------------------------------------------core__pmc__PM_ch1---
// Current selected Power Mode for channel 1
#define MA_core__pmc__PM_ch1__a 0x00bd
#define MA_core__pmc__PM_ch1__len 3
#define MA_core__pmc__PM_ch1__mask 0x38
#define MA_core__pmc__PM_ch1__shift 0x03
#define MA_core__pmc__PM_ch1__reset 0x00
#define MA_core__pmc__PM_ch1__inputonly 1
//------------------------------------------------------------------------------core__pmc__Mdetector_ch0---
// Channel 0 modulation index detector output; M=0...255; 0=>0.0, 255=>1.0
#define MA_core__pmc__Mdetector_ch0__a 0x00be
#define MA_core__pmc__Mdetector_ch0__len 8
#define MA_core__pmc__Mdetector_ch0__mask 0xff
#define MA_core__pmc__Mdetector_ch0__shift 0x00
#define MA_core__pmc__Mdetector_ch0__reset 0x00
#define MA_core__pmc__Mdetector_ch0__inputonly 1
//------------------------------------------------------------------------------core__pmc__Mdetector_ch1---
// Channel 1 modulation index detector output; M=0...255; 0=>0.0, 255=>1.0
#define MA_core__pmc__Mdetector_ch1__a 0x00bf
#define MA_core__pmc__Mdetector_ch1__len 8
#define MA_core__pmc__Mdetector_ch1__mask 0xff
#define MA_core__pmc__Mdetector_ch1__shift 0x00
#define MA_core__pmc__Mdetector_ch1__reset 0x00
#define MA_core__pmc__Mdetector_ch1__inputonly 1
//------------------------------------------------------------------------------core__pmc__otp__PMP0__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
#define MA_core__pmc__otp__PMP0__audio_dither_lvl__a 0x0070
#define MA_core__pmc__otp__PMP0__audio_dither_lvl__len 4
#define MA_core__pmc__otp__PMP0__audio_dither_lvl__mask 0x0f
#define MA_core__pmc__otp__PMP0__audio_dither_lvl__shift 0x00
#define MA_core__pmc__otp__PMP0__audio_dither_lvl__reset 0x0d
#define MA_core__pmc__otp__PMP0__audio_dither_lvl__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP1__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
#define MA_core__pmc__otp__PMP1__audio_dither_lvl__a 0x0075
#define MA_core__pmc__otp__PMP1__audio_dither_lvl__len 4
#define MA_core__pmc__otp__PMP1__audio_dither_lvl__mask 0x0f
#define MA_core__pmc__otp__PMP1__audio_dither_lvl__shift 0x00
#define MA_core__pmc__otp__PMP1__audio_dither_lvl__reset 0x0d
#define MA_core__pmc__otp__PMP1__audio_dither_lvl__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP2__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
#define MA_core__pmc__otp__PMP2__audio_dither_lvl__a 0x007a
#define MA_core__pmc__otp__PMP2__audio_dither_lvl__len 4
#define MA_core__pmc__otp__PMP2__audio_dither_lvl__mask 0x0f
#define MA_core__pmc__otp__PMP2__audio_dither_lvl__shift 0x00
#define MA_core__pmc__otp__PMP2__audio_dither_lvl__reset 0x08
#define MA_core__pmc__otp__PMP2__audio_dither_lvl__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP3__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
#define MA_core__pmc__otp__PMP3__audio_dither_lvl__a 0x007f
#define MA_core__pmc__otp__PMP3__audio_dither_lvl__len 4
#define MA_core__pmc__otp__PMP3__audio_dither_lvl__mask 0x0f
#define MA_core__pmc__otp__PMP3__audio_dither_lvl__shift 0x00
#define MA_core__pmc__otp__PMP3__audio_dither_lvl__reset 0x08
#define MA_core__pmc__otp__PMP3__audio_dither_lvl__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP4__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
#define MA_core__pmc__otp__PMP4__audio_dither_lvl__a 0x0084
#define MA_core__pmc__otp__PMP4__audio_dither_lvl__len 4
#define MA_core__pmc__otp__PMP4__audio_dither_lvl__mask 0x0f
#define MA_core__pmc__otp__PMP4__audio_dither_lvl__shift 0x00
#define MA_core__pmc__otp__PMP4__audio_dither_lvl__reset 0x00
#define MA_core__pmc__otp__PMP4__audio_dither_lvl__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP5__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
#define MA_core__pmc__otp__PMP5__audio_dither_lvl__a 0x0089
#define MA_core__pmc__otp__PMP5__audio_dither_lvl__len 4
#define MA_core__pmc__otp__PMP5__audio_dither_lvl__mask 0x0f
#define MA_core__pmc__otp__PMP5__audio_dither_lvl__shift 0x00
#define MA_core__pmc__otp__PMP5__audio_dither_lvl__reset 0x00
#define MA_core__pmc__otp__PMP5__audio_dither_lvl__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP6__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
#define MA_core__pmc__reg__PMP6__audio_dither_lvl__a 0x00a8
#define MA_core__pmc__reg__PMP6__audio_dither_lvl__len 4
#define MA_core__pmc__reg__PMP6__audio_dither_lvl__mask 0x0f
#define MA_core__pmc__reg__PMP6__audio_dither_lvl__shift 0x00
#define MA_core__pmc__reg__PMP6__audio_dither_lvl__reset 0x00
#define MA_core__pmc__reg__PMP6__audio_dither_lvl__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP7__audio_dither_lvl---
// 4b.  Pre-DAC digital audio dither level. "0000" => no dither
#define MA_core__pmc__reg__PMP7__audio_dither_lvl__a 0x00ad
#define MA_core__pmc__reg__PMP7__audio_dither_lvl__len 4
#define MA_core__pmc__reg__PMP7__audio_dither_lvl__mask 0x0f
#define MA_core__pmc__reg__PMP7__audio_dither_lvl__shift 0x00
#define MA_core__pmc__reg__PMP7__audio_dither_lvl__reset 0x00
#define MA_core__pmc__reg__PMP7__audio_dither_lvl__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__0__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__0__bal_rate__a 0x0032
#define MA_core__pmc__pm_cfg__0__bal_rate__len 2
#define MA_core__pmc__pm_cfg__0__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__0__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__0__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__0__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__0__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__0__pm_spare_bit__a 0x0032
#define MA_core__pmc__pm_cfg__0__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__0__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__0__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__0__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__0__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__1__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__1__bal_rate__a 0x0035
#define MA_core__pmc__pm_cfg__1__bal_rate__len 2
#define MA_core__pmc__pm_cfg__1__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__1__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__1__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__1__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__1__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__1__pm_spare_bit__a 0x0035
#define MA_core__pmc__pm_cfg__1__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__1__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__1__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__1__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__1__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__2__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__2__bal_rate__a 0x0038
#define MA_core__pmc__pm_cfg__2__bal_rate__len 2
#define MA_core__pmc__pm_cfg__2__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__2__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__2__bal_rate__reset 0x00
#define MA_core__pmc__pm_cfg__2__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__2__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__2__pm_spare_bit__a 0x0038
#define MA_core__pmc__pm_cfg__2__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__2__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__2__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__2__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__2__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__3__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__3__bal_rate__a 0x003b
#define MA_core__pmc__pm_cfg__3__bal_rate__len 2
#define MA_core__pmc__pm_cfg__3__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__3__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__3__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__3__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__3__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__3__pm_spare_bit__a 0x003b
#define MA_core__pmc__pm_cfg__3__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__3__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__3__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__3__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__3__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__4__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__4__bal_rate__a 0x003e
#define MA_core__pmc__pm_cfg__4__bal_rate__len 2
#define MA_core__pmc__pm_cfg__4__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__4__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__4__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__4__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__4__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__4__pm_spare_bit__a 0x003e
#define MA_core__pmc__pm_cfg__4__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__4__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__4__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__4__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__4__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__5__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__5__bal_rate__a 0x0041
#define MA_core__pmc__pm_cfg__5__bal_rate__len 2
#define MA_core__pmc__pm_cfg__5__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__5__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__5__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__5__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__5__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__5__pm_spare_bit__a 0x0041
#define MA_core__pmc__pm_cfg__5__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__5__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__5__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__5__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__5__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__6__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__6__bal_rate__a 0x0044
#define MA_core__pmc__pm_cfg__6__bal_rate__len 2
#define MA_core__pmc__pm_cfg__6__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__6__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__6__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__6__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__6__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__6__pm_spare_bit__a 0x0044
#define MA_core__pmc__pm_cfg__6__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__6__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__6__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__6__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__6__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__7__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__7__bal_rate__a 0x0047
#define MA_core__pmc__pm_cfg__7__bal_rate__len 2
#define MA_core__pmc__pm_cfg__7__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__7__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__7__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__7__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__7__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__7__pm_spare_bit__a 0x0047
#define MA_core__pmc__pm_cfg__7__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__7__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__7__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__7__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__7__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__8__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__8__bal_rate__a 0x004a
#define MA_core__pmc__pm_cfg__8__bal_rate__len 2
#define MA_core__pmc__pm_cfg__8__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__8__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__8__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__8__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__8__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__8__pm_spare_bit__a 0x004a
#define MA_core__pmc__pm_cfg__8__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__8__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__8__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__8__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__8__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__9__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__9__bal_rate__a 0x004d
#define MA_core__pmc__pm_cfg__9__bal_rate__len 2
#define MA_core__pmc__pm_cfg__9__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__9__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__9__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__9__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__9__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__9__pm_spare_bit__a 0x004d
#define MA_core__pmc__pm_cfg__9__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__9__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__9__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__9__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__9__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__10__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__10__bal_rate__a 0x0050
#define MA_core__pmc__pm_cfg__10__bal_rate__len 2
#define MA_core__pmc__pm_cfg__10__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__10__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__10__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__10__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__10__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__10__pm_spare_bit__a 0x0050
#define MA_core__pmc__pm_cfg__10__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__10__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__10__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__10__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__10__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__11__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__11__bal_rate__a 0x0053
#define MA_core__pmc__pm_cfg__11__bal_rate__len 2
#define MA_core__pmc__pm_cfg__11__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__11__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__11__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__11__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__11__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__11__pm_spare_bit__a 0x0053
#define MA_core__pmc__pm_cfg__11__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__11__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__11__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__11__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__11__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__12__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__12__bal_rate__a 0x0056
#define MA_core__pmc__pm_cfg__12__bal_rate__len 2
#define MA_core__pmc__pm_cfg__12__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__12__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__12__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__12__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__12__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__12__pm_spare_bit__a 0x0056
#define MA_core__pmc__pm_cfg__12__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__12__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__12__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__12__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__12__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__13__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__13__bal_rate__a 0x0059
#define MA_core__pmc__pm_cfg__13__bal_rate__len 2
#define MA_core__pmc__pm_cfg__13__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__13__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__13__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__13__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__13__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__13__pm_spare_bit__a 0x0059
#define MA_core__pmc__pm_cfg__13__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__13__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__13__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__13__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__13__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__14__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__14__bal_rate__a 0x005c
#define MA_core__pmc__pm_cfg__14__bal_rate__len 2
#define MA_core__pmc__pm_cfg__14__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__14__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__14__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__14__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__14__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__14__pm_spare_bit__a 0x005c
#define MA_core__pmc__pm_cfg__14__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__14__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__14__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__14__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__14__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__15__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__15__bal_rate__a 0x005f
#define MA_core__pmc__pm_cfg__15__bal_rate__len 2
#define MA_core__pmc__pm_cfg__15__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__15__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__15__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__15__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__15__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__15__pm_spare_bit__a 0x005f
#define MA_core__pmc__pm_cfg__15__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__15__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__15__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__15__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__15__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__16__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__16__bal_rate__a 0x0062
#define MA_core__pmc__pm_cfg__16__bal_rate__len 2
#define MA_core__pmc__pm_cfg__16__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__16__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__16__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__16__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__16__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__16__pm_spare_bit__a 0x0062
#define MA_core__pmc__pm_cfg__16__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__16__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__16__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__16__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__16__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__17__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__17__bal_rate__a 0x0065
#define MA_core__pmc__pm_cfg__17__bal_rate__len 2
#define MA_core__pmc__pm_cfg__17__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__17__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__17__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__17__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__17__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__17__pm_spare_bit__a 0x0065
#define MA_core__pmc__pm_cfg__17__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__17__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__17__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__17__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__17__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__18__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__18__bal_rate__a 0x0068
#define MA_core__pmc__pm_cfg__18__bal_rate__len 2
#define MA_core__pmc__pm_cfg__18__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__18__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__18__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__18__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__18__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__18__pm_spare_bit__a 0x0068
#define MA_core__pmc__pm_cfg__18__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__18__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__18__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__18__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__18__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__19__bal_rate---
// Vcfly balancing event rate for duty cycled control. "11" => always, "10" => 128kHz, "01" => 64kHz, "00" => 32kHz
#define MA_core__pmc__pm_cfg__19__bal_rate__a 0x006b
#define MA_core__pmc__pm_cfg__19__bal_rate__len 2
#define MA_core__pmc__pm_cfg__19__bal_rate__mask 0x03
#define MA_core__pmc__pm_cfg__19__bal_rate__shift 0x00
#define MA_core__pmc__pm_cfg__19__bal_rate__reset 0x03
#define MA_core__pmc__pm_cfg__19__bal_rate__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__19__pm_spare_bit---
// Single bit for experiemental setting
#define MA_core__pmc__pm_cfg__19__pm_spare_bit__a 0x006b
#define MA_core__pmc__pm_cfg__19__pm_spare_bit__len 1
#define MA_core__pmc__pm_cfg__19__pm_spare_bit__mask 0x40
#define MA_core__pmc__pm_cfg__19__pm_spare_bit__shift 0x06
#define MA_core__pmc__pm_cfg__19__pm_spare_bit__reset 0x00
#define MA_core__pmc__pm_cfg__19__pm_spare_bit__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__0__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__0__bal_ipol_nok__a 0x0032
#define MA_core__pmc__pm_cfg__0__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__0__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__0__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__0__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__0__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__0__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__0__bal_ipol_mode__a 0x0032
#define MA_core__pmc__pm_cfg__0__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__0__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__0__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__0__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__0__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__1__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__1__bal_ipol_nok__a 0x0035
#define MA_core__pmc__pm_cfg__1__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__1__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__1__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__1__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__1__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__1__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__1__bal_ipol_mode__a 0x0035
#define MA_core__pmc__pm_cfg__1__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__1__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__1__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__1__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__1__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__2__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__2__bal_ipol_nok__a 0x0038
#define MA_core__pmc__pm_cfg__2__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__2__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__2__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__2__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__2__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__2__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__2__bal_ipol_mode__a 0x0038
#define MA_core__pmc__pm_cfg__2__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__2__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__2__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__2__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__2__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__3__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__3__bal_ipol_nok__a 0x003b
#define MA_core__pmc__pm_cfg__3__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__3__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__3__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__3__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__3__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__3__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__3__bal_ipol_mode__a 0x003b
#define MA_core__pmc__pm_cfg__3__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__3__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__3__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__3__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__3__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__4__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__4__bal_ipol_nok__a 0x003e
#define MA_core__pmc__pm_cfg__4__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__4__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__4__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__4__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__4__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__4__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__4__bal_ipol_mode__a 0x003e
#define MA_core__pmc__pm_cfg__4__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__4__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__4__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__4__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__4__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__5__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__5__bal_ipol_nok__a 0x0041
#define MA_core__pmc__pm_cfg__5__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__5__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__5__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__5__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__5__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__5__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__5__bal_ipol_mode__a 0x0041
#define MA_core__pmc__pm_cfg__5__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__5__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__5__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__5__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__5__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__6__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__6__bal_ipol_nok__a 0x0044
#define MA_core__pmc__pm_cfg__6__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__6__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__6__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__6__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__6__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__6__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__6__bal_ipol_mode__a 0x0044
#define MA_core__pmc__pm_cfg__6__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__6__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__6__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__6__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__6__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__7__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__7__bal_ipol_nok__a 0x0047
#define MA_core__pmc__pm_cfg__7__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__7__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__7__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__7__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__7__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__7__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__7__bal_ipol_mode__a 0x0047
#define MA_core__pmc__pm_cfg__7__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__7__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__7__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__7__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__7__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__8__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__8__bal_ipol_nok__a 0x004a
#define MA_core__pmc__pm_cfg__8__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__8__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__8__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__8__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__8__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__8__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__8__bal_ipol_mode__a 0x004a
#define MA_core__pmc__pm_cfg__8__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__8__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__8__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__8__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__8__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__9__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__9__bal_ipol_nok__a 0x004d
#define MA_core__pmc__pm_cfg__9__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__9__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__9__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__9__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__9__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__9__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__9__bal_ipol_mode__a 0x004d
#define MA_core__pmc__pm_cfg__9__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__9__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__9__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__9__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__9__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__10__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__10__bal_ipol_nok__a 0x0050
#define MA_core__pmc__pm_cfg__10__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__10__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__10__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__10__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__10__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__10__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__10__bal_ipol_mode__a 0x0050
#define MA_core__pmc__pm_cfg__10__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__10__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__10__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__10__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__10__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__11__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__11__bal_ipol_nok__a 0x0053
#define MA_core__pmc__pm_cfg__11__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__11__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__11__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__11__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__11__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__11__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__11__bal_ipol_mode__a 0x0053
#define MA_core__pmc__pm_cfg__11__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__11__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__11__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__11__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__11__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__12__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__12__bal_ipol_nok__a 0x0056
#define MA_core__pmc__pm_cfg__12__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__12__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__12__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__12__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__12__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__12__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__12__bal_ipol_mode__a 0x0056
#define MA_core__pmc__pm_cfg__12__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__12__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__12__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__12__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__12__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__13__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__13__bal_ipol_nok__a 0x0059
#define MA_core__pmc__pm_cfg__13__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__13__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__13__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__13__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__13__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__13__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__13__bal_ipol_mode__a 0x0059
#define MA_core__pmc__pm_cfg__13__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__13__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__13__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__13__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__13__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__14__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__14__bal_ipol_nok__a 0x005c
#define MA_core__pmc__pm_cfg__14__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__14__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__14__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__14__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__14__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__14__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__14__bal_ipol_mode__a 0x005c
#define MA_core__pmc__pm_cfg__14__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__14__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__14__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__14__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__14__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__15__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__15__bal_ipol_nok__a 0x005f
#define MA_core__pmc__pm_cfg__15__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__15__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__15__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__15__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__15__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__15__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__15__bal_ipol_mode__a 0x005f
#define MA_core__pmc__pm_cfg__15__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__15__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__15__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__15__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__15__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__16__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__16__bal_ipol_nok__a 0x0062
#define MA_core__pmc__pm_cfg__16__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__16__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__16__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__16__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__16__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__16__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__16__bal_ipol_mode__a 0x0062
#define MA_core__pmc__pm_cfg__16__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__16__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__16__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__16__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__16__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__17__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__17__bal_ipol_nok__a 0x0065
#define MA_core__pmc__pm_cfg__17__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__17__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__17__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__17__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__17__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__17__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__17__bal_ipol_mode__a 0x0065
#define MA_core__pmc__pm_cfg__17__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__17__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__17__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__17__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__17__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__18__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__18__bal_ipol_nok__a 0x0068
#define MA_core__pmc__pm_cfg__18__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__18__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__18__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__18__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__18__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__18__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__18__bal_ipol_mode__a 0x0068
#define MA_core__pmc__pm_cfg__18__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__18__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__18__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__18__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__18__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__19__bal_ipol_nok---
// Output Ipol sensor post-processing memory depth. "00"=> 1 sample, "11"=> 4 samples
#define MA_core__pmc__pm_cfg__19__bal_ipol_nok__a 0x006b
#define MA_core__pmc__pm_cfg__19__bal_ipol_nok__len 2
#define MA_core__pmc__pm_cfg__19__bal_ipol_nok__mask 0x0c
#define MA_core__pmc__pm_cfg__19__bal_ipol_nok__shift 0x02
#define MA_core__pmc__pm_cfg__19__bal_ipol_nok__reset 0x01
#define MA_core__pmc__pm_cfg__19__bal_ipol_nok__inputonly 0
//------------------------------------------------------------------------------core__pmc__pm_cfg__19__bal_ipol_mode---
// Output Ipol sensor post-processing method. "00"=>semi-conservative, "01"=>conservative, "10" => off, "11"=>legacy/liberal
#define MA_core__pmc__pm_cfg__19__bal_ipol_mode__a 0x006b
#define MA_core__pmc__pm_cfg__19__bal_ipol_mode__len 2
#define MA_core__pmc__pm_cfg__19__bal_ipol_mode__mask 0x30
#define MA_core__pmc__pm_cfg__19__bal_ipol_mode__shift 0x04
#define MA_core__pmc__pm_cfg__19__bal_ipol_mode__reset 0x00
#define MA_core__pmc__pm_cfg__19__bal_ipol_mode__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP0__pmp_spare---
// 1b. Spare pmp bit
#define MA_core__pmc__otp__PMP0__pmp_spare__a 0x006f
#define MA_core__pmc__otp__PMP0__pmp_spare__len 1
#define MA_core__pmc__otp__PMP0__pmp_spare__mask 0x01
#define MA_core__pmc__otp__PMP0__pmp_spare__shift 0x00
#define MA_core__pmc__otp__PMP0__pmp_spare__reset 0x00
#define MA_core__pmc__otp__PMP0__pmp_spare__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP1__pmp_spare---
// 1b. Spare pmp bit
#define MA_core__pmc__otp__PMP1__pmp_spare__a 0x0074
#define MA_core__pmc__otp__PMP1__pmp_spare__len 1
#define MA_core__pmc__otp__PMP1__pmp_spare__mask 0x01
#define MA_core__pmc__otp__PMP1__pmp_spare__shift 0x00
#define MA_core__pmc__otp__PMP1__pmp_spare__reset 0x00
#define MA_core__pmc__otp__PMP1__pmp_spare__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP2__pmp_spare---
// 1b. Spare pmp bit
#define MA_core__pmc__otp__PMP2__pmp_spare__a 0x0079
#define MA_core__pmc__otp__PMP2__pmp_spare__len 1
#define MA_core__pmc__otp__PMP2__pmp_spare__mask 0x01
#define MA_core__pmc__otp__PMP2__pmp_spare__shift 0x00
#define MA_core__pmc__otp__PMP2__pmp_spare__reset 0x00
#define MA_core__pmc__otp__PMP2__pmp_spare__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP3__pmp_spare---
// 1b. Spare pmp bit
#define MA_core__pmc__otp__PMP3__pmp_spare__a 0x007e
#define MA_core__pmc__otp__PMP3__pmp_spare__len 1
#define MA_core__pmc__otp__PMP3__pmp_spare__mask 0x01
#define MA_core__pmc__otp__PMP3__pmp_spare__shift 0x00
#define MA_core__pmc__otp__PMP3__pmp_spare__reset 0x00
#define MA_core__pmc__otp__PMP3__pmp_spare__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP4__pmp_spare---
// 1b. Spare pmp bit
#define MA_core__pmc__otp__PMP4__pmp_spare__a 0x0083
#define MA_core__pmc__otp__PMP4__pmp_spare__len 1
#define MA_core__pmc__otp__PMP4__pmp_spare__mask 0x01
#define MA_core__pmc__otp__PMP4__pmp_spare__shift 0x00
#define MA_core__pmc__otp__PMP4__pmp_spare__reset 0x00
#define MA_core__pmc__otp__PMP4__pmp_spare__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__PMP5__pmp_spare---
// 1b. Spare pmp bit
#define MA_core__pmc__otp__PMP5__pmp_spare__a 0x0088
#define MA_core__pmc__otp__PMP5__pmp_spare__len 1
#define MA_core__pmc__otp__PMP5__pmp_spare__mask 0x01
#define MA_core__pmc__otp__PMP5__pmp_spare__shift 0x00
#define MA_core__pmc__otp__PMP5__pmp_spare__reset 0x00
#define MA_core__pmc__otp__PMP5__pmp_spare__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__0---
// PWM triangle generator cap trim for each pwmFreqMode
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__0__a 0x008f
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__0__len 5
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__0__mask 0x1f
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__0__shift 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__0__reset 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__0__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__1---
// PWM triangle generator cap trim for each pwmFreqMode
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__1__a 0x0090
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__1__len 5
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__1__mask 0x1f
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__1__shift 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__1__reset 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__1__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__2---
// PWM triangle generator cap trim for each pwmFreqMode
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__2__a 0x0091
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__2__len 5
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__2__mask 0x1f
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__2__shift 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__2__reset 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__2__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__3---
// PWM triangle generator cap trim for each pwmFreqMode
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__3__a 0x0092
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__3__len 5
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__3__mask 0x1f
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__3__shift 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__3__reset 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_table__3__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_comp_bias_setz---
// PWM comparator bias setting: "00" => max, "11" => min
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_bias_setz__a 0x0093
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_bias_setz__len 2
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_bias_setz__mask 0x03
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_bias_setz__shift 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_bias_setz__reset 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_bias_setz__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_comp_pfb_en---
// High to enable PWM comparator positive feedback load
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_pfb_en__a 0x0093
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_pfb_en__len 1
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_pfb_en__mask 0x04
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_pfb_en__shift 0x02
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_pfb_en__reset 0x01
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_comp_pfb_en__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP6__pmp_spare---
// 1b. Spare pmp bit
#define MA_core__pmc__reg__PMP6__pmp_spare__a 0x00a7
#define MA_core__pmc__reg__PMP6__pmp_spare__len 1
#define MA_core__pmc__reg__PMP6__pmp_spare__mask 0x01
#define MA_core__pmc__reg__PMP6__pmp_spare__shift 0x00
#define MA_core__pmc__reg__PMP6__pmp_spare__reset 0x00
#define MA_core__pmc__reg__PMP6__pmp_spare__inputonly 0
//------------------------------------------------------------------------------core__pmc__reg__PMP7__pmp_spare---
// 1b. Spare pmp bit
#define MA_core__pmc__reg__PMP7__pmp_spare__a 0x00ac
#define MA_core__pmc__reg__PMP7__pmp_spare__len 1
#define MA_core__pmc__reg__PMP7__pmp_spare__mask 0x01
#define MA_core__pmc__reg__PMP7__pmp_spare__shift 0x00
#define MA_core__pmc__reg__PMP7__pmp_spare__reset 0x00
#define MA_core__pmc__reg__PMP7__pmp_spare__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_per_pm---
// Choose which PM decides pwmFreqMode for PWM triangle generator cap trim value selection. 0: PM_min, 1: Current PM
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_per_pm__a 0x0093
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_per_pm__len 1
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_per_pm__mask 0x08
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_per_pm__shift 0x03
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_per_pm__reset 0x00
#define MA_core__pmc__otp__pmHwCfg_suppl__pwm_vc_ctrim_per_pm__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__clip_blank_dur---
// Duration (16us cycles) of blanking of the PA clip signal during transition in/out of two-level modulation
#define MA_core__pmc__otp__clip_blank_dur__a 0x00a2
#define MA_core__pmc__otp__clip_blank_dur__len 5
#define MA_core__pmc__otp__clip_blank_dur__mask 0x1f
#define MA_core__pmc__otp__clip_blank_dur__shift 0x00
#define MA_core__pmc__otp__clip_blank_dur__reset 0x0a
#define MA_core__pmc__otp__clip_blank_dur__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__exit_2lvl_dur---
// Duration (16us cycles) of special measures for exiting two-level modulation
#define MA_core__pmc__otp__exit_2lvl_dur__a 0x00a3
#define MA_core__pmc__otp__exit_2lvl_dur__len 5
#define MA_core__pmc__otp__exit_2lvl_dur__mask 0x1f
#define MA_core__pmc__otp__exit_2lvl_dur__shift 0x00
#define MA_core__pmc__otp__exit_2lvl_dur__reset 0x0f
#define MA_core__pmc__otp__exit_2lvl_dur__inputonly 0
//------------------------------------------------------------------------------core__pmc__otp__exit_2lvl_bal_bw---
// Vcfly balancing loop gain/bandwidth during two-level modulation exit
#define MA_core__pmc__otp__exit_2lvl_bal_bw__a 0x00a3
#define MA_core__pmc__otp__exit_2lvl_bal_bw__len 2
#define MA_core__pmc__otp__exit_2lvl_bal_bw__mask 0x60
#define MA_core__pmc__otp__exit_2lvl_bal_bw__shift 0x05
#define MA_core__pmc__otp__exit_2lvl_bal_bw__reset 0x00
#define MA_core__pmc__otp__exit_2lvl_bal_bw__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__gd_ocp_ithr---
// Power stage over-current protection limit level setting
#define MA_core__prot_sys__otp__gd_ocp_ithr__a 0x00c0
#define MA_core__prot_sys__otp__gd_ocp_ithr__len 4
#define MA_core__prot_sys__otp__gd_ocp_ithr__mask 0x1e
#define MA_core__prot_sys__otp__gd_ocp_ithr__shift 0x01
#define MA_core__prot_sys__otp__gd_ocp_ithr__reset 0x0b
#define MA_core__prot_sys__otp__gd_ocp_ithr__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__ocp_sev_tbase---
// Time base for severe-OCP scanner
#define MA_core__prot_sys__otp__ocp_sev_tbase__a 0x00c0
#define MA_core__prot_sys__otp__ocp_sev_tbase__len 3
#define MA_core__prot_sys__otp__ocp_sev_tbase__mask 0xe0
#define MA_core__prot_sys__otp__ocp_sev_tbase__shift 0x05
#define MA_core__prot_sys__otp__ocp_sev_tbase__reset 0x03
#define MA_core__prot_sys__otp__ocp_sev_tbase__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__ocp_sev_thr---
// Counting limit for severe-OCP event generator
#define MA_core__prot_sys__otp__ocp_sev_thr__a 0x00c1
#define MA_core__prot_sys__otp__ocp_sev_thr__len 8
#define MA_core__prot_sys__otp__ocp_sev_thr__mask 0xff
#define MA_core__prot_sys__otp__ocp_sev_thr__shift 0x00
#define MA_core__prot_sys__otp__ocp_sev_thr__reset 0x20
#define MA_core__prot_sys__otp__ocp_sev_thr__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__ocp_sev_dec_rate---
// Zero-event count per severe-OCP counter decrement step.:
#define MA_core__prot_sys__otp__ocp_sev_dec_rate__a 0x00c2
#define MA_core__prot_sys__otp__ocp_sev_dec_rate__len 4
#define MA_core__prot_sys__otp__ocp_sev_dec_rate__mask 0x0f
#define MA_core__prot_sys__otp__ocp_sev_dec_rate__shift 0x00
#define MA_core__prot_sys__otp__ocp_sev_dec_rate__reset 0x08
#define MA_core__prot_sys__otp__ocp_sev_dec_rate__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__clip_sev_tbase---
// Time base for severe-clip ("stuck") scanner
#define MA_core__prot_sys__otp__clip_sev_tbase__a 0x00c3
#define MA_core__prot_sys__otp__clip_sev_tbase__len 3
#define MA_core__prot_sys__otp__clip_sev_tbase__mask 0x07
#define MA_core__prot_sys__otp__clip_sev_tbase__shift 0x00
#define MA_core__prot_sys__otp__clip_sev_tbase__reset 0x07
#define MA_core__prot_sys__otp__clip_sev_tbase__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__clip_sev_dec_rate---
// Zero-event counts per severe-clip counter decrement step.
#define MA_core__prot_sys__otp__clip_sev_dec_rate__a 0x00c3
#define MA_core__prot_sys__otp__clip_sev_dec_rate__len 4
#define MA_core__prot_sys__otp__clip_sev_dec_rate__mask 0x78
#define MA_core__prot_sys__otp__clip_sev_dec_rate__shift 0x03
#define MA_core__prot_sys__otp__clip_sev_dec_rate__reset 0x00
#define MA_core__prot_sys__otp__clip_sev_dec_rate__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__clip_sev_thr---
// Counting limit for severe-clip event generator
#define MA_core__prot_sys__otp__clip_sev_thr__a 0x00c4
#define MA_core__prot_sys__otp__clip_sev_thr__len 8
#define MA_core__prot_sys__otp__clip_sev_thr__mask 0xff
#define MA_core__prot_sys__otp__clip_sev_thr__shift 0x00
#define MA_core__prot_sys__otp__clip_sev_thr__reset 0xe5
#define MA_core__prot_sys__otp__clip_sev_thr__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__clip_countThr---
// "Clip stuck" protection count threshold (10ms per step)
#define MA_core__prot_sys__otp__clip_countThr__a 0x00c8
#define MA_core__prot_sys__otp__clip_countThr__len 4
#define MA_core__prot_sys__otp__clip_countThr__mask 0x0f
#define MA_core__prot_sys__otp__clip_countThr__shift 0x00
#define MA_core__prot_sys__otp__clip_countThr__reset 0x03
#define MA_core__prot_sys__otp__clip_countThr__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__countThr_short---
// Number of 10us cycles in a "short" event response
#define MA_core__prot_sys__otp__countThr_short__a 0x00cf
#define MA_core__prot_sys__otp__countThr_short__len 8
#define MA_core__prot_sys__otp__countThr_short__mask 0xff
#define MA_core__prot_sys__otp__countThr_short__shift 0x00
#define MA_core__prot_sys__otp__countThr_short__reset 0x10
#define MA_core__prot_sys__otp__countThr_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__countThr_long---
// Number of 1ms cycles in a "long" event response
#define MA_core__prot_sys__otp__countThr_long__a 0x00d0
#define MA_core__prot_sys__otp__countThr_long__len 8
#define MA_core__prot_sys__otp__countThr_long__mask 0xff
#define MA_core__prot_sys__otp__countThr_long__shift 0x00
#define MA_core__prot_sys__otp__countThr_long__reset 0x20
#define MA_core__prot_sys__otp__countThr_long__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__countThr_unlatch---
// Number of 100ms cycles before a latch auto-reset is performed
#define MA_core__prot_sys__otp__countThr_unlatch__a 0x00d1
#define MA_core__prot_sys__otp__countThr_unlatch__len 8
#define MA_core__prot_sys__otp__countThr_unlatch__mask 0xff
#define MA_core__prot_sys__otp__countThr_unlatch__shift 0x00
#define MA_core__prot_sys__otp__countThr_unlatch__reset 0x0a
#define MA_core__prot_sys__otp__countThr_unlatch__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__reduceVol---
// Trigger reduction of channel volume on error
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__reduceVol__a 0x00d2
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__reduceVol__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__mute_short---
// Trigger mute of channel while error w/ short extension
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__mute_short__a 0x00d2
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__mute_short__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__mute_short__mask 0x02
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__mute_short__shift 0x01
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__mute_short__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_short---
// Trigger Vcfly precharge in half bridge while error (with "short" extension)
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_short__a 0x00d2
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_short__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_short__mask 0x04
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_short__shift 0x02
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_short__reset 0x01
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_long---
// Trigger Vcfly precharge in half bridge while error (with "long" extension)
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_long__a 0x00d2
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_long__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_long__mask 0x08
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_long__shift 0x03
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_long__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pchg_long__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__ser_rapidFire_short---
// Trigger rapid update of all channel gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__ser_rapidFire_short__a 0x00d2
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__ser_rapidFire_short__mask 0x10
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__ser_rapidFire_short__shift 0x04
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__ser_rapidFire_short__reset 0x01
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__gd_dp_cont_short---
// Trigger continuous operation of gate driver level shifters in channel (with "short" extension)
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__gd_dp_cont_short__a 0x00d2
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__gd_dp_cont_short__mask 0x20
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__gd_dp_cont_short__shift 0x05
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dis_lf_clip_rec_short__a 0x00d2
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dis_lf_clip_rec_short__mask 0x40
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dis_lf_clip_rec_short__shift 0x06
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dis_lf_clip_rec_short__reset 0x01
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__powerMode_max---
// Trigger jump to max. power mode for channel
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__powerMode_max__a 0x00d2
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__powerMode_max__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__powerMode_max__mask 0x80
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__powerMode_max__shift 0x07
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__powerMode_max__reset 0x01
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__powerMode_max__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action0---
// Trigger DSP channel-action flag 0
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action0__a 0x00d3
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action1---
// Trigger DSP channel-action flag 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action1__a 0x00d3
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action2---
// Trigger DSP channel-action flag 2
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action2__a 0x00d3
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action3---
// Trigger DSP channel-action flag 3
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action3__a 0x00d3
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__reduceVol__a 0x00d4
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__reduceVol__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__mute_short__a 0x00d4
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__mute_short__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__mute_short__mask 0x02
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__mute_short__shift 0x01
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__mute_short__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__ser_rapidFire_short__a 0x00d4
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__gd_dp_cont_short__a 0x00d4
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__dis_lf_clip_rec_short__a 0x00d4
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action0__a 0x00d5
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action1__a 0x00d5
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action2__a 0x00d5
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action3__a 0x00d5
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__reduceVol---
// Trigger reduction of channel volume on error
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__reduceVol__a 0x00d6
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__reduceVol__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__reduceVol__reset 0x01
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__mute_short---
// Trigger mute of channel while error w/ short extension
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__mute_short__a 0x00d6
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__mute_short__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__mute_short__mask 0x02
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__mute_short__shift 0x01
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__mute_short__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_short---
// Trigger Vcfly precharge in half bridge while error (with "short" extension)
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_short__a 0x00d6
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_short__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_short__mask 0x04
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_short__shift 0x02
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_short__reset 0x01
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_long---
// Trigger Vcfly precharge in half bridge while error (with "long" extension)
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_long__a 0x00d6
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_long__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_long__mask 0x08
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_long__shift 0x03
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_long__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pchg_long__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__ser_rapidFire_short---
// Trigger rapid update of all channel gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__ser_rapidFire_short__a 0x00d6
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__ser_rapidFire_short__mask 0x10
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__ser_rapidFire_short__shift 0x04
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__gd_dp_cont_short---
// Trigger continuous operation of gate driver level shifters in channel (with "short" extension)
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__gd_dp_cont_short__a 0x00d6
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__gd_dp_cont_short__mask 0x20
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__gd_dp_cont_short__shift 0x05
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dis_lf_clip_rec_short__a 0x00d6
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dis_lf_clip_rec_short__mask 0x40
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dis_lf_clip_rec_short__shift 0x06
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__powerMode_max---
// Trigger jump to max. power mode for channel
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__powerMode_max__a 0x00d6
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__powerMode_max__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__powerMode_max__mask 0x80
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__powerMode_max__shift 0x07
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__powerMode_max__reset 0x01
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__powerMode_max__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action0---
// Trigger DSP channel-action flag 0
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action0__a 0x00d7
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action1---
// Trigger DSP channel-action flag 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action1__a 0x00d7
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action2---
// Trigger DSP channel-action flag 2
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action2__a 0x00d7
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action3---
// Trigger DSP channel-action flag 3
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action3__a 0x00d7
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__reduceVol__a 0x00d8
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__reduceVol__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__mute_short__a 0x00d8
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__mute_short__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__mute_short__mask 0x02
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__mute_short__shift 0x01
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__mute_short__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__ser_rapidFire_short__a 0x00d8
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__gd_dp_cont_short__a 0x00d8
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__dis_lf_clip_rec_short__a 0x00d8
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action0__a 0x00d9
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action1__a 0x00d9
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action2__a 0x00d9
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action3__a 0x00d9
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__reduceVol---
// Trigger reduction of channel volume on error
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__reduceVol__a 0x00da
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__reduceVol__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__mute_short---
// Trigger mute of channel while error w/ short extension
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__mute_short__a 0x00da
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__mute_short__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__mute_short__mask 0x02
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__mute_short__shift 0x01
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__mute_short__reset 0x01
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_short---
// Trigger Vcfly precharge in half bridge while error (with "short" extension)
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_short__a 0x00da
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_short__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_short__mask 0x04
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_short__shift 0x02
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_short__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_long---
// Trigger Vcfly precharge in half bridge while error (with "long" extension)
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_long__a 0x00da
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_long__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_long__mask 0x08
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_long__shift 0x03
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_long__reset 0x01
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pchg_long__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__ser_rapidFire_short---
// Trigger rapid update of all channel gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__ser_rapidFire_short__a 0x00da
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__ser_rapidFire_short__mask 0x10
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__ser_rapidFire_short__shift 0x04
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__gd_dp_cont_short---
// Trigger continuous operation of gate driver level shifters in channel (with "short" extension)
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__gd_dp_cont_short__a 0x00da
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__gd_dp_cont_short__mask 0x20
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__gd_dp_cont_short__shift 0x05
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dis_lf_clip_rec_short__a 0x00da
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dis_lf_clip_rec_short__mask 0x40
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dis_lf_clip_rec_short__shift 0x06
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__powerMode_max---
// Trigger jump to max. power mode for channel
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__powerMode_max__a 0x00da
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__powerMode_max__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__powerMode_max__mask 0x80
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__powerMode_max__shift 0x07
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__powerMode_max__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__powerMode_max__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action0---
// Trigger DSP channel-action flag 0
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action0__a 0x00db
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action1---
// Trigger DSP channel-action flag 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action1__a 0x00db
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action2---
// Trigger DSP channel-action flag 2
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action2__a 0x00db
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action3---
// Trigger DSP channel-action flag 3
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action3__a 0x00db
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__reduceVol__a 0x00dc
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__reduceVol__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__mute_short__a 0x00dc
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__mute_short__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__mute_short__mask 0x02
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__mute_short__shift 0x01
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__mute_short__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__ser_rapidFire_short__a 0x00dc
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__gd_dp_cont_short__a 0x00dc
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__dis_lf_clip_rec_short__a 0x00dc
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action0__a 0x00dd
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action1__a 0x00dd
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action2__a 0x00dd
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action3__a 0x00dd
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__reduceVol---
// Trigger reduction of channel volume on error
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__reduceVol__a 0x00de
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__reduceVol__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__mute_short---
// Trigger mute of channel while error w/ short extension
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__mute_short__a 0x00de
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__mute_short__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__mute_short__mask 0x02
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__mute_short__shift 0x01
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__mute_short__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_short---
// Trigger Vcfly precharge in half bridge while error (with "short" extension)
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_short__a 0x00de
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_short__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_short__mask 0x04
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_short__shift 0x02
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_short__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_long---
// Trigger Vcfly precharge in half bridge while error (with "long" extension)
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_long__a 0x00de
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_long__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_long__mask 0x08
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_long__shift 0x03
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_long__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pchg_long__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__ser_rapidFire_short---
// Trigger rapid update of all channel gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__ser_rapidFire_short__a 0x00de
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__ser_rapidFire_short__mask 0x10
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__ser_rapidFire_short__shift 0x04
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__gd_dp_cont_short---
// Trigger continuous operation of gate driver level shifters in channel (with "short" extension)
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__gd_dp_cont_short__a 0x00de
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__gd_dp_cont_short__mask 0x20
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__gd_dp_cont_short__shift 0x05
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dis_lf_clip_rec_short__a 0x00de
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dis_lf_clip_rec_short__mask 0x40
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dis_lf_clip_rec_short__shift 0x06
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__powerMode_max---
// Trigger jump to max. power mode for channel
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__powerMode_max__a 0x00de
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__powerMode_max__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__powerMode_max__mask 0x80
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__powerMode_max__shift 0x07
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__powerMode_max__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__powerMode_max__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action0---
// Trigger DSP channel-action flag 0
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action0__a 0x00df
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action1---
// Trigger DSP channel-action flag 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action1__a 0x00df
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action2---
// Trigger DSP channel-action flag 2
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action2__a 0x00df
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action3---
// Trigger DSP channel-action flag 3
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action3__a 0x00df
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__reduceVol__a 0x00e0
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__reduceVol__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__mute_short__a 0x00e0
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__mute_short__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__mute_short__mask 0x02
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__mute_short__shift 0x01
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__mute_short__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__ser_rapidFire_short__a 0x00e0
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__gd_dp_cont_short__a 0x00e0
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__dis_lf_clip_rec_short__a 0x00e0
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action0__a 0x00e1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action1__a 0x00e1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action2__a 0x00e1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action3__a 0x00e1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__reduceVol---
// Trigger reduction of channel volume on error
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__reduceVol__a 0x00e2
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__reduceVol__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__mute_short---
// Trigger mute of channel while error w/ short extension
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__mute_short__a 0x00e2
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__mute_short__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__mute_short__mask 0x02
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__mute_short__shift 0x01
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__mute_short__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_short---
// Trigger Vcfly precharge in half bridge while error (with "short" extension)
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_short__a 0x00e2
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_short__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_short__mask 0x04
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_short__shift 0x02
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_short__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_long---
// Trigger Vcfly precharge in half bridge while error (with "long" extension)
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_long__a 0x00e2
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_long__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_long__mask 0x08
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_long__shift 0x03
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_long__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pchg_long__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__ser_rapidFire_short---
// Trigger rapid update of all channel gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__ser_rapidFire_short__a 0x00e2
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__ser_rapidFire_short__mask 0x10
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__ser_rapidFire_short__shift 0x04
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__gd_dp_cont_short---
// Trigger continuous operation of gate driver level shifters in channel (with "short" extension)
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__gd_dp_cont_short__a 0x00e2
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__gd_dp_cont_short__mask 0x20
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__gd_dp_cont_short__shift 0x05
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dis_lf_clip_rec_short__a 0x00e2
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dis_lf_clip_rec_short__mask 0x40
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dis_lf_clip_rec_short__shift 0x06
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dis_lf_clip_rec_short__reset 0x01
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__powerMode_max---
// Trigger jump to max. power mode for channel
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__powerMode_max__a 0x00e2
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__powerMode_max__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__powerMode_max__mask 0x80
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__powerMode_max__shift 0x07
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__powerMode_max__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__powerMode_max__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action0---
// Trigger DSP channel-action flag 0
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action0__a 0x00e3
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action1---
// Trigger DSP channel-action flag 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action1__a 0x00e3
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action2---
// Trigger DSP channel-action flag 2
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action2__a 0x00e3
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action3---
// Trigger DSP channel-action flag 3
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action3__a 0x00e3
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__reduceVol__a 0x00e4
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__reduceVol__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__mute_short__a 0x00e4
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__mute_short__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__mute_short__mask 0x02
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__mute_short__shift 0x01
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__mute_short__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__ser_rapidFire_short__a 0x00e4
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__gd_dp_cont_short__a 0x00e4
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__dis_lf_clip_rec_short__a 0x00e4
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action0__a 0x00e5
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action1__a 0x00e5
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action2__a 0x00e5
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action3__a 0x00e5
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__otw_action__reduceVol__a 0x00e6
#define MA_core__prot_sys__reg__otw_action__reduceVol__len 1
#define MA_core__prot_sys__reg__otw_action__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__otw_action__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__otw_action__reduceVol__reset 0x01
#define MA_core__prot_sys__reg__otw_action__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__otw_action__mute_short__a 0x00e6
#define MA_core__prot_sys__reg__otw_action__mute_short__len 1
#define MA_core__prot_sys__reg__otw_action__mute_short__mask 0x02
#define MA_core__prot_sys__reg__otw_action__mute_short__shift 0x01
#define MA_core__prot_sys__reg__otw_action__mute_short__reset 0x00
#define MA_core__prot_sys__reg__otw_action__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__otw_action__ser_rapidFire_short__a 0x00e6
#define MA_core__prot_sys__reg__otw_action__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__otw_action__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__otw_action__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__otw_action__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__otw_action__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__otw_action__gd_dp_cont_short__a 0x00e6
#define MA_core__prot_sys__reg__otw_action__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__otw_action__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__otw_action__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__otw_action__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__otw_action__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__otw_action__dis_lf_clip_rec_short__a 0x00e6
#define MA_core__prot_sys__reg__otw_action__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__otw_action__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__otw_action__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__otw_action__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__otw_action__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action0__a 0x00e7
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action1__a 0x00e7
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action2__a 0x00e7
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action3__a 0x00e7
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__otw_action__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__ote_action__reduceVol__a 0x00e8
#define MA_core__prot_sys__reg__ote_action__reduceVol__len 1
#define MA_core__prot_sys__reg__ote_action__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__ote_action__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__ote_action__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__ote_action__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__ote_action__mute_short__a 0x00e8
#define MA_core__prot_sys__reg__ote_action__mute_short__len 1
#define MA_core__prot_sys__reg__ote_action__mute_short__mask 0x02
#define MA_core__prot_sys__reg__ote_action__mute_short__shift 0x01
#define MA_core__prot_sys__reg__ote_action__mute_short__reset 0x00
#define MA_core__prot_sys__reg__ote_action__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__ote_action__ser_rapidFire_short__a 0x00e8
#define MA_core__prot_sys__reg__ote_action__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__ote_action__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__ote_action__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__ote_action__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__ote_action__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__ote_action__gd_dp_cont_short__a 0x00e8
#define MA_core__prot_sys__reg__ote_action__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__ote_action__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__ote_action__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__ote_action__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__ote_action__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__ote_action__dis_lf_clip_rec_short__a 0x00e8
#define MA_core__prot_sys__reg__ote_action__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__ote_action__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__ote_action__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__ote_action__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__ote_action__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action0__a 0x00e9
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action1__a 0x00e9
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action2__a 0x00e9
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action3__a 0x00e9
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__ote_action__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__pvdd_uv_action__reduceVol__a 0x00ea
#define MA_core__prot_sys__reg__pvdd_uv_action__reduceVol__len 1
#define MA_core__prot_sys__reg__pvdd_uv_action__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__pvdd_uv_action__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__pvdd_uv_action__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__pvdd_uv_action__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__pvdd_uv_action__mute_short__a 0x00ea
#define MA_core__prot_sys__reg__pvdd_uv_action__mute_short__len 1
#define MA_core__prot_sys__reg__pvdd_uv_action__mute_short__mask 0x02
#define MA_core__prot_sys__reg__pvdd_uv_action__mute_short__shift 0x01
#define MA_core__prot_sys__reg__pvdd_uv_action__mute_short__reset 0x01
#define MA_core__prot_sys__reg__pvdd_uv_action__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_uv_action__ser_rapidFire_short__a 0x00ea
#define MA_core__prot_sys__reg__pvdd_uv_action__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__pvdd_uv_action__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__pvdd_uv_action__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__pvdd_uv_action__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__pvdd_uv_action__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_uv_action__gd_dp_cont_short__a 0x00ea
#define MA_core__prot_sys__reg__pvdd_uv_action__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__pvdd_uv_action__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__pvdd_uv_action__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__pvdd_uv_action__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__pvdd_uv_action__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_uv_action__dis_lf_clip_rec_short__a 0x00ea
#define MA_core__prot_sys__reg__pvdd_uv_action__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__pvdd_uv_action__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__pvdd_uv_action__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__pvdd_uv_action__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__pvdd_uv_action__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action0__a 0x00eb
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action1__a 0x00eb
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action2__a 0x00eb
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action3__a 0x00eb
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__pvdd_uv_action__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__pvdd_low_action__reduceVol__a 0x00ec
#define MA_core__prot_sys__reg__pvdd_low_action__reduceVol__len 1
#define MA_core__prot_sys__reg__pvdd_low_action__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__pvdd_low_action__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__pvdd_low_action__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__pvdd_low_action__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__pvdd_low_action__mute_short__a 0x00ec
#define MA_core__prot_sys__reg__pvdd_low_action__mute_short__len 1
#define MA_core__prot_sys__reg__pvdd_low_action__mute_short__mask 0x02
#define MA_core__prot_sys__reg__pvdd_low_action__mute_short__shift 0x01
#define MA_core__prot_sys__reg__pvdd_low_action__mute_short__reset 0x00
#define MA_core__prot_sys__reg__pvdd_low_action__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_low_action__ser_rapidFire_short__a 0x00ec
#define MA_core__prot_sys__reg__pvdd_low_action__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__pvdd_low_action__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__pvdd_low_action__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__pvdd_low_action__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__pvdd_low_action__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_low_action__gd_dp_cont_short__a 0x00ec
#define MA_core__prot_sys__reg__pvdd_low_action__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__pvdd_low_action__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__pvdd_low_action__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__pvdd_low_action__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__pvdd_low_action__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_low_action__dis_lf_clip_rec_short__a 0x00ec
#define MA_core__prot_sys__reg__pvdd_low_action__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__pvdd_low_action__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__pvdd_low_action__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__pvdd_low_action__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__pvdd_low_action__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action0__a 0x00ed
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action1__a 0x00ed
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action2__a 0x00ed
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action3__a 0x00ed
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__pvdd_low_action__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__pvdd_ov_action__reduceVol__a 0x00f0
#define MA_core__prot_sys__reg__pvdd_ov_action__reduceVol__len 1
#define MA_core__prot_sys__reg__pvdd_ov_action__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__pvdd_ov_action__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__pvdd_ov_action__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__pvdd_ov_action__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__pvdd_ov_action__mute_short__a 0x00f0
#define MA_core__prot_sys__reg__pvdd_ov_action__mute_short__len 1
#define MA_core__prot_sys__reg__pvdd_ov_action__mute_short__mask 0x02
#define MA_core__prot_sys__reg__pvdd_ov_action__mute_short__shift 0x01
#define MA_core__prot_sys__reg__pvdd_ov_action__mute_short__reset 0x00
#define MA_core__prot_sys__reg__pvdd_ov_action__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_ov_action__ser_rapidFire_short__a 0x00f0
#define MA_core__prot_sys__reg__pvdd_ov_action__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__pvdd_ov_action__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__pvdd_ov_action__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__pvdd_ov_action__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__pvdd_ov_action__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_ov_action__gd_dp_cont_short__a 0x00f0
#define MA_core__prot_sys__reg__pvdd_ov_action__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__pvdd_ov_action__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__pvdd_ov_action__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__pvdd_ov_action__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__pvdd_ov_action__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_ov_action__dis_lf_clip_rec_short__a 0x00f0
#define MA_core__prot_sys__reg__pvdd_ov_action__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__pvdd_ov_action__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__pvdd_ov_action__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__pvdd_ov_action__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__pvdd_ov_action__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action0__a 0x00f1
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action1__a 0x00f1
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action2__a 0x00f1
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action3__a 0x00f1
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__pvdd_ov_action__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__no_clock_action__reduceVol__a 0x00f2
#define MA_core__prot_sys__reg__no_clock_action__reduceVol__len 1
#define MA_core__prot_sys__reg__no_clock_action__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__no_clock_action__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__no_clock_action__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__no_clock_action__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__no_clock_action__mute_short__a 0x00f2
#define MA_core__prot_sys__reg__no_clock_action__mute_short__len 1
#define MA_core__prot_sys__reg__no_clock_action__mute_short__mask 0x02
#define MA_core__prot_sys__reg__no_clock_action__mute_short__shift 0x01
#define MA_core__prot_sys__reg__no_clock_action__mute_short__reset 0x01
#define MA_core__prot_sys__reg__no_clock_action__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__no_clock_action__ser_rapidFire_short__a 0x00f2
#define MA_core__prot_sys__reg__no_clock_action__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__no_clock_action__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__no_clock_action__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__no_clock_action__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__no_clock_action__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__no_clock_action__gd_dp_cont_short__a 0x00f2
#define MA_core__prot_sys__reg__no_clock_action__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__no_clock_action__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__no_clock_action__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__no_clock_action__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__no_clock_action__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__no_clock_action__dis_lf_clip_rec_short__a 0x00f2
#define MA_core__prot_sys__reg__no_clock_action__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__no_clock_action__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__no_clock_action__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__no_clock_action__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__no_clock_action__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action0__a 0x00f3
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action1__a 0x00f3
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action2__a 0x00f3
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action3__a 0x00f3
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__no_clock_action__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__no_audio_action__reduceVol__a 0x00f4
#define MA_core__prot_sys__reg__no_audio_action__reduceVol__len 1
#define MA_core__prot_sys__reg__no_audio_action__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__no_audio_action__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__no_audio_action__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__no_audio_action__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__no_audio_action__mute_short__a 0x00f4
#define MA_core__prot_sys__reg__no_audio_action__mute_short__len 1
#define MA_core__prot_sys__reg__no_audio_action__mute_short__mask 0x02
#define MA_core__prot_sys__reg__no_audio_action__mute_short__shift 0x01
#define MA_core__prot_sys__reg__no_audio_action__mute_short__reset 0x00
#define MA_core__prot_sys__reg__no_audio_action__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__no_audio_action__ser_rapidFire_short__a 0x00f4
#define MA_core__prot_sys__reg__no_audio_action__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__no_audio_action__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__no_audio_action__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__no_audio_action__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__no_audio_action__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__no_audio_action__gd_dp_cont_short__a 0x00f4
#define MA_core__prot_sys__reg__no_audio_action__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__no_audio_action__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__no_audio_action__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__no_audio_action__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__no_audio_action__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__no_audio_action__dis_lf_clip_rec_short__a 0x00f4
#define MA_core__prot_sys__reg__no_audio_action__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__no_audio_action__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__no_audio_action__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__no_audio_action__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__no_audio_action__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action0__a 0x00f5
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action1__a 0x00f5
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action2__a 0x00f5
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action3__a 0x00f5
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__no_audio_action__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__temp_low_action__reduceVol__a 0x00f6
#define MA_core__prot_sys__reg__temp_low_action__reduceVol__len 1
#define MA_core__prot_sys__reg__temp_low_action__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__temp_low_action__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__temp_low_action__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__temp_low_action__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__temp_low_action__mute_short__a 0x00f6
#define MA_core__prot_sys__reg__temp_low_action__mute_short__len 1
#define MA_core__prot_sys__reg__temp_low_action__mute_short__mask 0x02
#define MA_core__prot_sys__reg__temp_low_action__mute_short__shift 0x01
#define MA_core__prot_sys__reg__temp_low_action__mute_short__reset 0x00
#define MA_core__prot_sys__reg__temp_low_action__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__temp_low_action__ser_rapidFire_short__a 0x00f6
#define MA_core__prot_sys__reg__temp_low_action__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__temp_low_action__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__temp_low_action__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__temp_low_action__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__temp_low_action__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__temp_low_action__gd_dp_cont_short__a 0x00f6
#define MA_core__prot_sys__reg__temp_low_action__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__temp_low_action__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__temp_low_action__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__temp_low_action__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__temp_low_action__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__temp_low_action__dis_lf_clip_rec_short__a 0x00f6
#define MA_core__prot_sys__reg__temp_low_action__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__temp_low_action__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__temp_low_action__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__temp_low_action__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__temp_low_action__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action0__a 0x00f7
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action1__a 0x00f7
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action2__a 0x00f7
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action3__a 0x00f7
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__temp_low_action__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__pvddT_low_action__reduceVol__a 0x00f8
#define MA_core__prot_sys__reg__pvddT_low_action__reduceVol__len 1
#define MA_core__prot_sys__reg__pvddT_low_action__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__pvddT_low_action__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__pvddT_low_action__mute_short__a 0x00f8
#define MA_core__prot_sys__reg__pvddT_low_action__mute_short__len 1
#define MA_core__prot_sys__reg__pvddT_low_action__mute_short__mask 0x02
#define MA_core__prot_sys__reg__pvddT_low_action__mute_short__shift 0x01
#define MA_core__prot_sys__reg__pvddT_low_action__mute_short__reset 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__pvddT_low_action__ser_rapidFire_short__a 0x00f8
#define MA_core__prot_sys__reg__pvddT_low_action__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__pvddT_low_action__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__pvddT_low_action__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__pvddT_low_action__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__pvddT_low_action__gd_dp_cont_short__a 0x00f8
#define MA_core__prot_sys__reg__pvddT_low_action__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__pvddT_low_action__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__pvddT_low_action__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__pvddT_low_action__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__pvddT_low_action__dis_lf_clip_rec_short__a 0x00f8
#define MA_core__prot_sys__reg__pvddT_low_action__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__pvddT_low_action__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__pvddT_low_action__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__pvddT_low_action__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action0__a 0x00f9
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action1__a 0x00f9
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action2__a 0x00f9
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action3__a 0x00f9
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_en---
// High to enable error triger (debug) function
#define MA_core__prot_sys__reg__errTrig_en__a 0x0104
#define MA_core__prot_sys__reg__errTrig_en__len 1
#define MA_core__prot_sys__reg__errTrig_en__mask 0x01
#define MA_core__prot_sys__reg__errTrig_en__shift 0x00
#define MA_core__prot_sys__reg__errTrig_en__reset 0x00
#define MA_core__prot_sys__reg__errTrig_en__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_reset---
// High to trigger a single reset of error trigger
#define MA_core__prot_sys__reg__errTrig_reset__a 0x0104
#define MA_core__prot_sys__reg__errTrig_reset__len 1
#define MA_core__prot_sys__reg__errTrig_reset__mask 0x02
#define MA_core__prot_sys__reg__errTrig_reset__shift 0x01
#define MA_core__prot_sys__reg__errTrig_reset__reset 0x00
#define MA_core__prot_sys__reg__errTrig_reset__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errVect_trig_mask__errVector_ch0---
// [ clip_stuck dc vcf_err ocp_severe ocp ] <-- clip_stuck is hidden
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch0__a 0x0105
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch0__len 5
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch0__mask 0x1f
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch0__shift 0x00
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch0__reset 0x00
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errVect_trig_mask__errVector_ch1---
// [ clip_stuck dc vcf_err ocp_severe ocp ]
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch1__a 0x0106
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch1__len 5
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch1__mask 0x1f
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch1__shift 0x00
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch1__reset 0x00
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_ch1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errVect_trig_mask__errVector_all__0---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__0__a 0x0107
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__0__len 8
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__0__mask 0xff
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__0__shift 0x00
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__0__reset 0x00
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errVect_trig_mask__errVector_all__1---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__1__a 0x0108
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__1__len 7
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__1__mask 0x7f
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__1__shift 0x00
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__1__reset 0x00
#define MA_core__prot_sys__reg__errVect_trig_mask__errVector_all__1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errLatch_reset---
// Low->high fires single errorLatch unlock event (both channels at once)
#define MA_core__prot_sys__reg__errLatch_reset__a 0x0109
#define MA_core__prot_sys__reg__errLatch_reset__len 1
#define MA_core__prot_sys__reg__errLatch_reset__mask 0x01
#define MA_core__prot_sys__reg__errLatch_reset__shift 0x00
#define MA_core__prot_sys__reg__errLatch_reset__reset 0x00
#define MA_core__prot_sys__reg__errLatch_reset__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__errVect_now__errVector_ch0---
// [ clip_stuck dc vcf_err ocp_severe ocp ] <-- clip_stuck is hidden
#define MA_core__prot_sys__errVect_now__errVector_ch0__a 0x0118
#define MA_core__prot_sys__errVect_now__errVector_ch0__len 5
#define MA_core__prot_sys__errVect_now__errVector_ch0__mask 0x1f
#define MA_core__prot_sys__errVect_now__errVector_ch0__shift 0x00
#define MA_core__prot_sys__errVect_now__errVector_ch0__reset 0x00
#define MA_core__prot_sys__errVect_now__errVector_ch0__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_now__errVector_ch1---
// [ clip_stuck dc vcf_err ocp_severe ocp ]
#define MA_core__prot_sys__errVect_now__errVector_ch1__a 0x0119
#define MA_core__prot_sys__errVect_now__errVector_ch1__len 5
#define MA_core__prot_sys__errVect_now__errVector_ch1__mask 0x1f
#define MA_core__prot_sys__errVect_now__errVector_ch1__shift 0x00
#define MA_core__prot_sys__errVect_now__errVector_ch1__reset 0x00
#define MA_core__prot_sys__errVect_now__errVector_ch1__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_now__errVector_all__0---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
#define MA_core__prot_sys__errVect_now__errVector_all__0__a 0x011a
#define MA_core__prot_sys__errVect_now__errVector_all__0__len 8
#define MA_core__prot_sys__errVect_now__errVector_all__0__mask 0xff
#define MA_core__prot_sys__errVect_now__errVector_all__0__shift 0x00
#define MA_core__prot_sys__errVect_now__errVector_all__0__reset 0x00
#define MA_core__prot_sys__errVect_now__errVector_all__0__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_now__errVector_all__1---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
#define MA_core__prot_sys__errVect_now__errVector_all__1__a 0x011b
#define MA_core__prot_sys__errVect_now__errVector_all__1__len 7
#define MA_core__prot_sys__errVect_now__errVector_all__1__mask 0x7f
#define MA_core__prot_sys__errVect_now__errVector_all__1__shift 0x00
#define MA_core__prot_sys__errVect_now__errVector_all__1__reset 0x00
#define MA_core__prot_sys__errVect_now__errVector_all__1__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_acc__errVector_ch0---
// [ clip_stuck dc vcf_err ocp_severe ocp ] <-- clip_stuck is hidden
#define MA_core__prot_sys__errVect_acc__errVector_ch0__a 0x011c
#define MA_core__prot_sys__errVect_acc__errVector_ch0__len 5
#define MA_core__prot_sys__errVect_acc__errVector_ch0__mask 0x1f
#define MA_core__prot_sys__errVect_acc__errVector_ch0__shift 0x00
#define MA_core__prot_sys__errVect_acc__errVector_ch0__reset 0x00
#define MA_core__prot_sys__errVect_acc__errVector_ch0__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_acc__errVector_ch1---
// [ clip_stuck dc vcf_err ocp_severe ocp ]
#define MA_core__prot_sys__errVect_acc__errVector_ch1__a 0x011d
#define MA_core__prot_sys__errVect_acc__errVector_ch1__len 5
#define MA_core__prot_sys__errVect_acc__errVector_ch1__mask 0x1f
#define MA_core__prot_sys__errVect_acc__errVector_ch1__shift 0x00
#define MA_core__prot_sys__errVect_acc__errVector_ch1__reset 0x00
#define MA_core__prot_sys__errVect_acc__errVector_ch1__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_acc__errVector_all__0---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
#define MA_core__prot_sys__errVect_acc__errVector_all__0__a 0x011e
#define MA_core__prot_sys__errVect_acc__errVector_all__0__len 8
#define MA_core__prot_sys__errVect_acc__errVector_all__0__mask 0xff
#define MA_core__prot_sys__errVect_acc__errVector_all__0__shift 0x00
#define MA_core__prot_sys__errVect_acc__errVector_all__0__reset 0x00
#define MA_core__prot_sys__errVect_acc__errVector_all__0__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_acc__errVector_all__1---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
#define MA_core__prot_sys__errVect_acc__errVector_all__1__a 0x011f
#define MA_core__prot_sys__errVect_acc__errVector_all__1__len 7
#define MA_core__prot_sys__errVect_acc__errVector_all__1__mask 0x7f
#define MA_core__prot_sys__errVect_acc__errVector_all__1__shift 0x00
#define MA_core__prot_sys__errVect_acc__errVector_all__1__reset 0x00
#define MA_core__prot_sys__errVect_acc__errVector_all__1__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_acc_trig__errVector_ch0---
// [ clip_stuck dc vcf_err ocp_severe ocp ] <-- clip_stuck is hidden
#define MA_core__prot_sys__errVect_acc_trig__errVector_ch0__a 0x0120
#define MA_core__prot_sys__errVect_acc_trig__errVector_ch0__len 5
#define MA_core__prot_sys__errVect_acc_trig__errVector_ch0__mask 0x1f
#define MA_core__prot_sys__errVect_acc_trig__errVector_ch0__shift 0x00
#define MA_core__prot_sys__errVect_acc_trig__errVector_ch0__reset 0x00
#define MA_core__prot_sys__errVect_acc_trig__errVector_ch0__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_acc_trig__errVector_ch1---
// [ clip_stuck dc vcf_err ocp_severe ocp ]
#define MA_core__prot_sys__errVect_acc_trig__errVector_ch1__a 0x0121
#define MA_core__prot_sys__errVect_acc_trig__errVector_ch1__len 5
#define MA_core__prot_sys__errVect_acc_trig__errVector_ch1__mask 0x1f
#define MA_core__prot_sys__errVect_acc_trig__errVector_ch1__shift 0x00
#define MA_core__prot_sys__errVect_acc_trig__errVector_ch1__reset 0x00
#define MA_core__prot_sys__errVect_acc_trig__errVector_ch1__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_acc_trig__errVector_all__0---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
#define MA_core__prot_sys__errVect_acc_trig__errVector_all__0__a 0x0122
#define MA_core__prot_sys__errVect_acc_trig__errVector_all__0__len 8
#define MA_core__prot_sys__errVect_acc_trig__errVector_all__0__mask 0xff
#define MA_core__prot_sys__errVect_acc_trig__errVector_all__0__shift 0x00
#define MA_core__prot_sys__errVect_acc_trig__errVector_all__0__reset 0x00
#define MA_core__prot_sys__errVect_acc_trig__errVector_all__0__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_acc_trig__errVector_all__1---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
#define MA_core__prot_sys__errVect_acc_trig__errVector_all__1__a 0x0123
#define MA_core__prot_sys__errVect_acc_trig__errVector_all__1__len 7
#define MA_core__prot_sys__errVect_acc_trig__errVector_all__1__mask 0x7f
#define MA_core__prot_sys__errVect_acc_trig__errVector_all__1__shift 0x00
#define MA_core__prot_sys__errVect_acc_trig__errVector_all__1__reset 0x00
#define MA_core__prot_sys__errVect_acc_trig__errVector_all__1__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_trig__errVector_ch0---
// [ clip_stuck dc vcf_err ocp_severe ocp ] <-- clip_stuck is hidden
#define MA_core__prot_sys__errVect_trig__errVector_ch0__a 0x0124
#define MA_core__prot_sys__errVect_trig__errVector_ch0__len 5
#define MA_core__prot_sys__errVect_trig__errVector_ch0__mask 0x1f
#define MA_core__prot_sys__errVect_trig__errVector_ch0__shift 0x00
#define MA_core__prot_sys__errVect_trig__errVector_ch0__reset 0x00
#define MA_core__prot_sys__errVect_trig__errVector_ch0__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_trig__errVector_ch1---
// [ clip_stuck dc vcf_err ocp_severe ocp ]
#define MA_core__prot_sys__errVect_trig__errVector_ch1__a 0x0125
#define MA_core__prot_sys__errVect_trig__errVector_ch1__len 5
#define MA_core__prot_sys__errVect_trig__errVector_ch1__mask 0x1f
#define MA_core__prot_sys__errVect_trig__errVector_ch1__shift 0x00
#define MA_core__prot_sys__errVect_trig__errVector_ch1__reset 0x00
#define MA_core__prot_sys__errVect_trig__errVector_ch1__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_trig__errVector_all__0---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
#define MA_core__prot_sys__errVect_trig__errVector_all__0__a 0x0126
#define MA_core__prot_sys__errVect_trig__errVector_all__0__len 8
#define MA_core__prot_sys__errVect_trig__errVector_all__0__mask 0xff
#define MA_core__prot_sys__errVect_trig__errVector_all__0__shift 0x00
#define MA_core__prot_sys__errVect_trig__errVector_all__0__reset 0x00
#define MA_core__prot_sys__errVect_trig__errVector_all__0__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_trig__errVector_all__1---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
#define MA_core__prot_sys__errVect_trig__errVector_all__1__a 0x0127
#define MA_core__prot_sys__errVect_trig__errVector_all__1__len 7
#define MA_core__prot_sys__errVect_trig__errVector_all__1__mask 0x7f
#define MA_core__prot_sys__errVect_trig__errVector_all__1__shift 0x00
#define MA_core__prot_sys__errVect_trig__errVector_all__1__reset 0x00
#define MA_core__prot_sys__errVect_trig__errVector_all__1__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errTrig_trigged---
// High if error trigger system has triggered (**hidden**)
#define MA_core__prot_sys__errTrig_trigged__a 0x0128
#define MA_core__prot_sys__errTrig_trigged__len 1
#define MA_core__prot_sys__errTrig_trigged__mask 0x01
#define MA_core__prot_sys__errTrig_trigged__shift 0x00
#define MA_core__prot_sys__errTrig_trigged__reset 0x00
#define MA_core__prot_sys__errTrig_trigged__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errLatch_state0---
// High if ch0 error high-Z latch is active (locked) (**public**)
#define MA_core__prot_sys__errLatch_state0__a 0x0128
#define MA_core__prot_sys__errLatch_state0__len 1
#define MA_core__prot_sys__errLatch_state0__mask 0x02
#define MA_core__prot_sys__errLatch_state0__shift 0x01
#define MA_core__prot_sys__errLatch_state0__reset 0x00
#define MA_core__prot_sys__errLatch_state0__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errLatch_state1---
// High if ch1 error high-Z latch is active (locked) (**public**)
#define MA_core__prot_sys__errLatch_state1__a 0x0128
#define MA_core__prot_sys__errLatch_state1__len 1
#define MA_core__prot_sys__errLatch_state1__mask 0x04
#define MA_core__prot_sys__errLatch_state1__shift 0x02
#define MA_core__prot_sys__errLatch_state1__reset 0x00
#define MA_core__prot_sys__errLatch_state1__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__otp__dc_prot_mode_fast---
// Set high for debug-mode (fast-acting) DC protection.
#define MA_core__prot_sys__otp__dc_prot_mode_fast__a 0x00c8
#define MA_core__prot_sys__otp__dc_prot_mode_fast__len 1
#define MA_core__prot_sys__otp__dc_prot_mode_fast__mask 0x10
#define MA_core__prot_sys__otp__dc_prot_mode_fast__shift 0x04
#define MA_core__prot_sys__otp__dc_prot_mode_fast__reset 0x00
#define MA_core__prot_sys__otp__dc_prot_mode_fast__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__dc_trip_level---
// DC protection timeout level
#define MA_core__prot_sys__otp__dc_trip_level__a 0x00c8
#define MA_core__prot_sys__otp__dc_trip_level__len 3
#define MA_core__prot_sys__otp__dc_trip_level__mask 0xe0
#define MA_core__prot_sys__otp__dc_trip_level__shift 0x05
#define MA_core__prot_sys__otp__dc_trip_level__reset 0x00
#define MA_core__prot_sys__otp__dc_trip_level__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch0---
// [ clip_stuck dc vcf_err ocp_severe ocp ] <-- clip_stuck is hidden
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch0__a 0x010a
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch0__len 5
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch0__mask 0x1f
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch0__shift 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch0__reset 0x0f
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch1---
// [ clip_stuck dc vcf_err ocp_severe ocp ]
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch1__a 0x010b
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch1__len 5
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch1__mask 0x1f
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch1__shift 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch1__reset 0x0f
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_ch1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__0---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__0__a 0x010c
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__0__len 8
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__0__mask 0xff
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__0__shift 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__0__reset 0x77
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__1---
// [ 14:pvdd_high dsp_errFlag3 dsp_errFlag2 dsp_errFlag1 10:dsp_errFlag0 error_trigged pvddT_low 7:ltw audio_bad clk_bad pvdd_ov 3:pvdd_low pvdd_uv ote otw ]
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__1__a 0x010d
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__1__len 7
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__1__mask 0x7f
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__1__shift 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__1__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_errNow__errVector_all__1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pchg_en---
// High to enable Cfly precharge resistors in channel
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pchg_en__a 0x010e
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pchg_en__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pchg_en__mask 0x01
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pchg_en__shift 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pchg_en__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pchg_en__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_ser_rapidFire---
// High to channel gate driver serial links
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_ser_rapidFire__a 0x010e
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_ser_rapidFire__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_ser_rapidFire__mask 0x02
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_ser_rapidFire__shift 0x01
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_ser_rapidFire__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_ser_rapidFire__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_reduceVol---
// High to request a channel volume reduction
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_reduceVol__a 0x010e
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_reduceVol__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_reduceVol__mask 0x08
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_reduceVol__shift 0x03
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_reduceVol__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_mute---
// High to force channel mute
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_mute__a 0x010e
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_mute__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_mute__mask 0x10
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_mute__shift 0x04
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_mute__reset 0x01
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_mute__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_dp_cont_force---
// High to force continuous gate driver level shifter signaling for channel
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_dp_cont_force__a 0x010e
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_dp_cont_force__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_dp_cont_force__mask 0x20
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_dp_cont_force__shift 0x05
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_dp_cont_force__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_gd_dp_cont_force__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dis_lf_clip_rec---
// High to force off channel clip recovery (in loop filter)
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dis_lf_clip_rec__a 0x010e
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dis_lf_clip_rec__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dis_lf_clip_rec__mask 0x40
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dis_lf_clip_rec__shift 0x06
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dis_lf_clip_rec__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dis_lf_clip_rec__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_powerMode_max---
// High to for max. Power Mode for channel
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_powerMode_max__a 0x010e
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_powerMode_max__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_powerMode_max__mask 0x80
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_powerMode_max__shift 0x07
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_powerMode_max__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_powerMode_max__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action0---
// Custom handle for DSP interaction
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action0__a 0x010f
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action1---
// Custom handle for DSP interaction
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action1__a 0x010f
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action2---
// Custom handle for DSP interaction
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action2__a 0x010f
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action3---
// Custom handle for DSP interaction
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action3__a 0x010f
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddMode---
// High to force chip to enter "low-Pvdd" operation
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddMode__a 0x0110
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddMode__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddMode__mask 0x01
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddMode__shift 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowTmode---
// High to force chip to enter "temp-temperature" operation
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowTmode__a 0x0110
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowTmode__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowTmode__mask 0x02
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowTmode__shift 0x01
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddTmode---
// High to force chip to enter "low Pvdd and temperature" operation
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddTmode__a 0x0110
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddTmode__mask 0x04
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddTmode__shift 0x02
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action0---
// Custom handle for DSP interaction
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action0__a 0x0110
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action0__mask 0x08
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action0__shift 0x03
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action1---
// Custom handle for DSP interaction
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action1__a 0x0110
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action1__mask 0x10
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action1__shift 0x04
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action2---
// Custom handle for DSP interaction
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action2__a 0x0110
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action2__mask 0x20
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action2__shift 0x05
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action3---
// Custom handle for DSP interaction
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action3__a 0x0110
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action3__mask 0x40
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action3__shift 0x06
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_all__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__dsp_err0_action__reduceVol__a 0x00fa
#define MA_core__prot_sys__reg__dsp_err0_action__reduceVol__len 1
#define MA_core__prot_sys__reg__dsp_err0_action__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__dsp_err0_action__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__dsp_err0_action__mute_short__a 0x00fa
#define MA_core__prot_sys__reg__dsp_err0_action__mute_short__len 1
#define MA_core__prot_sys__reg__dsp_err0_action__mute_short__mask 0x02
#define MA_core__prot_sys__reg__dsp_err0_action__mute_short__shift 0x01
#define MA_core__prot_sys__reg__dsp_err0_action__mute_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err0_action__ser_rapidFire_short__a 0x00fa
#define MA_core__prot_sys__reg__dsp_err0_action__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__dsp_err0_action__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__dsp_err0_action__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__dsp_err0_action__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err0_action__gd_dp_cont_short__a 0x00fa
#define MA_core__prot_sys__reg__dsp_err0_action__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__dsp_err0_action__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__dsp_err0_action__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__dsp_err0_action__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err0_action__dis_lf_clip_rec_short__a 0x00fa
#define MA_core__prot_sys__reg__dsp_err0_action__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__dsp_err0_action__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__dsp_err0_action__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__dsp_err0_action__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action0__a 0x00fb
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action1__a 0x00fb
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action2__a 0x00fb
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action3__a 0x00fb
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__dsp_err1_action__reduceVol__a 0x00fc
#define MA_core__prot_sys__reg__dsp_err1_action__reduceVol__len 1
#define MA_core__prot_sys__reg__dsp_err1_action__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__dsp_err1_action__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__dsp_err1_action__mute_short__a 0x00fc
#define MA_core__prot_sys__reg__dsp_err1_action__mute_short__len 1
#define MA_core__prot_sys__reg__dsp_err1_action__mute_short__mask 0x02
#define MA_core__prot_sys__reg__dsp_err1_action__mute_short__shift 0x01
#define MA_core__prot_sys__reg__dsp_err1_action__mute_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err1_action__ser_rapidFire_short__a 0x00fc
#define MA_core__prot_sys__reg__dsp_err1_action__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__dsp_err1_action__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__dsp_err1_action__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__dsp_err1_action__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err1_action__gd_dp_cont_short__a 0x00fc
#define MA_core__prot_sys__reg__dsp_err1_action__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__dsp_err1_action__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__dsp_err1_action__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__dsp_err1_action__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err1_action__dis_lf_clip_rec_short__a 0x00fc
#define MA_core__prot_sys__reg__dsp_err1_action__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__dsp_err1_action__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__dsp_err1_action__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__dsp_err1_action__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action0__a 0x00fd
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action1__a 0x00fd
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action2__a 0x00fd
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action3__a 0x00fd
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__dsp_err2_action__reduceVol__a 0x00fe
#define MA_core__prot_sys__reg__dsp_err2_action__reduceVol__len 1
#define MA_core__prot_sys__reg__dsp_err2_action__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__dsp_err2_action__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__dsp_err2_action__mute_short__a 0x00fe
#define MA_core__prot_sys__reg__dsp_err2_action__mute_short__len 1
#define MA_core__prot_sys__reg__dsp_err2_action__mute_short__mask 0x02
#define MA_core__prot_sys__reg__dsp_err2_action__mute_short__shift 0x01
#define MA_core__prot_sys__reg__dsp_err2_action__mute_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err2_action__ser_rapidFire_short__a 0x00fe
#define MA_core__prot_sys__reg__dsp_err2_action__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__dsp_err2_action__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__dsp_err2_action__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__dsp_err2_action__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err2_action__gd_dp_cont_short__a 0x00fe
#define MA_core__prot_sys__reg__dsp_err2_action__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__dsp_err2_action__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__dsp_err2_action__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__dsp_err2_action__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err2_action__dis_lf_clip_rec_short__a 0x00fe
#define MA_core__prot_sys__reg__dsp_err2_action__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__dsp_err2_action__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__dsp_err2_action__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__dsp_err2_action__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action0__a 0x00ff
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action1__a 0x00ff
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action2__a 0x00ff
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action3__a 0x00ff
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__dsp_err3_action__reduceVol__a 0x0100
#define MA_core__prot_sys__reg__dsp_err3_action__reduceVol__len 1
#define MA_core__prot_sys__reg__dsp_err3_action__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__dsp_err3_action__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__dsp_err3_action__mute_short__a 0x0100
#define MA_core__prot_sys__reg__dsp_err3_action__mute_short__len 1
#define MA_core__prot_sys__reg__dsp_err3_action__mute_short__mask 0x02
#define MA_core__prot_sys__reg__dsp_err3_action__mute_short__shift 0x01
#define MA_core__prot_sys__reg__dsp_err3_action__mute_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err3_action__ser_rapidFire_short__a 0x0100
#define MA_core__prot_sys__reg__dsp_err3_action__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__dsp_err3_action__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__dsp_err3_action__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__dsp_err3_action__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err3_action__gd_dp_cont_short__a 0x0100
#define MA_core__prot_sys__reg__dsp_err3_action__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__dsp_err3_action__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__dsp_err3_action__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__dsp_err3_action__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err3_action__dis_lf_clip_rec_short__a 0x0100
#define MA_core__prot_sys__reg__dsp_err3_action__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__dsp_err3_action__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__dsp_err3_action__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__dsp_err3_action__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action0__a 0x0101
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action1__a 0x0101
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action2__a 0x0101
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action3__a 0x0101
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__errTrig_action__reduceVol__a 0x0102
#define MA_core__prot_sys__reg__errTrig_action__reduceVol__len 1
#define MA_core__prot_sys__reg__errTrig_action__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__errTrig_action__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__errTrig_action__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__errTrig_action__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__errTrig_action__mute_short__a 0x0102
#define MA_core__prot_sys__reg__errTrig_action__mute_short__len 1
#define MA_core__prot_sys__reg__errTrig_action__mute_short__mask 0x02
#define MA_core__prot_sys__reg__errTrig_action__mute_short__shift 0x01
#define MA_core__prot_sys__reg__errTrig_action__mute_short__reset 0x00
#define MA_core__prot_sys__reg__errTrig_action__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__errTrig_action__ser_rapidFire_short__a 0x0102
#define MA_core__prot_sys__reg__errTrig_action__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__errTrig_action__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__errTrig_action__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__errTrig_action__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__errTrig_action__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__errTrig_action__gd_dp_cont_short__a 0x0102
#define MA_core__prot_sys__reg__errTrig_action__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__errTrig_action__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__errTrig_action__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__errTrig_action__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__errTrig_action__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__errTrig_action__dis_lf_clip_rec_short__a 0x0102
#define MA_core__prot_sys__reg__errTrig_action__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__errTrig_action__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__errTrig_action__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__errTrig_action__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__errTrig_action__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action0__a 0x0103
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action1__a 0x0103
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action2__a 0x0103
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action3__a 0x0103
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__errTrig_action__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__errVect_acc_ocp_ch0---
// Channel-0 OCP flag accumulator register			[q3b q2b q1b q0b q3a q2a q1a q0a]
#define MA_core__prot_sys__errVect_acc_ocp_ch0__a 0x0129
#define MA_core__prot_sys__errVect_acc_ocp_ch0__len 8
#define MA_core__prot_sys__errVect_acc_ocp_ch0__mask 0xff
#define MA_core__prot_sys__errVect_acc_ocp_ch0__shift 0x00
#define MA_core__prot_sys__errVect_acc_ocp_ch0__reset 0x00
#define MA_core__prot_sys__errVect_acc_ocp_ch0__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_acc_ocp_ch1---
// Channel-1 OCP flag accumulator register			[q3b q2b q1b q0b q3a q2a q1a q0a]
#define MA_core__prot_sys__errVect_acc_ocp_ch1__a 0x012a
#define MA_core__prot_sys__errVect_acc_ocp_ch1__len 8
#define MA_core__prot_sys__errVect_acc_ocp_ch1__mask 0xff
#define MA_core__prot_sys__errVect_acc_ocp_ch1__shift 0x00
#define MA_core__prot_sys__errVect_acc_ocp_ch1__reset 0x00
#define MA_core__prot_sys__errVect_acc_ocp_ch1__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_trig_ocp_ch0---
// Channel-0 OCP flag trigger-time register			[q3b q2b q1b q0b q3a q2a q1a q0a]
#define MA_core__prot_sys__errVect_trig_ocp_ch0__a 0x012b
#define MA_core__prot_sys__errVect_trig_ocp_ch0__len 8
#define MA_core__prot_sys__errVect_trig_ocp_ch0__mask 0xff
#define MA_core__prot_sys__errVect_trig_ocp_ch0__shift 0x00
#define MA_core__prot_sys__errVect_trig_ocp_ch0__reset 0x00
#define MA_core__prot_sys__errVect_trig_ocp_ch0__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_trig_ocp_ch1---
// Channel-1 OCP flag trigger-time register			[q3b q2b q1b q0b q3a q2a q1a q0a]
#define MA_core__prot_sys__errVect_trig_ocp_ch1__a 0x012c
#define MA_core__prot_sys__errVect_trig_ocp_ch1__len 8
#define MA_core__prot_sys__errVect_trig_ocp_ch1__mask 0xff
#define MA_core__prot_sys__errVect_trig_ocp_ch1__shift 0x00
#define MA_core__prot_sys__errVect_trig_ocp_ch1__reset 0x00
#define MA_core__prot_sys__errVect_trig_ocp_ch1__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_acc_vcf_ch0---
// Channel-0 Vcfly error flag accumulator register		[ov_b uv_b ob_a uv_a]
#define MA_core__prot_sys__errVect_acc_vcf_ch0__a 0x012d
#define MA_core__prot_sys__errVect_acc_vcf_ch0__len 4
#define MA_core__prot_sys__errVect_acc_vcf_ch0__mask 0x0f
#define MA_core__prot_sys__errVect_acc_vcf_ch0__shift 0x00
#define MA_core__prot_sys__errVect_acc_vcf_ch0__reset 0x00
#define MA_core__prot_sys__errVect_acc_vcf_ch0__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_acc_vcf_ch1---
// Channel-1 Vcfly error flag accumulator register		[ov_b uv_b ob_a uv_a
#define MA_core__prot_sys__errVect_acc_vcf_ch1__a 0x012d
#define MA_core__prot_sys__errVect_acc_vcf_ch1__len 4
#define MA_core__prot_sys__errVect_acc_vcf_ch1__mask 0xf0
#define MA_core__prot_sys__errVect_acc_vcf_ch1__shift 0x04
#define MA_core__prot_sys__errVect_acc_vcf_ch1__reset 0x00
#define MA_core__prot_sys__errVect_acc_vcf_ch1__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_trig_vcf_ch0---
// Channel-0 Vcfly error flag trigger-time register	[ov_b uv_b ob_a uv_a
#define MA_core__prot_sys__errVect_trig_vcf_ch0__a 0x012e
#define MA_core__prot_sys__errVect_trig_vcf_ch0__len 4
#define MA_core__prot_sys__errVect_trig_vcf_ch0__mask 0x0f
#define MA_core__prot_sys__errVect_trig_vcf_ch0__shift 0x00
#define MA_core__prot_sys__errVect_trig_vcf_ch0__reset 0x00
#define MA_core__prot_sys__errVect_trig_vcf_ch0__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__errVect_trig_vcf_ch1---
// Channel-1 Vcfly error flag trigger-time register	[ov_b uv_b ob_a uv_a
#define MA_core__prot_sys__errVect_trig_vcf_ch1__a 0x012e
#define MA_core__prot_sys__errVect_trig_vcf_ch1__len 4
#define MA_core__prot_sys__errVect_trig_vcf_ch1__mask 0xf0
#define MA_core__prot_sys__errVect_trig_vcf_ch1__shift 0x04
#define MA_core__prot_sys__errVect_trig_vcf_ch1__reset 0x00
#define MA_core__prot_sys__errVect_trig_vcf_ch1__inputonly 1
//------------------------------------------------------------------------------core__prot_sys__otp__pb_protMode_lowlow---
// "Protection mode" behavior of power stage; "0"=>high-Z, "1"=>low-low
#define MA_core__prot_sys__otp__pb_protMode_lowlow__a 0x00c0
#define MA_core__prot_sys__otp__pb_protMode_lowlow__len 1
#define MA_core__prot_sys__otp__pb_protMode_lowlow__mask 0x01
#define MA_core__prot_sys__otp__pb_protMode_lowlow__shift 0x00
#define MA_core__prot_sys__otp__pb_protMode_lowlow__reset 0x00
#define MA_core__prot_sys__otp__pb_protMode_lowlow__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_short---
// Trigger "short" protection state for all channel half bridges
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_short__a 0x00d3
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_short__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_short__mask 0x10
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_short__shift 0x04
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_short__reset 0x01
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_long---
// Trigger "long" protection state for all channel half bridges
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_long__a 0x00d3
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_long__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_long__mask 0x20
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_long__shift 0x05
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_long__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_long__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_semi---
// Trigger latched protection state for channel half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_semi__a 0x00d3
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_semi__mask 0x40
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_semi__shift 0x06
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_perma---
// Trigger latched protection state for channel half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_perma__a 0x00d3
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_perma__mask 0x80
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_perma__shift 0x07
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_ch__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_semi__a 0x00d5
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_perma__a 0x00d5
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_short---
// Trigger "short" protection state for all channel half bridges
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_short__a 0x00d7
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_short__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_short__mask 0x10
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_short__shift 0x04
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_short__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_long---
// Trigger "long" protection state for all channel half bridges
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_long__a 0x00d7
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_long__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_long__mask 0x20
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_long__shift 0x05
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_long__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_long__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_semi---
// Trigger latched protection state for channel half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_semi__a 0x00d7
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_semi__mask 0x40
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_semi__shift 0x06
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_semi__reset 0x01
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_perma---
// Trigger latched protection state for channel half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_perma__a 0x00d7
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_perma__mask 0x80
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_perma__shift 0x07
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_ch__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_semi__a 0x00d9
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_perma__a 0x00d9
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_short---
// Trigger "short" protection state for all channel half bridges
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_short__a 0x00db
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_short__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_short__mask 0x10
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_short__shift 0x04
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_short__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_long---
// Trigger "long" protection state for all channel half bridges
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_long__a 0x00db
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_long__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_long__mask 0x20
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_long__shift 0x05
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_long__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_long__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_semi---
// Trigger latched protection state for channel half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_semi__a 0x00db
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_semi__mask 0x40
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_semi__shift 0x06
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_perma---
// Trigger latched protection state for channel half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_perma__a 0x00db
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_perma__mask 0x80
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_perma__shift 0x07
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_ch__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_semi__a 0x00dd
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_perma__a 0x00dd
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_short---
// Trigger "short" protection state for all channel half bridges
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_short__a 0x00df
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_short__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_short__mask 0x10
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_short__shift 0x04
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_short__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_long---
// Trigger "long" protection state for all channel half bridges
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_long__a 0x00df
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_long__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_long__mask 0x20
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_long__shift 0x05
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_long__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_long__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_semi---
// Trigger latched protection state for channel half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_semi__a 0x00df
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_semi__mask 0x40
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_semi__shift 0x06
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_semi__reset 0x01
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_perma---
// Trigger latched protection state for channel half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_perma__a 0x00df
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_perma__mask 0x80
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_perma__shift 0x07
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_ch__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_semi__a 0x00e1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_perma__a 0x00e1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_short---
// Trigger "short" protection state for all channel half bridges
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_short__a 0x00e3
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_short__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_short__mask 0x10
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_short__shift 0x04
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_short__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_long---
// Trigger "long" protection state for all channel half bridges
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_long__a 0x00e3
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_long__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_long__mask 0x20
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_long__shift 0x05
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_long__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_long__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_semi---
// Trigger latched protection state for channel half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_semi__a 0x00e3
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_semi__mask 0x40
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_semi__shift 0x06
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_perma---
// Trigger latched protection state for channel half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_perma__a 0x00e3
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_perma__mask 0x80
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_perma__shift 0x07
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_ch__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_semi__a 0x00e5
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_perma__a 0x00e5
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__otw_action__pb_prot_latch_semi__a 0x00e7
#define MA_core__prot_sys__reg__otw_action__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__otw_action__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__otw_action__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__otw_action__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__otw_action__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__otw_action__pb_prot_latch_perma__a 0x00e7
#define MA_core__prot_sys__reg__otw_action__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__otw_action__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__otw_action__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__otw_action__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__otw_action__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__ote_action__pb_prot_latch_semi__a 0x00e9
#define MA_core__prot_sys__reg__ote_action__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__ote_action__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__ote_action__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__ote_action__pb_prot_latch_semi__reset 0x01
#define MA_core__prot_sys__reg__ote_action__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__ote_action__pb_prot_latch_perma__a 0x00e9
#define MA_core__prot_sys__reg__ote_action__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__ote_action__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__ote_action__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__ote_action__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__ote_action__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_semi__a 0x00eb
#define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_perma__a 0x00eb
#define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__pvdd_uv_action__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_semi__a 0x00ed
#define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_perma__a 0x00ed
#define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__pvdd_low_action__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_semi__a 0x00f1
#define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_semi__reset 0x01
#define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_perma__a 0x00f1
#define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__pvdd_ov_action__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_semi__a 0x00f3
#define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_perma__a 0x00f3
#define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__no_clock_action__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_semi__a 0x00f5
#define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_perma__a 0x00f5
#define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__no_audio_action__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_semi__a 0x00f7
#define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_perma__a 0x00f7
#define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__temp_low_action__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_semi__a 0x00f9
#define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_perma__a 0x00f9
#define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_semi__a 0x00fb
#define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_perma__a 0x00fb
#define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_semi__a 0x00fd
#define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_perma__a 0x00fd
#define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_semi__a 0x00ff
#define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_perma__a 0x00ff
#define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_semi__a 0x0101
#define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_perma__a 0x0101
#define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_semi__a 0x0103
#define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_semi__reset 0x00
#define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_perma__a 0x0103
#define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_perma__reset 0x01
#define MA_core__prot_sys__reg__errTrig_action__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pb_prot_force---
// High to force protection state for full bridge Q0...7
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pb_prot_force__a 0x010e
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pb_prot_force__len 1
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pb_prot_force__mask 0x04
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pb_prot_force__shift 0x02
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pb_prot_force__reset 0x01
#define MA_core__prot_sys__reg__protSys_nErrPin_mask__mask_act_ch__ch_pb_prot_force__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__ote_thr---
// Over-temperature error threshold; 1 degree-C per step, 0 at -50 degree-C
#define MA_core__prot_sys__otp__ote_thr__a 0x00c5
#define MA_core__prot_sys__otp__ote_thr__len 8
#define MA_core__prot_sys__otp__ote_thr__mask 0xff
#define MA_core__prot_sys__otp__ote_thr__shift 0x00
#define MA_core__prot_sys__otp__ote_thr__reset 0xaf
#define MA_core__prot_sys__otp__ote_thr__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__otw_thr---
// Over-temperature warning threshold; 1 degree-C per step, 0 at -50 degree-C
#define MA_core__prot_sys__otp__otw_thr__a 0x00c6
#define MA_core__prot_sys__otp__otw_thr__len 8
#define MA_core__prot_sys__otp__otw_thr__mask 0xff
#define MA_core__prot_sys__otp__otw_thr__shift 0x00
#define MA_core__prot_sys__otp__otw_thr__reset 0xa5
#define MA_core__prot_sys__otp__otw_thr__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__ot_thr_hyst---
// Overtemperature wanrning and error hysteresis
#define MA_core__prot_sys__otp__ot_thr_hyst__a 0x00c7
#define MA_core__prot_sys__otp__ot_thr_hyst__len 8
#define MA_core__prot_sys__otp__ot_thr_hyst__mask 0xff
#define MA_core__prot_sys__otp__ot_thr_hyst__shift 0x00
#define MA_core__prot_sys__otp__ot_thr_hyst__reset 0x05
#define MA_core__prot_sys__otp__ot_thr_hyst__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__Pvdd_low_thr---
// Low-Pvdd warning treshold, 125 mV step per LSB
#define MA_core__prot_sys__otp__Pvdd_low_thr__a 0x00c9
#define MA_core__prot_sys__otp__Pvdd_low_thr__len 8
#define MA_core__prot_sys__otp__Pvdd_low_thr__mask 0xff
#define MA_core__prot_sys__otp__Pvdd_low_thr__shift 0x00
#define MA_core__prot_sys__otp__Pvdd_low_thr__reset 0x40
#define MA_core__prot_sys__otp__Pvdd_low_thr__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__Pvdd_low_thr_hyst---
// Low-Pvdd warning treshold hysteresis, 125 mV step per LSB
#define MA_core__prot_sys__otp__Pvdd_low_thr_hyst__a 0x00ca
#define MA_core__prot_sys__otp__Pvdd_low_thr_hyst__len 8
#define MA_core__prot_sys__otp__Pvdd_low_thr_hyst__mask 0xff
#define MA_core__prot_sys__otp__Pvdd_low_thr_hyst__shift 0x00
#define MA_core__prot_sys__otp__Pvdd_low_thr_hyst__reset 0x08
#define MA_core__prot_sys__otp__Pvdd_low_thr_hyst__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__ltw_thr---
// Low-temperature warning threshold; 1 degree-C per step, 0 at -50 degree-C
#define MA_core__prot_sys__otp__ltw_thr__a 0x00cd
#define MA_core__prot_sys__otp__ltw_thr__len 8
#define MA_core__prot_sys__otp__ltw_thr__mask 0xff
#define MA_core__prot_sys__otp__ltw_thr__shift 0x00
#define MA_core__prot_sys__otp__ltw_thr__reset 0x28
#define MA_core__prot_sys__otp__ltw_thr__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__lt_thr_hyst---
// Low-temperature warning threshold hysteresis
#define MA_core__prot_sys__otp__lt_thr_hyst__a 0x00ce
#define MA_core__prot_sys__otp__lt_thr_hyst__len 8
#define MA_core__prot_sys__otp__lt_thr_hyst__mask 0xff
#define MA_core__prot_sys__otp__lt_thr_hyst__shift 0x00
#define MA_core__prot_sys__otp__lt_thr_hyst__reset 0x05
#define MA_core__prot_sys__otp__lt_thr_hyst__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__Pvdd_high_thr---
// High-Pvdd warning treshold, 125 mV step per LSB
#define MA_core__prot_sys__otp__Pvdd_high_thr__a 0x00cb
#define MA_core__prot_sys__otp__Pvdd_high_thr__len 8
#define MA_core__prot_sys__otp__Pvdd_high_thr__mask 0xff
#define MA_core__prot_sys__otp__Pvdd_high_thr__shift 0x00
#define MA_core__prot_sys__otp__Pvdd_high_thr__reset 0xac
#define MA_core__prot_sys__otp__Pvdd_high_thr__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__otp__Pvdd_high_thr_hyst---
// High-Pvdd warning treshold hysteresis, 125 mV step per LSB
#define MA_core__prot_sys__otp__Pvdd_high_thr_hyst__a 0x00cc
#define MA_core__prot_sys__otp__Pvdd_high_thr_hyst__len 8
#define MA_core__prot_sys__otp__Pvdd_high_thr_hyst__mask 0xff
#define MA_core__prot_sys__otp__Pvdd_high_thr_hyst__shift 0x00
#define MA_core__prot_sys__otp__Pvdd_high_thr_hyst__reset 0x08
#define MA_core__prot_sys__otp__Pvdd_high_thr_hyst__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__reduceVol---
// Trigger volume reduction of all audio channels in chip
#define MA_core__prot_sys__reg__pvdd_high_action__reduceVol__a 0x00ee
#define MA_core__prot_sys__reg__pvdd_high_action__reduceVol__len 1
#define MA_core__prot_sys__reg__pvdd_high_action__reduceVol__mask 0x01
#define MA_core__prot_sys__reg__pvdd_high_action__reduceVol__shift 0x00
#define MA_core__prot_sys__reg__pvdd_high_action__reduceVol__reset 0x00
#define MA_core__prot_sys__reg__pvdd_high_action__reduceVol__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__mute_short---
// Trigger mute of all audio channels while error w/ short extension
#define MA_core__prot_sys__reg__pvdd_high_action__mute_short__a 0x00ee
#define MA_core__prot_sys__reg__pvdd_high_action__mute_short__len 1
#define MA_core__prot_sys__reg__pvdd_high_action__mute_short__mask 0x02
#define MA_core__prot_sys__reg__pvdd_high_action__mute_short__shift 0x01
#define MA_core__prot_sys__reg__pvdd_high_action__mute_short__reset 0x00
#define MA_core__prot_sys__reg__pvdd_high_action__mute_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__ser_rapidFire_short---
// Trigger rapid update of all chip gate driver serial links while error (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_high_action__ser_rapidFire_short__a 0x00ee
#define MA_core__prot_sys__reg__pvdd_high_action__ser_rapidFire_short__len 1
#define MA_core__prot_sys__reg__pvdd_high_action__ser_rapidFire_short__mask 0x04
#define MA_core__prot_sys__reg__pvdd_high_action__ser_rapidFire_short__shift 0x02
#define MA_core__prot_sys__reg__pvdd_high_action__ser_rapidFire_short__reset 0x00
#define MA_core__prot_sys__reg__pvdd_high_action__ser_rapidFire_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__gd_dp_cont_short---
// Trigger continuous operation of all chip gate driver level shifters (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_high_action__gd_dp_cont_short__a 0x00ee
#define MA_core__prot_sys__reg__pvdd_high_action__gd_dp_cont_short__len 1
#define MA_core__prot_sys__reg__pvdd_high_action__gd_dp_cont_short__mask 0x08
#define MA_core__prot_sys__reg__pvdd_high_action__gd_dp_cont_short__shift 0x03
#define MA_core__prot_sys__reg__pvdd_high_action__gd_dp_cont_short__reset 0x00
#define MA_core__prot_sys__reg__pvdd_high_action__gd_dp_cont_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__dis_lf_clip_rec_short---
// Trigger disable of loop filter clip recovery in channel (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_high_action__dis_lf_clip_rec_short__a 0x00ee
#define MA_core__prot_sys__reg__pvdd_high_action__dis_lf_clip_rec_short__len 1
#define MA_core__prot_sys__reg__pvdd_high_action__dis_lf_clip_rec_short__mask 0x10
#define MA_core__prot_sys__reg__pvdd_high_action__dis_lf_clip_rec_short__shift 0x04
#define MA_core__prot_sys__reg__pvdd_high_action__dis_lf_clip_rec_short__reset 0x00
#define MA_core__prot_sys__reg__pvdd_high_action__dis_lf_clip_rec_short__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action0---
// Trigger DSP chip-action flag 0
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action0__a 0x00ef
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action0__len 1
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action0__mask 0x01
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action0__shift 0x00
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action0__reset 0x00
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action0__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action1---
// Trigger DSP chip-action flag 1
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action1__a 0x00ef
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action1__len 1
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action1__mask 0x02
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action1__shift 0x01
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action1__reset 0x00
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action1__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action2---
// Trigger DSP chip-action flag 2
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action2__a 0x00ef
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action2__len 1
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action2__mask 0x04
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action2__shift 0x02
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action2__reset 0x00
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action2__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action3---
// Trigger DSP chip-action flag 3
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action3__a 0x00ef
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action3__len 1
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action3__mask 0x08
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action3__shift 0x03
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action3__reset 0x00
#define MA_core__prot_sys__reg__pvdd_high_action__all_dsp_custom_action3__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__pb_prot_latch_semi---
// Trigger latched high-Z of all chip half bridges, with auto-unlock/re-try
#define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_semi__a 0x00ef
#define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_semi__len 1
#define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_semi__mask 0x10
#define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_semi__shift 0x04
#define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_semi__reset 0x01
#define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_semi__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__pb_prot_latch_perma---
// Trigger latched high-Z of all chip half bridges, with only register-based unlock
#define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_perma__a 0x00ef
#define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_perma__len 1
#define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_perma__mask 0x20
#define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_perma__shift 0x05
#define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_perma__reset 0x00
#define MA_core__prot_sys__reg__pvdd_high_action__pb_prot_latch_perma__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddMode__a 0x00d4
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddMode__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowTmode__a 0x00d4
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowTmode__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddTmode__a 0x00d4
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__ocp_action__prt_rsp_all__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddMode__a 0x00d8
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddMode__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowTmode__a 0x00d8
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowTmode__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddTmode__a 0x00d8
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__ocp_severe_action__prt_rsp_all__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddMode__a 0x00dc
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddMode__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowTmode__a 0x00dc
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowTmode__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddTmode__a 0x00dc
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__vcfp_action__prt_rsp_all__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddMode__a 0x00e0
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddMode__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowTmode__a 0x00e0
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowTmode__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddTmode__a 0x00e0
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__dc_action__prt_rsp_all__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddMode__a 0x00e4
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddMode__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowTmode__a 0x00e4
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowTmode__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddTmode__a 0x00e4
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__clip_stuck_action__prt_rsp_all__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__otw_action__lowPvddMode__a 0x00e6
#define MA_core__prot_sys__reg__otw_action__lowPvddMode__len 1
#define MA_core__prot_sys__reg__otw_action__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__otw_action__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__otw_action__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__otw_action__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__otw_action__lowTmode__a 0x00e6
#define MA_core__prot_sys__reg__otw_action__lowTmode__len 1
#define MA_core__prot_sys__reg__otw_action__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__otw_action__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__otw_action__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__otw_action__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__otw_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__otw_action__lowPvddTmode__a 0x00e6
#define MA_core__prot_sys__reg__otw_action__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__otw_action__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__otw_action__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__otw_action__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__otw_action__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__ote_action__lowPvddMode__a 0x00e8
#define MA_core__prot_sys__reg__ote_action__lowPvddMode__len 1
#define MA_core__prot_sys__reg__ote_action__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__ote_action__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__ote_action__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__ote_action__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__ote_action__lowTmode__a 0x00e8
#define MA_core__prot_sys__reg__ote_action__lowTmode__len 1
#define MA_core__prot_sys__reg__ote_action__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__ote_action__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__ote_action__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__ote_action__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__ote_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__ote_action__lowPvddTmode__a 0x00e8
#define MA_core__prot_sys__reg__ote_action__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__ote_action__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__ote_action__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__ote_action__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__ote_action__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddMode__a 0x00ea
#define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddMode__len 1
#define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_uv_action__lowTmode__a 0x00ea
#define MA_core__prot_sys__reg__pvdd_uv_action__lowTmode__len 1
#define MA_core__prot_sys__reg__pvdd_uv_action__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__pvdd_uv_action__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__pvdd_uv_action__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__pvdd_uv_action__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_uv_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddTmode__a 0x00ea
#define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__pvdd_uv_action__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_low_action__lowPvddMode__a 0x00ec
#define MA_core__prot_sys__reg__pvdd_low_action__lowPvddMode__len 1
#define MA_core__prot_sys__reg__pvdd_low_action__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__pvdd_low_action__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__pvdd_low_action__lowPvddMode__reset 0x01
#define MA_core__prot_sys__reg__pvdd_low_action__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_low_action__lowTmode__a 0x00ec
#define MA_core__prot_sys__reg__pvdd_low_action__lowTmode__len 1
#define MA_core__prot_sys__reg__pvdd_low_action__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__pvdd_low_action__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__pvdd_low_action__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__pvdd_low_action__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_low_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_low_action__lowPvddTmode__a 0x00ec
#define MA_core__prot_sys__reg__pvdd_low_action__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__pvdd_low_action__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__pvdd_low_action__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__pvdd_low_action__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__pvdd_low_action__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_high_action__lowPvddMode__a 0x00ee
#define MA_core__prot_sys__reg__pvdd_high_action__lowPvddMode__len 1
#define MA_core__prot_sys__reg__pvdd_high_action__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__pvdd_high_action__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__pvdd_high_action__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__pvdd_high_action__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_high_action__lowTmode__a 0x00ee
#define MA_core__prot_sys__reg__pvdd_high_action__lowTmode__len 1
#define MA_core__prot_sys__reg__pvdd_high_action__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__pvdd_high_action__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__pvdd_high_action__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__pvdd_high_action__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_high_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_high_action__lowPvddTmode__a 0x00ee
#define MA_core__prot_sys__reg__pvdd_high_action__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__pvdd_high_action__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__pvdd_high_action__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__pvdd_high_action__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__pvdd_high_action__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddMode__a 0x00f0
#define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddMode__len 1
#define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_ov_action__lowTmode__a 0x00f0
#define MA_core__prot_sys__reg__pvdd_ov_action__lowTmode__len 1
#define MA_core__prot_sys__reg__pvdd_ov_action__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__pvdd_ov_action__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__pvdd_ov_action__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__pvdd_ov_action__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvdd_ov_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddTmode__a 0x00f0
#define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__pvdd_ov_action__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__no_clock_action__lowPvddMode__a 0x00f2
#define MA_core__prot_sys__reg__no_clock_action__lowPvddMode__len 1
#define MA_core__prot_sys__reg__no_clock_action__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__no_clock_action__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__no_clock_action__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__no_clock_action__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__no_clock_action__lowTmode__a 0x00f2
#define MA_core__prot_sys__reg__no_clock_action__lowTmode__len 1
#define MA_core__prot_sys__reg__no_clock_action__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__no_clock_action__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__no_clock_action__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__no_clock_action__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_clock_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__no_clock_action__lowPvddTmode__a 0x00f2
#define MA_core__prot_sys__reg__no_clock_action__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__no_clock_action__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__no_clock_action__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__no_clock_action__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__no_clock_action__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__no_audio_action__lowPvddMode__a 0x00f4
#define MA_core__prot_sys__reg__no_audio_action__lowPvddMode__len 1
#define MA_core__prot_sys__reg__no_audio_action__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__no_audio_action__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__no_audio_action__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__no_audio_action__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__no_audio_action__lowTmode__a 0x00f4
#define MA_core__prot_sys__reg__no_audio_action__lowTmode__len 1
#define MA_core__prot_sys__reg__no_audio_action__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__no_audio_action__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__no_audio_action__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__no_audio_action__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__no_audio_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__no_audio_action__lowPvddTmode__a 0x00f4
#define MA_core__prot_sys__reg__no_audio_action__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__no_audio_action__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__no_audio_action__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__no_audio_action__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__no_audio_action__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__temp_low_action__lowPvddMode__a 0x00f6
#define MA_core__prot_sys__reg__temp_low_action__lowPvddMode__len 1
#define MA_core__prot_sys__reg__temp_low_action__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__temp_low_action__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__temp_low_action__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__temp_low_action__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__temp_low_action__lowTmode__a 0x00f6
#define MA_core__prot_sys__reg__temp_low_action__lowTmode__len 1
#define MA_core__prot_sys__reg__temp_low_action__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__temp_low_action__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__temp_low_action__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__temp_low_action__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__temp_low_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__temp_low_action__lowPvddTmode__a 0x00f6
#define MA_core__prot_sys__reg__temp_low_action__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__temp_low_action__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__temp_low_action__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__temp_low_action__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__temp_low_action__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__pvddT_low_action__lowPvddMode__a 0x00f8
#define MA_core__prot_sys__reg__pvddT_low_action__lowPvddMode__len 1
#define MA_core__prot_sys__reg__pvddT_low_action__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__pvddT_low_action__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__pvddT_low_action__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__pvddT_low_action__lowTmode__a 0x00f8
#define MA_core__prot_sys__reg__pvddT_low_action__lowTmode__len 1
#define MA_core__prot_sys__reg__pvddT_low_action__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__pvddT_low_action__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__pvddT_low_action__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__pvddT_low_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__pvddT_low_action__lowPvddTmode__a 0x00f8
#define MA_core__prot_sys__reg__pvddT_low_action__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__pvddT_low_action__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__pvddT_low_action__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__pvddT_low_action__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__pvddT_low_action__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err0_action__lowPvddMode__a 0x00fa
#define MA_core__prot_sys__reg__dsp_err0_action__lowPvddMode__len 1
#define MA_core__prot_sys__reg__dsp_err0_action__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__dsp_err0_action__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__dsp_err0_action__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err0_action__lowTmode__a 0x00fa
#define MA_core__prot_sys__reg__dsp_err0_action__lowTmode__len 1
#define MA_core__prot_sys__reg__dsp_err0_action__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__dsp_err0_action__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__dsp_err0_action__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err0_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err0_action__lowPvddTmode__a 0x00fa
#define MA_core__prot_sys__reg__dsp_err0_action__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__dsp_err0_action__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__dsp_err0_action__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__dsp_err0_action__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__dsp_err0_action__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err1_action__lowPvddMode__a 0x00fc
#define MA_core__prot_sys__reg__dsp_err1_action__lowPvddMode__len 1
#define MA_core__prot_sys__reg__dsp_err1_action__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__dsp_err1_action__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__dsp_err1_action__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err1_action__lowTmode__a 0x00fc
#define MA_core__prot_sys__reg__dsp_err1_action__lowTmode__len 1
#define MA_core__prot_sys__reg__dsp_err1_action__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__dsp_err1_action__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__dsp_err1_action__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err1_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err1_action__lowPvddTmode__a 0x00fc
#define MA_core__prot_sys__reg__dsp_err1_action__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__dsp_err1_action__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__dsp_err1_action__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__dsp_err1_action__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__dsp_err1_action__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err2_action__lowPvddMode__a 0x00fe
#define MA_core__prot_sys__reg__dsp_err2_action__lowPvddMode__len 1
#define MA_core__prot_sys__reg__dsp_err2_action__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__dsp_err2_action__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__dsp_err2_action__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err2_action__lowTmode__a 0x00fe
#define MA_core__prot_sys__reg__dsp_err2_action__lowTmode__len 1
#define MA_core__prot_sys__reg__dsp_err2_action__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__dsp_err2_action__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__dsp_err2_action__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err2_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err2_action__lowPvddTmode__a 0x00fe
#define MA_core__prot_sys__reg__dsp_err2_action__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__dsp_err2_action__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__dsp_err2_action__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__dsp_err2_action__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__dsp_err2_action__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err3_action__lowPvddMode__a 0x0100
#define MA_core__prot_sys__reg__dsp_err3_action__lowPvddMode__len 1
#define MA_core__prot_sys__reg__dsp_err3_action__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__dsp_err3_action__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__dsp_err3_action__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err3_action__lowTmode__a 0x0100
#define MA_core__prot_sys__reg__dsp_err3_action__lowTmode__len 1
#define MA_core__prot_sys__reg__dsp_err3_action__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__dsp_err3_action__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__dsp_err3_action__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__dsp_err3_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__dsp_err3_action__lowPvddTmode__a 0x0100
#define MA_core__prot_sys__reg__dsp_err3_action__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__dsp_err3_action__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__dsp_err3_action__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__dsp_err3_action__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__dsp_err3_action__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__lowPvddMode---
// Trigger "low-Pvdd" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__errTrig_action__lowPvddMode__a 0x0102
#define MA_core__prot_sys__reg__errTrig_action__lowPvddMode__len 1
#define MA_core__prot_sys__reg__errTrig_action__lowPvddMode__mask 0x20
#define MA_core__prot_sys__reg__errTrig_action__lowPvddMode__shift 0x05
#define MA_core__prot_sys__reg__errTrig_action__lowPvddMode__reset 0x00
#define MA_core__prot_sys__reg__errTrig_action__lowPvddMode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__lowTmode---
// Trigger "low temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__errTrig_action__lowTmode__a 0x0102
#define MA_core__prot_sys__reg__errTrig_action__lowTmode__len 1
#define MA_core__prot_sys__reg__errTrig_action__lowTmode__mask 0x40
#define MA_core__prot_sys__reg__errTrig_action__lowTmode__shift 0x06
#define MA_core__prot_sys__reg__errTrig_action__lowTmode__reset 0x00
#define MA_core__prot_sys__reg__errTrig_action__lowTmode__inputonly 0
//------------------------------------------------------------------------------core__prot_sys__reg__errTrig_action__lowPvddTmode---
// Trigger "low-Pvdd-and temperature" operation mode of all chip half bridges (with "short" extension)
#define MA_core__prot_sys__reg__errTrig_action__lowPvddTmode__a 0x0102
#define MA_core__prot_sys__reg__errTrig_action__lowPvddTmode__len 1
#define MA_core__prot_sys__reg__errTrig_action__lowPvddTmode__mask 0x80
#define MA_core__prot_sys__reg__errTrig_action__lowPvddTmode__shift 0x07
#define MA_core__prot_sys__reg__errTrig_action__lowPvddTmode__reset 0x00
#define MA_core__prot_sys__reg__errTrig_action__lowPvddTmode__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__pa_rtrim---
// Resistor trim code for countering R*C process variation
#define MA_core__pa_hw__otp__pa_rtrim__a 0x0140
#define MA_core__pa_hw__otp__pa_rtrim__len 4
#define MA_core__pa_hw__otp__pa_rtrim__mask 0x0f
#define MA_core__pa_hw__otp__pa_rtrim__shift 0x00
#define MA_core__pa_hw__otp__pa_rtrim__reset 0x08
#define MA_core__pa_hw__otp__pa_rtrim__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__afir_vcmo_set---
// AFIR-DAC output common-mode operating point selection
#define MA_core__pa_hw__otp__afir_vcmo_set__a 0x0140
#define MA_core__pa_hw__otp__afir_vcmo_set__len 4
#define MA_core__pa_hw__otp__afir_vcmo_set__mask 0xf0
#define MA_core__pa_hw__otp__afir_vcmo_set__shift 0x04
#define MA_core__pa_hw__otp__afir_vcmo_set__reset 0x0b
#define MA_core__pa_hw__otp__afir_vcmo_set__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__pb_dp_len---
// Level shifter pulse length setup
#define MA_core__pa_hw__otp__pb_dp_len__a 0x0141
#define MA_core__pa_hw__otp__pb_dp_len__len 2
#define MA_core__pa_hw__otp__pb_dp_len__mask 0x03
#define MA_core__pa_hw__otp__pb_dp_len__shift 0x00
#define MA_core__pa_hw__otp__pb_dp_len__reset 0x02
#define MA_core__pa_hw__otp__pb_dp_len__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__force_dp_cont---
// Level shifter continuous-pulse forcing handle
#define MA_core__pa_hw__otp__force_dp_cont__a 0x0141
#define MA_core__pa_hw__otp__force_dp_cont__len 1
#define MA_core__pa_hw__otp__force_dp_cont__mask 0x04
#define MA_core__pa_hw__otp__force_dp_cont__shift 0x02
#define MA_core__pa_hw__otp__force_dp_cont__reset 0x00
#define MA_core__pa_hw__otp__force_dp_cont__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__unmute_cnt---
// Unmute-mode delay from release request to actual unmute. 100us/1ms/10ms/100ms per step.
#define MA_core__pa_hw__otp__unmute_cnt__a 0x0142
#define MA_core__pa_hw__otp__unmute_cnt__len 4
#define MA_core__pa_hw__otp__unmute_cnt__mask 0x0f
#define MA_core__pa_hw__otp__unmute_cnt__shift 0x00
#define MA_core__pa_hw__otp__unmute_cnt__reset 0x03
#define MA_core__pa_hw__otp__unmute_cnt__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__afir_pchg_cnt---
// AFIR startup bias filter precharge duration. 100us per step.
#define MA_core__pa_hw__otp__afir_pchg_cnt__a 0x0142
#define MA_core__pa_hw__otp__afir_pchg_cnt__len 4
#define MA_core__pa_hw__otp__afir_pchg_cnt__mask 0xf0
#define MA_core__pa_hw__otp__afir_pchg_cnt__shift 0x04
#define MA_core__pa_hw__otp__afir_pchg_cnt__reset 0x04
#define MA_core__pa_hw__otp__afir_pchg_cnt__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmctrl_pvddShift---
// Pvdd measurement scaling factor for DAC CM control machine.
#define MA_core__pa_hw__otp__cmctrl_pvddShift__a 0x0143
#define MA_core__pa_hw__otp__cmctrl_pvddShift__len 3
#define MA_core__pa_hw__otp__cmctrl_pvddShift__mask 0x07
#define MA_core__pa_hw__otp__cmctrl_pvddShift__shift 0x00
#define MA_core__pa_hw__otp__cmctrl_pvddShift__reset 0x02
#define MA_core__pa_hw__otp__cmctrl_pvddShift__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__0__sdm_d_thres---
// PWM-SDM output duty cycle setting where 3-level and 2-level operation intersect, if dac_ternary_en = 1.
#define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_thres__a 0x0144
#define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_thres__len 4
#define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_thres__mask 0x0f
#define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_thres__shift 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_thres__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_thres__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__0__sdm_d_cm_fxd---
// Fixed PWM-SDM output common-mode level setting if dac_use_cmadj = 0.
#define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_cm_fxd__a 0x0144
#define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_cm_fxd__len 4
#define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_cm_fxd__mask 0xf0
#define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_cm_fxd__shift 0x04
#define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_cm_fxd__reset 0x08
#define MA_core__pa_hw__otp__cmCtrlProfs__0__sdm_d_cm_fxd__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__0__cmadj_k1---
// Pvdd-prop. factor for calc of d_cm for dac_use_cmadj = 1.
#define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k1__a 0x0146
#define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k1__len 6
#define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k1__mask 0x3f
#define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k1__shift 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k1__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k1__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__0__dac_ternary_en---
// High to use ternary-mode AFIR.
#define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_ternary_en__a 0x0146
#define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_ternary_en__len 1
#define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_ternary_en__mask 0x40
#define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_ternary_en__shift 0x06
#define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_ternary_en__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_ternary_en__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__0__dac_use_cmadj---
// High to use Pvdd-based control of AFIR CM current level.
#define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_use_cmadj__a 0x0146
#define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_use_cmadj__len 1
#define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_use_cmadj__mask 0x80
#define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_use_cmadj__shift 0x07
#define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_use_cmadj__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__0__dac_use_cmadj__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__1__sdm_d_thres---
// PWM-SDM output duty cycle setting where 3-level and 2-level operation intersect, if dac_ternary_en = 1.
#define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_thres__a 0x0147
#define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_thres__len 4
#define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_thres__mask 0x0f
#define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_thres__shift 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_thres__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_thres__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__1__sdm_d_cm_fxd---
// Fixed PWM-SDM output common-mode level setting if dac_use_cmadj = 0.
#define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_cm_fxd__a 0x0147
#define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_cm_fxd__len 4
#define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_cm_fxd__mask 0xf0
#define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_cm_fxd__shift 0x04
#define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_cm_fxd__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__1__sdm_d_cm_fxd__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__1__cmadj_k1---
// Pvdd-prop. factor for calc of d_cm for dac_use_cmadj = 1.
#define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k1__a 0x0149
#define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k1__len 6
#define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k1__mask 0x3f
#define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k1__shift 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k1__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k1__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__1__dac_ternary_en---
// High to use ternary-mode AFIR.
#define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_ternary_en__a 0x0149
#define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_ternary_en__len 1
#define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_ternary_en__mask 0x40
#define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_ternary_en__shift 0x06
#define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_ternary_en__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_ternary_en__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__1__dac_use_cmadj---
// High to use Pvdd-based control of AFIR CM current level.
#define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_use_cmadj__a 0x0149
#define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_use_cmadj__len 1
#define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_use_cmadj__mask 0x80
#define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_use_cmadj__shift 0x07
#define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_use_cmadj__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__1__dac_use_cmadj__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__2__sdm_d_thres---
// PWM-SDM output duty cycle setting where 3-level and 2-level operation intersect, if dac_ternary_en = 1.
#define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_thres__a 0x014a
#define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_thres__len 4
#define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_thres__mask 0x0f
#define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_thres__shift 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_thres__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_thres__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__2__sdm_d_cm_fxd---
// Fixed PWM-SDM output common-mode level setting if dac_use_cmadj = 0.
#define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_cm_fxd__a 0x014a
#define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_cm_fxd__len 4
#define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_cm_fxd__mask 0xf0
#define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_cm_fxd__shift 0x04
#define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_cm_fxd__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__2__sdm_d_cm_fxd__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__2__cmadj_k1---
// Pvdd-prop. factor for calc of d_cm for dac_use_cmadj = 1.
#define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k1__a 0x014c
#define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k1__len 6
#define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k1__mask 0x3f
#define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k1__shift 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k1__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k1__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__2__dac_ternary_en---
// High to use ternary-mode AFIR.
#define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_ternary_en__a 0x014c
#define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_ternary_en__len 1
#define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_ternary_en__mask 0x40
#define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_ternary_en__shift 0x06
#define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_ternary_en__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_ternary_en__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__2__dac_use_cmadj---
// High to use Pvdd-based control of AFIR CM current level.
#define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_use_cmadj__a 0x014c
#define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_use_cmadj__len 1
#define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_use_cmadj__mask 0x80
#define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_use_cmadj__shift 0x07
#define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_use_cmadj__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__2__dac_use_cmadj__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__3__sdm_d_thres---
// PWM-SDM output duty cycle setting where 3-level and 2-level operation intersect, if dac_ternary_en = 1.
#define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_thres__a 0x014d
#define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_thres__len 4
#define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_thres__mask 0x0f
#define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_thres__shift 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_thres__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_thres__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__3__sdm_d_cm_fxd---
// Fixed PWM-SDM output common-mode level setting if dac_use_cmadj = 0.
#define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_cm_fxd__a 0x014d
#define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_cm_fxd__len 4
#define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_cm_fxd__mask 0xf0
#define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_cm_fxd__shift 0x04
#define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_cm_fxd__reset 0x01
#define MA_core__pa_hw__otp__cmCtrlProfs__3__sdm_d_cm_fxd__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__3__cmadj_k1---
// Pvdd-prop. factor for calc of d_cm for dac_use_cmadj = 1.
#define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k1__a 0x014f
#define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k1__len 6
#define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k1__mask 0x3f
#define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k1__shift 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k1__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k1__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__3__dac_ternary_en---
// High to use ternary-mode AFIR.
#define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_ternary_en__a 0x014f
#define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_ternary_en__len 1
#define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_ternary_en__mask 0x40
#define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_ternary_en__shift 0x06
#define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_ternary_en__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_ternary_en__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__3__dac_use_cmadj---
// High to use Pvdd-based control of AFIR CM current level.
#define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_use_cmadj__a 0x014f
#define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_use_cmadj__len 1
#define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_use_cmadj__mask 0x80
#define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_use_cmadj__shift 0x07
#define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_use_cmadj__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__3__dac_use_cmadj__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__gd_test_mode---
// Gate drive "test mode force" vector [b1 a1 b0 a0].
#define MA_core__pa_hw__reg__gd_test_mode__a 0x0157
#define MA_core__pa_hw__reg__gd_test_mode__len 4
#define MA_core__pa_hw__reg__gd_test_mode__mask 0x0f
#define MA_core__pa_hw__reg__gd_test_mode__shift 0x00
#define MA_core__pa_hw__reg__gd_test_mode__reset 0x00
#define MA_core__pa_hw__reg__gd_test_mode__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__gd_ocp_dis---
// Gate driver "ocp disable" vector    [b1 a1 b0 a0].
#define MA_core__pa_hw__reg__gd_ocp_dis__a 0x0157
#define MA_core__pa_hw__reg__gd_ocp_dis__len 4
#define MA_core__pa_hw__reg__gd_ocp_dis__mask 0xf0
#define MA_core__pa_hw__reg__gd_ocp_dis__shift 0x04
#define MA_core__pa_hw__reg__gd_ocp_dis__reset 0x00
#define MA_core__pa_hw__reg__gd_ocp_dis__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__gd_test_cfg---
// Gate drive "test mode" configuration.
#define MA_core__pa_hw__reg__gd_test_cfg__a 0x0158
#define MA_core__pa_hw__reg__gd_test_cfg__len 2
#define MA_core__pa_hw__reg__gd_test_cfg__mask 0x03
#define MA_core__pa_hw__reg__gd_test_cfg__shift 0x00
#define MA_core__pa_hw__reg__gd_test_cfg__reset 0x00
#define MA_core__pa_hw__reg__gd_test_cfg__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__gd_spare_cfg---
// Gate driver spare config. bits. 		[b1 a1 b0 a0].
#define MA_core__pa_hw__reg__gd_spare_cfg__a 0x0158
#define MA_core__pa_hw__reg__gd_spare_cfg__len 4
#define MA_core__pa_hw__reg__gd_spare_cfg__mask 0x3c
#define MA_core__pa_hw__reg__gd_spare_cfg__shift 0x02
#define MA_core__pa_hw__reg__gd_spare_cfg__reset 0x00
#define MA_core__pa_hw__reg__gd_spare_cfg__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__afir_pchg_force---
// High to force AFIR bias filter into prechage mode.
#define MA_core__pa_hw__reg__afir_pchg_force__a 0x0158
#define MA_core__pa_hw__reg__afir_pchg_force__len 1
#define MA_core__pa_hw__reg__afir_pchg_force__mask 0x40
#define MA_core__pa_hw__reg__afir_pchg_force__shift 0x06
#define MA_core__pa_hw__reg__afir_pchg_force__reset 0x00
#define MA_core__pa_hw__reg__afir_pchg_force__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__OTP_supply_en_force---
// High to force enable for GD refgen, to provide dvdd_5v0 for OTP read.
#define MA_core__pa_hw__reg__OTP_supply_en_force__a 0x0158
#define MA_core__pa_hw__reg__OTP_supply_en_force__len 1
#define MA_core__pa_hw__reg__OTP_supply_en_force__mask 0x80
#define MA_core__pa_hw__reg__OTP_supply_en_force__shift 0x07
#define MA_core__pa_hw__reg__OTP_supply_en_force__reset 0x00
#define MA_core__pa_hw__reg__OTP_supply_en_force__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__sw_force_reg0---
// High to force channel 0 switch control vector from register.
#define MA_core__pa_hw__reg__sw_force_reg0__a 0x0159
#define MA_core__pa_hw__reg__sw_force_reg0__len 1
#define MA_core__pa_hw__reg__sw_force_reg0__mask 0x01
#define MA_core__pa_hw__reg__sw_force_reg0__shift 0x00
#define MA_core__pa_hw__reg__sw_force_reg0__reset 0x00
#define MA_core__pa_hw__reg__sw_force_reg0__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__sw_force_reg1---
// High to force channel 1 switch control vector from register.
#define MA_core__pa_hw__reg__sw_force_reg1__a 0x0159
#define MA_core__pa_hw__reg__sw_force_reg1__len 1
#define MA_core__pa_hw__reg__sw_force_reg1__mask 0x02
#define MA_core__pa_hw__reg__sw_force_reg1__shift 0x01
#define MA_core__pa_hw__reg__sw_force_reg1__reset 0x00
#define MA_core__pa_hw__reg__sw_force_reg1__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__gd_pchg_force---
// Gate driver "force precharge to reg setting" vector [b1 a1 b0 a0];
#define MA_core__pa_hw__reg__gd_pchg_force__a 0x0159
#define MA_core__pa_hw__reg__gd_pchg_force__len 4
#define MA_core__pa_hw__reg__gd_pchg_force__mask 0x3c
#define MA_core__pa_hw__reg__gd_pchg_force__shift 0x02
#define MA_core__pa_hw__reg__gd_pchg_force__reset 0x00
#define MA_core__pa_hw__reg__gd_pchg_force__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__clip_rec_dis_force0---
// High to force specific register value of ch 0 clip recovery disable bit.
#define MA_core__pa_hw__reg__clip_rec_dis_force0__a 0x0159
#define MA_core__pa_hw__reg__clip_rec_dis_force0__len 1
#define MA_core__pa_hw__reg__clip_rec_dis_force0__mask 0x40
#define MA_core__pa_hw__reg__clip_rec_dis_force0__shift 0x06
#define MA_core__pa_hw__reg__clip_rec_dis_force0__reset 0x00
#define MA_core__pa_hw__reg__clip_rec_dis_force0__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__clip_rec_dis_force1---
// High to force specific register value of ch 0 clip recovery disable bit.
#define MA_core__pa_hw__reg__clip_rec_dis_force1__a 0x0159
#define MA_core__pa_hw__reg__clip_rec_dis_force1__len 1
#define MA_core__pa_hw__reg__clip_rec_dis_force1__mask 0x80
#define MA_core__pa_hw__reg__clip_rec_dis_force1__shift 0x07
#define MA_core__pa_hw__reg__clip_rec_dis_force1__reset 0x00
#define MA_core__pa_hw__reg__clip_rec_dis_force1__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__sw_a0_reg---
// Channel 0, bridge A switch control vector for "register force".
#define MA_core__pa_hw__reg__sw_a0_reg__a 0x015a
#define MA_core__pa_hw__reg__sw_a0_reg__len 4
#define MA_core__pa_hw__reg__sw_a0_reg__mask 0x0f
#define MA_core__pa_hw__reg__sw_a0_reg__shift 0x00
#define MA_core__pa_hw__reg__sw_a0_reg__reset 0x00
#define MA_core__pa_hw__reg__sw_a0_reg__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__sw_b0_reg---
// Channel 0, bridge B switch control vector for "register force".
#define MA_core__pa_hw__reg__sw_b0_reg__a 0x015a
#define MA_core__pa_hw__reg__sw_b0_reg__len 4
#define MA_core__pa_hw__reg__sw_b0_reg__mask 0xf0
#define MA_core__pa_hw__reg__sw_b0_reg__shift 0x04
#define MA_core__pa_hw__reg__sw_b0_reg__reset 0x00
#define MA_core__pa_hw__reg__sw_b0_reg__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__sw_a1_reg---
// Channel 1, bridge A switch control vector for "register force".
#define MA_core__pa_hw__reg__sw_a1_reg__a 0x015b
#define MA_core__pa_hw__reg__sw_a1_reg__len 4
#define MA_core__pa_hw__reg__sw_a1_reg__mask 0x0f
#define MA_core__pa_hw__reg__sw_a1_reg__shift 0x00
#define MA_core__pa_hw__reg__sw_a1_reg__reset 0x00
#define MA_core__pa_hw__reg__sw_a1_reg__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__sw_b1_reg---
// Channel 1, bridge B switch control vector for "register force".
#define MA_core__pa_hw__reg__sw_b1_reg__a 0x015b
#define MA_core__pa_hw__reg__sw_b1_reg__len 4
#define MA_core__pa_hw__reg__sw_b1_reg__mask 0xf0
#define MA_core__pa_hw__reg__sw_b1_reg__shift 0x04
#define MA_core__pa_hw__reg__sw_b1_reg__reset 0x00
#define MA_core__pa_hw__reg__sw_b1_reg__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__gd_pchg_reg---
// Gate driver prechage settings vector for reg. force. [b1 a1 b0 a0];
#define MA_core__pa_hw__reg__gd_pchg_reg__a 0x015c
#define MA_core__pa_hw__reg__gd_pchg_reg__len 4
#define MA_core__pa_hw__reg__gd_pchg_reg__mask 0x0f
#define MA_core__pa_hw__reg__gd_pchg_reg__shift 0x00
#define MA_core__pa_hw__reg__gd_pchg_reg__reset 0x00
#define MA_core__pa_hw__reg__gd_pchg_reg__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__clip_rec_dis_reg0---
// "Register force" value of channel 0 lf_clip_rec_dis bit.
#define MA_core__pa_hw__reg__clip_rec_dis_reg0__a 0x015c
#define MA_core__pa_hw__reg__clip_rec_dis_reg0__len 1
#define MA_core__pa_hw__reg__clip_rec_dis_reg0__mask 0x10
#define MA_core__pa_hw__reg__clip_rec_dis_reg0__shift 0x04
#define MA_core__pa_hw__reg__clip_rec_dis_reg0__reset 0x00
#define MA_core__pa_hw__reg__clip_rec_dis_reg0__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__clip_rec_dis_reg1---
// "Register force" value of channel 1 lf_clip_rec_dis bit.
#define MA_core__pa_hw__reg__clip_rec_dis_reg1__a 0x015c
#define MA_core__pa_hw__reg__clip_rec_dis_reg1__len 1
#define MA_core__pa_hw__reg__clip_rec_dis_reg1__mask 0x20
#define MA_core__pa_hw__reg__clip_rec_dis_reg1__shift 0x05
#define MA_core__pa_hw__reg__clip_rec_dis_reg1__reset 0x00
#define MA_core__pa_hw__reg__clip_rec_dis_reg1__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__status_ch0---
// Amplifier channel 0 status; 3: Muted BTL, 4: Unmuting BTL, 5: Playing BTL, 6: Muted PBTL master, 7: Unmuting PBTL master, 8: Playing PBTL master, Others: Disabled
#define MA_core__pa_hw__status_ch0__a 0x015e
#define MA_core__pa_hw__status_ch0__len 4
#define MA_core__pa_hw__status_ch0__mask 0x0f
#define MA_core__pa_hw__status_ch0__shift 0x00
#define MA_core__pa_hw__status_ch0__reset 0x00
#define MA_core__pa_hw__status_ch0__inputonly 1
//------------------------------------------------------------------------------core__pa_hw__status_ch1---
// Amplifier channel 1 status; 1: Disabled PBTL slave, 2: Enabled PBTL slave, 3: Muted BTL, 4: Unmuting BTL, 5: Playing BTL, Others: Disabled
#define MA_core__pa_hw__status_ch1__a 0x015e
#define MA_core__pa_hw__status_ch1__len 4
#define MA_core__pa_hw__status_ch1__mask 0xf0
#define MA_core__pa_hw__status_ch1__shift 0x04
#define MA_core__pa_hw__status_ch1__reset 0x00
#define MA_core__pa_hw__status_ch1__inputonly 1
//------------------------------------------------------------------------------core__pa_hw__otp__pwmClkDiv_base---
// Base PWM frequency divider setting, nominally "10". (For 4.096MHz base.)
#define MA_core__pa_hw__otp__pwmClkDiv_base__a 0x0150
#define MA_core__pa_hw__otp__pwmClkDiv_base__len 2
#define MA_core__pa_hw__otp__pwmClkDiv_base__mask 0x06
#define MA_core__pa_hw__otp__pwmClkDiv_base__shift 0x01
#define MA_core__pa_hw__otp__pwmClkDiv_base__reset 0x02
#define MA_core__pa_hw__otp__pwmClkDiv_base__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmctrl_hyst---
// Hysteresis in DAC CM control machine
#define MA_core__pa_hw__otp__cmctrl_hyst__a 0x0143
#define MA_core__pa_hw__otp__cmctrl_hyst__len 4
#define MA_core__pa_hw__otp__cmctrl_hyst__mask 0x78
#define MA_core__pa_hw__otp__cmctrl_hyst__shift 0x03
#define MA_core__pa_hw__otp__cmctrl_hyst__reset 0x02
#define MA_core__pa_hw__otp__cmctrl_hyst__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__clk_chop_32kHz---
// Low (default) to use 64kHz chop clock, otherwise 32kHz is selected.
#define MA_core__pa_hw__otp__clk_chop_32kHz__a 0x0154
#define MA_core__pa_hw__otp__clk_chop_32kHz__len 1
#define MA_core__pa_hw__otp__clk_chop_32kHz__mask 0x80
#define MA_core__pa_hw__otp__clk_chop_32kHz__shift 0x07
#define MA_core__pa_hw__otp__clk_chop_32kHz__reset 0x00
#define MA_core__pa_hw__otp__clk_chop_32kHz__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__afir_force_disable0---
// High to force disable of AFIR in channel 0.
#define MA_core__pa_hw__reg__afir_force_disable0__a 0x015d
#define MA_core__pa_hw__reg__afir_force_disable0__len 1
#define MA_core__pa_hw__reg__afir_force_disable0__mask 0x01
#define MA_core__pa_hw__reg__afir_force_disable0__shift 0x00
#define MA_core__pa_hw__reg__afir_force_disable0__reset 0x00
#define MA_core__pa_hw__reg__afir_force_disable0__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__afir_force_disable1---
// High to force disable of AFIR in channel 1.
#define MA_core__pa_hw__reg__afir_force_disable1__a 0x015d
#define MA_core__pa_hw__reg__afir_force_disable1__len 1
#define MA_core__pa_hw__reg__afir_force_disable1__mask 0x02
#define MA_core__pa_hw__reg__afir_force_disable1__shift 0x01
#define MA_core__pa_hw__reg__afir_force_disable1__reset 0x00
#define MA_core__pa_hw__reg__afir_force_disable1__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__lf_force_disable0---
// High to force disable of loop filter in channel 0.
#define MA_core__pa_hw__reg__lf_force_disable0__a 0x015d
#define MA_core__pa_hw__reg__lf_force_disable0__len 1
#define MA_core__pa_hw__reg__lf_force_disable0__mask 0x04
#define MA_core__pa_hw__reg__lf_force_disable0__shift 0x02
#define MA_core__pa_hw__reg__lf_force_disable0__reset 0x00
#define MA_core__pa_hw__reg__lf_force_disable0__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__lf_force_disable1---
// High to force disable of loop filter in channel 1.
#define MA_core__pa_hw__reg__lf_force_disable1__a 0x015d
#define MA_core__pa_hw__reg__lf_force_disable1__len 1
#define MA_core__pa_hw__reg__lf_force_disable1__mask 0x08
#define MA_core__pa_hw__reg__lf_force_disable1__shift 0x03
#define MA_core__pa_hw__reg__lf_force_disable1__reset 0x00
#define MA_core__pa_hw__reg__lf_force_disable1__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__pwm_force_disable0---
// High to force disable of PWM in channel 0.
#define MA_core__pa_hw__reg__pwm_force_disable0__a 0x015d
#define MA_core__pa_hw__reg__pwm_force_disable0__len 1
#define MA_core__pa_hw__reg__pwm_force_disable0__mask 0x10
#define MA_core__pa_hw__reg__pwm_force_disable0__shift 0x04
#define MA_core__pa_hw__reg__pwm_force_disable0__reset 0x00
#define MA_core__pa_hw__reg__pwm_force_disable0__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__pwm_force_disable1---
// High to force disable of PWM in channel 1.
#define MA_core__pa_hw__reg__pwm_force_disable1__a 0x015d
#define MA_core__pa_hw__reg__pwm_force_disable1__len 1
#define MA_core__pa_hw__reg__pwm_force_disable1__mask 0x20
#define MA_core__pa_hw__reg__pwm_force_disable1__shift 0x05
#define MA_core__pa_hw__reg__pwm_force_disable1__reset 0x00
#define MA_core__pa_hw__reg__pwm_force_disable1__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__gd_pd_strong---
// Gate driver strong pull down enable vector [b1 a1 b0 a0].
#define MA_core__pa_hw__otp__gd_pd_strong__a 0x0155
#define MA_core__pa_hw__otp__gd_pd_strong__len 4
#define MA_core__pa_hw__otp__gd_pd_strong__mask 0x0f
#define MA_core__pa_hw__otp__gd_pd_strong__shift 0x00
#define MA_core__pa_hw__otp__gd_pd_strong__reset 0x00
#define MA_core__pa_hw__otp__gd_pd_strong__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__gd_ser_clk_div---
// Gate driver serial link clock frequency setting. 00: 6MHz, 01: 3MHz, 10: 2MHz (default), 11: 1.5MHz [rev2]
#define MA_core__pa_hw__otp__gd_ser_clk_div__a 0x0155
#define MA_core__pa_hw__otp__gd_ser_clk_div__len 2
#define MA_core__pa_hw__otp__gd_ser_clk_div__mask 0x30
#define MA_core__pa_hw__otp__gd_ser_clk_div__shift 0x04
#define MA_core__pa_hw__otp__gd_ser_clk_div__reset 0x02
#define MA_core__pa_hw__otp__gd_ser_clk_div__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__bal_ipol_upd_del---
// Delay from GD serial link update to PWM Vcfly Ipol post-processing sampling. 00: 120ns (default), 01: 480ns, 10: 800ns, 11: 1000ns [rev2]
#define MA_core__pa_hw__otp__bal_ipol_upd_del__a 0x0155
#define MA_core__pa_hw__otp__bal_ipol_upd_del__len 2
#define MA_core__pa_hw__otp__bal_ipol_upd_del__mask 0xc0
#define MA_core__pa_hw__otp__bal_ipol_upd_del__shift 0x06
#define MA_core__pa_hw__otp__bal_ipol_upd_del__reset 0x00
#define MA_core__pa_hw__otp__bal_ipol_upd_del__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__gd_ramp_up_cnt---
// Delay from PB enable to first GD serial update. 00: 100us, 01: 500us, 10: 1ms, 11: 5ms [rev2]
#define MA_core__pa_hw__otp__gd_ramp_up_cnt__a 0x0156
#define MA_core__pa_hw__otp__gd_ramp_up_cnt__len 2
#define MA_core__pa_hw__otp__gd_ramp_up_cnt__mask 0x03
#define MA_core__pa_hw__otp__gd_ramp_up_cnt__shift 0x00
#define MA_core__pa_hw__otp__gd_ramp_up_cnt__reset 0x01
#define MA_core__pa_hw__otp__gd_ramp_up_cnt__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__gd_ser_bist_sel---
// Select GD feedback line to use for BIST comparison [b1 a1 b0 a0]
#define MA_core__pa_hw__reg__gd_ser_bist_sel__a 0x015d
#define MA_core__pa_hw__reg__gd_ser_bist_sel__len 2
#define MA_core__pa_hw__reg__gd_ser_bist_sel__mask 0xc0
#define MA_core__pa_hw__reg__gd_ser_bist_sel__shift 0x06
#define MA_core__pa_hw__reg__gd_ser_bist_sel__reset 0x00
#define MA_core__pa_hw__reg__gd_ser_bist_sel__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__gd_ser_bist_status---
// 
#define MA_core__pa_hw__gd_ser_bist_status__a 0x015f
#define MA_core__pa_hw__gd_ser_bist_status__len 4
#define MA_core__pa_hw__gd_ser_bist_status__mask 0x0f
#define MA_core__pa_hw__gd_ser_bist_status__shift 0x00
#define MA_core__pa_hw__gd_ser_bist_status__reset 0x00
#define MA_core__pa_hw__gd_ser_bist_status__inputonly 1
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__0__cmadj_k0---
// Constant-part of calculation of Pvdd-based d_cm for dac_use_cmadj = 1.
#define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k0__a 0x0145
#define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k0__len 4
#define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k0__mask 0x0f
#define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k0__shift 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k0__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__0__cmadj_k0__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__1__cmadj_k0---
// Constant-part of calculation of Pvdd-based d_cm for dac_use_cmadj = 1.
#define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k0__a 0x0148
#define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k0__len 4
#define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k0__mask 0x0f
#define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k0__shift 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k0__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__1__cmadj_k0__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__2__cmadj_k0---
// Constant-part of calculation of Pvdd-based d_cm for dac_use_cmadj = 1.
#define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k0__a 0x014b
#define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k0__len 4
#define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k0__mask 0x0f
#define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k0__shift 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k0__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__2__cmadj_k0__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cmCtrlProfs__3__cmadj_k0---
// Constant-part of calculation of Pvdd-based d_cm for dac_use_cmadj = 1.
#define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k0__a 0x014e
#define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k0__len 4
#define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k0__mask 0x0f
#define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k0__shift 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k0__reset 0x00
#define MA_core__pa_hw__otp__cmCtrlProfs__3__cmadj_k0__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__freerun_en---
// disable pwm synchronization to sync,										  default: '0'
#define MA_core__pa_hw__otp__freerun_en__a 0x0150
#define MA_core__pa_hw__otp__freerun_en__len 1
#define MA_core__pa_hw__otp__freerun_en__mask 0x01
#define MA_core__pa_hw__otp__freerun_en__shift 0x00
#define MA_core__pa_hw__otp__freerun_en__reset 0x00
#define MA_core__pa_hw__otp__freerun_en__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__clk_pwm_phase---
// phase of derived clock (clk_pwm_base_4m096_o),							  default: "000"
#define MA_core__pa_hw__otp__clk_pwm_phase__a 0x0150
#define MA_core__pa_hw__otp__clk_pwm_phase__len 2
#define MA_core__pa_hw__otp__clk_pwm_phase__mask 0x18
#define MA_core__pa_hw__otp__clk_pwm_phase__shift 0x03
#define MA_core__pa_hw__otp__clk_pwm_phase__reset 0x00
#define MA_core__pa_hw__otp__clk_pwm_phase__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__clk_pwm_invert---
// invert derived clock (clk_pwm_base_4m096),								  default: '0'
#define MA_core__pa_hw__otp__clk_pwm_invert__a 0x0150
#define MA_core__pa_hw__otp__clk_pwm_invert__len 1
#define MA_core__pa_hw__otp__clk_pwm_invert__mask 0x20
#define MA_core__pa_hw__otp__clk_pwm_invert__shift 0x05
#define MA_core__pa_hw__otp__clk_pwm_invert__reset 0x00
#define MA_core__pa_hw__otp__clk_pwm_invert__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__clk_cp_phase_ls---
// phase (least significant) of derived clock (clk_cp_base_2m048_o),  default: "000"
#define MA_core__pa_hw__otp__clk_cp_phase_ls__a 0x0150
#define MA_core__pa_hw__otp__clk_cp_phase_ls__len 2
#define MA_core__pa_hw__otp__clk_cp_phase_ls__mask 0xc0
#define MA_core__pa_hw__otp__clk_cp_phase_ls__shift 0x06
#define MA_core__pa_hw__otp__clk_cp_phase_ls__reset 0x00
#define MA_core__pa_hw__otp__clk_cp_phase_ls__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__clk_cp_phase_ms---
// phase (most significant) of derived clock (clk_cp_base_2m048_o),	 default: '0'
#define MA_core__pa_hw__otp__clk_cp_phase_ms__a 0x0151
#define MA_core__pa_hw__otp__clk_cp_phase_ms__len 1
#define MA_core__pa_hw__otp__clk_cp_phase_ms__mask 0x01
#define MA_core__pa_hw__otp__clk_cp_phase_ms__shift 0x00
#define MA_core__pa_hw__otp__clk_cp_phase_ms__reset 0x00
#define MA_core__pa_hw__otp__clk_cp_phase_ms__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__clk_cp_invert---
// invert derived clock (clk_cp_base_2m048_o),								 default: '0'
#define MA_core__pa_hw__otp__clk_cp_invert__a 0x0151
#define MA_core__pa_hw__otp__clk_cp_invert__len 1
#define MA_core__pa_hw__otp__clk_cp_invert__mask 0x02
#define MA_core__pa_hw__otp__clk_cp_invert__shift 0x01
#define MA_core__pa_hw__otp__clk_cp_invert__reset 0x00
#define MA_core__pa_hw__otp__clk_cp_invert__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__cp_sync_phase---
// phase of sync tick on clk_cp,													 default: "000000"
#define MA_core__pa_hw__otp__cp_sync_phase__a 0x0151
#define MA_core__pa_hw__otp__cp_sync_phase__len 6
#define MA_core__pa_hw__otp__cp_sync_phase__mask 0xfc
#define MA_core__pa_hw__otp__cp_sync_phase__shift 0x02
#define MA_core__pa_hw__otp__cp_sync_phase__reset 0x00
#define MA_core__pa_hw__otp__cp_sync_phase__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__pwm_phase---
// phase delay of pwm signals in clk_pwm (4MHz) cycles
#define MA_core__pa_hw__otp__pwm_phase__a 0x0153
#define MA_core__pa_hw__otp__pwm_phase__len 7
#define MA_core__pa_hw__otp__pwm_phase__mask 0x7f
#define MA_core__pa_hw__otp__pwm_phase__shift 0x00
#define MA_core__pa_hw__otp__pwm_phase__reset 0x00
#define MA_core__pa_hw__otp__pwm_phase__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__pwm_ch1_phase---
// phase of ch1 pwm signals relative to ch0 in clk_pwm (4MHz) cycles
#define MA_core__pa_hw__otp__pwm_ch1_phase__a 0x0154
#define MA_core__pa_hw__otp__pwm_ch1_phase__len 7
#define MA_core__pa_hw__otp__pwm_ch1_phase__mask 0x7f
#define MA_core__pa_hw__otp__pwm_ch1_phase__shift 0x00
#define MA_core__pa_hw__otp__pwm_ch1_phase__reset 0x00
#define MA_core__pa_hw__otp__pwm_ch1_phase__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__reg__force_acfg_update---
// Trigger an update of the DCU related acfg register on each flip.
#define MA_core__pa_hw__reg__force_acfg_update__a 0x015c
#define MA_core__pa_hw__reg__force_acfg_update__len 1
#define MA_core__pa_hw__reg__force_acfg_update__mask 0x40
#define MA_core__pa_hw__reg__force_acfg_update__shift 0x06
#define MA_core__pa_hw__reg__force_acfg_update__reset 0x00
#define MA_core__pa_hw__reg__force_acfg_update__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__gd_ref_sync_phase---
// phase of sync tick on clk_pwm,												 default: "0000000"
#define MA_core__pa_hw__otp__gd_ref_sync_phase__a 0x0152
#define MA_core__pa_hw__otp__gd_ref_sync_phase__len 7
#define MA_core__pa_hw__otp__gd_ref_sync_phase__mask 0x7f
#define MA_core__pa_hw__otp__gd_ref_sync_phase__shift 0x00
#define MA_core__pa_hw__otp__gd_ref_sync_phase__reset 0x00
#define MA_core__pa_hw__otp__gd_ref_sync_phase__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__gd_dVdt_min---
// Minimum allowable value for the gate driver dV/dt setting [rev2]
#define MA_core__pa_hw__otp__gd_dVdt_min__a 0x0156
#define MA_core__pa_hw__otp__gd_dVdt_min__len 2
#define MA_core__pa_hw__otp__gd_dVdt_min__mask 0x0c
#define MA_core__pa_hw__otp__gd_dVdt_min__shift 0x02
#define MA_core__pa_hw__otp__gd_dVdt_min__reset 0x00
#define MA_core__pa_hw__otp__gd_dVdt_min__inputonly 0
//------------------------------------------------------------------------------core__pa_hw__otp__gd_dVdt_max---
// Maximum allowable value for the gate driver dV/dt setting [rev2]
#define MA_core__pa_hw__otp__gd_dVdt_max__a 0x0156
#define MA_core__pa_hw__otp__gd_dVdt_max__len 2
#define MA_core__pa_hw__otp__gd_dVdt_max__mask 0x30
#define MA_core__pa_hw__otp__gd_dVdt_max__shift 0x04
#define MA_core__pa_hw__otp__gd_dVdt_max__reset 0x03
#define MA_core__pa_hw__otp__gd_dVdt_max__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__enable_dco_ow---
// 
#define MA_core__clk_sys__enable_dco_ow__a 0x0180
#define MA_core__clk_sys__enable_dco_ow__len 1
#define MA_core__clk_sys__enable_dco_ow__mask 0x01
#define MA_core__clk_sys__enable_dco_ow__shift 0x00
#define MA_core__clk_sys__enable_dco_ow__reset 0x00
#define MA_core__clk_sys__enable_dco_ow__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__enable_dco---
// 
#define MA_core__clk_sys__enable_dco__a 0x0180
#define MA_core__clk_sys__enable_dco__len 1
#define MA_core__clk_sys__enable_dco__mask 0x02
#define MA_core__clk_sys__enable_dco__shift 0x01
#define MA_core__clk_sys__enable_dco__reset 0x00
#define MA_core__clk_sys__enable_dco__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_enable_ow_single_bits---
// 
#define MA_core__clk_sys__dco_enable_ow_single_bits__a 0x0180
#define MA_core__clk_sys__dco_enable_ow_single_bits__len 1
#define MA_core__clk_sys__dco_enable_ow_single_bits__mask 0x04
#define MA_core__clk_sys__dco_enable_ow_single_bits__shift 0x02
#define MA_core__clk_sys__dco_enable_ow_single_bits__reset 0x00
#define MA_core__clk_sys__dco_enable_ow_single_bits__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_bias_enable_single_bit---
// 
#define MA_core__clk_sys__dco_bias_enable_single_bit__a 0x0180
#define MA_core__clk_sys__dco_bias_enable_single_bit__len 1
#define MA_core__clk_sys__dco_bias_enable_single_bit__mask 0x08
#define MA_core__clk_sys__dco_bias_enable_single_bit__shift 0x03
#define MA_core__clk_sys__dco_bias_enable_single_bit__reset 0x00
#define MA_core__clk_sys__dco_bias_enable_single_bit__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_core_bias_enable_single_bit---
// 
#define MA_core__clk_sys__dco_core_bias_enable_single_bit__a 0x0180
#define MA_core__clk_sys__dco_core_bias_enable_single_bit__len 1
#define MA_core__clk_sys__dco_core_bias_enable_single_bit__mask 0x10
#define MA_core__clk_sys__dco_core_bias_enable_single_bit__shift 0x04
#define MA_core__clk_sys__dco_core_bias_enable_single_bit__reset 0x00
#define MA_core__clk_sys__dco_core_bias_enable_single_bit__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_core_enable_single_bit---
// 
#define MA_core__clk_sys__dco_core_enable_single_bit__a 0x0180
#define MA_core__clk_sys__dco_core_enable_single_bit__len 1
#define MA_core__clk_sys__dco_core_enable_single_bit__mask 0x20
#define MA_core__clk_sys__dco_core_enable_single_bit__shift 0x05
#define MA_core__clk_sys__dco_core_enable_single_bit__reset 0x00
#define MA_core__clk_sys__dco_core_enable_single_bit__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_clk_enable_single_bit---
// 
#define MA_core__clk_sys__dco_clk_enable_single_bit__a 0x0180
#define MA_core__clk_sys__dco_clk_enable_single_bit__len 1
#define MA_core__clk_sys__dco_clk_enable_single_bit__mask 0x40
#define MA_core__clk_sys__dco_clk_enable_single_bit__shift 0x06
#define MA_core__clk_sys__dco_clk_enable_single_bit__reset 0x00
#define MA_core__clk_sys__dco_clk_enable_single_bit__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dpll_enable_ow---
// 
#define MA_core__clk_sys__dpll_enable_ow__a 0x0181
#define MA_core__clk_sys__dpll_enable_ow__len 1
#define MA_core__clk_sys__dpll_enable_ow__mask 0x01
#define MA_core__clk_sys__dpll_enable_ow__shift 0x00
#define MA_core__clk_sys__dpll_enable_ow__reset 0x00
#define MA_core__clk_sys__dpll_enable_ow__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dpll_enable---
// 
#define MA_core__clk_sys__dpll_enable__a 0x0181
#define MA_core__clk_sys__dpll_enable__len 1
#define MA_core__clk_sys__dpll_enable__mask 0x02
#define MA_core__clk_sys__dpll_enable__shift 0x01
#define MA_core__clk_sys__dpll_enable__reset 0x00
#define MA_core__clk_sys__dpll_enable__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dpll_sleep_ow---
// 
#define MA_core__clk_sys__dpll_sleep_ow__a 0x0182
#define MA_core__clk_sys__dpll_sleep_ow__len 1
#define MA_core__clk_sys__dpll_sleep_ow__mask 0x40
#define MA_core__clk_sys__dpll_sleep_ow__shift 0x06
#define MA_core__clk_sys__dpll_sleep_ow__reset 0x00
#define MA_core__clk_sys__dpll_sleep_ow__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dpll_sleep---
// 
#define MA_core__clk_sys__dpll_sleep__a 0x0182
#define MA_core__clk_sys__dpll_sleep__len 1
#define MA_core__clk_sys__dpll_sleep__mask 0x80
#define MA_core__clk_sys__dpll_sleep__shift 0x07
#define MA_core__clk_sys__dpll_sleep__reset 0x00
#define MA_core__clk_sys__dpll_sleep__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dpll_run_dco_free_ow---
// 
#define MA_core__clk_sys__dpll_run_dco_free_ow__a 0x0181
#define MA_core__clk_sys__dpll_run_dco_free_ow__len 1
#define MA_core__clk_sys__dpll_run_dco_free_ow__mask 0x04
#define MA_core__clk_sys__dpll_run_dco_free_ow__shift 0x02
#define MA_core__clk_sys__dpll_run_dco_free_ow__reset 0x00
#define MA_core__clk_sys__dpll_run_dco_free_ow__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dpll_run_dco_free---
// 
#define MA_core__clk_sys__dpll_run_dco_free__a 0x0181
#define MA_core__clk_sys__dpll_run_dco_free__len 1
#define MA_core__clk_sys__dpll_run_dco_free__mask 0x08
#define MA_core__clk_sys__dpll_run_dco_free__shift 0x03
#define MA_core__clk_sys__dpll_run_dco_free__reset 0x00
#define MA_core__clk_sys__dpll_run_dco_free__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_trim_coarse---
// 
#define MA_core__clk_sys__dco_trim_coarse__a 0x0182
#define MA_core__clk_sys__dco_trim_coarse__len 5
#define MA_core__clk_sys__dco_trim_coarse__mask 0x1f
#define MA_core__clk_sys__dco_trim_coarse__shift 0x00
#define MA_core__clk_sys__dco_trim_coarse__reset 0x00
#define MA_core__clk_sys__dco_trim_coarse__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_trim_ow---
// 
#define MA_core__clk_sys__dco_trim_ow__a 0x0182
#define MA_core__clk_sys__dco_trim_ow__len 1
#define MA_core__clk_sys__dco_trim_ow__mask 0x20
#define MA_core__clk_sys__dco_trim_ow__shift 0x05
#define MA_core__clk_sys__dco_trim_ow__reset 0x00
#define MA_core__clk_sys__dco_trim_ow__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_trim_fine---
// 
#define MA_core__clk_sys__dco_trim_fine__a 0x0183
#define MA_core__clk_sys__dco_trim_fine__len 6
#define MA_core__clk_sys__dco_trim_fine__mask 0x3f
#define MA_core__clk_sys__dco_trim_fine__shift 0x00
#define MA_core__clk_sys__dco_trim_fine__reset 0x00
#define MA_core__clk_sys__dco_trim_fine__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__auto_detect_enable_ow---
// 
#define MA_core__clk_sys__auto_detect_enable_ow__a 0x0184
#define MA_core__clk_sys__auto_detect_enable_ow__len 1
#define MA_core__clk_sys__auto_detect_enable_ow__mask 0x01
#define MA_core__clk_sys__auto_detect_enable_ow__shift 0x00
#define MA_core__clk_sys__auto_detect_enable_ow__reset 0x00
#define MA_core__clk_sys__auto_detect_enable_ow__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__enable_auto_detect---
// 
#define MA_core__clk_sys__enable_auto_detect__a 0x0184
#define MA_core__clk_sys__enable_auto_detect__len 1
#define MA_core__clk_sys__enable_auto_detect__mask 0x02
#define MA_core__clk_sys__enable_auto_detect__shift 0x01
#define MA_core__clk_sys__enable_auto_detect__reset 0x00
#define MA_core__clk_sys__enable_auto_detect__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__div_ow---
// 
#define MA_core__clk_sys__div_ow__a 0x0184
#define MA_core__clk_sys__div_ow__len 1
#define MA_core__clk_sys__div_ow__mask 0x04
#define MA_core__clk_sys__div_ow__shift 0x02
#define MA_core__clk_sys__div_ow__reset 0x00
#define MA_core__clk_sys__div_ow__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__mode_m_div---
// 
#define MA_core__clk_sys__mode_m_div__a 0x0185
#define MA_core__clk_sys__mode_m_div__len 6
#define MA_core__clk_sys__mode_m_div__mask 0x3f
#define MA_core__clk_sys__mode_m_div__shift 0x00
#define MA_core__clk_sys__mode_m_div__reset 0x00
#define MA_core__clk_sys__mode_m_div__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__mode_ref_div---
// 
#define MA_core__clk_sys__mode_ref_div__a 0x0185
#define MA_core__clk_sys__mode_ref_div__len 1
#define MA_core__clk_sys__mode_ref_div__mask 0x40
#define MA_core__clk_sys__mode_ref_div__shift 0x06
#define MA_core__clk_sys__mode_ref_div__reset 0x00
#define MA_core__clk_sys__mode_ref_div__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__mode_fb_div---
// 
#define MA_core__clk_sys__mode_fb_div__a 0x0185
#define MA_core__clk_sys__mode_fb_div__len 1
#define MA_core__clk_sys__mode_fb_div__mask 0x80
#define MA_core__clk_sys__mode_fb_div__shift 0x07
#define MA_core__clk_sys__mode_fb_div__reset 0x00
#define MA_core__clk_sys__mode_fb_div__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__sys_clk_div---
// 
#define MA_core__clk_sys__sys_clk_div__a 0x0186
#define MA_core__clk_sys__sys_clk_div__len 1
#define MA_core__clk_sys__sys_clk_div__mask 0x01
#define MA_core__clk_sys__sys_clk_div__shift 0x00
#define MA_core__clk_sys__sys_clk_div__reset 0x00
#define MA_core__clk_sys__sys_clk_div__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__i2s_frame_ow---
// 
#define MA_core__clk_sys__i2s_frame_ow__a 0x0186
#define MA_core__clk_sys__i2s_frame_ow__len 1
#define MA_core__clk_sys__i2s_frame_ow__mask 0x04
#define MA_core__clk_sys__i2s_frame_ow__shift 0x02
#define MA_core__clk_sys__i2s_frame_ow__reset 0x00
#define MA_core__clk_sys__i2s_frame_ow__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__i2s_sck_Fs_base---
// 
#define MA_core__clk_sys__i2s_sck_Fs_base__a 0x0186
#define MA_core__clk_sys__i2s_sck_Fs_base__len 2
#define MA_core__clk_sys__i2s_sck_Fs_base__mask 0x18
#define MA_core__clk_sys__i2s_sck_Fs_base__shift 0x03
#define MA_core__clk_sys__i2s_sck_Fs_base__reset 0x00
#define MA_core__clk_sys__i2s_sck_Fs_base__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__bit_clk---
// 
#define MA_core__clk_sys__bit_clk__a 0x0188
#define MA_core__clk_sys__bit_clk__len 5
#define MA_core__clk_sys__bit_clk__mask 0x1f
#define MA_core__clk_sys__bit_clk__shift 0x00
#define MA_core__clk_sys__bit_clk__reset 0x00
#define MA_core__clk_sys__bit_clk__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_clk_ok_ow---
// 
#define MA_core__clk_sys__dco_clk_ok_ow__a 0x0189
#define MA_core__clk_sys__dco_clk_ok_ow__len 1
#define MA_core__clk_sys__dco_clk_ok_ow__mask 0x01
#define MA_core__clk_sys__dco_clk_ok_ow__shift 0x00
#define MA_core__clk_sys__dco_clk_ok_ow__reset 0x00
#define MA_core__clk_sys__dco_clk_ok_ow__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_clk_ok---
// 
#define MA_core__clk_sys__dco_clk_ok__a 0x0189
#define MA_core__clk_sys__dco_clk_ok__len 1
#define MA_core__clk_sys__dco_clk_ok__mask 0x02
#define MA_core__clk_sys__dco_clk_ok__shift 0x01
#define MA_core__clk_sys__dco_clk_ok__reset 0x00
#define MA_core__clk_sys__dco_clk_ok__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__pll_locked_ow---
// 
#define MA_core__clk_sys__pll_locked_ow__a 0x0189
#define MA_core__clk_sys__pll_locked_ow__len 1
#define MA_core__clk_sys__pll_locked_ow__mask 0x04
#define MA_core__clk_sys__pll_locked_ow__shift 0x02
#define MA_core__clk_sys__pll_locked_ow__reset 0x00
#define MA_core__clk_sys__pll_locked_ow__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__pll_locked---
// 
#define MA_core__clk_sys__pll_locked__a 0x0189
#define MA_core__clk_sys__pll_locked__len 1
#define MA_core__clk_sys__pll_locked__mask 0x08
#define MA_core__clk_sys__pll_locked__shift 0x03
#define MA_core__clk_sys__pll_locked__reset 0x00
#define MA_core__clk_sys__pll_locked__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__i2s_sck_ok_ow---
// 
#define MA_core__clk_sys__i2s_sck_ok_ow__a 0x0189
#define MA_core__clk_sys__i2s_sck_ok_ow__len 1
#define MA_core__clk_sys__i2s_sck_ok_ow__mask 0x20
#define MA_core__clk_sys__i2s_sck_ok_ow__shift 0x05
#define MA_core__clk_sys__i2s_sck_ok_ow__reset 0x00
#define MA_core__clk_sys__i2s_sck_ok_ow__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__i2s_sck_ok---
// 
#define MA_core__clk_sys__i2s_sck_ok__a 0x0189
#define MA_core__clk_sys__i2s_sck_ok__len 1
#define MA_core__clk_sys__i2s_sck_ok__mask 0x40
#define MA_core__clk_sys__i2s_sck_ok__shift 0x06
#define MA_core__clk_sys__i2s_sck_ok__reset 0x00
#define MA_core__clk_sys__i2s_sck_ok__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__loopfilter_high_lim---
// -- 16*31 = 384
#define MA_core__clk_sys__loopfilter_high_lim__a 0x018d
#define MA_core__clk_sys__loopfilter_high_lim__len 5
#define MA_core__clk_sys__loopfilter_high_lim__mask 0x1f
#define MA_core__clk_sys__loopfilter_high_lim__shift 0x00
#define MA_core__clk_sys__loopfilter_high_lim__reset 0x1f
#define MA_core__clk_sys__loopfilter_high_lim__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__loopfilter_low_lim---
// -- 16* 0 =   0
#define MA_core__clk_sys__loopfilter_low_lim__a 0x018e
#define MA_core__clk_sys__loopfilter_low_lim__len 5
#define MA_core__clk_sys__loopfilter_low_lim__mask 0x1f
#define MA_core__clk_sys__loopfilter_low_lim__shift 0x00
#define MA_core__clk_sys__loopfilter_low_lim__reset 0x00
#define MA_core__clk_sys__loopfilter_low_lim__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__loopfilter_reset_val---
// -- 16* X =
#define MA_core__clk_sys__loopfilter_reset_val__a 0x018f
#define MA_core__clk_sys__loopfilter_reset_val__len 5
#define MA_core__clk_sys__loopfilter_reset_val__mask 0x1f
#define MA_core__clk_sys__loopfilter_reset_val__shift 0x00
#define MA_core__clk_sys__loopfilter_reset_val__reset 0x10
#define MA_core__clk_sys__loopfilter_reset_val__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__loopfilter_force_reset---
// 
#define MA_core__clk_sys__loopfilter_force_reset__a 0x018f
#define MA_core__clk_sys__loopfilter_force_reset__len 1
#define MA_core__clk_sys__loopfilter_force_reset__mask 0x20
#define MA_core__clk_sys__loopfilter_force_reset__shift 0x05
#define MA_core__clk_sys__loopfilter_force_reset__reset 0x00
#define MA_core__clk_sys__loopfilter_force_reset__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__phase_error_read---
// 
#define MA_core__clk_sys__phase_error_read__a 0x0190
#define MA_core__clk_sys__phase_error_read__len 1
#define MA_core__clk_sys__phase_error_read__mask 0x01
#define MA_core__clk_sys__phase_error_read__shift 0x00
#define MA_core__clk_sys__phase_error_read__reset 0x00
#define MA_core__clk_sys__phase_error_read__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__loopfilter_read---
// 
#define MA_core__clk_sys__loopfilter_read__a 0x0190
#define MA_core__clk_sys__loopfilter_read__len 1
#define MA_core__clk_sys__loopfilter_read__mask 0x02
#define MA_core__clk_sys__loopfilter_read__shift 0x01
#define MA_core__clk_sys__loopfilter_read__reset 0x00
#define MA_core__clk_sys__loopfilter_read__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__sdm_read---
// 
#define MA_core__clk_sys__sdm_read__a 0x0190
#define MA_core__clk_sys__sdm_read__len 1
#define MA_core__clk_sys__sdm_read__mask 0x04
#define MA_core__clk_sys__sdm_read__shift 0x02
#define MA_core__clk_sys__sdm_read__reset 0x00
#define MA_core__clk_sys__sdm_read__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_coarse_read---
// 
#define MA_core__clk_sys__dco_coarse_read__a 0x0190
#define MA_core__clk_sys__dco_coarse_read__len 1
#define MA_core__clk_sys__dco_coarse_read__mask 0x08
#define MA_core__clk_sys__dco_coarse_read__shift 0x03
#define MA_core__clk_sys__dco_coarse_read__reset 0x00
#define MA_core__clk_sys__dco_coarse_read__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_fine_read---
// 
#define MA_core__clk_sys__dco_fine_read__a 0x0190
#define MA_core__clk_sys__dco_fine_read__len 1
#define MA_core__clk_sys__dco_fine_read__mask 0x10
#define MA_core__clk_sys__dco_fine_read__shift 0x04
#define MA_core__clk_sys__dco_fine_read__reset 0x00
#define MA_core__clk_sys__dco_fine_read__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__status__enable_dco---
// 
#define MA_core__clk_sys__status__enable_dco__a 0x01a0
#define MA_core__clk_sys__status__enable_dco__len 1
#define MA_core__clk_sys__status__enable_dco__mask 0x01
#define MA_core__clk_sys__status__enable_dco__shift 0x00
#define MA_core__clk_sys__status__enable_dco__reset 0x00
#define MA_core__clk_sys__status__enable_dco__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_bias_enable---
// 
#define MA_core__clk_sys__status__dco_bias_enable__a 0x01a0
#define MA_core__clk_sys__status__dco_bias_enable__len 1
#define MA_core__clk_sys__status__dco_bias_enable__mask 0x02
#define MA_core__clk_sys__status__dco_bias_enable__shift 0x01
#define MA_core__clk_sys__status__dco_bias_enable__reset 0x00
#define MA_core__clk_sys__status__dco_bias_enable__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_core_bias_enable---
// 
#define MA_core__clk_sys__status__dco_core_bias_enable__a 0x01a0
#define MA_core__clk_sys__status__dco_core_bias_enable__len 1
#define MA_core__clk_sys__status__dco_core_bias_enable__mask 0x04
#define MA_core__clk_sys__status__dco_core_bias_enable__shift 0x02
#define MA_core__clk_sys__status__dco_core_bias_enable__reset 0x00
#define MA_core__clk_sys__status__dco_core_bias_enable__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_core_enable---
// 
#define MA_core__clk_sys__status__dco_core_enable__a 0x01a0
#define MA_core__clk_sys__status__dco_core_enable__len 1
#define MA_core__clk_sys__status__dco_core_enable__mask 0x08
#define MA_core__clk_sys__status__dco_core_enable__shift 0x03
#define MA_core__clk_sys__status__dco_core_enable__reset 0x00
#define MA_core__clk_sys__status__dco_core_enable__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_clk_enable---
// 
#define MA_core__clk_sys__status__dco_clk_enable__a 0x01a0
#define MA_core__clk_sys__status__dco_clk_enable__len 1
#define MA_core__clk_sys__status__dco_clk_enable__mask 0x10
#define MA_core__clk_sys__status__dco_clk_enable__shift 0x04
#define MA_core__clk_sys__status__dco_clk_enable__reset 0x00
#define MA_core__clk_sys__status__dco_clk_enable__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dpll_enable---
// 
#define MA_core__clk_sys__status__dpll_enable__a 0x01a0
#define MA_core__clk_sys__status__dpll_enable__len 1
#define MA_core__clk_sys__status__dpll_enable__mask 0x20
#define MA_core__clk_sys__status__dpll_enable__shift 0x05
#define MA_core__clk_sys__status__dpll_enable__reset 0x00
#define MA_core__clk_sys__status__dpll_enable__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dpll_sleep---
// 
#define MA_core__clk_sys__status__dpll_sleep__a 0x01a0
#define MA_core__clk_sys__status__dpll_sleep__len 1
#define MA_core__clk_sys__status__dpll_sleep__mask 0x40
#define MA_core__clk_sys__status__dpll_sleep__shift 0x06
#define MA_core__clk_sys__status__dpll_sleep__reset 0x00
#define MA_core__clk_sys__status__dpll_sleep__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dpll_run_dco_free---
// 
#define MA_core__clk_sys__status__dpll_run_dco_free__a 0x01a0
#define MA_core__clk_sys__status__dpll_run_dco_free__len 1
#define MA_core__clk_sys__status__dpll_run_dco_free__mask 0x80
#define MA_core__clk_sys__status__dpll_run_dco_free__shift 0x07
#define MA_core__clk_sys__status__dpll_run_dco_free__reset 0x00
#define MA_core__clk_sys__status__dpll_run_dco_free__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__mode_m_div---
// 
#define MA_core__clk_sys__status__mode_m_div__a 0x01a2
#define MA_core__clk_sys__status__mode_m_div__len 6
#define MA_core__clk_sys__status__mode_m_div__mask 0x3f
#define MA_core__clk_sys__status__mode_m_div__shift 0x00
#define MA_core__clk_sys__status__mode_m_div__reset 0x00
#define MA_core__clk_sys__status__mode_m_div__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__mode_ref_div---
// 
#define MA_core__clk_sys__status__mode_ref_div__a 0x01a2
#define MA_core__clk_sys__status__mode_ref_div__len 1
#define MA_core__clk_sys__status__mode_ref_div__mask 0x40
#define MA_core__clk_sys__status__mode_ref_div__shift 0x06
#define MA_core__clk_sys__status__mode_ref_div__reset 0x00
#define MA_core__clk_sys__status__mode_ref_div__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__mode_fb_div---
// 
#define MA_core__clk_sys__status__mode_fb_div__a 0x01a2
#define MA_core__clk_sys__status__mode_fb_div__len 1
#define MA_core__clk_sys__status__mode_fb_div__mask 0x80
#define MA_core__clk_sys__status__mode_fb_div__shift 0x07
#define MA_core__clk_sys__status__mode_fb_div__reset 0x00
#define MA_core__clk_sys__status__mode_fb_div__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__enable_auto_detect---
// 
#define MA_core__clk_sys__status__enable_auto_detect__a 0x01a3
#define MA_core__clk_sys__status__enable_auto_detect__len 1
#define MA_core__clk_sys__status__enable_auto_detect__mask 0x01
#define MA_core__clk_sys__status__enable_auto_detect__shift 0x00
#define MA_core__clk_sys__status__enable_auto_detect__reset 0x00
#define MA_core__clk_sys__status__enable_auto_detect__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__i2s_sck_Fs_base---
// 
#define MA_core__clk_sys__status__i2s_sck_Fs_base__a 0x01a3
#define MA_core__clk_sys__status__i2s_sck_Fs_base__len 2
#define MA_core__clk_sys__status__i2s_sck_Fs_base__mask 0x06
#define MA_core__clk_sys__status__i2s_sck_Fs_base__shift 0x01
#define MA_core__clk_sys__status__i2s_sck_Fs_base__reset 0x00
#define MA_core__clk_sys__status__i2s_sck_Fs_base__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__bit_clk---
// 
#define MA_core__clk_sys__status__bit_clk__a 0x01a5
#define MA_core__clk_sys__status__bit_clk__len 5
#define MA_core__clk_sys__status__bit_clk__mask 0x1f
#define MA_core__clk_sys__status__bit_clk__shift 0x00
#define MA_core__clk_sys__status__bit_clk__reset 0x00
#define MA_core__clk_sys__status__bit_clk__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__i2s_sck_ok---
// 
#define MA_core__clk_sys__status__i2s_sck_ok__a 0x01a6
#define MA_core__clk_sys__status__i2s_sck_ok__len 1
#define MA_core__clk_sys__status__i2s_sck_ok__mask 0x01
#define MA_core__clk_sys__status__i2s_sck_ok__shift 0x00
#define MA_core__clk_sys__status__i2s_sck_ok__reset 0x00
#define MA_core__clk_sys__status__i2s_sck_ok__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_clk_ok---
// 
#define MA_core__clk_sys__status__dco_clk_ok__a 0x01a6
#define MA_core__clk_sys__status__dco_clk_ok__len 1
#define MA_core__clk_sys__status__dco_clk_ok__mask 0x02
#define MA_core__clk_sys__status__dco_clk_ok__shift 0x01
#define MA_core__clk_sys__status__dco_clk_ok__reset 0x00
#define MA_core__clk_sys__status__dco_clk_ok__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__pll_locked---
// 
#define MA_core__clk_sys__status__pll_locked__a 0x01a6
#define MA_core__clk_sys__status__pll_locked__len 1
#define MA_core__clk_sys__status__pll_locked__mask 0x04
#define MA_core__clk_sys__status__pll_locked__shift 0x02
#define MA_core__clk_sys__status__pll_locked__reset 0x00
#define MA_core__clk_sys__status__pll_locked__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__counters_syncronized---
// 
#define MA_core__clk_sys__status__counters_syncronized__a 0x01a6
#define MA_core__clk_sys__status__counters_syncronized__len 1
#define MA_core__clk_sys__status__counters_syncronized__mask 0x10
#define MA_core__clk_sys__status__counters_syncronized__shift 0x04
#define MA_core__clk_sys__status__counters_syncronized__reset 0x00
#define MA_core__clk_sys__status__counters_syncronized__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__phase_error__0---
// 
#define MA_core__clk_sys__outputs__phase_error__0__a 0x01ac
#define MA_core__clk_sys__outputs__phase_error__0__len 8
#define MA_core__clk_sys__outputs__phase_error__0__mask 0xff
#define MA_core__clk_sys__outputs__phase_error__0__shift 0x00
#define MA_core__clk_sys__outputs__phase_error__0__reset 0x00
#define MA_core__clk_sys__outputs__phase_error__0__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__phase_error__1---
// 
#define MA_core__clk_sys__outputs__phase_error__1__a 0x01ad
#define MA_core__clk_sys__outputs__phase_error__1__len 2
#define MA_core__clk_sys__outputs__phase_error__1__mask 0x03
#define MA_core__clk_sys__outputs__phase_error__1__shift 0x00
#define MA_core__clk_sys__outputs__phase_error__1__reset 0x00
#define MA_core__clk_sys__outputs__phase_error__1__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__loopfilter__0---
// 
#define MA_core__clk_sys__outputs__loopfilter__0__a 0x01ae
#define MA_core__clk_sys__outputs__loopfilter__0__len 8
#define MA_core__clk_sys__outputs__loopfilter__0__mask 0xff
#define MA_core__clk_sys__outputs__loopfilter__0__shift 0x00
#define MA_core__clk_sys__outputs__loopfilter__0__reset 0x00
#define MA_core__clk_sys__outputs__loopfilter__0__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__loopfilter__1---
// 
#define MA_core__clk_sys__outputs__loopfilter__1__a 0x01af
#define MA_core__clk_sys__outputs__loopfilter__1__len 8
#define MA_core__clk_sys__outputs__loopfilter__1__mask 0xff
#define MA_core__clk_sys__outputs__loopfilter__1__shift 0x00
#define MA_core__clk_sys__outputs__loopfilter__1__reset 0x00
#define MA_core__clk_sys__outputs__loopfilter__1__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__loopfilter__2---
// 
#define MA_core__clk_sys__outputs__loopfilter__2__a 0x01b0
#define MA_core__clk_sys__outputs__loopfilter__2__len 8
#define MA_core__clk_sys__outputs__loopfilter__2__mask 0xff
#define MA_core__clk_sys__outputs__loopfilter__2__shift 0x00
#define MA_core__clk_sys__outputs__loopfilter__2__reset 0x00
#define MA_core__clk_sys__outputs__loopfilter__2__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__sdm__0---
// 
#define MA_core__clk_sys__outputs__sdm__0__a 0x01b1
#define MA_core__clk_sys__outputs__sdm__0__len 8
#define MA_core__clk_sys__outputs__sdm__0__mask 0xff
#define MA_core__clk_sys__outputs__sdm__0__shift 0x00
#define MA_core__clk_sys__outputs__sdm__0__reset 0x00
#define MA_core__clk_sys__outputs__sdm__0__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__sdm__1---
// 
#define MA_core__clk_sys__outputs__sdm__1__a 0x01b2
#define MA_core__clk_sys__outputs__sdm__1__len 1
#define MA_core__clk_sys__outputs__sdm__1__mask 0x01
#define MA_core__clk_sys__outputs__sdm__1__shift 0x00
#define MA_core__clk_sys__outputs__sdm__1__reset 0x00
#define MA_core__clk_sys__outputs__sdm__1__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__dco_coarse---
// 
#define MA_core__clk_sys__outputs__dco_coarse__a 0x01b3
#define MA_core__clk_sys__outputs__dco_coarse__len 5
#define MA_core__clk_sys__outputs__dco_coarse__mask 0x1f
#define MA_core__clk_sys__outputs__dco_coarse__shift 0x00
#define MA_core__clk_sys__outputs__dco_coarse__reset 0x00
#define MA_core__clk_sys__outputs__dco_coarse__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__dco_fine---
// 
#define MA_core__clk_sys__outputs__dco_fine__a 0x01b4
#define MA_core__clk_sys__outputs__dco_fine__len 6
#define MA_core__clk_sys__outputs__dco_fine__mask 0x3f
#define MA_core__clk_sys__outputs__dco_fine__shift 0x00
#define MA_core__clk_sys__outputs__dco_fine__reset 0x00
#define MA_core__clk_sys__outputs__dco_fine__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__dco_test_freq_count__0---
// 
#define MA_core__clk_sys__outputs__dco_test_freq_count__0__a 0x01b5
#define MA_core__clk_sys__outputs__dco_test_freq_count__0__len 8
#define MA_core__clk_sys__outputs__dco_test_freq_count__0__mask 0xff
#define MA_core__clk_sys__outputs__dco_test_freq_count__0__shift 0x00
#define MA_core__clk_sys__outputs__dco_test_freq_count__0__reset 0x00
#define MA_core__clk_sys__outputs__dco_test_freq_count__0__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__dco_test_freq_count__1---
// 
#define MA_core__clk_sys__outputs__dco_test_freq_count__1__a 0x01b6
#define MA_core__clk_sys__outputs__dco_test_freq_count__1__len 6
#define MA_core__clk_sys__outputs__dco_test_freq_count__1__mask 0x3f
#define MA_core__clk_sys__outputs__dco_test_freq_count__1__shift 0x00
#define MA_core__clk_sys__outputs__dco_test_freq_count__1__reset 0x00
#define MA_core__clk_sys__outputs__dco_test_freq_count__1__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__dco_bias_trim---
// 
#define MA_core__clk_sys__dco_bias_trim__a 0x0191
#define MA_core__clk_sys__dco_bias_trim__len 3
#define MA_core__clk_sys__dco_bias_trim__mask 0x07
#define MA_core__clk_sys__dco_bias_trim__shift 0x00
#define MA_core__clk_sys__dco_bias_trim__reset 0x00
#define MA_core__clk_sys__dco_bias_trim__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dpll_run_dco_free_allowed_ow---
// 
#define MA_core__clk_sys__dpll_run_dco_free_allowed_ow__a 0x0181
#define MA_core__clk_sys__dpll_run_dco_free_allowed_ow__len 1
#define MA_core__clk_sys__dpll_run_dco_free_allowed_ow__mask 0x10
#define MA_core__clk_sys__dpll_run_dco_free_allowed_ow__shift 0x04
#define MA_core__clk_sys__dpll_run_dco_free_allowed_ow__reset 0x00
#define MA_core__clk_sys__dpll_run_dco_free_allowed_ow__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__data_rate_ow---
// 
#define MA_core__clk_sys__data_rate_ow__a 0x0187
#define MA_core__clk_sys__data_rate_ow__len 1
#define MA_core__clk_sys__data_rate_ow__mask 0x10
#define MA_core__clk_sys__data_rate_ow__shift 0x04
#define MA_core__clk_sys__data_rate_ow__reset 0x00
#define MA_core__clk_sys__data_rate_ow__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__data_rate---
// 
#define MA_core__clk_sys__data_rate__a 0x0187
#define MA_core__clk_sys__data_rate__len 4
#define MA_core__clk_sys__data_rate__mask 0x0f
#define MA_core__clk_sys__data_rate__shift 0x00
#define MA_core__clk_sys__data_rate__reset 0x00
#define MA_core__clk_sys__data_rate__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__status__data_rate---
// 
#define MA_core__clk_sys__status__data_rate__a 0x01a4
#define MA_core__clk_sys__status__data_rate__len 4
#define MA_core__clk_sys__status__data_rate__mask 0x0f
#define MA_core__clk_sys__status__data_rate__shift 0x00
#define MA_core__clk_sys__status__data_rate__reset 0x00
#define MA_core__clk_sys__status__data_rate__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__calib_test_enable---
// 
#define MA_core__clk_sys__calib_test_enable__a 0x0192
#define MA_core__clk_sys__calib_test_enable__len 1
#define MA_core__clk_sys__calib_test_enable__mask 0x01
#define MA_core__clk_sys__calib_test_enable__shift 0x00
#define MA_core__clk_sys__calib_test_enable__reset 0x00
#define MA_core__clk_sys__calib_test_enable__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__calib_test_mode---
// 
#define MA_core__clk_sys__calib_test_mode__a 0x0192
#define MA_core__clk_sys__calib_test_mode__len 1
#define MA_core__clk_sys__calib_test_mode__mask 0x02
#define MA_core__clk_sys__calib_test_mode__shift 0x01
#define MA_core__clk_sys__calib_test_mode__reset 0x00
#define MA_core__clk_sys__calib_test_mode__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__calib_test_start---
// 
#define MA_core__clk_sys__calib_test_start__a 0x0192
#define MA_core__clk_sys__calib_test_start__len 1
#define MA_core__clk_sys__calib_test_start__mask 0x04
#define MA_core__clk_sys__calib_test_start__shift 0x02
#define MA_core__clk_sys__calib_test_start__reset 0x00
#define MA_core__clk_sys__calib_test_start__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__calib_fine_trim_stop_bit---
// 
#define MA_core__clk_sys__calib_fine_trim_stop_bit__a 0x0192
#define MA_core__clk_sys__calib_fine_trim_stop_bit__len 2
#define MA_core__clk_sys__calib_fine_trim_stop_bit__mask 0x18
#define MA_core__clk_sys__calib_fine_trim_stop_bit__shift 0x03
#define MA_core__clk_sys__calib_fine_trim_stop_bit__reset 0x00
#define MA_core__clk_sys__calib_fine_trim_stop_bit__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__status__calib_test_done---
// 
#define MA_core__clk_sys__status__calib_test_done__a 0x01a8
#define MA_core__clk_sys__status__calib_test_done__len 1
#define MA_core__clk_sys__status__calib_test_done__mask 0x10
#define MA_core__clk_sys__status__calib_test_done__shift 0x04
#define MA_core__clk_sys__status__calib_test_done__reset 0x00
#define MA_core__clk_sys__status__calib_test_done__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__calib_test_ok---
// 
#define MA_core__clk_sys__status__calib_test_ok__a 0x01a8
#define MA_core__clk_sys__status__calib_test_ok__len 1
#define MA_core__clk_sys__status__calib_test_ok__mask 0x20
#define MA_core__clk_sys__status__calib_test_ok__shift 0x05
#define MA_core__clk_sys__status__calib_test_ok__reset 0x00
#define MA_core__clk_sys__status__calib_test_ok__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__calib_test_freq_count_high__0---
// 
#define MA_core__clk_sys__outputs__calib_test_freq_count_high__0__a 0x01b7
#define MA_core__clk_sys__outputs__calib_test_freq_count_high__0__len 8
#define MA_core__clk_sys__outputs__calib_test_freq_count_high__0__mask 0xff
#define MA_core__clk_sys__outputs__calib_test_freq_count_high__0__shift 0x00
#define MA_core__clk_sys__outputs__calib_test_freq_count_high__0__reset 0x00
#define MA_core__clk_sys__outputs__calib_test_freq_count_high__0__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__calib_test_freq_count_high__1---
// 
#define MA_core__clk_sys__outputs__calib_test_freq_count_high__1__a 0x01b8
#define MA_core__clk_sys__outputs__calib_test_freq_count_high__1__len 6
#define MA_core__clk_sys__outputs__calib_test_freq_count_high__1__mask 0x3f
#define MA_core__clk_sys__outputs__calib_test_freq_count_high__1__shift 0x00
#define MA_core__clk_sys__outputs__calib_test_freq_count_high__1__reset 0x00
#define MA_core__clk_sys__outputs__calib_test_freq_count_high__1__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__calib_test_freq_count_low__0---
// 
#define MA_core__clk_sys__outputs__calib_test_freq_count_low__0__a 0x01b9
#define MA_core__clk_sys__outputs__calib_test_freq_count_low__0__len 8
#define MA_core__clk_sys__outputs__calib_test_freq_count_low__0__mask 0xff
#define MA_core__clk_sys__outputs__calib_test_freq_count_low__0__shift 0x00
#define MA_core__clk_sys__outputs__calib_test_freq_count_low__0__reset 0x00
#define MA_core__clk_sys__outputs__calib_test_freq_count_low__0__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__calib_test_freq_count_low__1---
// 
#define MA_core__clk_sys__outputs__calib_test_freq_count_low__1__a 0x01ba
#define MA_core__clk_sys__outputs__calib_test_freq_count_low__1__len 6
#define MA_core__clk_sys__outputs__calib_test_freq_count_low__1__mask 0x3f
#define MA_core__clk_sys__outputs__calib_test_freq_count_low__1__shift 0x00
#define MA_core__clk_sys__outputs__calib_test_freq_count_low__1__reset 0x00
#define MA_core__clk_sys__outputs__calib_test_freq_count_low__1__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__calib_test_coarse---
// 
#define MA_core__clk_sys__outputs__calib_test_coarse__a 0x01bb
#define MA_core__clk_sys__outputs__calib_test_coarse__len 6
#define MA_core__clk_sys__outputs__calib_test_coarse__mask 0x3f
#define MA_core__clk_sys__outputs__calib_test_coarse__shift 0x00
#define MA_core__clk_sys__outputs__calib_test_coarse__reset 0x00
#define MA_core__clk_sys__outputs__calib_test_coarse__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__outputs__calib_test_fine---
// 
#define MA_core__clk_sys__outputs__calib_test_fine__a 0x01bc
#define MA_core__clk_sys__outputs__calib_test_fine__len 6
#define MA_core__clk_sys__outputs__calib_test_fine__mask 0x3f
#define MA_core__clk_sys__outputs__calib_test_fine__shift 0x00
#define MA_core__clk_sys__outputs__calib_test_fine__reset 0x00
#define MA_core__clk_sys__outputs__calib_test_fine__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__clear_all_latched_bits---
// 
#define MA_core__clk_sys__clear_all_latched_bits__a 0x0193
#define MA_core__clk_sys__clear_all_latched_bits__len 1
#define MA_core__clk_sys__clear_all_latched_bits__mask 0x01
#define MA_core__clk_sys__clear_all_latched_bits__shift 0x00
#define MA_core__clk_sys__clear_all_latched_bits__reset 0x00
#define MA_core__clk_sys__clear_all_latched_bits__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__clear_latched_div_bits---
// 
#define MA_core__clk_sys__clear_latched_div_bits__a 0x0193
#define MA_core__clk_sys__clear_latched_div_bits__len 1
#define MA_core__clk_sys__clear_latched_div_bits__mask 0x02
#define MA_core__clk_sys__clear_latched_div_bits__shift 0x01
#define MA_core__clk_sys__clear_latched_div_bits__reset 0x00
#define MA_core__clk_sys__clear_latched_div_bits__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__clear_latched_ok_bits---
// 
#define MA_core__clk_sys__clear_latched_ok_bits__a 0x0193
#define MA_core__clk_sys__clear_latched_ok_bits__len 1
#define MA_core__clk_sys__clear_latched_ok_bits__mask 0x04
#define MA_core__clk_sys__clear_latched_ok_bits__shift 0x02
#define MA_core__clk_sys__clear_latched_ok_bits__reset 0x00
#define MA_core__clk_sys__clear_latched_ok_bits__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__clear_latched_pll_bits---
// 
#define MA_core__clk_sys__clear_latched_pll_bits__a 0x0193
#define MA_core__clk_sys__clear_latched_pll_bits__len 1
#define MA_core__clk_sys__clear_latched_pll_bits__mask 0x08
#define MA_core__clk_sys__clear_latched_pll_bits__shift 0x03
#define MA_core__clk_sys__clear_latched_pll_bits__reset 0x00
#define MA_core__clk_sys__clear_latched_pll_bits__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__status__mode_div_changed_latched---
// 
#define MA_core__clk_sys__status__mode_div_changed_latched__a 0x01aa
#define MA_core__clk_sys__status__mode_div_changed_latched__len 1
#define MA_core__clk_sys__status__mode_div_changed_latched__mask 0x01
#define MA_core__clk_sys__status__mode_div_changed_latched__shift 0x00
#define MA_core__clk_sys__status__mode_div_changed_latched__reset 0x00
#define MA_core__clk_sys__status__mode_div_changed_latched__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__mode_m_div_changed_latched---
// 
#define MA_core__clk_sys__status__mode_m_div_changed_latched__a 0x01aa
#define MA_core__clk_sys__status__mode_m_div_changed_latched__len 1
#define MA_core__clk_sys__status__mode_m_div_changed_latched__mask 0x02
#define MA_core__clk_sys__status__mode_m_div_changed_latched__shift 0x01
#define MA_core__clk_sys__status__mode_m_div_changed_latched__reset 0x00
#define MA_core__clk_sys__status__mode_m_div_changed_latched__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__mode_ref_div_changed_latched---
// 
#define MA_core__clk_sys__status__mode_ref_div_changed_latched__a 0x01aa
#define MA_core__clk_sys__status__mode_ref_div_changed_latched__len 1
#define MA_core__clk_sys__status__mode_ref_div_changed_latched__mask 0x04
#define MA_core__clk_sys__status__mode_ref_div_changed_latched__shift 0x02
#define MA_core__clk_sys__status__mode_ref_div_changed_latched__reset 0x00
#define MA_core__clk_sys__status__mode_ref_div_changed_latched__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__mode_fb_div_changed_latched---
// 
#define MA_core__clk_sys__status__mode_fb_div_changed_latched__a 0x01aa
#define MA_core__clk_sys__status__mode_fb_div_changed_latched__len 1
#define MA_core__clk_sys__status__mode_fb_div_changed_latched__mask 0x08
#define MA_core__clk_sys__status__mode_fb_div_changed_latched__shift 0x03
#define MA_core__clk_sys__status__mode_fb_div_changed_latched__reset 0x00
#define MA_core__clk_sys__status__mode_fb_div_changed_latched__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__pll_locked_error---
// 
#define MA_core__clk_sys__status__pll_locked_error__a 0x01ab
#define MA_core__clk_sys__status__pll_locked_error__len 1
#define MA_core__clk_sys__status__pll_locked_error__mask 0x01
#define MA_core__clk_sys__status__pll_locked_error__shift 0x00
#define MA_core__clk_sys__status__pll_locked_error__reset 0x00
#define MA_core__clk_sys__status__pll_locked_error__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__counters_syncronized_error---
// 
#define MA_core__clk_sys__status__counters_syncronized_error__a 0x01ab
#define MA_core__clk_sys__status__counters_syncronized_error__len 1
#define MA_core__clk_sys__status__counters_syncronized_error__mask 0x08
#define MA_core__clk_sys__status__counters_syncronized_error__shift 0x03
#define MA_core__clk_sys__status__counters_syncronized_error__reset 0x00
#define MA_core__clk_sys__status__counters_syncronized_error__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__afir_clk_div---
// 
#define MA_core__clk_sys__afir_clk_div__a 0x0186
#define MA_core__clk_sys__afir_clk_div__len 1
#define MA_core__clk_sys__afir_clk_div__mask 0x02
#define MA_core__clk_sys__afir_clk_div__shift 0x01
#define MA_core__clk_sys__afir_clk_div__reset 0x00
#define MA_core__clk_sys__afir_clk_div__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dpll_run_dco_free_allowed_50M---
// 
#define MA_core__clk_sys__dpll_run_dco_free_allowed_50M__a 0x0181
#define MA_core__clk_sys__dpll_run_dco_free_allowed_50M__len 1
#define MA_core__clk_sys__dpll_run_dco_free_allowed_50M__mask 0x20
#define MA_core__clk_sys__dpll_run_dco_free_allowed_50M__shift 0x05
#define MA_core__clk_sys__dpll_run_dco_free_allowed_50M__reset 0x00
#define MA_core__clk_sys__dpll_run_dco_free_allowed_50M__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__pll_locked_calib---
// 
#define MA_core__clk_sys__pll_locked_calib__a 0x0189
#define MA_core__clk_sys__pll_locked_calib__len 1
#define MA_core__clk_sys__pll_locked_calib__mask 0x10
#define MA_core__clk_sys__pll_locked_calib__shift 0x04
#define MA_core__clk_sys__pll_locked_calib__reset 0x00
#define MA_core__clk_sys__pll_locked_calib__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__Kvco_f---
// 
#define MA_core__clk_sys__Kvco_f__a 0x018c
#define MA_core__clk_sys__Kvco_f__len 3
#define MA_core__clk_sys__Kvco_f__mask 0x07
#define MA_core__clk_sys__Kvco_f__shift 0x00
#define MA_core__clk_sys__Kvco_f__reset 0x03
#define MA_core__clk_sys__Kvco_f__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__LBW_f---
// 
#define MA_core__clk_sys__LBW_f__a 0x018c
#define MA_core__clk_sys__LBW_f__len 3
#define MA_core__clk_sys__LBW_f__mask 0x38
#define MA_core__clk_sys__LBW_f__shift 0x03
#define MA_core__clk_sys__LBW_f__reset 0x01
#define MA_core__clk_sys__LBW_f__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__clk_auto_detect_low_window_min_cnt---
// 
#define MA_core__clk_sys__clk_auto_detect_low_window_min_cnt__a 0x0194
#define MA_core__clk_sys__clk_auto_detect_low_window_min_cnt__len 6
#define MA_core__clk_sys__clk_auto_detect_low_window_min_cnt__mask 0x3f
#define MA_core__clk_sys__clk_auto_detect_low_window_min_cnt__shift 0x00
#define MA_core__clk_sys__clk_auto_detect_low_window_min_cnt__reset 0x24
#define MA_core__clk_sys__clk_auto_detect_low_window_min_cnt__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__clk_auto_detect_low_window_max_cnt---
// 
#define MA_core__clk_sys__clk_auto_detect_low_window_max_cnt__a 0x0195
#define MA_core__clk_sys__clk_auto_detect_low_window_max_cnt__len 7
#define MA_core__clk_sys__clk_auto_detect_low_window_max_cnt__mask 0x7f
#define MA_core__clk_sys__clk_auto_detect_low_window_max_cnt__shift 0x00
#define MA_core__clk_sys__clk_auto_detect_low_window_max_cnt__reset 0x64
#define MA_core__clk_sys__clk_auto_detect_low_window_max_cnt__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__clk_auto_detect_high_window_min_cnt---
// 
#define MA_core__clk_sys__clk_auto_detect_high_window_min_cnt__a 0x0196
#define MA_core__clk_sys__clk_auto_detect_high_window_min_cnt__len 4
#define MA_core__clk_sys__clk_auto_detect_high_window_min_cnt__mask 0x0f
#define MA_core__clk_sys__clk_auto_detect_high_window_min_cnt__shift 0x00
#define MA_core__clk_sys__clk_auto_detect_high_window_min_cnt__reset 0x01
#define MA_core__clk_sys__clk_auto_detect_high_window_min_cnt__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__clk_auto_detect_high_window_max_cnt---
// 
#define MA_core__clk_sys__clk_auto_detect_high_window_max_cnt__a 0x0197
#define MA_core__clk_sys__clk_auto_detect_high_window_max_cnt__len 7
#define MA_core__clk_sys__clk_auto_detect_high_window_max_cnt__mask 0x7f
#define MA_core__clk_sys__clk_auto_detect_high_window_max_cnt__shift 0x00
#define MA_core__clk_sys__clk_auto_detect_high_window_max_cnt__reset 0x47
#define MA_core__clk_sys__clk_auto_detect_high_window_max_cnt__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__status__dpll_run_dco_free_allowed_50M---
// 
#define MA_core__clk_sys__status__dpll_run_dco_free_allowed_50M__a 0x01a1
#define MA_core__clk_sys__status__dpll_run_dco_free_allowed_50M__len 1
#define MA_core__clk_sys__status__dpll_run_dco_free_allowed_50M__mask 0x01
#define MA_core__clk_sys__status__dpll_run_dco_free_allowed_50M__shift 0x00
#define MA_core__clk_sys__status__dpll_run_dco_free_allowed_50M__reset 0x00
#define MA_core__clk_sys__status__dpll_run_dco_free_allowed_50M__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__pll_locked_calib---
// 
#define MA_core__clk_sys__status__pll_locked_calib__a 0x01a6
#define MA_core__clk_sys__status__pll_locked_calib__len 1
#define MA_core__clk_sys__status__pll_locked_calib__mask 0x08
#define MA_core__clk_sys__status__pll_locked_calib__shift 0x03
#define MA_core__clk_sys__status__pll_locked_calib__reset 0x00
#define MA_core__clk_sys__status__pll_locked_calib__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__calib_audio_tick_en---
// 
#define MA_core__clk_sys__calib_audio_tick_en__a 0x0184
#define MA_core__clk_sys__calib_audio_tick_en__len 1
#define MA_core__clk_sys__calib_audio_tick_en__mask 0x08
#define MA_core__clk_sys__calib_audio_tick_en__shift 0x03
#define MA_core__clk_sys__calib_audio_tick_en__reset 0x00
#define MA_core__clk_sys__calib_audio_tick_en__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__pll_status_readout_en---
// 
#define MA_core__clk_sys__pll_status_readout_en__a 0x0184
#define MA_core__clk_sys__pll_status_readout_en__len 1
#define MA_core__clk_sys__pll_status_readout_en__mask 0x10
#define MA_core__clk_sys__pll_status_readout_en__shift 0x04
#define MA_core__clk_sys__pll_status_readout_en__reset 0x00
#define MA_core__clk_sys__pll_status_readout_en__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__status__tdc_phase_max---
// 
#define MA_core__clk_sys__status__tdc_phase_max__a 0x01a6
#define MA_core__clk_sys__status__tdc_phase_max__len 1
#define MA_core__clk_sys__status__tdc_phase_max__mask 0x20
#define MA_core__clk_sys__status__tdc_phase_max__shift 0x05
#define MA_core__clk_sys__status__tdc_phase_max__reset 0x00
#define MA_core__clk_sys__status__tdc_phase_max__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__mode_div_changed---
// 
#define MA_core__clk_sys__status__mode_div_changed__a 0x01a9
#define MA_core__clk_sys__status__mode_div_changed__len 1
#define MA_core__clk_sys__status__mode_div_changed__mask 0x01
#define MA_core__clk_sys__status__mode_div_changed__shift 0x00
#define MA_core__clk_sys__status__mode_div_changed__reset 0x00
#define MA_core__clk_sys__status__mode_div_changed__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__mode_m_div_changed---
// 
#define MA_core__clk_sys__status__mode_m_div_changed__a 0x01a9
#define MA_core__clk_sys__status__mode_m_div_changed__len 1
#define MA_core__clk_sys__status__mode_m_div_changed__mask 0x02
#define MA_core__clk_sys__status__mode_m_div_changed__shift 0x01
#define MA_core__clk_sys__status__mode_m_div_changed__reset 0x00
#define MA_core__clk_sys__status__mode_m_div_changed__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__mode_ref_div_changed---
// 
#define MA_core__clk_sys__status__mode_ref_div_changed__a 0x01a9
#define MA_core__clk_sys__status__mode_ref_div_changed__len 1
#define MA_core__clk_sys__status__mode_ref_div_changed__mask 0x04
#define MA_core__clk_sys__status__mode_ref_div_changed__shift 0x02
#define MA_core__clk_sys__status__mode_ref_div_changed__reset 0x00
#define MA_core__clk_sys__status__mode_ref_div_changed__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__mode_fb_div_changed---
// 
#define MA_core__clk_sys__status__mode_fb_div_changed__a 0x01a9
#define MA_core__clk_sys__status__mode_fb_div_changed__len 1
#define MA_core__clk_sys__status__mode_fb_div_changed__mask 0x08
#define MA_core__clk_sys__status__mode_fb_div_changed__shift 0x03
#define MA_core__clk_sys__status__mode_fb_div_changed__reset 0x00
#define MA_core__clk_sys__status__mode_fb_div_changed__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__tdc_phase_max_error---
// 
#define MA_core__clk_sys__status__tdc_phase_max_error__a 0x01ab
#define MA_core__clk_sys__status__tdc_phase_max_error__len 1
#define MA_core__clk_sys__status__tdc_phase_max_error__mask 0x04
#define MA_core__clk_sys__status__tdc_phase_max_error__shift 0x02
#define MA_core__clk_sys__status__tdc_phase_max_error__reset 0x00
#define MA_core__clk_sys__status__tdc_phase_max_error__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__pll_locked_calib_error---
// 
#define MA_core__clk_sys__status__pll_locked_calib_error__a 0x01ab
#define MA_core__clk_sys__status__pll_locked_calib_error__len 1
#define MA_core__clk_sys__status__pll_locked_calib_error__mask 0x02
#define MA_core__clk_sys__status__pll_locked_calib_error__shift 0x01
#define MA_core__clk_sys__status__pll_locked_calib_error__reset 0x00
#define MA_core__clk_sys__status__pll_locked_calib_error__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__mode_m_div_calib_reset---
// 
#define MA_core__clk_sys__mode_m_div_calib_reset__a 0x0198
#define MA_core__clk_sys__mode_m_div_calib_reset__len 6
#define MA_core__clk_sys__mode_m_div_calib_reset__mask 0x3f
#define MA_core__clk_sys__mode_m_div_calib_reset__shift 0x00
#define MA_core__clk_sys__mode_m_div_calib_reset__reset 0x02
#define MA_core__clk_sys__mode_m_div_calib_reset__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__mode_ref_div_calib_reset---
// 
#define MA_core__clk_sys__mode_ref_div_calib_reset__a 0x0198
#define MA_core__clk_sys__mode_ref_div_calib_reset__len 1
#define MA_core__clk_sys__mode_ref_div_calib_reset__mask 0x40
#define MA_core__clk_sys__mode_ref_div_calib_reset__shift 0x06
#define MA_core__clk_sys__mode_ref_div_calib_reset__reset 0x01
#define MA_core__clk_sys__mode_ref_div_calib_reset__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__mode_fb_div_calib_reset---
// 
#define MA_core__clk_sys__mode_fb_div_calib_reset__a 0x0198
#define MA_core__clk_sys__mode_fb_div_calib_reset__len 1
#define MA_core__clk_sys__mode_fb_div_calib_reset__mask 0x80
#define MA_core__clk_sys__mode_fb_div_calib_reset__shift 0x07
#define MA_core__clk_sys__mode_fb_div_calib_reset__reset 0x01
#define MA_core__clk_sys__mode_fb_div_calib_reset__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__status__calib_test_err---
// 
#define MA_core__clk_sys__status__calib_test_err__a 0x01a8
#define MA_core__clk_sys__status__calib_test_err__len 1
#define MA_core__clk_sys__status__calib_test_err__mask 0x40
#define MA_core__clk_sys__status__calib_test_err__shift 0x06
#define MA_core__clk_sys__status__calib_test_err__reset 0x00
#define MA_core__clk_sys__status__calib_test_err__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__i2s_sck_err---
// 
#define MA_core__clk_sys__status__i2s_sck_err__a 0x01ab
#define MA_core__clk_sys__status__i2s_sck_err__len 1
#define MA_core__clk_sys__status__i2s_sck_err__mask 0x10
#define MA_core__clk_sys__status__i2s_sck_err__shift 0x04
#define MA_core__clk_sys__status__i2s_sck_err__reset 0x00
#define MA_core__clk_sys__status__i2s_sck_err__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_clk_err---
// 
#define MA_core__clk_sys__status__dco_clk_err__a 0x01ab
#define MA_core__clk_sys__status__dco_clk_err__len 1
#define MA_core__clk_sys__status__dco_clk_err__mask 0x20
#define MA_core__clk_sys__status__dco_clk_err__shift 0x05
#define MA_core__clk_sys__status__dco_clk_err__reset 0x00
#define MA_core__clk_sys__status__dco_clk_err__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__dco_test_enable---
// 
#define MA_core__clk_sys__dco_test_enable__a 0x018a
#define MA_core__clk_sys__dco_test_enable__len 1
#define MA_core__clk_sys__dco_test_enable__mask 0x01
#define MA_core__clk_sys__dco_test_enable__shift 0x00
#define MA_core__clk_sys__dco_test_enable__reset 0x00
#define MA_core__clk_sys__dco_test_enable__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_test_mode---
// 
#define MA_core__clk_sys__dco_test_mode__a 0x018a
#define MA_core__clk_sys__dco_test_mode__len 1
#define MA_core__clk_sys__dco_test_mode__mask 0x02
#define MA_core__clk_sys__dco_test_mode__shift 0x01
#define MA_core__clk_sys__dco_test_mode__reset 0x00
#define MA_core__clk_sys__dco_test_mode__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_test_sub_mode---
// 
#define MA_core__clk_sys__dco_test_sub_mode__a 0x018a
#define MA_core__clk_sys__dco_test_sub_mode__len 2
#define MA_core__clk_sys__dco_test_sub_mode__mask 0x0c
#define MA_core__clk_sys__dco_test_sub_mode__shift 0x02
#define MA_core__clk_sys__dco_test_sub_mode__reset 0x00
#define MA_core__clk_sys__dco_test_sub_mode__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_test_start---
// 
#define MA_core__clk_sys__dco_test_start__a 0x018a
#define MA_core__clk_sys__dco_test_start__len 1
#define MA_core__clk_sys__dco_test_start__mask 0x10
#define MA_core__clk_sys__dco_test_start__shift 0x04
#define MA_core__clk_sys__dco_test_start__reset 0x00
#define MA_core__clk_sys__dco_test_start__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_test_fine_cnt_step---
// 
#define MA_core__clk_sys__dco_test_fine_cnt_step__a 0x018b
#define MA_core__clk_sys__dco_test_fine_cnt_step__len 2
#define MA_core__clk_sys__dco_test_fine_cnt_step__mask 0x03
#define MA_core__clk_sys__dco_test_fine_cnt_step__shift 0x00
#define MA_core__clk_sys__dco_test_fine_cnt_step__reset 0x00
#define MA_core__clk_sys__dco_test_fine_cnt_step__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_test_coarse_cnt_step---
// 
#define MA_core__clk_sys__dco_test_coarse_cnt_step__a 0x018b
#define MA_core__clk_sys__dco_test_coarse_cnt_step__len 2
#define MA_core__clk_sys__dco_test_coarse_cnt_step__mask 0x0c
#define MA_core__clk_sys__dco_test_coarse_cnt_step__shift 0x02
#define MA_core__clk_sys__dco_test_coarse_cnt_step__reset 0x00
#define MA_core__clk_sys__dco_test_coarse_cnt_step__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_test_i2s_cnt_lim---
// 
#define MA_core__clk_sys__dco_test_i2s_cnt_lim__a 0x018b
#define MA_core__clk_sys__dco_test_i2s_cnt_lim__len 1
#define MA_core__clk_sys__dco_test_i2s_cnt_lim__mask 0x10
#define MA_core__clk_sys__dco_test_i2s_cnt_lim__shift 0x04
#define MA_core__clk_sys__dco_test_i2s_cnt_lim__reset 0x00
#define MA_core__clk_sys__dco_test_i2s_cnt_lim__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__dco_test_wait_dco_cnt---
// 
#define MA_core__clk_sys__dco_test_wait_dco_cnt__a 0x018b
#define MA_core__clk_sys__dco_test_wait_dco_cnt__len 1
#define MA_core__clk_sys__dco_test_wait_dco_cnt__mask 0x20
#define MA_core__clk_sys__dco_test_wait_dco_cnt__shift 0x05
#define MA_core__clk_sys__dco_test_wait_dco_cnt__reset 0x00
#define MA_core__clk_sys__dco_test_wait_dco_cnt__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__status__dco_test_done---
// 
#define MA_core__clk_sys__status__dco_test_done__a 0x01a7
#define MA_core__clk_sys__status__dco_test_done__len 1
#define MA_core__clk_sys__status__dco_test_done__mask 0x01
#define MA_core__clk_sys__status__dco_test_done__shift 0x00
#define MA_core__clk_sys__status__dco_test_done__reset 0x00
#define MA_core__clk_sys__status__dco_test_done__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_test_ok---
// 
#define MA_core__clk_sys__status__dco_test_ok__a 0x01a7
#define MA_core__clk_sys__status__dco_test_ok__len 1
#define MA_core__clk_sys__status__dco_test_ok__mask 0x02
#define MA_core__clk_sys__status__dco_test_ok__shift 0x01
#define MA_core__clk_sys__status__dco_test_ok__reset 0x00
#define MA_core__clk_sys__status__dco_test_ok__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_test_err---
// 
#define MA_core__clk_sys__status__dco_test_err__a 0x01a7
#define MA_core__clk_sys__status__dco_test_err__len 1
#define MA_core__clk_sys__status__dco_test_err__mask 0x04
#define MA_core__clk_sys__status__dco_test_err__shift 0x02
#define MA_core__clk_sys__status__dco_test_err__reset 0x00
#define MA_core__clk_sys__status__dco_test_err__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_test_done_finetrim---
// 
#define MA_core__clk_sys__status__dco_test_done_finetrim__a 0x01a7
#define MA_core__clk_sys__status__dco_test_done_finetrim__len 1
#define MA_core__clk_sys__status__dco_test_done_finetrim__mask 0x08
#define MA_core__clk_sys__status__dco_test_done_finetrim__shift 0x03
#define MA_core__clk_sys__status__dco_test_done_finetrim__reset 0x00
#define MA_core__clk_sys__status__dco_test_done_finetrim__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_test_ok_finetrim---
// 
#define MA_core__clk_sys__status__dco_test_ok_finetrim__a 0x01a7
#define MA_core__clk_sys__status__dco_test_ok_finetrim__len 1
#define MA_core__clk_sys__status__dco_test_ok_finetrim__mask 0x10
#define MA_core__clk_sys__status__dco_test_ok_finetrim__shift 0x04
#define MA_core__clk_sys__status__dco_test_ok_finetrim__reset 0x00
#define MA_core__clk_sys__status__dco_test_ok_finetrim__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_test_err_finetrim---
// 
#define MA_core__clk_sys__status__dco_test_err_finetrim__a 0x01a7
#define MA_core__clk_sys__status__dco_test_err_finetrim__len 1
#define MA_core__clk_sys__status__dco_test_err_finetrim__mask 0x20
#define MA_core__clk_sys__status__dco_test_err_finetrim__shift 0x05
#define MA_core__clk_sys__status__dco_test_err_finetrim__reset 0x00
#define MA_core__clk_sys__status__dco_test_err_finetrim__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_test_done_coarse_up---
// 
#define MA_core__clk_sys__status__dco_test_done_coarse_up__a 0x01a7
#define MA_core__clk_sys__status__dco_test_done_coarse_up__len 1
#define MA_core__clk_sys__status__dco_test_done_coarse_up__mask 0x40
#define MA_core__clk_sys__status__dco_test_done_coarse_up__shift 0x06
#define MA_core__clk_sys__status__dco_test_done_coarse_up__reset 0x00
#define MA_core__clk_sys__status__dco_test_done_coarse_up__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_test_done_coarse_down---
// 
#define MA_core__clk_sys__status__dco_test_done_coarse_down__a 0x01a7
#define MA_core__clk_sys__status__dco_test_done_coarse_down__len 1
#define MA_core__clk_sys__status__dco_test_done_coarse_down__mask 0x80
#define MA_core__clk_sys__status__dco_test_done_coarse_down__shift 0x07
#define MA_core__clk_sys__status__dco_test_done_coarse_down__reset 0x00
#define MA_core__clk_sys__status__dco_test_done_coarse_down__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_test_ok_coarse_up---
// 
#define MA_core__clk_sys__status__dco_test_ok_coarse_up__a 0x01a8
#define MA_core__clk_sys__status__dco_test_ok_coarse_up__len 1
#define MA_core__clk_sys__status__dco_test_ok_coarse_up__mask 0x01
#define MA_core__clk_sys__status__dco_test_ok_coarse_up__shift 0x00
#define MA_core__clk_sys__status__dco_test_ok_coarse_up__reset 0x00
#define MA_core__clk_sys__status__dco_test_ok_coarse_up__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_test_err_coarse_up---
// 
#define MA_core__clk_sys__status__dco_test_err_coarse_up__a 0x01a8
#define MA_core__clk_sys__status__dco_test_err_coarse_up__len 1
#define MA_core__clk_sys__status__dco_test_err_coarse_up__mask 0x02
#define MA_core__clk_sys__status__dco_test_err_coarse_up__shift 0x01
#define MA_core__clk_sys__status__dco_test_err_coarse_up__reset 0x00
#define MA_core__clk_sys__status__dco_test_err_coarse_up__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_test_ok_coarse_down---
// 
#define MA_core__clk_sys__status__dco_test_ok_coarse_down__a 0x01a8
#define MA_core__clk_sys__status__dco_test_ok_coarse_down__len 1
#define MA_core__clk_sys__status__dco_test_ok_coarse_down__mask 0x04
#define MA_core__clk_sys__status__dco_test_ok_coarse_down__shift 0x02
#define MA_core__clk_sys__status__dco_test_ok_coarse_down__reset 0x00
#define MA_core__clk_sys__status__dco_test_ok_coarse_down__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__status__dco_test_err_coarse_down---
// 
#define MA_core__clk_sys__status__dco_test_err_coarse_down__a 0x01a8
#define MA_core__clk_sys__status__dco_test_err_coarse_down__len 1
#define MA_core__clk_sys__status__dco_test_err_coarse_down__mask 0x08
#define MA_core__clk_sys__status__dco_test_err_coarse_down__shift 0x03
#define MA_core__clk_sys__status__dco_test_err_coarse_down__reset 0x00
#define MA_core__clk_sys__status__dco_test_err_coarse_down__inputonly 1
//------------------------------------------------------------------------------core__clk_sys__pll_paused_ow---
// 
#define MA_core__clk_sys__pll_paused_ow__a 0x018b
#define MA_core__clk_sys__pll_paused_ow__len 1
#define MA_core__clk_sys__pll_paused_ow__mask 0x40
#define MA_core__clk_sys__pll_paused_ow__shift 0x06
#define MA_core__clk_sys__pll_paused_ow__reset 0x00
#define MA_core__clk_sys__pll_paused_ow__inputonly 0
//------------------------------------------------------------------------------core__clk_sys__pll_paused---
// 
#define MA_core__clk_sys__pll_paused__a 0x018b
#define MA_core__clk_sys__pll_paused__len 1
#define MA_core__clk_sys__pll_paused__mask 0x80
#define MA_core__clk_sys__pll_paused__shift 0x07
#define MA_core__clk_sys__pll_paused__reset 0x00
#define MA_core__clk_sys__pll_paused__inputonly 0
//------------------------------------------------------------------------------core__asense__temp_en---
// Enable temperature measurement
#define MA_core__asense__temp_en__a 0x01e0
#define MA_core__asense__temp_en__len 1
#define MA_core__asense__temp_en__mask 0x01
#define MA_core__asense__temp_en__shift 0x00
#define MA_core__asense__temp_en__reset 0x01
#define MA_core__asense__temp_en__inputonly 0
//------------------------------------------------------------------------------core__asense__pvdd_en---
// Enable PVDD measurement
#define MA_core__asense__pvdd_en__a 0x01e0
#define MA_core__asense__pvdd_en__len 1
#define MA_core__asense__pvdd_en__mask 0x02
#define MA_core__asense__pvdd_en__shift 0x01
#define MA_core__asense__pvdd_en__reset 0x01
#define MA_core__asense__pvdd_en__inputonly 0
//------------------------------------------------------------------------------core__asense__pin_en---
// Enable adc_in measurement
#define MA_core__asense__pin_en__a 0x01e0
#define MA_core__asense__pin_en__len 1
#define MA_core__asense__pin_en__mask 0x04
#define MA_core__asense__pin_en__shift 0x02
#define MA_core__asense__pin_en__reset 0x01
#define MA_core__asense__pin_en__inputonly 0
//------------------------------------------------------------------------------core__asense__abus0_en---
// Enable analog debug bus 0 measurement
#define MA_core__asense__abus0_en__a 0x01e0
#define MA_core__asense__abus0_en__len 1
#define MA_core__asense__abus0_en__mask 0x08
#define MA_core__asense__abus0_en__shift 0x03
#define MA_core__asense__abus0_en__reset 0x00
#define MA_core__asense__abus0_en__inputonly 0
//------------------------------------------------------------------------------core__asense__abus1_en---
// Enable analog debug bus 1 measurement
#define MA_core__asense__abus1_en__a 0x01e0
#define MA_core__asense__abus1_en__len 1
#define MA_core__asense__abus1_en__mask 0x10
#define MA_core__asense__abus1_en__shift 0x04
#define MA_core__asense__abus1_en__reset 0x00
#define MA_core__asense__abus1_en__inputonly 0
//------------------------------------------------------------------------------core__asense__bgr_en---
// Enable bandgap voltage measurement
#define MA_core__asense__bgr_en__a 0x01e0
#define MA_core__asense__bgr_en__len 1
#define MA_core__asense__bgr_en__mask 0x20
#define MA_core__asense__bgr_en__shift 0x05
#define MA_core__asense__bgr_en__reset 0x00
#define MA_core__asense__bgr_en__inputonly 0
//------------------------------------------------------------------------------core__asense__os_times---
// Select the number of samples to average when over sampling is enabled; 3: 16 samples; 2: 8 samples; 1: 4 samples, 0: 2 samples 
#define MA_core__asense__os_times__a 0x01e1
#define MA_core__asense__os_times__len 2
#define MA_core__asense__os_times__mask 0x03
#define MA_core__asense__os_times__shift 0x00
#define MA_core__asense__os_times__reset 0x00
#define MA_core__asense__os_times__inputonly 0
//------------------------------------------------------------------------------core__asense__os_en---
// Over sampling enable for:  0: Temperature, 1: PVDD, 2: Pin, 3: Bandgap, 4: debug bus 0, 5: debug bus 1
#define MA_core__asense__os_en__a 0x01e1
#define MA_core__asense__os_en__len 6
#define MA_core__asense__os_en__mask 0xfc
#define MA_core__asense__os_en__shift 0x02
#define MA_core__asense__os_en__reset 0x00
#define MA_core__asense__os_en__inputonly 0
//------------------------------------------------------------------------------core__asense__cal_rate---
// ADC calibration rate; 0: 16KHz, 1: 1KHz, 2: 8Hz, 3: no calibration
#define MA_core__asense__cal_rate__a 0x01e2
#define MA_core__asense__cal_rate__len 2
#define MA_core__asense__cal_rate__mask 0x03
#define MA_core__asense__cal_rate__shift 0x00
#define MA_core__asense__cal_rate__reset 0x00
#define MA_core__asense__cal_rate__inputonly 0
//------------------------------------------------------------------------------core__asense__samp_rate---
// ADC sampling rate; 100: 16KHz, 101: 8KHz, 110: 4KHz, 111: 2 KHz, 000: 1 KHz, 001: 500Hz, 010: 250Hz, 011: 125Hz
#define MA_core__asense__samp_rate__a 0x01e2
#define MA_core__asense__samp_rate__len 3
#define MA_core__asense__samp_rate__mask 0x1c
#define MA_core__asense__samp_rate__shift 0x02
#define MA_core__asense__samp_rate__reset 0x00
#define MA_core__asense__samp_rate__inputonly 0
//------------------------------------------------------------------------------core__asense__sync_phase__0---
// Phase shift of ADC sampling relative to internal sync tick
#define MA_core__asense__sync_phase__0__a 0x01e3
#define MA_core__asense__sync_phase__0__len 8
#define MA_core__asense__sync_phase__0__mask 0xff
#define MA_core__asense__sync_phase__0__shift 0x00
#define MA_core__asense__sync_phase__0__reset 0x00
#define MA_core__asense__sync_phase__0__inputonly 0
//------------------------------------------------------------------------------core__asense__sync_phase__1---
// Phase shift of ADC sampling relative to internal sync tick
#define MA_core__asense__sync_phase__1__a 0x01e4
#define MA_core__asense__sync_phase__1__len 3
#define MA_core__asense__sync_phase__1__mask 0x07
#define MA_core__asense__sync_phase__1__shift 0x00
#define MA_core__asense__sync_phase__1__reset 0x00
#define MA_core__asense__sync_phase__1__inputonly 0
//------------------------------------------------------------------------------core__asense__fe_zero_dur---
// Frontend auto zero duration; 0: 1280ns, 1: 640ns, 2: 2560ns, 3: 5120ns 
#define MA_core__asense__fe_zero_dur__a 0x01e5
#define MA_core__asense__fe_zero_dur__len 2
#define MA_core__asense__fe_zero_dur__mask 0x03
#define MA_core__asense__fe_zero_dur__shift 0x00
#define MA_core__asense__fe_zero_dur__reset 0x00
#define MA_core__asense__fe_zero_dur__inputonly 0
//------------------------------------------------------------------------------core__asense__fe_track_dur---
// Frontend tracking duration;  0: 1360ns, 1: 720ns, 2: 2640ns, 3: 5200ns 
#define MA_core__asense__fe_track_dur__a 0x01e5
#define MA_core__asense__fe_track_dur__len 2
#define MA_core__asense__fe_track_dur__mask 0x0c
#define MA_core__asense__fe_track_dur__shift 0x02
#define MA_core__asense__fe_track_dur__reset 0x00
#define MA_core__asense__fe_track_dur__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_in_dur---
// 
#define MA_core__asense__adc_in_dur__a 0x01e5
#define MA_core__asense__adc_in_dur__len 2
#define MA_core__asense__adc_in_dur__mask 0x30
#define MA_core__asense__adc_in_dur__shift 0x04
#define MA_core__asense__adc_in_dur__reset 0x00
#define MA_core__asense__adc_in_dur__inputonly 0
//------------------------------------------------------------------------------core__asense__fe_en---
// Debug handles for overriding and setting control signals for frontend
#define MA_core__asense__fe_en__a 0x01e6
#define MA_core__asense__fe_en__len 1
#define MA_core__asense__fe_en__mask 0x04
#define MA_core__asense__fe_en__shift 0x02
#define MA_core__asense__fe_en__reset 0x00
#define MA_core__asense__fe_en__inputonly 0
//------------------------------------------------------------------------------core__asense__fe_en_ow---
// 
#define MA_core__asense__fe_en_ow__a 0x01e6
#define MA_core__asense__fe_en_ow__len 1
#define MA_core__asense__fe_en_ow__mask 0x08
#define MA_core__asense__fe_en_ow__shift 0x03
#define MA_core__asense__fe_en_ow__reset 0x00
#define MA_core__asense__fe_en_ow__inputonly 0
//------------------------------------------------------------------------------core__asense__fe_zero---
// 
#define MA_core__asense__fe_zero__a 0x01e6
#define MA_core__asense__fe_zero__len 1
#define MA_core__asense__fe_zero__mask 0x10
#define MA_core__asense__fe_zero__shift 0x04
#define MA_core__asense__fe_zero__reset 0x00
#define MA_core__asense__fe_zero__inputonly 0
//------------------------------------------------------------------------------core__asense__fe_zero_ow---
// 
#define MA_core__asense__fe_zero_ow__a 0x01e6
#define MA_core__asense__fe_zero_ow__len 1
#define MA_core__asense__fe_zero_ow__mask 0x20
#define MA_core__asense__fe_zero_ow__shift 0x05
#define MA_core__asense__fe_zero_ow__reset 0x00
#define MA_core__asense__fe_zero_ow__inputonly 0
//------------------------------------------------------------------------------core__asense__fe_track---
// 
#define MA_core__asense__fe_track__a 0x01e6
#define MA_core__asense__fe_track__len 1
#define MA_core__asense__fe_track__mask 0x40
#define MA_core__asense__fe_track__shift 0x06
#define MA_core__asense__fe_track__reset 0x00
#define MA_core__asense__fe_track__inputonly 0
//------------------------------------------------------------------------------core__asense__fe_track_ow---
// 
#define MA_core__asense__fe_track_ow__a 0x01e6
#define MA_core__asense__fe_track_ow__len 1
#define MA_core__asense__fe_track_ow__mask 0x80
#define MA_core__asense__fe_track_ow__shift 0x07
#define MA_core__asense__fe_track_ow__reset 0x00
#define MA_core__asense__fe_track_ow__inputonly 0
//------------------------------------------------------------------------------core__asense__fe_sel---
// 
#define MA_core__asense__fe_sel__a 0x01e7
#define MA_core__asense__fe_sel__len 3
#define MA_core__asense__fe_sel__mask 0x07
#define MA_core__asense__fe_sel__shift 0x00
#define MA_core__asense__fe_sel__reset 0x00
#define MA_core__asense__fe_sel__inputonly 0
//------------------------------------------------------------------------------core__asense__fe_sel_ow---
// 
#define MA_core__asense__fe_sel_ow__a 0x01e7
#define MA_core__asense__fe_sel_ow__len 1
#define MA_core__asense__fe_sel_ow__mask 0x08
#define MA_core__asense__fe_sel_ow__shift 0x03
#define MA_core__asense__fe_sel_ow__reset 0x00
#define MA_core__asense__fe_sel_ow__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_en---
// Debug handles for overriding and setting control signals for ADC
#define MA_core__asense__adc_en__a 0x01e8
#define MA_core__asense__adc_en__len 1
#define MA_core__asense__adc_en__mask 0x01
#define MA_core__asense__adc_en__shift 0x00
#define MA_core__asense__adc_en__reset 0x00
#define MA_core__asense__adc_en__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_en_ow---
// 
#define MA_core__asense__adc_en_ow__a 0x01e8
#define MA_core__asense__adc_en_ow__len 1
#define MA_core__asense__adc_en_ow__mask 0x02
#define MA_core__asense__adc_en_ow__shift 0x01
#define MA_core__asense__adc_en_ow__reset 0x00
#define MA_core__asense__adc_en_ow__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_start---
// 
#define MA_core__asense__adc_start__a 0x01e8
#define MA_core__asense__adc_start__len 1
#define MA_core__asense__adc_start__mask 0x04
#define MA_core__asense__adc_start__shift 0x02
#define MA_core__asense__adc_start__reset 0x00
#define MA_core__asense__adc_start__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_start_ow---
// 
#define MA_core__asense__adc_start_ow__a 0x01e8
#define MA_core__asense__adc_start_ow__len 1
#define MA_core__asense__adc_start_ow__mask 0x08
#define MA_core__asense__adc_start_ow__shift 0x03
#define MA_core__asense__adc_start_ow__reset 0x00
#define MA_core__asense__adc_start_ow__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_pcal---
// 
#define MA_core__asense__adc_pcal__a 0x01e8
#define MA_core__asense__adc_pcal__len 1
#define MA_core__asense__adc_pcal__mask 0x10
#define MA_core__asense__adc_pcal__shift 0x04
#define MA_core__asense__adc_pcal__reset 0x00
#define MA_core__asense__adc_pcal__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_pcal_ow---
// 
#define MA_core__asense__adc_pcal_ow__a 0x01e8
#define MA_core__asense__adc_pcal_ow__len 1
#define MA_core__asense__adc_pcal_ow__mask 0x20
#define MA_core__asense__adc_pcal_ow__shift 0x05
#define MA_core__asense__adc_pcal_ow__reset 0x00
#define MA_core__asense__adc_pcal_ow__inputonly 0
//------------------------------------------------------------------------------core__asense__samp_start---
// 
#define MA_core__asense__samp_start__a 0x01e6
#define MA_core__asense__samp_start__len 1
#define MA_core__asense__samp_start__mask 0x01
#define MA_core__asense__samp_start__shift 0x00
#define MA_core__asense__samp_start__reset 0x00
#define MA_core__asense__samp_start__inputonly 0
//------------------------------------------------------------------------------core__asense__samp_start_ow---
// 
#define MA_core__asense__samp_start_ow__a 0x01e6
#define MA_core__asense__samp_start_ow__len 1
#define MA_core__asense__samp_start_ow__mask 0x02
#define MA_core__asense__samp_start_ow__shift 0x01
#define MA_core__asense__samp_start_ow__reset 0x00
#define MA_core__asense__samp_start_ow__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_override---
// Enable override of analog sense output values with *_value settings below; 0: Temperature, 1: PVDD, 2: Pin
#define MA_core__asense__adc_override__a 0x01e9
#define MA_core__asense__adc_override__len 3
#define MA_core__asense__adc_override__mask 0x07
#define MA_core__asense__adc_override__shift 0x00
#define MA_core__asense__adc_override__reset 0x00
#define MA_core__asense__adc_override__inputonly 0
//------------------------------------------------------------------------------core__asense__min_max_persist---
// Enable persistence of the min/max registers when in over sampling mode with outlier removal
#define MA_core__asense__min_max_persist__a 0x01e9
#define MA_core__asense__min_max_persist__len 1
#define MA_core__asense__min_max_persist__mask 0x08
#define MA_core__asense__min_max_persist__shift 0x03
#define MA_core__asense__min_max_persist__reset 0x00
#define MA_core__asense__min_max_persist__inputonly 0
//------------------------------------------------------------------------------core__asense__outlier_en---
// Enable outlier removal for given input: 0: Temperature, 1: PVDD, 2: Pin, 3: Bandgap, 4: debug bus 0, 5: debug bus 1
#define MA_core__asense__outlier_en__a 0x01ea
#define MA_core__asense__outlier_en__len 6
#define MA_core__asense__outlier_en__mask 0x3f
#define MA_core__asense__outlier_en__shift 0x00
#define MA_core__asense__outlier_en__reset 0x00
#define MA_core__asense__outlier_en__inputonly 0
//------------------------------------------------------------------------------core__asense__temp_gain__0---
// Temperature gain value. In general output values are calculated using the folloging formula: out = gain * (adc_result + offset) >> shift
#define MA_core__asense__temp_gain__0__a 0x01eb
#define MA_core__asense__temp_gain__0__len 8
#define MA_core__asense__temp_gain__0__mask 0xff
#define MA_core__asense__temp_gain__0__shift 0x00
#define MA_core__asense__temp_gain__0__reset 0xc0
#define MA_core__asense__temp_gain__0__inputonly 0
//------------------------------------------------------------------------------core__asense__temp_gain__1---
// Temperature gain value. In general output values are calculated using the folloging formula: out = gain * (adc_result + offset) >> shift
#define MA_core__asense__temp_gain__1__a 0x01ec
#define MA_core__asense__temp_gain__1__len 2
#define MA_core__asense__temp_gain__1__mask 0x03
#define MA_core__asense__temp_gain__1__shift 0x00
#define MA_core__asense__temp_gain__1__reset 0x03
#define MA_core__asense__temp_gain__1__inputonly 0
//------------------------------------------------------------------------------core__asense__temp_shift---
// Temperature shift value
#define MA_core__asense__temp_shift__a 0x01ec
#define MA_core__asense__temp_shift__len 2
#define MA_core__asense__temp_shift__mask 0x0c
#define MA_core__asense__temp_shift__shift 0x02
#define MA_core__asense__temp_shift__reset 0x01
#define MA_core__asense__temp_shift__inputonly 0
//------------------------------------------------------------------------------core__asense__temp_offset__0---
// Temperature offset value
#define MA_core__asense__temp_offset__0__a 0x01ed
#define MA_core__asense__temp_offset__0__len 8
#define MA_core__asense__temp_offset__0__mask 0xff
#define MA_core__asense__temp_offset__0__shift 0x00
#define MA_core__asense__temp_offset__0__reset 0x11
#define MA_core__asense__temp_offset__0__inputonly 0
//------------------------------------------------------------------------------core__asense__temp_offset__1---
// Temperature offset value
#define MA_core__asense__temp_offset__1__a 0x01ee
#define MA_core__asense__temp_offset__1__len 2
#define MA_core__asense__temp_offset__1__mask 0x03
#define MA_core__asense__temp_offset__1__shift 0x00
#define MA_core__asense__temp_offset__1__reset 0xffffffff
#define MA_core__asense__temp_offset__1__inputonly 0
//------------------------------------------------------------------------------core__asense__temp_value---
// Temperature value when ADC is overridden
#define MA_core__asense__temp_value__a 0x01ef
#define MA_core__asense__temp_value__len 8
#define MA_core__asense__temp_value__mask 0xff
#define MA_core__asense__temp_value__shift 0x00
#define MA_core__asense__temp_value__reset 0x4b
#define MA_core__asense__temp_value__inputonly 0
//------------------------------------------------------------------------------core__asense__pvdd_gain__0---
// PVDD gain value
#define MA_core__asense__pvdd_gain__0__a 0x01f0
#define MA_core__asense__pvdd_gain__0__len 8
#define MA_core__asense__pvdd_gain__0__mask 0xff
#define MA_core__asense__pvdd_gain__0__shift 0x00
#define MA_core__asense__pvdd_gain__0__reset 0x42
#define MA_core__asense__pvdd_gain__0__inputonly 0
//------------------------------------------------------------------------------core__asense__pvdd_gain__1---
// PVDD gain value
#define MA_core__asense__pvdd_gain__1__a 0x01f1
#define MA_core__asense__pvdd_gain__1__len 2
#define MA_core__asense__pvdd_gain__1__mask 0x03
#define MA_core__asense__pvdd_gain__1__shift 0x00
#define MA_core__asense__pvdd_gain__1__reset 0x02
#define MA_core__asense__pvdd_gain__1__inputonly 0
//------------------------------------------------------------------------------core__asense__pvdd_shift---
// PVDD shift value
#define MA_core__asense__pvdd_shift__a 0x01f1
#define MA_core__asense__pvdd_shift__len 2
#define MA_core__asense__pvdd_shift__mask 0x0c
#define MA_core__asense__pvdd_shift__shift 0x02
#define MA_core__asense__pvdd_shift__reset 0x01
#define MA_core__asense__pvdd_shift__inputonly 0
//------------------------------------------------------------------------------core__asense__pvdd_offset__0---
// PVDD offset value
#define MA_core__asense__pvdd_offset__0__a 0x01f2
#define MA_core__asense__pvdd_offset__0__len 8
#define MA_core__asense__pvdd_offset__0__mask 0xff
#define MA_core__asense__pvdd_offset__0__shift 0x00
#define MA_core__asense__pvdd_offset__0__reset 0x00
#define MA_core__asense__pvdd_offset__0__inputonly 0
//------------------------------------------------------------------------------core__asense__pvdd_offset__1---
// PVDD offset value
#define MA_core__asense__pvdd_offset__1__a 0x01f3
#define MA_core__asense__pvdd_offset__1__len 2
#define MA_core__asense__pvdd_offset__1__mask 0x03
#define MA_core__asense__pvdd_offset__1__shift 0x00
#define MA_core__asense__pvdd_offset__1__reset 0x00
#define MA_core__asense__pvdd_offset__1__inputonly 0
//------------------------------------------------------------------------------core__asense__pvdd_value---
// PDVD value when ADC is overridden
#define MA_core__asense__pvdd_value__a 0x01f4
#define MA_core__asense__pvdd_value__len 8
#define MA_core__asense__pvdd_value__mask 0xff
#define MA_core__asense__pvdd_value__shift 0x00
#define MA_core__asense__pvdd_value__reset 0x90
#define MA_core__asense__pvdd_value__inputonly 0
//------------------------------------------------------------------------------core__asense__pin_gain__0---
// Pin gain value
#define MA_core__asense__pin_gain__0__a 0x01f5
#define MA_core__asense__pin_gain__0__len 8
#define MA_core__asense__pin_gain__0__mask 0xff
#define MA_core__asense__pin_gain__0__shift 0x00
#define MA_core__asense__pin_gain__0__reset 0x00
#define MA_core__asense__pin_gain__0__inputonly 0
//------------------------------------------------------------------------------core__asense__pin_gain__1---
// Pin gain value
#define MA_core__asense__pin_gain__1__a 0x01f6
#define MA_core__asense__pin_gain__1__len 2
#define MA_core__asense__pin_gain__1__mask 0x03
#define MA_core__asense__pin_gain__1__shift 0x00
#define MA_core__asense__pin_gain__1__reset 0x00
#define MA_core__asense__pin_gain__1__inputonly 0
//------------------------------------------------------------------------------core__asense__pin_shift---
// Pin shift value
#define MA_core__asense__pin_shift__a 0x01f6
#define MA_core__asense__pin_shift__len 2
#define MA_core__asense__pin_shift__mask 0x0c
#define MA_core__asense__pin_shift__shift 0x02
#define MA_core__asense__pin_shift__reset 0x00
#define MA_core__asense__pin_shift__inputonly 0
//------------------------------------------------------------------------------core__asense__pin_offset__0---
// Pin offset value
#define MA_core__asense__pin_offset__0__a 0x01f7
#define MA_core__asense__pin_offset__0__len 8
#define MA_core__asense__pin_offset__0__mask 0xff
#define MA_core__asense__pin_offset__0__shift 0x00
#define MA_core__asense__pin_offset__0__reset 0x00
#define MA_core__asense__pin_offset__0__inputonly 0
//------------------------------------------------------------------------------core__asense__pin_offset__1---
// Pin offset value
#define MA_core__asense__pin_offset__1__a 0x01f8
#define MA_core__asense__pin_offset__1__len 2
#define MA_core__asense__pin_offset__1__mask 0x03
#define MA_core__asense__pin_offset__1__shift 0x00
#define MA_core__asense__pin_offset__1__reset 0x00
#define MA_core__asense__pin_offset__1__inputonly 0
//------------------------------------------------------------------------------core__asense__pin_value---
// Pin value when ADC is overridden
#define MA_core__asense__pin_value__a 0x01f9
#define MA_core__asense__pin_value__len 8
#define MA_core__asense__pin_value__mask 0xff
#define MA_core__asense__pin_value__shift 0x00
#define MA_core__asense__pin_value__reset 0x00
#define MA_core__asense__pin_value__inputonly 0
//------------------------------------------------------------------------------core__asense__debug_gain__0---
// Debug bus gain value
#define MA_core__asense__debug_gain__0__a 0x01fa
#define MA_core__asense__debug_gain__0__len 8
#define MA_core__asense__debug_gain__0__mask 0xff
#define MA_core__asense__debug_gain__0__shift 0x00
#define MA_core__asense__debug_gain__0__reset 0x00
#define MA_core__asense__debug_gain__0__inputonly 0
//------------------------------------------------------------------------------core__asense__debug_gain__1---
// Debug bus gain value
#define MA_core__asense__debug_gain__1__a 0x01fb
#define MA_core__asense__debug_gain__1__len 2
#define MA_core__asense__debug_gain__1__mask 0x03
#define MA_core__asense__debug_gain__1__shift 0x00
#define MA_core__asense__debug_gain__1__reset 0x00
#define MA_core__asense__debug_gain__1__inputonly 0
//------------------------------------------------------------------------------core__asense__debug_shift---
// Debug bus shift value
#define MA_core__asense__debug_shift__a 0x01fb
#define MA_core__asense__debug_shift__len 2
#define MA_core__asense__debug_shift__mask 0x0c
#define MA_core__asense__debug_shift__shift 0x02
#define MA_core__asense__debug_shift__reset 0x00
#define MA_core__asense__debug_shift__inputonly 0
//------------------------------------------------------------------------------core__asense__debug_offset__0---
// Debug bus offset value
#define MA_core__asense__debug_offset__0__a 0x01fc
#define MA_core__asense__debug_offset__0__len 8
#define MA_core__asense__debug_offset__0__mask 0xff
#define MA_core__asense__debug_offset__0__shift 0x00
#define MA_core__asense__debug_offset__0__reset 0x00
#define MA_core__asense__debug_offset__0__inputonly 0
//------------------------------------------------------------------------------core__asense__debug_offset__1---
// Debug bus offset value
#define MA_core__asense__debug_offset__1__a 0x01fd
#define MA_core__asense__debug_offset__1__len 2
#define MA_core__asense__debug_offset__1__mask 0x03
#define MA_core__asense__debug_offset__1__shift 0x00
#define MA_core__asense__debug_offset__1__reset 0x00
#define MA_core__asense__debug_offset__1__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_chnr---
// ADC input channel selection: 0: Frontend, 1: adc_in pin
#define MA_core__asense__adc_chnr__a 0x01fe
#define MA_core__asense__adc_chnr__len 4
#define MA_core__asense__adc_chnr__mask 0x0f
#define MA_core__asense__adc_chnr__shift 0x00
#define MA_core__asense__adc_chnr__reset 0x00
#define MA_core__asense__adc_chnr__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_stc---
// ADC sample time control;  0: 32, 1: 16, 2: 64, 3: 128 clock cycles (24 MHz)
#define MA_core__asense__adc_stc__a 0x01fe
#define MA_core__asense__adc_stc__len 2
#define MA_core__asense__adc_stc__mask 0x30
#define MA_core__asense__adc_stc__shift 0x04
#define MA_core__asense__adc_stc__reset 0x00
#define MA_core__asense__adc_stc__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_stc_cal---
// ADC sample time control for calibration; 0: 4, 1: 8, 2: 16, 3: 32 clock cycles (24 MHz)
#define MA_core__asense__adc_stc_cal__a 0x01fe
#define MA_core__asense__adc_stc_cal__len 2
#define MA_core__asense__adc_stc_cal__mask 0xc0
#define MA_core__asense__adc_stc_cal__shift 0x06
#define MA_core__asense__adc_stc_cal__reset 0x00
#define MA_core__asense__adc_stc_cal__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_comp_val__0---
// ADC compare mode value to compare with
#define MA_core__asense__adc_comp_val__0__a 0x01ff
#define MA_core__asense__adc_comp_val__0__len 8
#define MA_core__asense__adc_comp_val__0__mask 0xff
#define MA_core__asense__adc_comp_val__0__shift 0x00
#define MA_core__asense__adc_comp_val__0__reset 0x00
#define MA_core__asense__adc_comp_val__0__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_comp_val__1---
// ADC compare mode value to compare with
#define MA_core__asense__adc_comp_val__1__a 0x0200
#define MA_core__asense__adc_comp_val__1__len 5
#define MA_core__asense__adc_comp_val__1__mask 0x1f
#define MA_core__asense__adc_comp_val__1__shift 0x00
#define MA_core__asense__adc_comp_val__1__reset 0x00
#define MA_core__asense__adc_comp_val__1__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_comp_en---
// ADC enable compare mode
#define MA_core__asense__adc_comp_en__a 0x0200
#define MA_core__asense__adc_comp_en__len 1
#define MA_core__asense__adc_comp_en__mask 0x20
#define MA_core__asense__adc_comp_en__shift 0x05
#define MA_core__asense__adc_comp_en__reset 0x00
#define MA_core__asense__adc_comp_en__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_sesp---
// ADC Spreaded Early Sampling Point Mode, see more in JAMA
#define MA_core__asense__adc_sesp__a 0x0200
#define MA_core__asense__adc_sesp__len 1
#define MA_core__asense__adc_sesp__mask 0x40
#define MA_core__asense__adc_sesp__shift 0x06
#define MA_core__asense__adc_sesp__reset 0x00
#define MA_core__asense__adc_sesp__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_dscal---
// ADC disable startup calibration
#define MA_core__asense__adc_dscal__a 0x0200
#define MA_core__asense__adc_dscal__len 1
#define MA_core__asense__adc_dscal__mask 0x80
#define MA_core__asense__adc_dscal__shift 0x07
#define MA_core__asense__adc_dscal__reset 0x00
#define MA_core__asense__adc_dscal__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_track_cfg---
// ADC number of tracking overconversion cycles; 0: 0 (standard 11-bit), 1: 1, 2: 3,  3: 7 (max noise suppression)  
#define MA_core__asense__adc_track_cfg__a 0x0201
#define MA_core__asense__adc_track_cfg__len 2
#define MA_core__asense__adc_track_cfg__mask 0x03
#define MA_core__asense__adc_track_cfg__shift 0x00
#define MA_core__asense__adc_track_cfg__reset 0x00
#define MA_core__asense__adc_track_cfg__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_overs_cfg---
// ADC number of overconversion cycles (this settings takes precedence over tracking); 0: 1 (standard 11-bit), 1: 2, 2: 4,  3: 5 (max noise suppression)  
#define MA_core__asense__adc_overs_cfg__a 0x0201
#define MA_core__asense__adc_overs_cfg__len 2
#define MA_core__asense__adc_overs_cfg__mask 0x0c
#define MA_core__asense__adc_overs_cfg__shift 0x02
#define MA_core__asense__adc_overs_cfg__reset 0x00
#define MA_core__asense__adc_overs_cfg__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_dither_cfg---
// ADC add dither in overconsversion
#define MA_core__asense__adc_dither_cfg__a 0x0201
#define MA_core__asense__adc_dither_cfg__len 2
#define MA_core__asense__adc_dither_cfg__mask 0x30
#define MA_core__asense__adc_dither_cfg__shift 0x04
#define MA_core__asense__adc_dither_cfg__reset 0x00
#define MA_core__asense__adc_dither_cfg__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_lv_gain---
// 
#define MA_core__asense__adc_lv_gain__a 0x01e8
#define MA_core__asense__adc_lv_gain__len 1
#define MA_core__asense__adc_lv_gain__mask 0x40
#define MA_core__asense__adc_lv_gain__shift 0x06
#define MA_core__asense__adc_lv_gain__reset 0x00
#define MA_core__asense__adc_lv_gain__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_tst_dig_in__0---
// ADC BIST input vector, see ADC documentation for description
#define MA_core__asense__adc_tst_dig_in__0__a 0x0203
#define MA_core__asense__adc_tst_dig_in__0__len 8
#define MA_core__asense__adc_tst_dig_in__0__mask 0xff
#define MA_core__asense__adc_tst_dig_in__0__shift 0x00
#define MA_core__asense__adc_tst_dig_in__0__reset 0x00
#define MA_core__asense__adc_tst_dig_in__0__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_tst_dig_in__1---
// ADC BIST input vector, see ADC documentation for description
#define MA_core__asense__adc_tst_dig_in__1__a 0x0204
#define MA_core__asense__adc_tst_dig_in__1__len 8
#define MA_core__asense__adc_tst_dig_in__1__mask 0xff
#define MA_core__asense__adc_tst_dig_in__1__shift 0x00
#define MA_core__asense__adc_tst_dig_in__1__reset 0x00
#define MA_core__asense__adc_tst_dig_in__1__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_tst_dig_in__2---
// ADC BIST input vector, see ADC documentation for description
#define MA_core__asense__adc_tst_dig_in__2__a 0x0205
#define MA_core__asense__adc_tst_dig_in__2__len 8
#define MA_core__asense__adc_tst_dig_in__2__mask 0xff
#define MA_core__asense__adc_tst_dig_in__2__shift 0x00
#define MA_core__asense__adc_tst_dig_in__2__reset 0x00
#define MA_core__asense__adc_tst_dig_in__2__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_tst_dig_in__3---
// ADC BIST input vector, see ADC documentation for description
#define MA_core__asense__adc_tst_dig_in__3__a 0x0206
#define MA_core__asense__adc_tst_dig_in__3__len 8
#define MA_core__asense__adc_tst_dig_in__3__mask 0xff
#define MA_core__asense__adc_tst_dig_in__3__shift 0x00
#define MA_core__asense__adc_tst_dig_in__3__reset 0x00
#define MA_core__asense__adc_tst_dig_in__3__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_tst_dig_in__4---
// ADC BIST input vector, see ADC documentation for description
#define MA_core__asense__adc_tst_dig_in__4__a 0x0207
#define MA_core__asense__adc_tst_dig_in__4__len 5
#define MA_core__asense__adc_tst_dig_in__4__mask 0x1f
#define MA_core__asense__adc_tst_dig_in__4__shift 0x00
#define MA_core__asense__adc_tst_dig_in__4__reset 0x00
#define MA_core__asense__adc_tst_dig_in__4__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_tst_stress---
// ADC stress test mode
#define MA_core__asense__adc_tst_stress__a 0x0207
#define MA_core__asense__adc_tst_stress__len 1
#define MA_core__asense__adc_tst_stress__mask 0x20
#define MA_core__asense__adc_tst_stress__shift 0x05
#define MA_core__asense__adc_tst_stress__reset 0x00
#define MA_core__asense__adc_tst_stress__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_tst_dig_out__0---
// ADC BIST output vector
#define MA_core__asense__adc_tst_dig_out__0__a 0x0208
#define MA_core__asense__adc_tst_dig_out__0__len 8
#define MA_core__asense__adc_tst_dig_out__0__mask 0xff
#define MA_core__asense__adc_tst_dig_out__0__shift 0x00
#define MA_core__asense__adc_tst_dig_out__0__reset 0x00
#define MA_core__asense__adc_tst_dig_out__0__inputonly 1
//------------------------------------------------------------------------------core__asense__adc_tst_dig_out__1---
// ADC BIST output vector
#define MA_core__asense__adc_tst_dig_out__1__a 0x0209
#define MA_core__asense__adc_tst_dig_out__1__len 8
#define MA_core__asense__adc_tst_dig_out__1__mask 0xff
#define MA_core__asense__adc_tst_dig_out__1__shift 0x00
#define MA_core__asense__adc_tst_dig_out__1__reset 0x00
#define MA_core__asense__adc_tst_dig_out__1__inputonly 1
//------------------------------------------------------------------------------core__asense__adc_tst_dig_out__2---
// ADC BIST output vector
#define MA_core__asense__adc_tst_dig_out__2__a 0x020a
#define MA_core__asense__adc_tst_dig_out__2__len 4
#define MA_core__asense__adc_tst_dig_out__2__mask 0x0f
#define MA_core__asense__adc_tst_dig_out__2__shift 0x00
#define MA_core__asense__adc_tst_dig_out__2__reset 0x00
#define MA_core__asense__adc_tst_dig_out__2__inputonly 1
//------------------------------------------------------------------------------core__asense__temp__0---
// Output temperature value
#define MA_core__asense__temp__0__a 0x020b
#define MA_core__asense__temp__0__len 8
#define MA_core__asense__temp__0__mask 0xff
#define MA_core__asense__temp__0__shift 0x00
#define MA_core__asense__temp__0__reset 0x00
#define MA_core__asense__temp__0__inputonly 1
//------------------------------------------------------------------------------core__asense__temp__1---
// Output temperature value
#define MA_core__asense__temp__1__a 0x020c
#define MA_core__asense__temp__1__len 4
#define MA_core__asense__temp__1__mask 0x0f
#define MA_core__asense__temp__1__shift 0x00
#define MA_core__asense__temp__1__reset 0x00
#define MA_core__asense__temp__1__inputonly 1
//------------------------------------------------------------------------------core__asense__pvdd__0---
// Output PVDD value
#define MA_core__asense__pvdd__0__a 0x020d
#define MA_core__asense__pvdd__0__len 8
#define MA_core__asense__pvdd__0__mask 0xff
#define MA_core__asense__pvdd__0__shift 0x00
#define MA_core__asense__pvdd__0__reset 0x00
#define MA_core__asense__pvdd__0__inputonly 1
//------------------------------------------------------------------------------core__asense__pvdd__1---
// Output PVDD value
#define MA_core__asense__pvdd__1__a 0x020e
#define MA_core__asense__pvdd__1__len 4
#define MA_core__asense__pvdd__1__mask 0x0f
#define MA_core__asense__pvdd__1__shift 0x00
#define MA_core__asense__pvdd__1__reset 0x00
#define MA_core__asense__pvdd__1__inputonly 1
//------------------------------------------------------------------------------core__asense__pin__0---
// Output pin value
#define MA_core__asense__pin__0__a 0x020f
#define MA_core__asense__pin__0__len 8
#define MA_core__asense__pin__0__mask 0xff
#define MA_core__asense__pin__0__shift 0x00
#define MA_core__asense__pin__0__reset 0x00
#define MA_core__asense__pin__0__inputonly 1
//------------------------------------------------------------------------------core__asense__pin__1---
// Output pin value
#define MA_core__asense__pin__1__a 0x0210
#define MA_core__asense__pin__1__len 4
#define MA_core__asense__pin__1__mask 0x0f
#define MA_core__asense__pin__1__shift 0x00
#define MA_core__asense__pin__1__reset 0x00
#define MA_core__asense__pin__1__inputonly 1
//------------------------------------------------------------------------------core__asense__debug0__0---
// Output debug bus 0 value
#define MA_core__asense__debug0__0__a 0x0211
#define MA_core__asense__debug0__0__len 8
#define MA_core__asense__debug0__0__mask 0xff
#define MA_core__asense__debug0__0__shift 0x00
#define MA_core__asense__debug0__0__reset 0x00
#define MA_core__asense__debug0__0__inputonly 1
//------------------------------------------------------------------------------core__asense__debug0__1---
// Output debug bus 0 value
#define MA_core__asense__debug0__1__a 0x0212
#define MA_core__asense__debug0__1__len 4
#define MA_core__asense__debug0__1__mask 0x0f
#define MA_core__asense__debug0__1__shift 0x00
#define MA_core__asense__debug0__1__reset 0x00
#define MA_core__asense__debug0__1__inputonly 1
//------------------------------------------------------------------------------core__asense__debug1__0---
// Output debug bus 1/bandgap evalue
#define MA_core__asense__debug1__0__a 0x0213
#define MA_core__asense__debug1__0__len 8
#define MA_core__asense__debug1__0__mask 0xff
#define MA_core__asense__debug1__0__shift 0x00
#define MA_core__asense__debug1__0__reset 0x00
#define MA_core__asense__debug1__0__inputonly 1
//------------------------------------------------------------------------------core__asense__debug1__1---
// Output debug bus 1/bandgap evalue
#define MA_core__asense__debug1__1__a 0x0214
#define MA_core__asense__debug1__1__len 4
#define MA_core__asense__debug1__1__mask 0x0f
#define MA_core__asense__debug1__1__shift 0x00
#define MA_core__asense__debug1__1__reset 0x00
#define MA_core__asense__debug1__1__inputonly 1
//------------------------------------------------------------------------------core__asense__outlier_max__0---
// Maximum outlier encountered with min_max_persist
#define MA_core__asense__outlier_max__0__a 0x0215
#define MA_core__asense__outlier_max__0__len 8
#define MA_core__asense__outlier_max__0__mask 0xff
#define MA_core__asense__outlier_max__0__shift 0x00
#define MA_core__asense__outlier_max__0__reset 0x00
#define MA_core__asense__outlier_max__0__inputonly 1
//------------------------------------------------------------------------------core__asense__outlier_max__1---
// Maximum outlier encountered with min_max_persist
#define MA_core__asense__outlier_max__1__a 0x0216
#define MA_core__asense__outlier_max__1__len 4
#define MA_core__asense__outlier_max__1__mask 0x0f
#define MA_core__asense__outlier_max__1__shift 0x00
#define MA_core__asense__outlier_max__1__reset 0x00
#define MA_core__asense__outlier_max__1__inputonly 1
//------------------------------------------------------------------------------core__asense__outlier_min__0---
// Minimum outlier encountered with min_max_persist
#define MA_core__asense__outlier_min__0__a 0x0217
#define MA_core__asense__outlier_min__0__len 8
#define MA_core__asense__outlier_min__0__mask 0xff
#define MA_core__asense__outlier_min__0__shift 0x00
#define MA_core__asense__outlier_min__0__reset 0x00
#define MA_core__asense__outlier_min__0__inputonly 1
//------------------------------------------------------------------------------core__asense__outlier_min__1---
// Minimum outlier encountered with min_max_persist
#define MA_core__asense__outlier_min__1__a 0x0218
#define MA_core__asense__outlier_min__1__len 4
#define MA_core__asense__outlier_min__1__mask 0x0f
#define MA_core__asense__outlier_min__1__shift 0x00
#define MA_core__asense__outlier_min__1__reset 0x00
#define MA_core__asense__outlier_min__1__inputonly 1
//------------------------------------------------------------------------------core__asense__adc_lv_gain_ow---
// 
#define MA_core__asense__adc_lv_gain_ow__a 0x01e8
#define MA_core__asense__adc_lv_gain_ow__len 1
#define MA_core__asense__adc_lv_gain_ow__mask 0x80
#define MA_core__asense__adc_lv_gain_ow__shift 0x07
#define MA_core__asense__adc_lv_gain_ow__reset 0x00
#define MA_core__asense__adc_lv_gain_ow__inputonly 0
//------------------------------------------------------------------------------core__asense__adc_lv_gain_src---
// ADC enable lv_gain for given input; [ debug1 debug0 bandgap pin pvdd temp ]
#define MA_core__asense__adc_lv_gain_src__a 0x0202
#define MA_core__asense__adc_lv_gain_src__len 6
#define MA_core__asense__adc_lv_gain_src__mask 0x3f
#define MA_core__asense__adc_lv_gain_src__shift 0x00
#define MA_core__asense__adc_lv_gain_src__reset 0x06
#define MA_core__asense__adc_lv_gain_src__inputonly 0
//------------------------------------------------------------------------------core__asense__fe_sel_en---
// 
#define MA_core__asense__fe_sel_en__a 0x01e7
#define MA_core__asense__fe_sel_en__len 1
#define MA_core__asense__fe_sel_en__mask 0x10
#define MA_core__asense__fe_sel_en__shift 0x04
#define MA_core__asense__fe_sel_en__reset 0x00
#define MA_core__asense__fe_sel_en__inputonly 0
//------------------------------------------------------------------------------core__asense__fe_sel_en_ow---
// 
#define MA_core__asense__fe_sel_en_ow__a 0x01e7
#define MA_core__asense__fe_sel_en_ow__len 1
#define MA_core__asense__fe_sel_en_ow__mask 0x20
#define MA_core__asense__fe_sel_en_ow__shift 0x05
#define MA_core__asense__fe_sel_en_ow__reset 0x00
#define MA_core__asense__fe_sel_en_ow__inputonly 0
//------------------------------------------------------------------------------core__spare__spare_d_n_bits---
// 
#define MA_core__spare__spare_d_n_bits__a 0x0242
#define MA_core__spare__spare_d_n_bits__len 4
#define MA_core__spare__spare_d_n_bits__mask 0x0f
#define MA_core__spare__spare_d_n_bits__shift 0x00
#define MA_core__spare__spare_d_n_bits__reset 0x00
#define MA_core__spare__spare_d_n_bits__inputonly 0
//------------------------------------------------------------------------------core__spare__spare_a_n_bits---
// 
#define MA_core__spare__spare_a_n_bits__a 0x0240
#define MA_core__spare__spare_a_n_bits__len 3
#define MA_core__spare__spare_a_n_bits__mask 0x07
#define MA_core__spare__spare_a_n_bits__shift 0x00
#define MA_core__spare__spare_a_n_bits__reset 0x00
#define MA_core__spare__spare_a_n_bits__inputonly 0
//------------------------------------------------------------------------------core__spare__spare_a_s_bits---
// 
#define MA_core__spare__spare_a_s_bits__a 0x0244
#define MA_core__spare__spare_a_s_bits__len 4
#define MA_core__spare__spare_a_s_bits__mask 0x0f
#define MA_core__spare__spare_a_s_bits__shift 0x00
#define MA_core__spare__spare_a_s_bits__reset 0x00
#define MA_core__spare__spare_a_s_bits__inputonly 0
//------------------------------------------------------------------------------core__spare__spare_d_s_bits---
// 
#define MA_core__spare__spare_d_s_bits__a 0x0246
#define MA_core__spare__spare_d_s_bits__len 6
#define MA_core__spare__spare_d_s_bits__mask 0x3f
#define MA_core__spare__spare_d_s_bits__shift 0x00
#define MA_core__spare__spare_d_s_bits__reset 0x00
#define MA_core__spare__spare_d_s_bits__inputonly 0
//------------------------------------------------------------------------------core__spare__spare_d_n_mon---
// 
#define MA_core__spare__spare_d_n_mon__a 0x0243
#define MA_core__spare__spare_d_n_mon__len 4
#define MA_core__spare__spare_d_n_mon__mask 0x0f
#define MA_core__spare__spare_d_n_mon__shift 0x00
#define MA_core__spare__spare_d_n_mon__reset 0x0f
#define MA_core__spare__spare_d_n_mon__inputonly 1
//------------------------------------------------------------------------------core__spare__spare_a_n_mon---
// 
#define MA_core__spare__spare_a_n_mon__a 0x0241
#define MA_core__spare__spare_a_n_mon__len 2
#define MA_core__spare__spare_a_n_mon__mask 0x03
#define MA_core__spare__spare_a_n_mon__shift 0x00
#define MA_core__spare__spare_a_n_mon__reset 0x03
#define MA_core__spare__spare_a_n_mon__inputonly 1
//------------------------------------------------------------------------------core__spare__spare_a_s_mon---
// 
#define MA_core__spare__spare_a_s_mon__a 0x0245
#define MA_core__spare__spare_a_s_mon__len 4
#define MA_core__spare__spare_a_s_mon__mask 0x0f
#define MA_core__spare__spare_a_s_mon__shift 0x00
#define MA_core__spare__spare_a_s_mon__reset 0x0e
#define MA_core__spare__spare_a_s_mon__inputonly 1
//------------------------------------------------------------------------------core__spare__spare_d_s_mon---
// 
#define MA_core__spare__spare_d_s_mon__a 0x0247
#define MA_core__spare__spare_d_s_mon__len 8
#define MA_core__spare__spare_d_s_mon__mask 0xff
#define MA_core__spare__spare_d_s_mon__shift 0x00
#define MA_core__spare__spare_d_s_mon__reset 0x00
#define MA_core__spare__spare_d_s_mon__inputonly 1
//------------------------------------------------------------------------------core__spare__spare_bits_0---
// 
#define MA_core__spare__spare_bits_0__a 0x0248
#define MA_core__spare__spare_bits_0__len 8
#define MA_core__spare__spare_bits_0__mask 0xff
#define MA_core__spare__spare_bits_0__shift 0x00
#define MA_core__spare__spare_bits_0__reset 0x00
#define MA_core__spare__spare_bits_0__inputonly 0
//------------------------------------------------------------------------------core__spare__spare_bits_1---
// 
#define MA_core__spare__spare_bits_1__a 0x0249
#define MA_core__spare__spare_bits_1__len 8
#define MA_core__spare__spare_bits_1__mask 0xff
#define MA_core__spare__spare_bits_1__shift 0x00
#define MA_core__spare__spare_bits_1__reset 0x00
#define MA_core__spare__spare_bits_1__inputonly 0
//------------------------------------------------------------------------------core__test__i2c_in_en---
// 
#define MA_core__test__i2c_in_en__a 0x0220
#define MA_core__test__i2c_in_en__len 1
#define MA_core__test__i2c_in_en__mask 0x01
#define MA_core__test__i2c_in_en__shift 0x00
#define MA_core__test__i2c_in_en__reset 0x01
#define MA_core__test__i2c_in_en__inputonly 0
//------------------------------------------------------------------------------core__test__i2c_scl_out_en---
// 
#define MA_core__test__i2c_scl_out_en__a 0x0220
#define MA_core__test__i2c_scl_out_en__len 1
#define MA_core__test__i2c_scl_out_en__mask 0x02
#define MA_core__test__i2c_scl_out_en__shift 0x01
#define MA_core__test__i2c_scl_out_en__reset 0x01
#define MA_core__test__i2c_scl_out_en__inputonly 0
//------------------------------------------------------------------------------core__test__i2c_sda_out_en---
// 
#define MA_core__test__i2c_sda_out_en__a 0x0220
#define MA_core__test__i2c_sda_out_en__len 1
#define MA_core__test__i2c_sda_out_en__mask 0x04
#define MA_core__test__i2c_sda_out_en__shift 0x02
#define MA_core__test__i2c_sda_out_en__reset 0x01
#define MA_core__test__i2c_sda_out_en__inputonly 0
//------------------------------------------------------------------------------core__test__sif_mode_i2c---
// 
#define MA_core__test__sif_mode_i2c__a 0x0220
#define MA_core__test__sif_mode_i2c__len 1
#define MA_core__test__sif_mode_i2c__mask 0x08
#define MA_core__test__sif_mode_i2c__shift 0x03
#define MA_core__test__sif_mode_i2c__reset 0x01
#define MA_core__test__sif_mode_i2c__inputonly 0
//------------------------------------------------------------------------------core__test__xpin_mode---
// Mode select for nclip and nerr pins; 0: Open-drain (default), 1: Digital, 2: Power, 3: Analog unbuf, 4: Analog Cur, 5: Analog buffer, 6: Offset meas, 7: Analog CMOS
#define MA_core__test__xpin_mode__a 0x0221
#define MA_core__test__xpin_mode__len 3
#define MA_core__test__xpin_mode__mask 0x07
#define MA_core__test__xpin_mode__shift 0x00
#define MA_core__test__xpin_mode__reset 0x00
#define MA_core__test__xpin_mode__inputonly 0
//------------------------------------------------------------------------------core__test__xpin_cfg---
// 
#define MA_core__test__xpin_cfg__a 0x0221
#define MA_core__test__xpin_cfg__len 3
#define MA_core__test__xpin_cfg__mask 0x70
#define MA_core__test__xpin_cfg__shift 0x04
#define MA_core__test__xpin_cfg__reset 0x01
#define MA_core__test__xpin_cfg__inputonly 0
//------------------------------------------------------------------------------core__test__xpin_cfg_force---
// 
#define MA_core__test__xpin_cfg_force__a 0x0221
#define MA_core__test__xpin_cfg_force__len 1
#define MA_core__test__xpin_cfg_force__mask 0x80
#define MA_core__test__xpin_cfg_force__shift 0x07
#define MA_core__test__xpin_cfg_force__reset 0x00
#define MA_core__test__xpin_cfg_force__inputonly 0
//------------------------------------------------------------------------------core__test__afir_bist_en---
// Start afir bist test
#define MA_core__test__afir_bist_en__a 0x0232
#define MA_core__test__afir_bist_en__len 1
#define MA_core__test__afir_bist_en__mask 0x01
#define MA_core__test__afir_bist_en__shift 0x00
#define MA_core__test__afir_bist_en__reset 0x00
#define MA_core__test__afir_bist_en__inputonly 0
//------------------------------------------------------------------------------core__test__afir_bist_results_0---
// afir_bist_results_0
#define MA_core__test__afir_bist_results_0__a 0x0239
#define MA_core__test__afir_bist_results_0__len 1
#define MA_core__test__afir_bist_results_0__mask 0x01
#define MA_core__test__afir_bist_results_0__shift 0x00
#define MA_core__test__afir_bist_results_0__reset 0x00
#define MA_core__test__afir_bist_results_0__inputonly 1
//------------------------------------------------------------------------------core__test__afir_bist_cfg---
// Afir bist mode
#define MA_core__test__afir_bist_cfg__a 0x0232
#define MA_core__test__afir_bist_cfg__len 2
#define MA_core__test__afir_bist_cfg__mask 0x18
#define MA_core__test__afir_bist_cfg__shift 0x03
#define MA_core__test__afir_bist_cfg__reset 0x00
#define MA_core__test__afir_bist_cfg__inputonly 0
//------------------------------------------------------------------------------core__test__afir_bist_results_1---
// afir_bist_results_1
#define MA_core__test__afir_bist_results_1__a 0x0239
#define MA_core__test__afir_bist_results_1__len 1
#define MA_core__test__afir_bist_results_1__mask 0x02
#define MA_core__test__afir_bist_results_1__shift 0x01
#define MA_core__test__afir_bist_results_1__reset 0x00
#define MA_core__test__afir_bist_results_1__inputonly 1
//------------------------------------------------------------------------------core__test__en_clk_pad---
// High to enable DCO clock probe pad
#define MA_core__test__en_clk_pad__a 0x0226
#define MA_core__test__en_clk_pad__len 1
#define MA_core__test__en_clk_pad__mask 0x10
#define MA_core__test__en_clk_pad__shift 0x04
#define MA_core__test__en_clk_pad__reset 0x00
#define MA_core__test__en_clk_pad__inputonly 0
//------------------------------------------------------------------------------core__test__nreset_lock---
// High to lock device in non-reset state
#define MA_core__test__nreset_lock__a 0x0226
#define MA_core__test__nreset_lock__len 1
#define MA_core__test__nreset_lock__mask 0x20
#define MA_core__test__nreset_lock__shift 0x05
#define MA_core__test__nreset_lock__reset 0x00
#define MA_core__test__nreset_lock__inputonly 0
//------------------------------------------------------------------------------core__test__d0_mux_sel---
// Debug 0 (nclip) mux select when xpin_mode=1
#define MA_core__test__d0_mux_sel__a 0x0222
#define MA_core__test__d0_mux_sel__len 8
#define MA_core__test__d0_mux_sel__mask 0xff
#define MA_core__test__d0_mux_sel__shift 0x00
#define MA_core__test__d0_mux_sel__reset 0x00
#define MA_core__test__d0_mux_sel__inputonly 0
//------------------------------------------------------------------------------core__test__d1_mux_sel---
// Debug 1 (nerr) mux select when xpin_mode=1
#define MA_core__test__d1_mux_sel__a 0x0223
#define MA_core__test__d1_mux_sel__len 8
#define MA_core__test__d1_mux_sel__mask 0xff
#define MA_core__test__d1_mux_sel__shift 0x00
#define MA_core__test__d1_mux_sel__reset 0x00
#define MA_core__test__d1_mux_sel__inputonly 0
//------------------------------------------------------------------------------core__test__revision0---
// Subversion revision of the register bank
#define MA_core__test__revision0__a 0x0229
#define MA_core__test__revision0__len 8
#define MA_core__test__revision0__mask 0xff
#define MA_core__test__revision0__shift 0x00
#define MA_core__test__revision0__reset 0x00
#define MA_core__test__revision0__inputonly 1
//------------------------------------------------------------------------------core__test__revision1---
// Subversion revision of the register bank
#define MA_core__test__revision1__a 0x022a
#define MA_core__test__revision1__len 8
#define MA_core__test__revision1__mask 0xff
#define MA_core__test__revision1__shift 0x00
#define MA_core__test__revision1__reset 0x00
#define MA_core__test__revision1__inputonly 1
//------------------------------------------------------------------------------core__test__dsp_ram_pm_bist---
// DSP program memory bist config
#define MA_core__test__dsp_ram_pm_bist__a 0x022b
#define MA_core__test__dsp_ram_pm_bist__len 4
#define MA_core__test__dsp_ram_pm_bist__mask 0xf0
#define MA_core__test__dsp_ram_pm_bist__shift 0x04
#define MA_core__test__dsp_ram_pm_bist__reset 0x00
#define MA_core__test__dsp_ram_pm_bist__inputonly 0
//------------------------------------------------------------------------------core__test__dsp_ram_dm_bist---
// DSP data memory bist config
#define MA_core__test__dsp_ram_dm_bist__a 0x022b
#define MA_core__test__dsp_ram_dm_bist__len 4
#define MA_core__test__dsp_ram_dm_bist__mask 0x0f
#define MA_core__test__dsp_ram_dm_bist__shift 0x00
#define MA_core__test__dsp_ram_dm_bist__reset 0x00
#define MA_core__test__dsp_ram_dm_bist__inputonly 0
//------------------------------------------------------------------------------core__test__dsp_ram_pm_status---
// DSP program memory bist status
#define MA_core__test__dsp_ram_pm_status__a 0x022c
#define MA_core__test__dsp_ram_pm_status__len 8
#define MA_core__test__dsp_ram_pm_status__mask 0xff
#define MA_core__test__dsp_ram_pm_status__shift 0x00
#define MA_core__test__dsp_ram_pm_status__reset 0x00
#define MA_core__test__dsp_ram_pm_status__inputonly 1
//------------------------------------------------------------------------------core__test__dsp_ram_dm_status---
// DSP data memory bist status
#define MA_core__test__dsp_ram_dm_status__a 0x022d
#define MA_core__test__dsp_ram_dm_status__len 8
#define MA_core__test__dsp_ram_dm_status__mask 0xff
#define MA_core__test__dsp_ram_dm_status__shift 0x00
#define MA_core__test__dsp_ram_dm_status__reset 0x00
#define MA_core__test__dsp_ram_dm_status__inputonly 1
//------------------------------------------------------------------------------core__test__dsp_ram_pm_addr_lo---
// DSP program memory bist address ptr low bits
#define MA_core__test__dsp_ram_pm_addr_lo__a 0x022e
#define MA_core__test__dsp_ram_pm_addr_lo__len 8
#define MA_core__test__dsp_ram_pm_addr_lo__mask 0xff
#define MA_core__test__dsp_ram_pm_addr_lo__shift 0x00
#define MA_core__test__dsp_ram_pm_addr_lo__reset 0x00
#define MA_core__test__dsp_ram_pm_addr_lo__inputonly 1
//------------------------------------------------------------------------------core__test__dsp_ram_dm_addr_lo---
// DSP data memory bist address ptr low bits
#define MA_core__test__dsp_ram_dm_addr_lo__a 0x0230
#define MA_core__test__dsp_ram_dm_addr_lo__len 8
#define MA_core__test__dsp_ram_dm_addr_lo__mask 0xff
#define MA_core__test__dsp_ram_dm_addr_lo__shift 0x00
#define MA_core__test__dsp_ram_dm_addr_lo__reset 0x00
#define MA_core__test__dsp_ram_dm_addr_lo__inputonly 1
//------------------------------------------------------------------------------core__test__dsp_ram_pm_addr_hi---
// DSP program memory bist address ptr high bits
#define MA_core__test__dsp_ram_pm_addr_hi__a 0x022f
#define MA_core__test__dsp_ram_pm_addr_hi__len 2
#define MA_core__test__dsp_ram_pm_addr_hi__mask 0x03
#define MA_core__test__dsp_ram_pm_addr_hi__shift 0x00
#define MA_core__test__dsp_ram_pm_addr_hi__reset 0x00
#define MA_core__test__dsp_ram_pm_addr_hi__inputonly 1
//------------------------------------------------------------------------------core__test__dsp_ram_dm_addr_hi---
// DSP data memory bist address ptr high bits
#define MA_core__test__dsp_ram_dm_addr_hi__a 0x0231
#define MA_core__test__dsp_ram_dm_addr_hi__len 2
#define MA_core__test__dsp_ram_dm_addr_hi__mask 0x03
#define MA_core__test__dsp_ram_dm_addr_hi__shift 0x00
#define MA_core__test__dsp_ram_dm_addr_hi__reset 0x00
#define MA_core__test__dsp_ram_dm_addr_hi__inputonly 1
//------------------------------------------------------------------------------core__test__d2_mux_sel---
// Debug 2 (i2s_sdo) mux select
#define MA_core__test__d2_mux_sel__a 0x0224
#define MA_core__test__d2_mux_sel__len 8
#define MA_core__test__d2_mux_sel__mask 0xff
#define MA_core__test__d2_mux_sel__shift 0x00
#define MA_core__test__d2_mux_sel__reset 0x00
#define MA_core__test__d2_mux_sel__inputonly 0
//------------------------------------------------------------------------------core__test__i2s_sdo_debug_out---
// High to enable debug 2 output on i2s_sdo
#define MA_core__test__i2s_sdo_debug_out__a 0x0226
#define MA_core__test__i2s_sdo_debug_out__len 1
#define MA_core__test__i2s_sdo_debug_out__mask 0x40
#define MA_core__test__i2s_sdo_debug_out__shift 0x06
#define MA_core__test__i2s_sdo_debug_out__reset 0x00
#define MA_core__test__i2s_sdo_debug_out__inputonly 0
//------------------------------------------------------------------------------core__test__i2s_sdo_reclk_bypass---
// High to enable bypass of the output register on i2s_sdo located in the south pad segment.
#define MA_core__test__i2s_sdo_reclk_bypass__a 0x0226
#define MA_core__test__i2s_sdo_reclk_bypass__len 1
#define MA_core__test__i2s_sdo_reclk_bypass__mask 0x80
#define MA_core__test__i2s_sdo_reclk_bypass__shift 0x07
#define MA_core__test__i2s_sdo_reclk_bypass__reset 0x00
#define MA_core__test__i2s_sdo_reclk_bypass__inputonly 0
//------------------------------------------------------------------------------core__test__afir_bist_start---
// Start afir bist test
#define MA_core__test__afir_bist_start__a 0x0232
#define MA_core__test__afir_bist_start__len 1
#define MA_core__test__afir_bist_start__mask 0x02
#define MA_core__test__afir_bist_start__shift 0x01
#define MA_core__test__afir_bist_start__reset 0x00
#define MA_core__test__afir_bist_start__inputonly 0
//------------------------------------------------------------------------------core__test__afir_bist_cont---
// afir bist continuous test
#define MA_core__test__afir_bist_cont__a 0x0232
#define MA_core__test__afir_bist_cont__len 1
#define MA_core__test__afir_bist_cont__mask 0x04
#define MA_core__test__afir_bist_cont__shift 0x02
#define MA_core__test__afir_bist_cont__reset 0x00
#define MA_core__test__afir_bist_cont__inputonly 0
//------------------------------------------------------------------------------core__test__afir_bist_prbg_seed_0---
// Pseudo random bit generator seed - 10 bits
#define MA_core__test__afir_bist_prbg_seed_0__a 0x0234
#define MA_core__test__afir_bist_prbg_seed_0__len 8
#define MA_core__test__afir_bist_prbg_seed_0__mask 0xff
#define MA_core__test__afir_bist_prbg_seed_0__shift 0x00
#define MA_core__test__afir_bist_prbg_seed_0__reset 0x00
#define MA_core__test__afir_bist_prbg_seed_0__inputonly 0
//------------------------------------------------------------------------------core__test__afir_bist_prbg_seed_1---
// Pseudo random bit generator seed - 10 bits
#define MA_core__test__afir_bist_prbg_seed_1__a 0x0235
#define MA_core__test__afir_bist_prbg_seed_1__len 2
#define MA_core__test__afir_bist_prbg_seed_1__mask 0x03
#define MA_core__test__afir_bist_prbg_seed_1__shift 0x00
#define MA_core__test__afir_bist_prbg_seed_1__reset 0x00
#define MA_core__test__afir_bist_prbg_seed_1__inputonly 0
//------------------------------------------------------------------------------core__test__afir_bist_error_prbg_seed_0---
// Pseudo random bit generator seed - 10 bits, latched when error
#define MA_core__test__afir_bist_error_prbg_seed_0__a 0x0236
#define MA_core__test__afir_bist_error_prbg_seed_0__len 8
#define MA_core__test__afir_bist_error_prbg_seed_0__mask 0xff
#define MA_core__test__afir_bist_error_prbg_seed_0__shift 0x00
#define MA_core__test__afir_bist_error_prbg_seed_0__reset 0x00
#define MA_core__test__afir_bist_error_prbg_seed_0__inputonly 1
//------------------------------------------------------------------------------core__test__afir_bist_error_cnt---
// Afir element counter - latched counter value when error
#define MA_core__test__afir_bist_error_cnt__a 0x0238
#define MA_core__test__afir_bist_error_cnt__len 8
#define MA_core__test__afir_bist_error_cnt__mask 0xff
#define MA_core__test__afir_bist_error_cnt__shift 0x00
#define MA_core__test__afir_bist_error_cnt__reset 0x00
#define MA_core__test__afir_bist_error_cnt__inputonly 1
//------------------------------------------------------------------------------core__test__afir_bist_error_prbg_seed_1---
// Pseudo random bit generator seed - 10 bits, latched when error
#define MA_core__test__afir_bist_error_prbg_seed_1__a 0x0237
#define MA_core__test__afir_bist_error_prbg_seed_1__len 2
#define MA_core__test__afir_bist_error_prbg_seed_1__mask 0x03
#define MA_core__test__afir_bist_error_prbg_seed_1__shift 0x00
#define MA_core__test__afir_bist_error_prbg_seed_1__reset 0x00
#define MA_core__test__afir_bist_error_prbg_seed_1__inputonly 1
//------------------------------------------------------------------------------core__test__afir_bist_results_2---
// afir_bist_results_2
#define MA_core__test__afir_bist_results_2__a 0x0239
#define MA_core__test__afir_bist_results_2__len 1
#define MA_core__test__afir_bist_results_2__mask 0x04
#define MA_core__test__afir_bist_results_2__shift 0x02
#define MA_core__test__afir_bist_results_2__reset 0x00
#define MA_core__test__afir_bist_results_2__inputonly 1
//------------------------------------------------------------------------------core__test__afir_bist_err_ch---
// 
#define MA_core__test__afir_bist_err_ch__a 0x0239
#define MA_core__test__afir_bist_err_ch__len 4
#define MA_core__test__afir_bist_err_ch__mask 0xf0
#define MA_core__test__afir_bist_err_ch__shift 0x04
#define MA_core__test__afir_bist_err_ch__reset 0x00
#define MA_core__test__afir_bist_err_ch__inputonly 1
//------------------------------------------------------------------------------core__test__afir_bist_force_err_ch---
// Afir bist force error on channel
#define MA_core__test__afir_bist_force_err_ch__a 0x0233
#define MA_core__test__afir_bist_force_err_ch__len 4
#define MA_core__test__afir_bist_force_err_ch__mask 0x0f
#define MA_core__test__afir_bist_force_err_ch__shift 0x00
#define MA_core__test__afir_bist_force_err_ch__reset 0x00
#define MA_core__test__afir_bist_force_err_ch__inputonly 0
//------------------------------------------------------------------------------core__test__afir_bist_force_err---
// Afir bist force error enable
#define MA_core__test__afir_bist_force_err__a 0x0233
#define MA_core__test__afir_bist_force_err__len 1
#define MA_core__test__afir_bist_force_err__mask 0x10
#define MA_core__test__afir_bist_force_err__shift 0x04
#define MA_core__test__afir_bist_force_err__reset 0x00
#define MA_core__test__afir_bist_force_err__inputonly 0
//------------------------------------------------------------------------------core__test__i2s_in_high_bw---
// Enable high bandwidth (50 MHz) I2S input.
#define MA_core__test__i2s_in_high_bw__a 0x0226
#define MA_core__test__i2s_in_high_bw__len 1
#define MA_core__test__i2s_in_high_bw__mask 0x08
#define MA_core__test__i2s_in_high_bw__shift 0x03
#define MA_core__test__i2s_in_high_bw__reset 0x00
#define MA_core__test__i2s_in_high_bw__inputonly 0
//------------------------------------------------------------------------------core__test__nerr_in_en---
// Enable nerr input buffer
#define MA_core__test__nerr_in_en__a 0x0225
#define MA_core__test__nerr_in_en__len 1
#define MA_core__test__nerr_in_en__mask 0x02
#define MA_core__test__nerr_in_en__shift 0x01
#define MA_core__test__nerr_in_en__reset 0x00
#define MA_core__test__nerr_in_en__inputonly 0
//------------------------------------------------------------------------------core__test__nclip_in_en---
// Enable nclip input buffer, default to enable since it is used for multi-IC sync
#define MA_core__test__nclip_in_en__a 0x0225
#define MA_core__test__nclip_in_en__len 1
#define MA_core__test__nclip_in_en__mask 0x01
#define MA_core__test__nclip_in_en__shift 0x00
#define MA_core__test__nclip_in_en__reset 0x01
#define MA_core__test__nclip_in_en__inputonly 0
//------------------------------------------------------------------------------core__test__i2s_ws_freerun---
// Enable internal WS generation based on incoming i2s_sck (64 counter)
#define MA_core__test__i2s_ws_freerun__a 0x0226
#define MA_core__test__i2s_ws_freerun__len 1
#define MA_core__test__i2s_ws_freerun__mask 0x04
#define MA_core__test__i2s_ws_freerun__shift 0x02
#define MA_core__test__i2s_ws_freerun__reset 0x00
#define MA_core__test__i2s_ws_freerun__inputonly 0
//------------------------------------------------------------------------------core__test__mlpin_din_en_force---
// Enable direct input for i2c_ad0, i2c_ad1, and msel
#define MA_core__test__mlpin_din_en_force__a 0x0220
#define MA_core__test__mlpin_din_en_force__len 1
#define MA_core__test__mlpin_din_en_force__mask 0x10
#define MA_core__test__mlpin_din_en_force__shift 0x04
#define MA_core__test__mlpin_din_en_force__reset 0x00
#define MA_core__test__mlpin_din_en_force__inputonly 0
//------------------------------------------------------------------------------core__test__xpin_offset_sel---
// Select on which pad to measure analog buffer offset, 0: nclip, 1: nerr
#define MA_core__test__xpin_offset_sel__a 0x0221
#define MA_core__test__xpin_offset_sel__len 1
#define MA_core__test__xpin_offset_sel__mask 0x08
#define MA_core__test__xpin_offset_sel__shift 0x03
#define MA_core__test__xpin_offset_sel__reset 0x00
#define MA_core__test__xpin_offset_sel__inputonly 0
//------------------------------------------------------------------------------core__system__otp_boot_done---
// Indicate that trim values has been loaded
#define MA_core__system__otp_boot_done__a 0x0260
#define MA_core__system__otp_boot_done__len 1
#define MA_core__system__otp_boot_done__mask 0x01
#define MA_core__system__otp_boot_done__shift 0x00
#define MA_core__system__otp_boot_done__reset 0x00
#define MA_core__system__otp_boot_done__inputonly 0
//------------------------------------------------------------------------------core__system__dac_dither_level---
// DAC dither level: 00: Off, 01: Small, 10: Medium, 11: Large
#define MA_core__system__dac_dither_level__a 0x0261
#define MA_core__system__dac_dither_level__len 2
#define MA_core__system__dac_dither_level__mask 0x03
#define MA_core__system__dac_dither_level__shift 0x00
#define MA_core__system__dac_dither_level__reset 0x01
#define MA_core__system__dac_dither_level__inputonly 0
//------------------------------------------------------------------------------core__system__afir_clk_invert---
// Invert clock to afir
#define MA_core__system__afir_clk_invert__a 0x0262
#define MA_core__system__afir_clk_invert__len 1
#define MA_core__system__afir_clk_invert__mask 0x04
#define MA_core__system__afir_clk_invert__shift 0x02
#define MA_core__system__afir_clk_invert__reset 0x00
#define MA_core__system__afir_clk_invert__inputonly 0
//------------------------------------------------------------------------------core__system__acfg_dcu_upd_block---
// High to block DCU update
#define MA_core__system__acfg_dcu_upd_block__a 0x0262
#define MA_core__system__acfg_dcu_upd_block__len 1
#define MA_core__system__acfg_dcu_upd_block__mask 0x08
#define MA_core__system__acfg_dcu_upd_block__shift 0x03
#define MA_core__system__acfg_dcu_upd_block__reset 0x00
#define MA_core__system__acfg_dcu_upd_block__inputonly 0
//------------------------------------------------------------------------------core__system__otp_reg_start_time---
// Number of 10 us cycles to wait for regulators to settle before accessing OTP
#define MA_core__system__otp_reg_start_time__a 0x0265
#define MA_core__system__otp_reg_start_time__len 8
#define MA_core__system__otp_reg_start_time__mask 0xff
#define MA_core__system__otp_reg_start_time__shift 0x00
#define MA_core__system__otp_reg_start_time__reset 0x14
#define MA_core__system__otp_reg_start_time__inputonly 0
//------------------------------------------------------------------------------core__system__otp_write_time---
// Number of 10 us cycles to keep the OTP program pin asserted
#define MA_core__system__otp_write_time__a 0x0266
#define MA_core__system__otp_write_time__len 8
#define MA_core__system__otp_write_time__mask 0xff
#define MA_core__system__otp_write_time__shift 0x00
#define MA_core__system__otp_write_time__reset 0x64
#define MA_core__system__otp_write_time__inputonly 0
//------------------------------------------------------------------------------core__system__force_play---
// Debug: Force sub blocks to play audio
#define MA_core__system__force_play__a 0x0262
#define MA_core__system__force_play__len 1
#define MA_core__system__force_play__mask 0x10
#define MA_core__system__force_play__shift 0x04
#define MA_core__system__force_play__reset 0x00
#define MA_core__system__force_play__inputonly 0
//------------------------------------------------------------------------------core__system__force_pll---
// Debug: Force pll enable
#define MA_core__system__force_pll__a 0x0262
#define MA_core__system__force_pll__len 1
#define MA_core__system__force_pll__mask 0x20
#define MA_core__system__force_pll__shift 0x05
#define MA_core__system__force_pll__reset 0x00
#define MA_core__system__force_pll__inputonly 0
//------------------------------------------------------------------------------core__system__rb_protect---
// Register bank protection level; 0: public, 1: read only, 2: hidden
#define MA_core__system__rb_protect__a 0x0268
#define MA_core__system__rb_protect__len 3
#define MA_core__system__rb_protect__mask 0x07
#define MA_core__system__rb_protect__shift 0x00
#define MA_core__system__rb_protect__reset 0x00
#define MA_core__system__rb_protect__inputonly 0
//------------------------------------------------------------------------------core__system__rb_protect_override---
// Register bank protection override
#define MA_core__system__rb_protect_override__a 0x0269
#define MA_core__system__rb_protect_override__len 8
#define MA_core__system__rb_protect_override__mask 0xff
#define MA_core__system__rb_protect_override__shift 0x00
#define MA_core__system__rb_protect_override__reset 0x00
#define MA_core__system__rb_protect_override__inputonly 0
//------------------------------------------------------------------------------core__system__otp_write_enable---
// Magic value to enable OTP writes
#define MA_core__system__otp_write_enable__a 0x0267
#define MA_core__system__otp_write_enable__len 8
#define MA_core__system__otp_write_enable__mask 0xff
#define MA_core__system__otp_write_enable__shift 0x00
#define MA_core__system__otp_write_enable__reset 0x00
#define MA_core__system__otp_write_enable__inputonly 0
//------------------------------------------------------------------------------core__system__temp_chip_shift---
// Number of MSBs to discard on the ADC temperature measurement avail in pa.temp_chip
#define MA_core__system__temp_chip_shift__a 0x026b
#define MA_core__system__temp_chip_shift__len 3
#define MA_core__system__temp_chip_shift__mask 0x07
#define MA_core__system__temp_chip_shift__shift 0x00
#define MA_core__system__temp_chip_shift__reset 0x00
#define MA_core__system__temp_chip_shift__inputonly 0
//------------------------------------------------------------------------------core__system__bgr_filt_div_1_not_3---
// Increase the frequency of the bandgap filter to 64 KHz instead of 192 KHz
#define MA_core__system__bgr_filt_div_1_not_3__a 0x0262
#define MA_core__system__bgr_filt_div_1_not_3__len 1
#define MA_core__system__bgr_filt_div_1_not_3__mask 0x01
#define MA_core__system__bgr_filt_div_1_not_3__shift 0x00
#define MA_core__system__bgr_filt_div_1_not_3__reset 0x00
#define MA_core__system__bgr_filt_div_1_not_3__inputonly 0
//------------------------------------------------------------------------------core__system__dmem_protect---
// Write protect DSP data memory
#define MA_core__system__dmem_protect__a 0x026a
#define MA_core__system__dmem_protect__len 1
#define MA_core__system__dmem_protect__mask 0x08
#define MA_core__system__dmem_protect__shift 0x03
#define MA_core__system__dmem_protect__reset 0x00
#define MA_core__system__dmem_protect__inputonly 0
//------------------------------------------------------------------------------core__system__pmem_protect---
// Write protect DSP program memory
#define MA_core__system__pmem_protect__a 0x026a
#define MA_core__system__pmem_protect__len 1
#define MA_core__system__pmem_protect__mask 0x04
#define MA_core__system__pmem_protect__shift 0x02
#define MA_core__system__pmem_protect__reset 0x00
#define MA_core__system__pmem_protect__inputonly 0
//------------------------------------------------------------------------------core__system__mlp_protect---
// Write protect multi-level pin segment
#define MA_core__system__mlp_protect__a 0x026a
#define MA_core__system__mlp_protect__len 1
#define MA_core__system__mlp_protect__mask 0x01
#define MA_core__system__mlp_protect__shift 0x00
#define MA_core__system__mlp_protect__reset 0x00
#define MA_core__system__mlp_protect__inputonly 0
//------------------------------------------------------------------------------core__system__acfg_protect---
// Write protect analog configuration segment
#define MA_core__system__acfg_protect__a 0x026a
#define MA_core__system__acfg_protect__len 1
#define MA_core__system__acfg_protect__mask 0x02
#define MA_core__system__acfg_protect__shift 0x01
#define MA_core__system__acfg_protect__reset 0x00
#define MA_core__system__acfg_protect__inputonly 0
//------------------------------------------------------------------------------core__system__otp_ecc_disable---
// Disable ECC on reads from OTP
#define MA_core__system__otp_ecc_disable__a 0x0262
#define MA_core__system__otp_ecc_disable__len 1
#define MA_core__system__otp_ecc_disable__mask 0x40
#define MA_core__system__otp_ecc_disable__shift 0x06
#define MA_core__system__otp_ecc_disable__reset 0x00
#define MA_core__system__otp_ecc_disable__inputonly 0
//------------------------------------------------------------------------------core__system__otp_ecc_status---
// Status of the OTP ECC logic
#define MA_core__system__otp_ecc_status__a 0x026f
#define MA_core__system__otp_ecc_status__len 4
#define MA_core__system__otp_ecc_status__mask 0x0f
#define MA_core__system__otp_ecc_status__shift 0x00
#define MA_core__system__otp_ecc_status__reset 0x00
#define MA_core__system__otp_ecc_status__inputonly 1
//------------------------------------------------------------------------------core__system__otp_ecc_status_clr---
// Clear the OTP ECC status register
#define MA_core__system__otp_ecc_status_clr__a 0x0262
#define MA_core__system__otp_ecc_status_clr__len 1
#define MA_core__system__otp_ecc_status_clr__mask 0x80
#define MA_core__system__otp_ecc_status_clr__shift 0x07
#define MA_core__system__otp_ecc_status_clr__reset 0x00
#define MA_core__system__otp_ecc_status_clr__inputonly 0
//------------------------------------------------------------------------------core__system__gain_trim---
// Gain trim for both audio channels, trim range [0dB;3.34dB]. "0000": 0dB, "1111": 3.34dB
#define MA_core__system__gain_trim__a 0x026c
#define MA_core__system__gain_trim__len 4
#define MA_core__system__gain_trim__mask 0x0f
#define MA_core__system__gain_trim__shift 0x00
#define MA_core__system__gain_trim__reset 0x00
#define MA_core__system__gain_trim__inputonly 0
//------------------------------------------------------------------------------core__system__offset_trim_0---
// Offset trim for channel 0, trim range [-FS/1024;FS/1024]
#define MA_core__system__offset_trim_0__a 0x026d
#define MA_core__system__offset_trim_0__len 6
#define MA_core__system__offset_trim_0__mask 0x3f
#define MA_core__system__offset_trim_0__shift 0x00
#define MA_core__system__offset_trim_0__reset 0x00
#define MA_core__system__offset_trim_0__inputonly 0
//------------------------------------------------------------------------------core__system__offset_trim_1---
// Offset trim for channel 1, trim range [-FS/1024;FS/1024]
#define MA_core__system__offset_trim_1__a 0x026e
#define MA_core__system__offset_trim_1__len 6
#define MA_core__system__offset_trim_1__mask 0x3f
#define MA_core__system__offset_trim_1__shift 0x00
#define MA_core__system__offset_trim_1__reset 0x00
#define MA_core__system__offset_trim_1__inputonly 0
//------------------------------------------------------------------------------mlpin__mlp__limit0---
// 120 KOhm upper limit
#define MA_mlpin__mlp__limit0__a 0x0500
#define MA_mlpin__mlp__limit0__len 6
#define MA_mlpin__mlp__limit0__mask 0x3f
#define MA_mlpin__mlp__limit0__shift 0x00
#define MA_mlpin__mlp__limit0__reset 0x01
#define MA_mlpin__mlp__limit0__inputonly 0
//------------------------------------------------------------------------------mlpin__mlp__limit1---
// 62 KOhm upper limit
#define MA_mlpin__mlp__limit1__a 0x0501
#define MA_mlpin__mlp__limit1__len 6
#define MA_mlpin__mlp__limit1__mask 0x3f
#define MA_mlpin__mlp__limit1__shift 0x00
#define MA_mlpin__mlp__limit1__reset 0x05
#define MA_mlpin__mlp__limit1__inputonly 0
//------------------------------------------------------------------------------mlpin__mlp__limit2---
// 39 KOhm upper limit
#define MA_mlpin__mlp__limit2__a 0x0502
#define MA_mlpin__mlp__limit2__len 6
#define MA_mlpin__mlp__limit2__mask 0x3f
#define MA_mlpin__mlp__limit2__shift 0x00
#define MA_mlpin__mlp__limit2__reset 0x09
#define MA_mlpin__mlp__limit2__inputonly 0
//------------------------------------------------------------------------------mlpin__mlp__limit3---
// 30 KOhm upper limit
#define MA_mlpin__mlp__limit3__a 0x0503
#define MA_mlpin__mlp__limit3__len 6
#define MA_mlpin__mlp__limit3__mask 0x3f
#define MA_mlpin__mlp__limit3__shift 0x00
#define MA_mlpin__mlp__limit3__reset 0x0e
#define MA_mlpin__mlp__limit3__inputonly 0
//------------------------------------------------------------------------------mlpin__mlp__limit4---
// 24 KOhm upper limit
#define MA_mlpin__mlp__limit4__a 0x0504
#define MA_mlpin__mlp__limit4__len 6
#define MA_mlpin__mlp__limit4__mask 0x3f
#define MA_mlpin__mlp__limit4__shift 0x00
#define MA_mlpin__mlp__limit4__reset 0x12
#define MA_mlpin__mlp__limit4__inputonly 0
//------------------------------------------------------------------------------mlpin__mlp__limit5---
// 20 KOhm upper limit
#define MA_mlpin__mlp__limit5__a 0x0505
#define MA_mlpin__mlp__limit5__len 6
#define MA_mlpin__mlp__limit5__mask 0x3f
#define MA_mlpin__mlp__limit5__shift 0x00
#define MA_mlpin__mlp__limit5__reset 0x16
#define MA_mlpin__mlp__limit5__inputonly 0
//------------------------------------------------------------------------------mlpin__mlp__limit6---
// 15 KOhm upper limit
#define MA_mlpin__mlp__limit6__a 0x0506
#define MA_mlpin__mlp__limit6__len 6
#define MA_mlpin__mlp__limit6__mask 0x3f
#define MA_mlpin__mlp__limit6__shift 0x00
#define MA_mlpin__mlp__limit6__reset 0x1c
#define MA_mlpin__mlp__limit6__inputonly 0
//------------------------------------------------------------------------------mlpin__mlp__limit7---
// 10 KOhm upper limit
#define MA_mlpin__mlp__limit7__a 0x0507
#define MA_mlpin__mlp__limit7__len 6
#define MA_mlpin__mlp__limit7__mask 0x3f
#define MA_mlpin__mlp__limit7__shift 0x00
#define MA_mlpin__mlp__limit7__reset 0x28
#define MA_mlpin__mlp__limit7__inputonly 0
//------------------------------------------------------------------------------mlpin__mlp__limit8---
// 10 KOhm lower limit
#define MA_mlpin__mlp__limit8__a 0x0508
#define MA_mlpin__mlp__limit8__len 6
#define MA_mlpin__mlp__limit8__mask 0x3f
#define MA_mlpin__mlp__limit8__shift 0x00
#define MA_mlpin__mlp__limit8__reset 0x36
#define MA_mlpin__mlp__limit8__inputonly 0
//------------------------------------------------------------------------------mlpin__mlp__decrement---
// Enable auto-decrement of the select register allowing you to do sequential messurements of several pins
#define MA_mlpin__mlp__decrement__a 0x0509
#define MA_mlpin__mlp__decrement__len 1
#define MA_mlpin__mlp__decrement__mask 0x08
#define MA_mlpin__mlp__decrement__shift 0x03
#define MA_mlpin__mlp__decrement__reset 0x01
#define MA_mlpin__mlp__decrement__inputonly 0
//------------------------------------------------------------------------------mlpin__mlp__sel---
// Start decode of the given pin (see coding on the config registers) or apply test mode load (sel=6)
#define MA_mlpin__mlp__sel__a 0x0509
#define MA_mlpin__mlp__sel__len 3
#define MA_mlpin__mlp__sel__mask 0x07
#define MA_mlpin__mlp__sel__shift 0x00
#define MA_mlpin__mlp__sel__reset 0x05
#define MA_mlpin__mlp__sel__inputonly 0
//------------------------------------------------------------------------------mlpin__mlp__msel_cfg---
// msel pin configuration (sel=1); 0: tie high, 1: 120 KOhm
#define MA_mlpin__mlp__msel_cfg__a 0x050c
#define MA_mlpin__mlp__msel_cfg__len 4
#define MA_mlpin__mlp__msel_cfg__mask 0x0f
#define MA_mlpin__mlp__msel_cfg__shift 0x00
#define MA_mlpin__mlp__msel_cfg__reset 0x00
#define MA_mlpin__mlp__msel_cfg__inputonly 1
//------------------------------------------------------------------------------mlpin__mlp__i2c_ad0_cfg---
// i2c_ad0 pin configuration (sel=3); 2: 62 KOhm, 3: 39 KOhm
#define MA_mlpin__mlp__i2c_ad0_cfg__a 0x050e
#define MA_mlpin__mlp__i2c_ad0_cfg__len 4
#define MA_mlpin__mlp__i2c_ad0_cfg__mask 0x0f
#define MA_mlpin__mlp__i2c_ad0_cfg__shift 0x00
#define MA_mlpin__mlp__i2c_ad0_cfg__reset 0x00
#define MA_mlpin__mlp__i2c_ad0_cfg__inputonly 1
//------------------------------------------------------------------------------mlpin__mlp__i2c_ad1_cfg---
// i2c_ad1 pin configuration (sel=2); 4: 30 KOhm, 5: 24 KOhm
#define MA_mlpin__mlp__i2c_ad1_cfg__a 0x050d
#define MA_mlpin__mlp__i2c_ad1_cfg__len 4
#define MA_mlpin__mlp__i2c_ad1_cfg__mask 0x0f
#define MA_mlpin__mlp__i2c_ad1_cfg__shift 0x00
#define MA_mlpin__mlp__i2c_ad1_cfg__reset 0x00
#define MA_mlpin__mlp__i2c_ad1_cfg__inputonly 1
//------------------------------------------------------------------------------mlpin__mlp__i2c_sda_cfg---
// i2c_sda pin configuration (sel=4); 6: 20 KOhm, 7: 15 KOhm
#define MA_mlpin__mlp__i2c_sda_cfg__a 0x050f
#define MA_mlpin__mlp__i2c_sda_cfg__len 4
#define MA_mlpin__mlp__i2c_sda_cfg__mask 0x0f
#define MA_mlpin__mlp__i2c_sda_cfg__shift 0x00
#define MA_mlpin__mlp__i2c_sda_cfg__reset 0x00
#define MA_mlpin__mlp__i2c_sda_cfg__inputonly 1
//------------------------------------------------------------------------------mlpin__mlp__i2c_scl_cfg---
// i2c_scl pin configuration (sel=5); 8: 10 KOhm, 9: tie low
#define MA_mlpin__mlp__i2c_scl_cfg__a 0x0510
#define MA_mlpin__mlp__i2c_scl_cfg__len 4
#define MA_mlpin__mlp__i2c_scl_cfg__mask 0x0f
#define MA_mlpin__mlp__i2c_scl_cfg__shift 0x00
#define MA_mlpin__mlp__i2c_scl_cfg__reset 0x00
#define MA_mlpin__mlp__i2c_scl_cfg__inputonly 1
//------------------------------------------------------------------------------mlpin__mlp__timeout---
// Number of calibration clock cycles to wait for ADC to settle
#define MA_mlpin__mlp__timeout__a 0x050a
#define MA_mlpin__mlp__timeout__len 8
#define MA_mlpin__mlp__timeout__mask 0xff
#define MA_mlpin__mlp__timeout__shift 0x00
#define MA_mlpin__mlp__timeout__reset 0x80
#define MA_mlpin__mlp__timeout__inputonly 0
//------------------------------------------------------------------------------mlpin__mlp__iset---
// Number of enabled current sources in the last messurement
#define MA_mlpin__mlp__iset__a 0x050b
#define MA_mlpin__mlp__iset__len 6
#define MA_mlpin__mlp__iset__mask 0x3f
#define MA_mlpin__mlp__iset__shift 0x00
#define MA_mlpin__mlp__iset__reset 0x00
#define MA_mlpin__mlp__iset__inputonly 0
//------------------------------------------------------------------------------mlpin__mlp__sar_disable---
// Test mode where SAR is disabled and the current sources are enabled directly from the iset register
#define MA_mlpin__mlp__sar_disable__a 0x0509
#define MA_mlpin__mlp__sar_disable__len 1
#define MA_mlpin__mlp__sar_disable__mask 0x10
#define MA_mlpin__mlp__sar_disable__shift 0x04
#define MA_mlpin__mlp__sar_disable__reset 0x00
#define MA_mlpin__mlp__sar_disable__inputonly 0
//------------------------------------------------------------------------------acfg__avdd__osc_3m_ctrim---
// 3MHz RC oscillator coarse trim
#define MA_acfg__avdd__osc_3m_ctrim__a 0x0608
#define MA_acfg__avdd__osc_3m_ctrim__len 6
#define MA_acfg__avdd__osc_3m_ctrim__mask 0x3f
#define MA_acfg__avdd__osc_3m_ctrim__shift 0x00
#define MA_acfg__avdd__osc_3m_ctrim__reset 0x00
#define MA_acfg__avdd__osc_3m_ctrim__inputonly 0
//------------------------------------------------------------------------------acfg__avdd__osc_3m_ftrim---
// 3MHz RC oscillator fine trim
#define MA_acfg__avdd__osc_3m_ftrim__a 0x0609
#define MA_acfg__avdd__osc_3m_ftrim__len 6
#define MA_acfg__avdd__osc_3m_ftrim__mask 0x3f
#define MA_acfg__avdd__osc_3m_ftrim__shift 0x00
#define MA_acfg__avdd__osc_3m_ftrim__reset 0x00
#define MA_acfg__avdd__osc_3m_ftrim__inputonly 0
//------------------------------------------------------------------------------acfg__avdd__test_mode---
// Unused/spare (see atest_mode in nb_trim segment)
#define MA_acfg__avdd__test_mode__a 0x0608
#define MA_acfg__avdd__test_mode__len 1
#define MA_acfg__avdd__test_mode__mask 0x40
#define MA_acfg__avdd__test_mode__shift 0x06
#define MA_acfg__avdd__test_mode__reset 0x00
#define MA_acfg__avdd__test_mode__inputonly 0
//------------------------------------------------------------------------------acfg__avdd__spare_bits_2---
// 
#define MA_acfg__avdd__spare_bits_2__a 0x0608
#define MA_acfg__avdd__spare_bits_2__len 1
#define MA_acfg__avdd__spare_bits_2__mask 0x80
#define MA_acfg__avdd__spare_bits_2__shift 0x07
#define MA_acfg__avdd__spare_bits_2__reset 0x00
#define MA_acfg__avdd__spare_bits_2__inputonly 0
//------------------------------------------------------------------------------acfg__avdd__dvbe_seq_cfg---
// Width of dVbe sampling pulse in 64 KHz cycles; 0: 5 (default), 1: 1, 2: 3, 3: 7
#define MA_acfg__avdd__dvbe_seq_cfg__a 0x0609
#define MA_acfg__avdd__dvbe_seq_cfg__len 2
#define MA_acfg__avdd__dvbe_seq_cfg__mask 0xc0
#define MA_acfg__avdd__dvbe_seq_cfg__shift 0x06
#define MA_acfg__avdd__dvbe_seq_cfg__reset 0x00
#define MA_acfg__avdd__dvbe_seq_cfg__inputonly 0
//------------------------------------------------------------------------------acfg__avdd__rxtrim---
// Bandgap reference V-to-I converter resistor trim (try 152)
#define MA_acfg__avdd__rxtrim__a 0x060a
#define MA_acfg__avdd__rxtrim__len 8
#define MA_acfg__avdd__rxtrim__mask 0xff
#define MA_acfg__avdd__rxtrim__shift 0x00
#define MA_acfg__avdd__rxtrim__reset 0x00
#define MA_acfg__avdd__rxtrim__inputonly 0
//------------------------------------------------------------------------------acfg__avdd__amux_ch0---
// Amux ch0
#define MA_acfg__avdd__amux_ch0__a 0x060b
#define MA_acfg__avdd__amux_ch0__len 4
#define MA_acfg__avdd__amux_ch0__mask 0x0f
#define MA_acfg__avdd__amux_ch0__shift 0x00
#define MA_acfg__avdd__amux_ch0__reset 0x00
#define MA_acfg__avdd__amux_ch0__inputonly 0
//------------------------------------------------------------------------------acfg__avdd__hw_id---
// Hardware id
#define MA_acfg__avdd__hw_id__a 0x060c
#define MA_acfg__avdd__hw_id__len 8
#define MA_acfg__avdd__hw_id__mask 0xff
#define MA_acfg__avdd__hw_id__shift 0x00
#define MA_acfg__avdd__hw_id__reset 0x15
#define MA_acfg__avdd__hw_id__inputonly 1
//------------------------------------------------------------------------------acfg__avdd__amux_ch1---
// Amux ch1
#define MA_acfg__avdd__amux_ch1__a 0x060b
#define MA_acfg__avdd__amux_ch1__len 4
#define MA_acfg__avdd__amux_ch1__mask 0xf0
#define MA_acfg__avdd__amux_ch1__shift 0x04
#define MA_acfg__avdd__amux_ch1__reset 0x00
#define MA_acfg__avdd__amux_ch1__inputonly 0
//------------------------------------------------------------------------------acfg__nb_trim__ldo_vtrim---
// Set ldo vtrim XXX range from to mapping
#define MA_acfg__nb_trim__ldo_vtrim__a 0x0610
#define MA_acfg__nb_trim__ldo_vtrim__len 6
#define MA_acfg__nb_trim__ldo_vtrim__mask 0x3f
#define MA_acfg__nb_trim__ldo_vtrim__shift 0x00
#define MA_acfg__nb_trim__ldo_vtrim__reset 0x00
#define MA_acfg__nb_trim__ldo_vtrim__inputonly 0
//------------------------------------------------------------------------------acfg__nb_trim__ldo_vset---
// Set the supply voltage for digital core; 100: 1.3V, 101: 1.0V, 110: 1.1V, 111: 1.2V, 000: 1.3V, 001: 1.35V, 010: 1.4V, 011: 1.3V
#define MA_acfg__nb_trim__ldo_vset__a 0x0611
#define MA_acfg__nb_trim__ldo_vset__len 3
#define MA_acfg__nb_trim__ldo_vset__mask 0xe0
#define MA_acfg__nb_trim__ldo_vset__shift 0x05
#define MA_acfg__nb_trim__ldo_vset__reset 0x00
#define MA_acfg__nb_trim__ldo_vset__inputonly 0
//------------------------------------------------------------------------------acfg__nb_trim__dvdd_trim---
// Dvdd 1.5V V-to-I converter resistor trim
#define MA_acfg__nb_trim__dvdd_trim__a 0x0611
#define MA_acfg__nb_trim__dvdd_trim__len 5
#define MA_acfg__nb_trim__dvdd_trim__mask 0x1f
#define MA_acfg__nb_trim__dvdd_trim__shift 0x00
#define MA_acfg__nb_trim__dvdd_trim__reset 0x00
#define MA_acfg__nb_trim__dvdd_trim__inputonly 0
//------------------------------------------------------------------------------acfg__nb_trim__spare_1---
// Spare
#define MA_acfg__nb_trim__spare_1__a 0x0610
#define MA_acfg__nb_trim__spare_1__len 2
#define MA_acfg__nb_trim__spare_1__mask 0xc0
#define MA_acfg__nb_trim__spare_1__shift 0x06
#define MA_acfg__nb_trim__spare_1__reset 0x00
#define MA_acfg__nb_trim__spare_1__inputonly 0
//------------------------------------------------------------------------------acfg__nb_trim__avdd_trim---
// Avdd 1.5V V-to-I converter resistor trim
#define MA_acfg__nb_trim__avdd_trim__a 0x0612
#define MA_acfg__nb_trim__avdd_trim__len 5
#define MA_acfg__nb_trim__avdd_trim__mask 0x1f
#define MA_acfg__nb_trim__avdd_trim__shift 0x00
#define MA_acfg__nb_trim__avdd_trim__reset 0x00
#define MA_acfg__nb_trim__avdd_trim__inputonly 0
//------------------------------------------------------------------------------acfg__nb_trim__cgm_trim---
// Constant GM trim for dvdd and avdd regulators
#define MA_acfg__nb_trim__cgm_trim__a 0x0613
#define MA_acfg__nb_trim__cgm_trim__len 4
#define MA_acfg__nb_trim__cgm_trim__mask 0x0f
#define MA_acfg__nb_trim__cgm_trim__shift 0x00
#define MA_acfg__nb_trim__cgm_trim__reset 0x00
#define MA_acfg__nb_trim__cgm_trim__inputonly 0
//------------------------------------------------------------------------------acfg__nb_trim__avdd_1v5_ok_force---
// bit to override avdd_1v5_ok and force it "high"<br>
#define MA_acfg__nb_trim__avdd_1v5_ok_force__a 0x0613
#define MA_acfg__nb_trim__avdd_1v5_ok_force__len 1
#define MA_acfg__nb_trim__avdd_1v5_ok_force__mask 0x10
#define MA_acfg__nb_trim__avdd_1v5_ok_force__shift 0x04
#define MA_acfg__nb_trim__avdd_1v5_ok_force__reset 0x00
#define MA_acfg__nb_trim__avdd_1v5_ok_force__inputonly 0
//------------------------------------------------------------------------------acfg__nb_trim__dvdd_1v5_ok_force---
// bit to override dvdd_1v5_ok and force it "high"
#define MA_acfg__nb_trim__dvdd_1v5_ok_force__a 0x0613
#define MA_acfg__nb_trim__dvdd_1v5_ok_force__len 1
#define MA_acfg__nb_trim__dvdd_1v5_ok_force__mask 0x20
#define MA_acfg__nb_trim__dvdd_1v5_ok_force__shift 0x05
#define MA_acfg__nb_trim__dvdd_1v5_ok_force__reset 0x00
#define MA_acfg__nb_trim__dvdd_1v5_ok_force__inputonly 0
//------------------------------------------------------------------------------acfg__nb_trim__dig_supply_ok_force---
// bit to override dig_supply_ok and force it "high"
#define MA_acfg__nb_trim__dig_supply_ok_force__a 0x0613
#define MA_acfg__nb_trim__dig_supply_ok_force__len 1
#define MA_acfg__nb_trim__dig_supply_ok_force__mask 0x40
#define MA_acfg__nb_trim__dig_supply_ok_force__shift 0x06
#define MA_acfg__nb_trim__dig_supply_ok_force__reset 0x00
#define MA_acfg__nb_trim__dig_supply_ok_force__inputonly 0
//------------------------------------------------------------------------------acfg__nb_trim__lv_supply_ok_force---
// bit to override lv_supply_ok and force it "high"
#define MA_acfg__nb_trim__lv_supply_ok_force__a 0x0613
#define MA_acfg__nb_trim__lv_supply_ok_force__len 1
#define MA_acfg__nb_trim__lv_supply_ok_force__mask 0x80
#define MA_acfg__nb_trim__lv_supply_ok_force__shift 0x07
#define MA_acfg__nb_trim__lv_supply_ok_force__reset 0x00
#define MA_acfg__nb_trim__lv_supply_ok_force__inputonly 0
//------------------------------------------------------------------------------acfg__nb_trim__atest_mode---
// Override power-on-reset circuit and force all regulators on
#define MA_acfg__nb_trim__atest_mode__a 0x0612
#define MA_acfg__nb_trim__atest_mode__len 1
#define MA_acfg__nb_trim__atest_mode__mask 0x20
#define MA_acfg__nb_trim__atest_mode__shift 0x05
#define MA_acfg__nb_trim__atest_mode__reset 0x00
#define MA_acfg__nb_trim__atest_mode__inputonly 0
//------------------------------------------------------------------------------acfg__nb_trim__por_avdd_5v0_crude_force---
// Force enable crude analog 5.0V regulator
#define MA_acfg__nb_trim__por_avdd_5v0_crude_force__a 0x0612
#define MA_acfg__nb_trim__por_avdd_5v0_crude_force__len 1
#define MA_acfg__nb_trim__por_avdd_5v0_crude_force__mask 0x40
#define MA_acfg__nb_trim__por_avdd_5v0_crude_force__shift 0x06
#define MA_acfg__nb_trim__por_avdd_5v0_crude_force__reset 0x00
#define MA_acfg__nb_trim__por_avdd_5v0_crude_force__inputonly 0
//------------------------------------------------------------------------------acfg__nb_trim__por_1v2_ok_force---
// 
#define MA_acfg__nb_trim__por_1v2_ok_force__a 0x0612
#define MA_acfg__nb_trim__por_1v2_ok_force__len 1
#define MA_acfg__nb_trim__por_1v2_ok_force__mask 0x80
#define MA_acfg__nb_trim__por_1v2_ok_force__shift 0x07
#define MA_acfg__nb_trim__por_1v2_ok_force__reset 0x00
#define MA_acfg__nb_trim__por_1v2_ok_force__inputonly 0
//------------------------------------------------------------------------------acfg__nb_amux__sel_ch0_gdref---
// sel_ch0_gd_psu_ref
#define MA_acfg__nb_amux__sel_ch0_gdref__a 0x0618
#define MA_acfg__nb_amux__sel_ch0_gdref__len 4
#define MA_acfg__nb_amux__sel_ch0_gdref__mask 0x0f
#define MA_acfg__nb_amux__sel_ch0_gdref__shift 0x00
#define MA_acfg__nb_amux__sel_ch0_gdref__reset 0x00
#define MA_acfg__nb_amux__sel_ch0_gdref__inputonly 0
//------------------------------------------------------------------------------acfg__nb_amux__sel_ch1_gdref---
// sel_ch1_gd_psu_ref
#define MA_acfg__nb_amux__sel_ch1_gdref__a 0x0618
#define MA_acfg__nb_amux__sel_ch1_gdref__len 4
#define MA_acfg__nb_amux__sel_ch1_gdref__mask 0xf0
#define MA_acfg__nb_amux__sel_ch1_gdref__shift 0x04
#define MA_acfg__nb_amux__sel_ch1_gdref__reset 0x00
#define MA_acfg__nb_amux__sel_ch1_gdref__inputonly 0
//------------------------------------------------------------------------------acfg__nb_amux__sel_ch0_reg---
// sel_ch0_regulators
#define MA_acfg__nb_amux__sel_ch0_reg__a 0x0619
#define MA_acfg__nb_amux__sel_ch0_reg__len 4
#define MA_acfg__nb_amux__sel_ch0_reg__mask 0x0f
#define MA_acfg__nb_amux__sel_ch0_reg__shift 0x00
#define MA_acfg__nb_amux__sel_ch0_reg__reset 0x00
#define MA_acfg__nb_amux__sel_ch0_reg__inputonly 0
//------------------------------------------------------------------------------acfg__nb_amux__sel_ch1_reg---
// sel_ch1_regulators
#define MA_acfg__nb_amux__sel_ch1_reg__a 0x0619
#define MA_acfg__nb_amux__sel_ch1_reg__len 4
#define MA_acfg__nb_amux__sel_ch1_reg__mask 0xf0
#define MA_acfg__nb_amux__sel_ch1_reg__shift 0x04
#define MA_acfg__nb_amux__sel_ch1_reg__reset 0x00
#define MA_acfg__nb_amux__sel_ch1_reg__inputonly 0
//------------------------------------------------------------------------------acfg__nb_amux__gd_vtrim---
// gd_vtrim
#define MA_acfg__nb_amux__gd_vtrim__a 0x061b
#define MA_acfg__nb_amux__gd_vtrim__len 4
#define MA_acfg__nb_amux__gd_vtrim__mask 0x0f
#define MA_acfg__nb_amux__gd_vtrim__shift 0x00
#define MA_acfg__nb_amux__gd_vtrim__reset 0x00
#define MA_acfg__nb_amux__gd_vtrim__inputonly 0
//------------------------------------------------------------------------------acfg__nb_amux__gd_vtrim_low---
// gd_vtrim_low XXX fill in
#define MA_acfg__nb_amux__gd_vtrim_low__a 0x061b
#define MA_acfg__nb_amux__gd_vtrim_low__len 1
#define MA_acfg__nb_amux__gd_vtrim_low__mask 0x10
#define MA_acfg__nb_amux__gd_vtrim_low__shift 0x04
#define MA_acfg__nb_amux__gd_vtrim_low__reset 0x00
#define MA_acfg__nb_amux__gd_vtrim_low__inputonly 0
//------------------------------------------------------------------------------acfg__nb_amux__enable_dvdd_5v0---
// Enable monitoring of dvdd_5v0 (divided by 5) on debug bus.
#define MA_acfg__nb_amux__enable_dvdd_5v0__a 0x061a
#define MA_acfg__nb_amux__enable_dvdd_5v0__len 1
#define MA_acfg__nb_amux__enable_dvdd_5v0__mask 0x01
#define MA_acfg__nb_amux__enable_dvdd_5v0__shift 0x00
#define MA_acfg__nb_amux__enable_dvdd_5v0__reset 0x00
#define MA_acfg__nb_amux__enable_dvdd_5v0__inputonly 0
//------------------------------------------------------------------------------acfg__nb_amux__dvdd_5v0_vset---
// Dvdd 5.0V regulator set-point; 00: nominal, 01: high, 10: lowest, 11: low
#define MA_acfg__nb_amux__dvdd_5v0_vset__a 0x061a
#define MA_acfg__nb_amux__dvdd_5v0_vset__len 2
#define MA_acfg__nb_amux__dvdd_5v0_vset__mask 0x06
#define MA_acfg__nb_amux__dvdd_5v0_vset__shift 0x01
#define MA_acfg__nb_amux__dvdd_5v0_vset__reset 0x00
#define MA_acfg__nb_amux__dvdd_5v0_vset__inputonly 0
//------------------------------------------------------------------------------acfg__nb_amux__avdd_5v0_vset---
// Avdd 5.0V regulator set-point; 00: nominal, 01: high, 10: lowest, 11: low
#define MA_acfg__nb_amux__avdd_5v0_vset__a 0x061a
#define MA_acfg__nb_amux__avdd_5v0_vset__len 2
#define MA_acfg__nb_amux__avdd_5v0_vset__mask 0x30
#define MA_acfg__nb_amux__avdd_5v0_vset__shift 0x04
#define MA_acfg__nb_amux__avdd_5v0_vset__reset 0x00
#define MA_acfg__nb_amux__avdd_5v0_vset__inputonly 0
//------------------------------------------------------------------------------acfg__nb_amux__avdd_5v_force_dis---
// Force disable of analog 5V supply (avdd_5v0)
#define MA_acfg__nb_amux__avdd_5v_force_dis__a 0x061a
#define MA_acfg__nb_amux__avdd_5v_force_dis__len 1
#define MA_acfg__nb_amux__avdd_5v_force_dis__mask 0x08
#define MA_acfg__nb_amux__avdd_5v_force_dis__shift 0x03
#define MA_acfg__nb_amux__avdd_5v_force_dis__reset 0x00
#define MA_acfg__nb_amux__avdd_5v_force_dis__inputonly 0
//------------------------------------------------------------------------------acfg__nb_amux__spare_1---
// 
#define MA_acfg__nb_amux__spare_1__a 0x061a
#define MA_acfg__nb_amux__spare_1__len 2
#define MA_acfg__nb_amux__spare_1__mask 0xc0
#define MA_acfg__nb_amux__spare_1__shift 0x06
#define MA_acfg__nb_amux__spare_1__reset 0x00
#define MA_acfg__nb_amux__spare_1__inputonly 0
//------------------------------------------------------------------------------acfg__nb_amux__spare_2---
// 
#define MA_acfg__nb_amux__spare_2__a 0x061b
#define MA_acfg__nb_amux__spare_2__len 3
#define MA_acfg__nb_amux__spare_2__mask 0xe0
#define MA_acfg__nb_amux__spare_2__shift 0x05
#define MA_acfg__nb_amux__spare_2__reset 0x00
#define MA_acfg__nb_amux__spare_2__inputonly 0
//------------------------------------------------------------------------------acfg__afir0__biasfilt_fsel---
// test
#define MA_acfg__afir0__biasfilt_fsel__a 0x0641
#define MA_acfg__afir0__biasfilt_fsel__len 2
#define MA_acfg__afir0__biasfilt_fsel__mask 0x60
#define MA_acfg__afir0__biasfilt_fsel__shift 0x05
#define MA_acfg__afir0__biasfilt_fsel__reset 0x00
#define MA_acfg__afir0__biasfilt_fsel__inputonly 0
//------------------------------------------------------------------------------acfg__afir0__dout_en---
// Enable feedback from FIR delay line to digital core<br>
#define MA_acfg__afir0__dout_en__a 0x0641
#define MA_acfg__afir0__dout_en__len 1
#define MA_acfg__afir0__dout_en__mask 0x80
#define MA_acfg__afir0__dout_en__shift 0x07
#define MA_acfg__afir0__dout_en__reset 0x00
#define MA_acfg__afir0__dout_en__inputonly 0
//------------------------------------------------------------------------------acfg__afir0__vdsat_trim---
// vdsat trim
#define MA_acfg__afir0__vdsat_trim__a 0x0641
#define MA_acfg__afir0__vdsat_trim__len 4
#define MA_acfg__afir0__vdsat_trim__mask 0x1e
#define MA_acfg__afir0__vdsat_trim__shift 0x01
#define MA_acfg__afir0__vdsat_trim__reset 0x00
#define MA_acfg__afir0__vdsat_trim__inputonly 0
//------------------------------------------------------------------------------acfg__afir0__icmctrl_trim_en---
// icmctrl_trim_en
#define MA_acfg__afir0__icmctrl_trim_en__a 0x0641
#define MA_acfg__afir0__icmctrl_trim_en__len 1
#define MA_acfg__afir0__icmctrl_trim_en__mask 0x01
#define MA_acfg__afir0__icmctrl_trim_en__shift 0x00
#define MA_acfg__afir0__icmctrl_trim_en__reset 0x00
#define MA_acfg__afir0__icmctrl_trim_en__inputonly 0
//------------------------------------------------------------------------------acfg__afir0__cmctrl_dis---
// Disable common-mode voltage controller
#define MA_acfg__afir0__cmctrl_dis__a 0x0640
#define MA_acfg__afir0__cmctrl_dis__len 1
#define MA_acfg__afir0__cmctrl_dis__mask 0x01
#define MA_acfg__afir0__cmctrl_dis__shift 0x00
#define MA_acfg__afir0__cmctrl_dis__reset 0x00
#define MA_acfg__afir0__cmctrl_dis__inputonly 0
//------------------------------------------------------------------------------acfg__afir0__afir_4v0_vset---
// 
#define MA_acfg__afir0__afir_4v0_vset__a 0x0640
#define MA_acfg__afir0__afir_4v0_vset__len 2
#define MA_acfg__afir0__afir_4v0_vset__mask 0x06
#define MA_acfg__afir0__afir_4v0_vset__shift 0x01
#define MA_acfg__afir0__afir_4v0_vset__reset 0x00
#define MA_acfg__afir0__afir_4v0_vset__inputonly 0
//------------------------------------------------------------------------------acfg__afir0__clk_skip_one---
// 
#define MA_acfg__afir0__clk_skip_one__a 0x0640
#define MA_acfg__afir0__clk_skip_one__len 1
#define MA_acfg__afir0__clk_skip_one__mask 0x08
#define MA_acfg__afir0__clk_skip_one__shift 0x03
#define MA_acfg__afir0__clk_skip_one__reset 0x00
#define MA_acfg__afir0__clk_skip_one__inputonly 0
//------------------------------------------------------------------------------acfg__afir0__dac_fsel_3m072---
// 
#define MA_acfg__afir0__dac_fsel_3m072__a 0x0640
#define MA_acfg__afir0__dac_fsel_3m072__len 1
#define MA_acfg__afir0__dac_fsel_3m072__mask 0x10
#define MA_acfg__afir0__dac_fsel_3m072__shift 0x04
#define MA_acfg__afir0__dac_fsel_3m072__reset 0x00
#define MA_acfg__afir0__dac_fsel_3m072__inputonly 0
//------------------------------------------------------------------------------acfg__afir0__dmy_idle_mod_en---
// 
#define MA_acfg__afir0__dmy_idle_mod_en__a 0x0640
#define MA_acfg__afir0__dmy_idle_mod_en__len 1
#define MA_acfg__afir0__dmy_idle_mod_en__mask 0x20
#define MA_acfg__afir0__dmy_idle_mod_en__shift 0x05
#define MA_acfg__afir0__dmy_idle_mod_en__reset 0x00
#define MA_acfg__afir0__dmy_idle_mod_en__inputonly 0
//------------------------------------------------------------------------------acfg__afir0__bgfilt_fset---
// 
#define MA_acfg__afir0__bgfilt_fset__a 0x0640
#define MA_acfg__afir0__bgfilt_fset__len 2
#define MA_acfg__afir0__bgfilt_fset__mask 0xc0
#define MA_acfg__afir0__bgfilt_fset__shift 0x06
#define MA_acfg__afir0__bgfilt_fset__reset 0x00
#define MA_acfg__afir0__bgfilt_fset__inputonly 0
//------------------------------------------------------------------------------acfg__lf0l__aaf_fsel---
// 
#define MA_acfg__lf0l__aaf_fsel__a 0x064b
#define MA_acfg__lf0l__aaf_fsel__len 2
#define MA_acfg__lf0l__aaf_fsel__mask 0xc0
#define MA_acfg__lf0l__aaf_fsel__shift 0x06
#define MA_acfg__lf0l__aaf_fsel__reset 0x00
#define MA_acfg__lf0l__aaf_fsel__inputonly 0
//------------------------------------------------------------------------------acfg__lf0l__afir_rref_trim---
// AFIR-DAC output current scale fine-trim
#define MA_acfg__lf0l__afir_rref_trim__a 0x064b
#define MA_acfg__lf0l__afir_rref_trim__len 6
#define MA_acfg__lf0l__afir_rref_trim__mask 0x3f
#define MA_acfg__lf0l__afir_rref_trim__shift 0x00
#define MA_acfg__lf0l__afir_rref_trim__reset 0x00
#define MA_acfg__lf0l__afir_rref_trim__inputonly 0
//------------------------------------------------------------------------------acfg__lf0l__chop_en---
// chop_en XXX fill in
#define MA_acfg__lf0l__chop_en__a 0x064a
#define MA_acfg__lf0l__chop_en__len 1
#define MA_acfg__lf0l__chop_en__mask 0x40
#define MA_acfg__lf0l__chop_en__shift 0x06
#define MA_acfg__lf0l__chop_en__reset 0x00
#define MA_acfg__lf0l__chop_en__inputonly 0
//------------------------------------------------------------------------------acfg__lf0l__chop_dis_state---
// chop_dis_state XXX fill in
#define MA_acfg__lf0l__chop_dis_state__a 0x064a
#define MA_acfg__lf0l__chop_dis_state__len 1
#define MA_acfg__lf0l__chop_dis_state__mask 0x20
#define MA_acfg__lf0l__chop_dis_state__shift 0x05
#define MA_acfg__lf0l__chop_dis_state__reset 0x00
#define MA_acfg__lf0l__chop_dis_state__inputonly 0
//------------------------------------------------------------------------------acfg__lf0l__spare_2_4---
// 
#define MA_acfg__lf0l__spare_2_4__a 0x064a
#define MA_acfg__lf0l__spare_2_4__len 1
#define MA_acfg__lf0l__spare_2_4__mask 0x10
#define MA_acfg__lf0l__spare_2_4__shift 0x04
#define MA_acfg__lf0l__spare_2_4__reset 0x00
#define MA_acfg__lf0l__spare_2_4__inputonly 0
//------------------------------------------------------------------------------acfg__lf0l__rtrim---
// rtrim XXX fill in
#define MA_acfg__lf0l__rtrim__a 0x064a
#define MA_acfg__lf0l__rtrim__len 4
#define MA_acfg__lf0l__rtrim__mask 0x0f
#define MA_acfg__lf0l__rtrim__shift 0x00
#define MA_acfg__lf0l__rtrim__reset 0x00
#define MA_acfg__lf0l__rtrim__inputonly 0
//------------------------------------------------------------------------------acfg__lf0l__cmr_ctrim_p---
// cmr_ctrim_p XXX fill in
#define MA_acfg__lf0l__cmr_ctrim_p__a 0x0649
#define MA_acfg__lf0l__cmr_ctrim_p__len 4
#define MA_acfg__lf0l__cmr_ctrim_p__mask 0xf0
#define MA_acfg__lf0l__cmr_ctrim_p__shift 0x04
#define MA_acfg__lf0l__cmr_ctrim_p__reset 0x00
#define MA_acfg__lf0l__cmr_ctrim_p__inputonly 0
//------------------------------------------------------------------------------acfg__lf0l__cmr_ctrim_n---
// cmr_ctrim_n XXX fill in
#define MA_acfg__lf0l__cmr_ctrim_n__a 0x0649
#define MA_acfg__lf0l__cmr_ctrim_n__len 4
#define MA_acfg__lf0l__cmr_ctrim_n__mask 0x0f
#define MA_acfg__lf0l__cmr_ctrim_n__shift 0x00
#define MA_acfg__lf0l__cmr_ctrim_n__reset 0x00
#define MA_acfg__lf0l__cmr_ctrim_n__inputonly 0
//------------------------------------------------------------------------------acfg__lf0l__cmr_rtrim_p---
// cmr_rtrim_p XXX fill in
#define MA_acfg__lf0l__cmr_rtrim_p__a 0x0648
#define MA_acfg__lf0l__cmr_rtrim_p__len 4
#define MA_acfg__lf0l__cmr_rtrim_p__mask 0xf0
#define MA_acfg__lf0l__cmr_rtrim_p__shift 0x04
#define MA_acfg__lf0l__cmr_rtrim_p__reset 0x00
#define MA_acfg__lf0l__cmr_rtrim_p__inputonly 0
//------------------------------------------------------------------------------acfg__lf0l__cmr_rtrim_n---
// cmr_rtrim_n XXX fill in
#define MA_acfg__lf0l__cmr_rtrim_n__a 0x0648
#define MA_acfg__lf0l__cmr_rtrim_n__len 4
#define MA_acfg__lf0l__cmr_rtrim_n__mask 0x0f
#define MA_acfg__lf0l__cmr_rtrim_n__shift 0x00
#define MA_acfg__lf0l__cmr_rtrim_n__reset 0x00
#define MA_acfg__lf0l__cmr_rtrim_n__inputonly 0
//------------------------------------------------------------------------------acfg__lf0l__sel_vcm_0p5vdd---
// 
#define MA_acfg__lf0l__sel_vcm_0p5vdd__a 0x064a
#define MA_acfg__lf0l__sel_vcm_0p5vdd__len 1
#define MA_acfg__lf0l__sel_vcm_0p5vdd__mask 0x80
#define MA_acfg__lf0l__sel_vcm_0p5vdd__shift 0x07
#define MA_acfg__lf0l__sel_vcm_0p5vdd__reset 0x00
#define MA_acfg__lf0l__sel_vcm_0p5vdd__inputonly 0
//------------------------------------------------------------------------------acfg__lf0h__ch0_mux---
// select debug ch0 amux
#define MA_acfg__lf0h__ch0_mux__a 0x0651
#define MA_acfg__lf0h__ch0_mux__len 4
#define MA_acfg__lf0h__ch0_mux__mask 0x0f
#define MA_acfg__lf0h__ch0_mux__shift 0x00
#define MA_acfg__lf0h__ch0_mux__reset 0x00
#define MA_acfg__lf0h__ch0_mux__inputonly 0
//------------------------------------------------------------------------------acfg__lf0h__spare_1---
// spare_1
#define MA_acfg__lf0h__spare_1__a 0x0650
#define MA_acfg__lf0h__spare_1__len 2
#define MA_acfg__lf0h__spare_1__mask 0xc0
#define MA_acfg__lf0h__spare_1__shift 0x06
#define MA_acfg__lf0h__spare_1__reset 0x00
#define MA_acfg__lf0h__spare_1__inputonly 0
//------------------------------------------------------------------------------acfg__lf0h__gain_fwd---
// loopfilter gain_fwd
#define MA_acfg__lf0h__gain_fwd__a 0x0650
#define MA_acfg__lf0h__gain_fwd__len 3
#define MA_acfg__lf0h__gain_fwd__mask 0x07
#define MA_acfg__lf0h__gain_fwd__shift 0x00
#define MA_acfg__lf0h__gain_fwd__reset 0x00
#define MA_acfg__lf0h__gain_fwd__inputonly 0
//------------------------------------------------------------------------------acfg__lf0h__ch1_mux---
// select debug ch1 amux
#define MA_acfg__lf0h__ch1_mux__a 0x0651
#define MA_acfg__lf0h__ch1_mux__len 4
#define MA_acfg__lf0h__ch1_mux__mask 0xf0
#define MA_acfg__lf0h__ch1_mux__shift 0x04
#define MA_acfg__lf0h__ch1_mux__reset 0x00
#define MA_acfg__lf0h__ch1_mux__inputonly 0
//------------------------------------------------------------------------------acfg__lf0h__int3_c_scale---
// integrator3 c scale
#define MA_acfg__lf0h__int3_c_scale__a 0x0650
#define MA_acfg__lf0h__int3_c_scale__len 3
#define MA_acfg__lf0h__int3_c_scale__mask 0x38
#define MA_acfg__lf0h__int3_c_scale__shift 0x03
#define MA_acfg__lf0h__int3_c_scale__reset 0x00
#define MA_acfg__lf0h__int3_c_scale__inputonly 0
//------------------------------------------------------------------------------acfg__lf0h__avdd_4v5_vset---
// 
#define MA_acfg__lf0h__avdd_4v5_vset__a 0x0652
#define MA_acfg__lf0h__avdd_4v5_vset__len 2
#define MA_acfg__lf0h__avdd_4v5_vset__mask 0x03
#define MA_acfg__lf0h__avdd_4v5_vset__shift 0x00
#define MA_acfg__lf0h__avdd_4v5_vset__reset 0x00
#define MA_acfg__lf0h__avdd_4v5_vset__inputonly 0
//------------------------------------------------------------------------------acfg__lf0h__spare_2_7_2---
// 
#define MA_acfg__lf0h__spare_2_7_2__a 0x0652
#define MA_acfg__lf0h__spare_2_7_2__len 6
#define MA_acfg__lf0h__spare_2_7_2__mask 0xfc
#define MA_acfg__lf0h__spare_2_7_2__shift 0x02
#define MA_acfg__lf0h__spare_2_7_2__reset 0x00
#define MA_acfg__lf0h__spare_2_7_2__inputonly 0
//------------------------------------------------------------------------------acfg__lf0h__spare_3---
// 
#define MA_acfg__lf0h__spare_3__a 0x0653
#define MA_acfg__lf0h__spare_3__len 8
#define MA_acfg__lf0h__spare_3__mask 0xff
#define MA_acfg__lf0h__spare_3__shift 0x00
#define MA_acfg__lf0h__spare_3__reset 0x00
#define MA_acfg__lf0h__spare_3__inputonly 0
//------------------------------------------------------------------------------acfg__pwm0__sel_ch1_amux0---
// select debug ch1 amux XXX fill in coding
#define MA_acfg__pwm0__sel_ch1_amux0__a 0x0659
#define MA_acfg__pwm0__sel_ch1_amux0__len 4
#define MA_acfg__pwm0__sel_ch1_amux0__mask 0xf0
#define MA_acfg__pwm0__sel_ch1_amux0__shift 0x04
#define MA_acfg__pwm0__sel_ch1_amux0__reset 0x00
#define MA_acfg__pwm0__sel_ch1_amux0__inputonly 0
//------------------------------------------------------------------------------acfg__pwm0__sel_ch0_amux0---
// select debug ch0 amux XXX fill in coding
#define MA_acfg__pwm0__sel_ch0_amux0__a 0x0659
#define MA_acfg__pwm0__sel_ch0_amux0__len 4
#define MA_acfg__pwm0__sel_ch0_amux0__mask 0x0f
#define MA_acfg__pwm0__sel_ch0_amux0__shift 0x00
#define MA_acfg__pwm0__sel_ch0_amux0__reset 0x00
#define MA_acfg__pwm0__sel_ch0_amux0__inputonly 0
//------------------------------------------------------------------------------acfg__pwm0__ipol_pos_b---
// ipol_pos_b XXX fill in
#define MA_acfg__pwm0__ipol_pos_b__a 0x065d
#define MA_acfg__pwm0__ipol_pos_b__len 1
#define MA_acfg__pwm0__ipol_pos_b__mask 0x80
#define MA_acfg__pwm0__ipol_pos_b__shift 0x07
#define MA_acfg__pwm0__ipol_pos_b__reset 0x00
#define MA_acfg__pwm0__ipol_pos_b__inputonly 1
//------------------------------------------------------------------------------acfg__pwm0__ipol_neither_b---
// ipol_neither_b XXX fill in
#define MA_acfg__pwm0__ipol_neither_b__a 0x065d
#define MA_acfg__pwm0__ipol_neither_b__len 1
#define MA_acfg__pwm0__ipol_neither_b__mask 0x40
#define MA_acfg__pwm0__ipol_neither_b__shift 0x06
#define MA_acfg__pwm0__ipol_neither_b__reset 0x00
#define MA_acfg__pwm0__ipol_neither_b__inputonly 1
//------------------------------------------------------------------------------acfg__pwm0__ipol_neg_b---
// ipol_neg_b XXX fill in
#define MA_acfg__pwm0__ipol_neg_b__a 0x065d
#define MA_acfg__pwm0__ipol_neg_b__len 1
#define MA_acfg__pwm0__ipol_neg_b__mask 0x20
#define MA_acfg__pwm0__ipol_neg_b__shift 0x05
#define MA_acfg__pwm0__ipol_neg_b__reset 0x00
#define MA_acfg__pwm0__ipol_neg_b__inputonly 1
//------------------------------------------------------------------------------acfg__pwm0__clk_vcf_upd_b---
// clk_vcf_upd_b XXX fill in
#define MA_acfg__pwm0__clk_vcf_upd_b__a 0x065d
#define MA_acfg__pwm0__clk_vcf_upd_b__len 1
#define MA_acfg__pwm0__clk_vcf_upd_b__mask 0x10
#define MA_acfg__pwm0__clk_vcf_upd_b__shift 0x04
#define MA_acfg__pwm0__clk_vcf_upd_b__reset 0x00
#define MA_acfg__pwm0__clk_vcf_upd_b__inputonly 1
//------------------------------------------------------------------------------acfg__pwm0__ipol_pos_a---
// ipol_pos_a XXX fill in
#define MA_acfg__pwm0__ipol_pos_a__a 0x065d
#define MA_acfg__pwm0__ipol_pos_a__len 1
#define MA_acfg__pwm0__ipol_pos_a__mask 0x08
#define MA_acfg__pwm0__ipol_pos_a__shift 0x03
#define MA_acfg__pwm0__ipol_pos_a__reset 0x00
#define MA_acfg__pwm0__ipol_pos_a__inputonly 1
//------------------------------------------------------------------------------acfg__pwm0__ipol_neither_a---
// ipol_neither_a XXX fill in
#define MA_acfg__pwm0__ipol_neither_a__a 0x065d
#define MA_acfg__pwm0__ipol_neither_a__len 1
#define MA_acfg__pwm0__ipol_neither_a__mask 0x04
#define MA_acfg__pwm0__ipol_neither_a__shift 0x02
#define MA_acfg__pwm0__ipol_neither_a__reset 0x00
#define MA_acfg__pwm0__ipol_neither_a__inputonly 1
//------------------------------------------------------------------------------acfg__pwm0__ipol_neg_a---
// ipol_neg_a XXX fill in
#define MA_acfg__pwm0__ipol_neg_a__a 0x065d
#define MA_acfg__pwm0__ipol_neg_a__len 1
#define MA_acfg__pwm0__ipol_neg_a__mask 0x02
#define MA_acfg__pwm0__ipol_neg_a__shift 0x01
#define MA_acfg__pwm0__ipol_neg_a__reset 0x00
#define MA_acfg__pwm0__ipol_neg_a__inputonly 1
//------------------------------------------------------------------------------acfg__pwm0__clk_vcf_upd_a---
// clk_vcf_upd_a XXX fill in
#define MA_acfg__pwm0__clk_vcf_upd_a__a 0x065d
#define MA_acfg__pwm0__clk_vcf_upd_a__len 1
#define MA_acfg__pwm0__clk_vcf_upd_a__mask 0x01
#define MA_acfg__pwm0__clk_vcf_upd_a__shift 0x00
#define MA_acfg__pwm0__clk_vcf_upd_a__reset 0x00
#define MA_acfg__pwm0__clk_vcf_upd_a__inputonly 1
//------------------------------------------------------------------------------acfg__pwm0__pwm_vc_ctrim---
// PWM triangle gen cap trim
#define MA_acfg__pwm0__pwm_vc_ctrim__a 0x0658
#define MA_acfg__pwm0__pwm_vc_ctrim__len 5
#define MA_acfg__pwm0__pwm_vc_ctrim__mask 0x1f
#define MA_acfg__pwm0__pwm_vc_ctrim__shift 0x00
#define MA_acfg__pwm0__pwm_vc_ctrim__reset 0x00
#define MA_acfg__pwm0__pwm_vc_ctrim__inputonly 0
//------------------------------------------------------------------------------acfg__pwm0__pwm_comp_bias_setz---
// 
#define MA_acfg__pwm0__pwm_comp_bias_setz__a 0x0658
#define MA_acfg__pwm0__pwm_comp_bias_setz__len 2
#define MA_acfg__pwm0__pwm_comp_bias_setz__mask 0x60
#define MA_acfg__pwm0__pwm_comp_bias_setz__shift 0x05
#define MA_acfg__pwm0__pwm_comp_bias_setz__reset 0x00
#define MA_acfg__pwm0__pwm_comp_bias_setz__inputonly 0
//------------------------------------------------------------------------------acfg__pwm0__pwm_comp_pfb_en---
// 
#define MA_acfg__pwm0__pwm_comp_pfb_en__a 0x0658
#define MA_acfg__pwm0__pwm_comp_pfb_en__len 1
#define MA_acfg__pwm0__pwm_comp_pfb_en__mask 0x80
#define MA_acfg__pwm0__pwm_comp_pfb_en__shift 0x07
#define MA_acfg__pwm0__pwm_comp_pfb_en__reset 0x00
#define MA_acfg__pwm0__pwm_comp_pfb_en__inputonly 0
//------------------------------------------------------------------------------acfg__pwm0__sel_ch1_amux1---
// select debug ch1 amux XXX fill in coding
#define MA_acfg__pwm0__sel_ch1_amux1__a 0x065b
#define MA_acfg__pwm0__sel_ch1_amux1__len 4
#define MA_acfg__pwm0__sel_ch1_amux1__mask 0xf0
#define MA_acfg__pwm0__sel_ch1_amux1__shift 0x04
#define MA_acfg__pwm0__sel_ch1_amux1__reset 0x00
#define MA_acfg__pwm0__sel_ch1_amux1__inputonly 0
//------------------------------------------------------------------------------acfg__pwm0__sel_ch0_amux1---
// select debug ch0 amux XXX fill in coding
#define MA_acfg__pwm0__sel_ch0_amux1__a 0x065b
#define MA_acfg__pwm0__sel_ch0_amux1__len 4
#define MA_acfg__pwm0__sel_ch0_amux1__mask 0x0f
#define MA_acfg__pwm0__sel_ch0_amux1__shift 0x00
#define MA_acfg__pwm0__sel_ch0_amux1__reset 0x00
#define MA_acfg__pwm0__sel_ch0_amux1__inputonly 0
//------------------------------------------------------------------------------acfg__pwm0__bal_disable_acfg---
// 
#define MA_acfg__pwm0__bal_disable_acfg__a 0x065a
#define MA_acfg__pwm0__bal_disable_acfg__len 1
#define MA_acfg__pwm0__bal_disable_acfg__mask 0x01
#define MA_acfg__pwm0__bal_disable_acfg__shift 0x00
#define MA_acfg__pwm0__bal_disable_acfg__reset 0x00
#define MA_acfg__pwm0__bal_disable_acfg__inputonly 0
//------------------------------------------------------------------------------acfg__pwm0__bal_lpf---
// 
#define MA_acfg__pwm0__bal_lpf__a 0x065a
#define MA_acfg__pwm0__bal_lpf__len 2
#define MA_acfg__pwm0__bal_lpf__mask 0x06
#define MA_acfg__pwm0__bal_lpf__shift 0x01
#define MA_acfg__pwm0__bal_lpf__reset 0x00
#define MA_acfg__pwm0__bal_lpf__inputonly 0
//------------------------------------------------------------------------------acfg__pwm0__pb_test_d50---
// 
#define MA_acfg__pwm0__pb_test_d50__a 0x065a
#define MA_acfg__pwm0__pb_test_d50__len 1
#define MA_acfg__pwm0__pb_test_d50__mask 0x08
#define MA_acfg__pwm0__pb_test_d50__shift 0x03
#define MA_acfg__pwm0__pb_test_d50__reset 0x00
#define MA_acfg__pwm0__pb_test_d50__inputonly 0
//------------------------------------------------------------------------------acfg__pwm0__pwm_comp_gfr_bal_dis---
// 
#define MA_acfg__pwm0__pwm_comp_gfr_bal_dis__a 0x065a
#define MA_acfg__pwm0__pwm_comp_gfr_bal_dis__len 1
#define MA_acfg__pwm0__pwm_comp_gfr_bal_dis__mask 0x10
#define MA_acfg__pwm0__pwm_comp_gfr_bal_dis__shift 0x04
#define MA_acfg__pwm0__pwm_comp_gfr_bal_dis__reset 0x00
#define MA_acfg__pwm0__pwm_comp_gfr_bal_dis__inputonly 0
//------------------------------------------------------------------------------acfg__pwm0__pwm_comp_gfr_comp_dis---
// 
#define MA_acfg__pwm0__pwm_comp_gfr_comp_dis__a 0x065a
#define MA_acfg__pwm0__pwm_comp_gfr_comp_dis__len 1
#define MA_acfg__pwm0__pwm_comp_gfr_comp_dis__mask 0x20
#define MA_acfg__pwm0__pwm_comp_gfr_comp_dis__shift 0x05
#define MA_acfg__pwm0__pwm_comp_gfr_comp_dis__reset 0x00
#define MA_acfg__pwm0__pwm_comp_gfr_comp_dis__inputonly 0
//------------------------------------------------------------------------------acfg__pwm0__pwm_dcorr_dis---
// 
#define MA_acfg__pwm0__pwm_dcorr_dis__a 0x065a
#define MA_acfg__pwm0__pwm_dcorr_dis__len 1
#define MA_acfg__pwm0__pwm_dcorr_dis__mask 0x40
#define MA_acfg__pwm0__pwm_dcorr_dis__shift 0x06
#define MA_acfg__pwm0__pwm_dcorr_dis__reset 0x00
#define MA_acfg__pwm0__pwm_dcorr_dis__inputonly 0
//------------------------------------------------------------------------------acfg__pwm0__pwm_dcorr_no_dis_on_clip---
// 
#define MA_acfg__pwm0__pwm_dcorr_no_dis_on_clip__a 0x065a
#define MA_acfg__pwm0__pwm_dcorr_no_dis_on_clip__len 1
#define MA_acfg__pwm0__pwm_dcorr_no_dis_on_clip__mask 0x80
#define MA_acfg__pwm0__pwm_dcorr_no_dis_on_clip__shift 0x07
#define MA_acfg__pwm0__pwm_dcorr_no_dis_on_clip__reset 0x00
#define MA_acfg__pwm0__pwm_dcorr_no_dis_on_clip__inputonly 0
//------------------------------------------------------------------------------acfg__lf1l__aaf_fsel---
// 
#define MA_acfg__lf1l__aaf_fsel__a 0x066b
#define MA_acfg__lf1l__aaf_fsel__len 2
#define MA_acfg__lf1l__aaf_fsel__mask 0xc0
#define MA_acfg__lf1l__aaf_fsel__shift 0x06
#define MA_acfg__lf1l__aaf_fsel__reset 0x00
#define MA_acfg__lf1l__aaf_fsel__inputonly 0
//------------------------------------------------------------------------------acfg__lf1l__afir_rref_trim---
// AFIR-DAC output current scale fine-trim
#define MA_acfg__lf1l__afir_rref_trim__a 0x066b
#define MA_acfg__lf1l__afir_rref_trim__len 6
#define MA_acfg__lf1l__afir_rref_trim__mask 0x3f
#define MA_acfg__lf1l__afir_rref_trim__shift 0x00
#define MA_acfg__lf1l__afir_rref_trim__reset 0x00
#define MA_acfg__lf1l__afir_rref_trim__inputonly 0
//------------------------------------------------------------------------------acfg__lf1l__sel_vcm_0p5vdd---
// 
#define MA_acfg__lf1l__sel_vcm_0p5vdd__a 0x066a
#define MA_acfg__lf1l__sel_vcm_0p5vdd__len 1
#define MA_acfg__lf1l__sel_vcm_0p5vdd__mask 0x80
#define MA_acfg__lf1l__sel_vcm_0p5vdd__shift 0x07
#define MA_acfg__lf1l__sel_vcm_0p5vdd__reset 0x00
#define MA_acfg__lf1l__sel_vcm_0p5vdd__inputonly 0
//------------------------------------------------------------------------------acfg__lf1l__chop_en---
// chop_en XXX fill in
#define MA_acfg__lf1l__chop_en__a 0x066a
#define MA_acfg__lf1l__chop_en__len 1
#define MA_acfg__lf1l__chop_en__mask 0x40
#define MA_acfg__lf1l__chop_en__shift 0x06
#define MA_acfg__lf1l__chop_en__reset 0x00
#define MA_acfg__lf1l__chop_en__inputonly 0
//------------------------------------------------------------------------------acfg__lf1l__chop_dis_state---
// chop_dis_state XXX fill in
#define MA_acfg__lf1l__chop_dis_state__a 0x066a
#define MA_acfg__lf1l__chop_dis_state__len 1
#define MA_acfg__lf1l__chop_dis_state__mask 0x20
#define MA_acfg__lf1l__chop_dis_state__shift 0x05
#define MA_acfg__lf1l__chop_dis_state__reset 0x00
#define MA_acfg__lf1l__chop_dis_state__inputonly 0
//------------------------------------------------------------------------------acfg__lf1l__spare_2_4---
// 
#define MA_acfg__lf1l__spare_2_4__a 0x066a
#define MA_acfg__lf1l__spare_2_4__len 1
#define MA_acfg__lf1l__spare_2_4__mask 0x10
#define MA_acfg__lf1l__spare_2_4__shift 0x04
#define MA_acfg__lf1l__spare_2_4__reset 0x00
#define MA_acfg__lf1l__spare_2_4__inputonly 0
//------------------------------------------------------------------------------acfg__lf1l__rtrim---
// rtrim XXX fill in
#define MA_acfg__lf1l__rtrim__a 0x066a
#define MA_acfg__lf1l__rtrim__len 4
#define MA_acfg__lf1l__rtrim__mask 0x0f
#define MA_acfg__lf1l__rtrim__shift 0x00
#define MA_acfg__lf1l__rtrim__reset 0x00
#define MA_acfg__lf1l__rtrim__inputonly 0
//------------------------------------------------------------------------------acfg__lf1l__cmr_ctrim_p---
// cmr_ctrim_p XXX fill in
#define MA_acfg__lf1l__cmr_ctrim_p__a 0x0669
#define MA_acfg__lf1l__cmr_ctrim_p__len 4
#define MA_acfg__lf1l__cmr_ctrim_p__mask 0xf0
#define MA_acfg__lf1l__cmr_ctrim_p__shift 0x04
#define MA_acfg__lf1l__cmr_ctrim_p__reset 0x00
#define MA_acfg__lf1l__cmr_ctrim_p__inputonly 0
//------------------------------------------------------------------------------acfg__lf1l__cmr_ctrim_n---
// cmr_ctrim_n XXX fill in
#define MA_acfg__lf1l__cmr_ctrim_n__a 0x0669
#define MA_acfg__lf1l__cmr_ctrim_n__len 4
#define MA_acfg__lf1l__cmr_ctrim_n__mask 0x0f
#define MA_acfg__lf1l__cmr_ctrim_n__shift 0x00
#define MA_acfg__lf1l__cmr_ctrim_n__reset 0x00
#define MA_acfg__lf1l__cmr_ctrim_n__inputonly 0
//------------------------------------------------------------------------------acfg__lf1l__cmr_rtrim_p---
// cmr_rtrim_p XXX fill in
#define MA_acfg__lf1l__cmr_rtrim_p__a 0x0668
#define MA_acfg__lf1l__cmr_rtrim_p__len 4
#define MA_acfg__lf1l__cmr_rtrim_p__mask 0xf0
#define MA_acfg__lf1l__cmr_rtrim_p__shift 0x04
#define MA_acfg__lf1l__cmr_rtrim_p__reset 0x00
#define MA_acfg__lf1l__cmr_rtrim_p__inputonly 0
//------------------------------------------------------------------------------acfg__lf1l__cmr_rtrim_n---
// cmr_rtrim_n XXX fill in
#define MA_acfg__lf1l__cmr_rtrim_n__a 0x0668
#define MA_acfg__lf1l__cmr_rtrim_n__len 4
#define MA_acfg__lf1l__cmr_rtrim_n__mask 0x0f
#define MA_acfg__lf1l__cmr_rtrim_n__shift 0x00
#define MA_acfg__lf1l__cmr_rtrim_n__reset 0x00
#define MA_acfg__lf1l__cmr_rtrim_n__inputonly 0
//------------------------------------------------------------------------------acfg__lf1h__ch1_amux---
// select debug ch1 amux
#define MA_acfg__lf1h__ch1_amux__a 0x0671
#define MA_acfg__lf1h__ch1_amux__len 4
#define MA_acfg__lf1h__ch1_amux__mask 0xf0
#define MA_acfg__lf1h__ch1_amux__shift 0x04
#define MA_acfg__lf1h__ch1_amux__reset 0x00
#define MA_acfg__lf1h__ch1_amux__inputonly 0
//------------------------------------------------------------------------------acfg__lf1h__ch0_amux---
// select debug ch0 amux
#define MA_acfg__lf1h__ch0_amux__a 0x0671
#define MA_acfg__lf1h__ch0_amux__len 4
#define MA_acfg__lf1h__ch0_amux__mask 0x0f
#define MA_acfg__lf1h__ch0_amux__shift 0x00
#define MA_acfg__lf1h__ch0_amux__reset 0x00
#define MA_acfg__lf1h__ch0_amux__inputonly 0
//------------------------------------------------------------------------------acfg__lf1h__spare_1---
// spare_1
#define MA_acfg__lf1h__spare_1__a 0x0670
#define MA_acfg__lf1h__spare_1__len 2
#define MA_acfg__lf1h__spare_1__mask 0xc0
#define MA_acfg__lf1h__spare_1__shift 0x06
#define MA_acfg__lf1h__spare_1__reset 0x00
#define MA_acfg__lf1h__spare_1__inputonly 0
//------------------------------------------------------------------------------acfg__lf1h__gain_fwd---
// loopfilter gain_fwd
#define MA_acfg__lf1h__gain_fwd__a 0x0670
#define MA_acfg__lf1h__gain_fwd__len 3
#define MA_acfg__lf1h__gain_fwd__mask 0x07
#define MA_acfg__lf1h__gain_fwd__shift 0x00
#define MA_acfg__lf1h__gain_fwd__reset 0x00
#define MA_acfg__lf1h__gain_fwd__inputonly 0
//------------------------------------------------------------------------------acfg__lf1h__int3_c_scale---
// Integrator3 c scale
#define MA_acfg__lf1h__int3_c_scale__a 0x0670
#define MA_acfg__lf1h__int3_c_scale__len 3
#define MA_acfg__lf1h__int3_c_scale__mask 0x38
#define MA_acfg__lf1h__int3_c_scale__shift 0x03
#define MA_acfg__lf1h__int3_c_scale__reset 0x00
#define MA_acfg__lf1h__int3_c_scale__inputonly 0
//------------------------------------------------------------------------------acfg__lf1h__avdd_4v5_vset---
// 
#define MA_acfg__lf1h__avdd_4v5_vset__a 0x0672
#define MA_acfg__lf1h__avdd_4v5_vset__len 2
#define MA_acfg__lf1h__avdd_4v5_vset__mask 0x03
#define MA_acfg__lf1h__avdd_4v5_vset__shift 0x00
#define MA_acfg__lf1h__avdd_4v5_vset__reset 0x00
#define MA_acfg__lf1h__avdd_4v5_vset__inputonly 0
//------------------------------------------------------------------------------acfg__lf1h__spare_2_7_2---
// 
#define MA_acfg__lf1h__spare_2_7_2__a 0x0672
#define MA_acfg__lf1h__spare_2_7_2__len 6
#define MA_acfg__lf1h__spare_2_7_2__mask 0xfc
#define MA_acfg__lf1h__spare_2_7_2__shift 0x02
#define MA_acfg__lf1h__spare_2_7_2__reset 0x00
#define MA_acfg__lf1h__spare_2_7_2__inputonly 0
//------------------------------------------------------------------------------acfg__lf1h__spare_3---
// 
#define MA_acfg__lf1h__spare_3__a 0x0673
#define MA_acfg__lf1h__spare_3__len 8
#define MA_acfg__lf1h__spare_3__mask 0xff
#define MA_acfg__lf1h__spare_3__shift 0x00
#define MA_acfg__lf1h__spare_3__reset 0x00
#define MA_acfg__lf1h__spare_3__inputonly 0
//------------------------------------------------------------------------------acfg__pwm1__ipol_pos_b---
// ipol_pos_b XXX fill in
#define MA_acfg__pwm1__ipol_pos_b__a 0x067d
#define MA_acfg__pwm1__ipol_pos_b__len 1
#define MA_acfg__pwm1__ipol_pos_b__mask 0x80
#define MA_acfg__pwm1__ipol_pos_b__shift 0x07
#define MA_acfg__pwm1__ipol_pos_b__reset 0x00
#define MA_acfg__pwm1__ipol_pos_b__inputonly 1
//------------------------------------------------------------------------------acfg__pwm1__ipol_neither_b---
// ipol_neither_b XXX fill in
#define MA_acfg__pwm1__ipol_neither_b__a 0x067d
#define MA_acfg__pwm1__ipol_neither_b__len 1
#define MA_acfg__pwm1__ipol_neither_b__mask 0x40
#define MA_acfg__pwm1__ipol_neither_b__shift 0x06
#define MA_acfg__pwm1__ipol_neither_b__reset 0x00
#define MA_acfg__pwm1__ipol_neither_b__inputonly 1
//------------------------------------------------------------------------------acfg__pwm1__ipol_neg_b---
// ipol_neg_b XXX fill in
#define MA_acfg__pwm1__ipol_neg_b__a 0x067d
#define MA_acfg__pwm1__ipol_neg_b__len 1
#define MA_acfg__pwm1__ipol_neg_b__mask 0x20
#define MA_acfg__pwm1__ipol_neg_b__shift 0x05
#define MA_acfg__pwm1__ipol_neg_b__reset 0x00
#define MA_acfg__pwm1__ipol_neg_b__inputonly 1
//------------------------------------------------------------------------------acfg__pwm1__clk_vcf_upd_b---
// clk_vcf_upd_b XXX fill in
#define MA_acfg__pwm1__clk_vcf_upd_b__a 0x067d
#define MA_acfg__pwm1__clk_vcf_upd_b__len 1
#define MA_acfg__pwm1__clk_vcf_upd_b__mask 0x10
#define MA_acfg__pwm1__clk_vcf_upd_b__shift 0x04
#define MA_acfg__pwm1__clk_vcf_upd_b__reset 0x00
#define MA_acfg__pwm1__clk_vcf_upd_b__inputonly 1
//------------------------------------------------------------------------------acfg__pwm1__ipol_pos_a---
// ipol_pos_a XXX fill in
#define MA_acfg__pwm1__ipol_pos_a__a 0x067d
#define MA_acfg__pwm1__ipol_pos_a__len 1
#define MA_acfg__pwm1__ipol_pos_a__mask 0x08
#define MA_acfg__pwm1__ipol_pos_a__shift 0x03
#define MA_acfg__pwm1__ipol_pos_a__reset 0x00
#define MA_acfg__pwm1__ipol_pos_a__inputonly 1
//------------------------------------------------------------------------------acfg__pwm1__ipol_neither_a---
// ipol_neither_a XXX fill in
#define MA_acfg__pwm1__ipol_neither_a__a 0x067d
#define MA_acfg__pwm1__ipol_neither_a__len 1
#define MA_acfg__pwm1__ipol_neither_a__mask 0x04
#define MA_acfg__pwm1__ipol_neither_a__shift 0x02
#define MA_acfg__pwm1__ipol_neither_a__reset 0x00
#define MA_acfg__pwm1__ipol_neither_a__inputonly 1
//------------------------------------------------------------------------------acfg__pwm1__ipol_neg_a---
// ipol_neg_a XXX fill in
#define MA_acfg__pwm1__ipol_neg_a__a 0x067d
#define MA_acfg__pwm1__ipol_neg_a__len 1
#define MA_acfg__pwm1__ipol_neg_a__mask 0x02
#define MA_acfg__pwm1__ipol_neg_a__shift 0x01
#define MA_acfg__pwm1__ipol_neg_a__reset 0x00
#define MA_acfg__pwm1__ipol_neg_a__inputonly 1
//------------------------------------------------------------------------------acfg__pwm1__clk_vcf_upd_a---
// clk_vcf_upd_a XXX fill in
#define MA_acfg__pwm1__clk_vcf_upd_a__a 0x067d
#define MA_acfg__pwm1__clk_vcf_upd_a__len 1
#define MA_acfg__pwm1__clk_vcf_upd_a__mask 0x01
#define MA_acfg__pwm1__clk_vcf_upd_a__shift 0x00
#define MA_acfg__pwm1__clk_vcf_upd_a__reset 0x00
#define MA_acfg__pwm1__clk_vcf_upd_a__inputonly 1
//------------------------------------------------------------------------------acfg__pwm1__pwm_vc_ctrim---
// PWM triangle gen cap trim
#define MA_acfg__pwm1__pwm_vc_ctrim__a 0x0678
#define MA_acfg__pwm1__pwm_vc_ctrim__len 5
#define MA_acfg__pwm1__pwm_vc_ctrim__mask 0x1f
#define MA_acfg__pwm1__pwm_vc_ctrim__shift 0x00
#define MA_acfg__pwm1__pwm_vc_ctrim__reset 0x00
#define MA_acfg__pwm1__pwm_vc_ctrim__inputonly 0
//------------------------------------------------------------------------------acfg__pwm1__pwm_comp_bias_setz---
// 
#define MA_acfg__pwm1__pwm_comp_bias_setz__a 0x0678
#define MA_acfg__pwm1__pwm_comp_bias_setz__len 2
#define MA_acfg__pwm1__pwm_comp_bias_setz__mask 0x60
#define MA_acfg__pwm1__pwm_comp_bias_setz__shift 0x05
#define MA_acfg__pwm1__pwm_comp_bias_setz__reset 0x00
#define MA_acfg__pwm1__pwm_comp_bias_setz__inputonly 0
//------------------------------------------------------------------------------acfg__pwm1__pwm_comp_pfb_en---
// 
#define MA_acfg__pwm1__pwm_comp_pfb_en__a 0x0678
#define MA_acfg__pwm1__pwm_comp_pfb_en__len 1
#define MA_acfg__pwm1__pwm_comp_pfb_en__mask 0x80
#define MA_acfg__pwm1__pwm_comp_pfb_en__shift 0x07
#define MA_acfg__pwm1__pwm_comp_pfb_en__reset 0x00
#define MA_acfg__pwm1__pwm_comp_pfb_en__inputonly 0
//------------------------------------------------------------------------------acfg__pwm1__bal_disable_acfg---
// 
#define MA_acfg__pwm1__bal_disable_acfg__a 0x067a
#define MA_acfg__pwm1__bal_disable_acfg__len 1
#define MA_acfg__pwm1__bal_disable_acfg__mask 0x01
#define MA_acfg__pwm1__bal_disable_acfg__shift 0x00
#define MA_acfg__pwm1__bal_disable_acfg__reset 0x00
#define MA_acfg__pwm1__bal_disable_acfg__inputonly 0
//------------------------------------------------------------------------------acfg__pwm1__bal_lpf---
// 
#define MA_acfg__pwm1__bal_lpf__a 0x067a
#define MA_acfg__pwm1__bal_lpf__len 2
#define MA_acfg__pwm1__bal_lpf__mask 0x06
#define MA_acfg__pwm1__bal_lpf__shift 0x01
#define MA_acfg__pwm1__bal_lpf__reset 0x00
#define MA_acfg__pwm1__bal_lpf__inputonly 0
//------------------------------------------------------------------------------acfg__pwm1__pb_test_d50---
// 
#define MA_acfg__pwm1__pb_test_d50__a 0x067a
#define MA_acfg__pwm1__pb_test_d50__len 1
#define MA_acfg__pwm1__pb_test_d50__mask 0x08
#define MA_acfg__pwm1__pb_test_d50__shift 0x03
#define MA_acfg__pwm1__pb_test_d50__reset 0x00
#define MA_acfg__pwm1__pb_test_d50__inputonly 0
//------------------------------------------------------------------------------acfg__pwm1__sel_ch0_amux1---
// select debug ch0 amux XXX fill in coding
#define MA_acfg__pwm1__sel_ch0_amux1__a 0x067b
#define MA_acfg__pwm1__sel_ch0_amux1__len 4
#define MA_acfg__pwm1__sel_ch0_amux1__mask 0x0f
#define MA_acfg__pwm1__sel_ch0_amux1__shift 0x00
#define MA_acfg__pwm1__sel_ch0_amux1__reset 0x00
#define MA_acfg__pwm1__sel_ch0_amux1__inputonly 0
//------------------------------------------------------------------------------acfg__pwm1__sel_ch0_amux0---
// select debug ch0 amux XXX fill in coding
#define MA_acfg__pwm1__sel_ch0_amux0__a 0x0679
#define MA_acfg__pwm1__sel_ch0_amux0__len 4
#define MA_acfg__pwm1__sel_ch0_amux0__mask 0x0f
#define MA_acfg__pwm1__sel_ch0_amux0__shift 0x00
#define MA_acfg__pwm1__sel_ch0_amux0__reset 0x00
#define MA_acfg__pwm1__sel_ch0_amux0__inputonly 0
//------------------------------------------------------------------------------acfg__pwm1__sel_ch1_amux0---
// select debug ch1 amux XXX fill in coding
#define MA_acfg__pwm1__sel_ch1_amux0__a 0x0679
#define MA_acfg__pwm1__sel_ch1_amux0__len 4
#define MA_acfg__pwm1__sel_ch1_amux0__mask 0xf0
#define MA_acfg__pwm1__sel_ch1_amux0__shift 0x04
#define MA_acfg__pwm1__sel_ch1_amux0__reset 0x00
#define MA_acfg__pwm1__sel_ch1_amux0__inputonly 0
//------------------------------------------------------------------------------acfg__pwm1__sel_ch1_amux1---
// select debug ch1 amux XXX fill in coding
#define MA_acfg__pwm1__sel_ch1_amux1__a 0x067b
#define MA_acfg__pwm1__sel_ch1_amux1__len 4
#define MA_acfg__pwm1__sel_ch1_amux1__mask 0xf0
#define MA_acfg__pwm1__sel_ch1_amux1__shift 0x04
#define MA_acfg__pwm1__sel_ch1_amux1__reset 0x00
#define MA_acfg__pwm1__sel_ch1_amux1__inputonly 0
//------------------------------------------------------------------------------acfg__pwm1__pwm_dcorr_dis---
// Force disable PWM Dcorrector
#define MA_acfg__pwm1__pwm_dcorr_dis__a 0x067a
#define MA_acfg__pwm1__pwm_dcorr_dis__len 1
#define MA_acfg__pwm1__pwm_dcorr_dis__mask 0x40
#define MA_acfg__pwm1__pwm_dcorr_dis__shift 0x06
#define MA_acfg__pwm1__pwm_dcorr_dis__reset 0x00
#define MA_acfg__pwm1__pwm_dcorr_dis__inputonly 0
//------------------------------------------------------------------------------acfg__pwm1__pwm_comp_gfr_bal_dis---
// 
#define MA_acfg__pwm1__pwm_comp_gfr_bal_dis__a 0x067a
#define MA_acfg__pwm1__pwm_comp_gfr_bal_dis__len 1
#define MA_acfg__pwm1__pwm_comp_gfr_bal_dis__mask 0x10
#define MA_acfg__pwm1__pwm_comp_gfr_bal_dis__shift 0x04
#define MA_acfg__pwm1__pwm_comp_gfr_bal_dis__reset 0x00
#define MA_acfg__pwm1__pwm_comp_gfr_bal_dis__inputonly 0
//------------------------------------------------------------------------------acfg__pwm1__pwm_comp_gfr_comp_dis---
// 
#define MA_acfg__pwm1__pwm_comp_gfr_comp_dis__a 0x067a
#define MA_acfg__pwm1__pwm_comp_gfr_comp_dis__len 1
#define MA_acfg__pwm1__pwm_comp_gfr_comp_dis__mask 0x20
#define MA_acfg__pwm1__pwm_comp_gfr_comp_dis__shift 0x05
#define MA_acfg__pwm1__pwm_comp_gfr_comp_dis__reset 0x00
#define MA_acfg__pwm1__pwm_comp_gfr_comp_dis__inputonly 0
//------------------------------------------------------------------------------acfg__pwm1__pwm_dcorr_no_dis_on_clip---
// 
#define MA_acfg__pwm1__pwm_dcorr_no_dis_on_clip__a 0x067a
#define MA_acfg__pwm1__pwm_dcorr_no_dis_on_clip__len 1
#define MA_acfg__pwm1__pwm_dcorr_no_dis_on_clip__mask 0x80
#define MA_acfg__pwm1__pwm_dcorr_no_dis_on_clip__shift 0x07
#define MA_acfg__pwm1__pwm_dcorr_no_dis_on_clip__reset 0x00
#define MA_acfg__pwm1__pwm_dcorr_no_dis_on_clip__inputonly 0
//------------------------------------------------------------------------------acfg__afir1__biasfilt_fsel---
// 
#define MA_acfg__afir1__biasfilt_fsel__a 0x0661
#define MA_acfg__afir1__biasfilt_fsel__len 2
#define MA_acfg__afir1__biasfilt_fsel__mask 0x60
#define MA_acfg__afir1__biasfilt_fsel__shift 0x05
#define MA_acfg__afir1__biasfilt_fsel__reset 0x00
#define MA_acfg__afir1__biasfilt_fsel__inputonly 0
//------------------------------------------------------------------------------acfg__afir1__icmctrl_trim_en---
// icmctrl_trim_en
#define MA_acfg__afir1__icmctrl_trim_en__a 0x0661
#define MA_acfg__afir1__icmctrl_trim_en__len 1
#define MA_acfg__afir1__icmctrl_trim_en__mask 0x01
#define MA_acfg__afir1__icmctrl_trim_en__shift 0x00
#define MA_acfg__afir1__icmctrl_trim_en__reset 0x00
#define MA_acfg__afir1__icmctrl_trim_en__inputonly 0
//------------------------------------------------------------------------------acfg__afir1__vdsat_trim---
// vdsat_trim
#define MA_acfg__afir1__vdsat_trim__a 0x0661
#define MA_acfg__afir1__vdsat_trim__len 4
#define MA_acfg__afir1__vdsat_trim__mask 0x1e
#define MA_acfg__afir1__vdsat_trim__shift 0x01
#define MA_acfg__afir1__vdsat_trim__reset 0x00
#define MA_acfg__afir1__vdsat_trim__inputonly 0
//------------------------------------------------------------------------------acfg__afir1__dout_en---
// dout enable
#define MA_acfg__afir1__dout_en__a 0x0661
#define MA_acfg__afir1__dout_en__len 1
#define MA_acfg__afir1__dout_en__mask 0x80
#define MA_acfg__afir1__dout_en__shift 0x07
#define MA_acfg__afir1__dout_en__reset 0x00
#define MA_acfg__afir1__dout_en__inputonly 0
//------------------------------------------------------------------------------acfg__afir1__cmctrl_dis---
// Disable common-mode voltage controller
#define MA_acfg__afir1__cmctrl_dis__a 0x0660
#define MA_acfg__afir1__cmctrl_dis__len 1
#define MA_acfg__afir1__cmctrl_dis__mask 0x01
#define MA_acfg__afir1__cmctrl_dis__shift 0x00
#define MA_acfg__afir1__cmctrl_dis__reset 0x00
#define MA_acfg__afir1__cmctrl_dis__inputonly 0
//------------------------------------------------------------------------------acfg__afir1__afir_4v0_vset---
// 
#define MA_acfg__afir1__afir_4v0_vset__a 0x0660
#define MA_acfg__afir1__afir_4v0_vset__len 2
#define MA_acfg__afir1__afir_4v0_vset__mask 0x06
#define MA_acfg__afir1__afir_4v0_vset__shift 0x01
#define MA_acfg__afir1__afir_4v0_vset__reset 0x00
#define MA_acfg__afir1__afir_4v0_vset__inputonly 0
//------------------------------------------------------------------------------acfg__afir1__clk_skip_one---
// 
#define MA_acfg__afir1__clk_skip_one__a 0x0660
#define MA_acfg__afir1__clk_skip_one__len 1
#define MA_acfg__afir1__clk_skip_one__mask 0x08
#define MA_acfg__afir1__clk_skip_one__shift 0x03
#define MA_acfg__afir1__clk_skip_one__reset 0x00
#define MA_acfg__afir1__clk_skip_one__inputonly 0
//------------------------------------------------------------------------------acfg__afir1__dac_fsel_3m072---
// 
#define MA_acfg__afir1__dac_fsel_3m072__a 0x0660
#define MA_acfg__afir1__dac_fsel_3m072__len 1
#define MA_acfg__afir1__dac_fsel_3m072__mask 0x10
#define MA_acfg__afir1__dac_fsel_3m072__shift 0x04
#define MA_acfg__afir1__dac_fsel_3m072__reset 0x00
#define MA_acfg__afir1__dac_fsel_3m072__inputonly 0
//------------------------------------------------------------------------------acfg__afir1__dmy_idle_mod_en---
// 
#define MA_acfg__afir1__dmy_idle_mod_en__a 0x0660
#define MA_acfg__afir1__dmy_idle_mod_en__len 1
#define MA_acfg__afir1__dmy_idle_mod_en__mask 0x20
#define MA_acfg__afir1__dmy_idle_mod_en__shift 0x05
#define MA_acfg__afir1__dmy_idle_mod_en__reset 0x00
#define MA_acfg__afir1__dmy_idle_mod_en__inputonly 0
//------------------------------------------------------------------------------acfg__afir1__bgfilt_fset---
// 
#define MA_acfg__afir1__bgfilt_fset__a 0x0660
#define MA_acfg__afir1__bgfilt_fset__len 2
#define MA_acfg__afir1__bgfilt_fset__mask 0xc0
#define MA_acfg__afir1__bgfilt_fset__shift 0x06
#define MA_acfg__afir1__bgfilt_fset__reset 0x00
#define MA_acfg__afir1__bgfilt_fset__inputonly 0
//------------------------------------------------------------------------------acfg__adc__bypass_ppong_buf_adc---
// Bypass buffering of bandgap voltage on ADC vref input
#define MA_acfg__adc__bypass_ppong_buf_adc__a 0x0620
#define MA_acfg__adc__bypass_ppong_buf_adc__len 1
#define MA_acfg__adc__bypass_ppong_buf_adc__mask 0x01
#define MA_acfg__adc__bypass_ppong_buf_adc__shift 0x00
#define MA_acfg__adc__bypass_ppong_buf_adc__reset 0x00
#define MA_acfg__adc__bypass_ppong_buf_adc__inputonly 0
//------------------------------------------------------------------------------acfg__adc__spare_0---
// 
#define MA_acfg__adc__spare_0__a 0x0620
#define MA_acfg__adc__spare_0__len 6
#define MA_acfg__adc__spare_0__mask 0xfc
#define MA_acfg__adc__spare_0__shift 0x02
#define MA_acfg__adc__spare_0__reset 0x00
#define MA_acfg__adc__spare_0__inputonly 0
//------------------------------------------------------------------------------acfg__adc__asense_amux_ch0---
// Analog debug mux select, see coding on ch1
#define MA_acfg__adc__asense_amux_ch0__a 0x0621
#define MA_acfg__adc__asense_amux_ch0__len 4
#define MA_acfg__adc__asense_amux_ch0__mask 0x0f
#define MA_acfg__adc__asense_amux_ch0__shift 0x00
#define MA_acfg__adc__asense_amux_ch0__reset 0x00
#define MA_acfg__adc__asense_amux_ch0__inputonly 0
//------------------------------------------------------------------------------acfg__adc__asense_amux_ch1---
// 0: Disabled, 1: Disconnected, 2: vbg_0v6, 3:bgr_dVbe, 4: adc_in_pin_int, 5: pvdd_div_in, 6-15: no connect
#define MA_acfg__adc__asense_amux_ch1__a 0x0621
#define MA_acfg__adc__asense_amux_ch1__len 4
#define MA_acfg__adc__asense_amux_ch1__mask 0xf0
#define MA_acfg__adc__asense_amux_ch1__shift 0x04
#define MA_acfg__adc__asense_amux_ch1__reset 0x00
#define MA_acfg__adc__asense_amux_ch1__inputonly 0
//------------------------------------------------------------------------------acfg__adc__bypass_ppong_buf_dVbe---
// Bypass buffer on sense frontend dVbe input
#define MA_acfg__adc__bypass_ppong_buf_dVbe__a 0x0620
#define MA_acfg__adc__bypass_ppong_buf_dVbe__len 1
#define MA_acfg__adc__bypass_ppong_buf_dVbe__mask 0x02
#define MA_acfg__adc__bypass_ppong_buf_dVbe__shift 0x01
#define MA_acfg__adc__bypass_ppong_buf_dVbe__reset 0x00
#define MA_acfg__adc__bypass_ppong_buf_dVbe__inputonly 0
//------------------------------------------------------------------------------acfg__sb_amux__sel_ch0---
// Analog debug mux select, see coding on ch1
#define MA_acfg__sb_amux__sel_ch0__a 0x0630
#define MA_acfg__sb_amux__sel_ch0__len 4
#define MA_acfg__sb_amux__sel_ch0__mask 0x0f
#define MA_acfg__sb_amux__sel_ch0__shift 0x00
#define MA_acfg__sb_amux__sel_ch0__reset 0x00
#define MA_acfg__sb_amux__sel_ch0__inputonly 0
//------------------------------------------------------------------------------acfg__sb_amux__sel_ch1---
// 0: Disabled, 1: Disconnected, 2: pvdd_div30_buf[1], 3: pvdd_div30_buf[0], 4-15: no connect
#define MA_acfg__sb_amux__sel_ch1__a 0x0630
#define MA_acfg__sb_amux__sel_ch1__len 4
#define MA_acfg__sb_amux__sel_ch1__mask 0xf0
#define MA_acfg__sb_amux__sel_ch1__shift 0x04
#define MA_acfg__sb_amux__sel_ch1__reset 0x00
#define MA_acfg__sb_amux__sel_ch1__inputonly 0
//------------------------------------------------------------------------------acfg__sb_amux__pwm_refgen_vc_reset_div2---
// Divide PWM refgen vc_reset and vcmr_reset signals by 2
#define MA_acfg__sb_amux__pwm_refgen_vc_reset_div2__a 0x0631
#define MA_acfg__sb_amux__pwm_refgen_vc_reset_div2__len 1
#define MA_acfg__sb_amux__pwm_refgen_vc_reset_div2__mask 0x01
#define MA_acfg__sb_amux__pwm_refgen_vc_reset_div2__shift 0x00
#define MA_acfg__sb_amux__pwm_refgen_vc_reset_div2__reset 0x00
#define MA_acfg__sb_amux__pwm_refgen_vc_reset_div2__inputonly 0
//------------------------------------------------------------------------------acfg__sb_amux__i2s_en_sck_mx_out---
// Loop i2s_sck back to i2s_sdo
#define MA_acfg__sb_amux__i2s_en_sck_mx_out__a 0x0631
#define MA_acfg__sb_amux__i2s_en_sck_mx_out__len 1
#define MA_acfg__sb_amux__i2s_en_sck_mx_out__mask 0x02
#define MA_acfg__sb_amux__i2s_en_sck_mx_out__shift 0x01
#define MA_acfg__sb_amux__i2s_en_sck_mx_out__reset 0x00
#define MA_acfg__sb_amux__i2s_en_sck_mx_out__inputonly 0
//------------------------------------------------------------------------------acfg__sb_amux__xpin_force_abuff_cfg_nerr---
// Unused
#define MA_acfg__sb_amux__xpin_force_abuff_cfg_nerr__a 0x0631
#define MA_acfg__sb_amux__xpin_force_abuff_cfg_nerr__len 1
#define MA_acfg__sb_amux__xpin_force_abuff_cfg_nerr__mask 0x04
#define MA_acfg__sb_amux__xpin_force_abuff_cfg_nerr__shift 0x02
#define MA_acfg__sb_amux__xpin_force_abuff_cfg_nerr__reset 0x00
#define MA_acfg__sb_amux__xpin_force_abuff_cfg_nerr__inputonly 0
//------------------------------------------------------------------------------acfg__sb_amux__xpin_force_abuff_cfg_nclip---
// Unused
#define MA_acfg__sb_amux__xpin_force_abuff_cfg_nclip__a 0x0631
#define MA_acfg__sb_amux__xpin_force_abuff_cfg_nclip__len 1
#define MA_acfg__sb_amux__xpin_force_abuff_cfg_nclip__mask 0x08
#define MA_acfg__sb_amux__xpin_force_abuff_cfg_nclip__shift 0x03
#define MA_acfg__sb_amux__xpin_force_abuff_cfg_nclip__reset 0x00
#define MA_acfg__sb_amux__xpin_force_abuff_cfg_nclip__inputonly 0
//------------------------------------------------------------------------------acfg__sb_amux__test_mode_pvdd_div45---
// Change pvdd divider to 45 instead of 30
#define MA_acfg__sb_amux__test_mode_pvdd_div45__a 0x0631
#define MA_acfg__sb_amux__test_mode_pvdd_div45__len 1
#define MA_acfg__sb_amux__test_mode_pvdd_div45__mask 0x10
#define MA_acfg__sb_amux__test_mode_pvdd_div45__shift 0x04
#define MA_acfg__sb_amux__test_mode_pvdd_div45__reset 0x00
#define MA_acfg__sb_amux__test_mode_pvdd_div45__inputonly 0
//------------------------------------------------------------------------------acfg__sb_amux__spare---
// 
#define MA_acfg__sb_amux__spare__a 0x0631
#define MA_acfg__sb_amux__spare__len 3
#define MA_acfg__sb_amux__spare__mask 0xe0
#define MA_acfg__sb_amux__spare__shift 0x05
#define MA_acfg__sb_amux__spare__reset 0x00
#define MA_acfg__sb_amux__spare__inputonly 0
//------------------------------------------------------------------------------acfg__avddl__vcf_trim---
// Flying capacitor UVP/OVP resistor trim
#define MA_acfg__avddl__vcf_trim__a 0x0601
#define MA_acfg__avddl__vcf_trim__len 4
#define MA_acfg__avddl__vcf_trim__mask 0x0f
#define MA_acfg__avddl__vcf_trim__shift 0x00
#define MA_acfg__avddl__vcf_trim__reset 0x00
#define MA_acfg__avddl__vcf_trim__inputonly 0
//------------------------------------------------------------------------------acfg__avddl__spare_bits2---
// 
#define MA_acfg__avddl__spare_bits2__a 0x0601
#define MA_acfg__avddl__spare_bits2__len 4
#define MA_acfg__avddl__spare_bits2__mask 0xf0
#define MA_acfg__avddl__spare_bits2__shift 0x04
#define MA_acfg__avddl__spare_bits2__reset 0x00
#define MA_acfg__avddl__spare_bits2__inputonly 0
//------------------------------------------------------------------------------acfg__avddl__cf_trim---
// Bandgap reference feedback capacitor trim
#define MA_acfg__avddl__cf_trim__a 0x0600
#define MA_acfg__avddl__cf_trim__len 4
#define MA_acfg__avddl__cf_trim__mask 0x0f
#define MA_acfg__avddl__cf_trim__shift 0x00
#define MA_acfg__avddl__cf_trim__reset 0x00
#define MA_acfg__avddl__cf_trim__inputonly 0
//------------------------------------------------------------------------------acfg__avddl__spare_bits3---
// 
#define MA_acfg__avddl__spare_bits3__a 0x0600
#define MA_acfg__avddl__spare_bits3__len 4
#define MA_acfg__avddl__spare_bits3__mask 0xf0
#define MA_acfg__avddl__spare_bits3__shift 0x04
#define MA_acfg__avddl__spare_bits3__reset 0x00
#define MA_acfg__avddl__spare_bits3__inputonly 0
//------------------------------------------------------------------------------dsp__pmem__addr0_0---
// Program memory address 0 least significant byte
#define MA_dsp__pmem__addr0_0__a 0x1000
#define MA_dsp__pmem__addr0_0__len 8
#define MA_dsp__pmem__addr0_0__mask 0xff
#define MA_dsp__pmem__addr0_0__shift 0x00
#define MA_dsp__pmem__addr0_0__reset 0x00
#define MA_dsp__pmem__addr0_0__inputonly 0
//------------------------------------------------------------------------------dsp__pmem__addr0_1---
// Program memory address 0 middle byte
#define MA_dsp__pmem__addr0_1__a 0x1001
#define MA_dsp__pmem__addr0_1__len 8
#define MA_dsp__pmem__addr0_1__mask 0xff
#define MA_dsp__pmem__addr0_1__shift 0x00
#define MA_dsp__pmem__addr0_1__reset 0x00
#define MA_dsp__pmem__addr0_1__inputonly 0
//------------------------------------------------------------------------------dsp__pmem__addr0_2---
// Program memory address 0 most signficant  byte (writing commits to hardblock memory)
#define MA_dsp__pmem__addr0_2__a 0x1002
#define MA_dsp__pmem__addr0_2__len 8
#define MA_dsp__pmem__addr0_2__mask 0xff
#define MA_dsp__pmem__addr0_2__shift 0x00
#define MA_dsp__pmem__addr0_2__reset 0x00
#define MA_dsp__pmem__addr0_2__inputonly 0
//------------------------------------------------------------------------------dsp__pmem__addr1_0---
// Program memory address 1 least significant byte
#define MA_dsp__pmem__addr1_0__a 0x1004
#define MA_dsp__pmem__addr1_0__len 8
#define MA_dsp__pmem__addr1_0__mask 0xff
#define MA_dsp__pmem__addr1_0__shift 0x00
#define MA_dsp__pmem__addr1_0__reset 0x00
#define MA_dsp__pmem__addr1_0__inputonly 0
//------------------------------------------------------------------------------dsp__pmem__addr1_1---
// Program memory address 1 middle byte
#define MA_dsp__pmem__addr1_1__a 0x1005
#define MA_dsp__pmem__addr1_1__len 8
#define MA_dsp__pmem__addr1_1__mask 0xff
#define MA_dsp__pmem__addr1_1__shift 0x00
#define MA_dsp__pmem__addr1_1__reset 0x00
#define MA_dsp__pmem__addr1_1__inputonly 0
//------------------------------------------------------------------------------dsp__pmem__addr1_2---
// Program memory address 1 most signficant  byte (writing commits to hardblock memory)
#define MA_dsp__pmem__addr1_2__a 0x1006
#define MA_dsp__pmem__addr1_2__len 8
#define MA_dsp__pmem__addr1_2__mask 0xff
#define MA_dsp__pmem__addr1_2__shift 0x00
#define MA_dsp__pmem__addr1_2__reset 0x00
#define MA_dsp__pmem__addr1_2__inputonly 0
//------------------------------------------------------------------------------otp__otpmem__byte_0---
// OTP memory byte
#define MA_otp__otpmem__byte_0__a 0x8000
#define MA_otp__otpmem__byte_0__len 8
#define MA_otp__otpmem__byte_0__mask 0xff
#define MA_otp__otpmem__byte_0__shift 0x00
#define MA_otp__otpmem__byte_0__reset 0xff
#define MA_otp__otpmem__byte_0__inputonly 0
//------------------------------------------------------------------------------otp__otpmem__byte_1---
// OTP memory byte
#define MA_otp__otpmem__byte_1__a 0x8001
#define MA_otp__otpmem__byte_1__len 8
#define MA_otp__otpmem__byte_1__mask 0xff
#define MA_otp__otpmem__byte_1__shift 0x00
#define MA_otp__otpmem__byte_1__reset 0xff
#define MA_otp__otpmem__byte_1__inputonly 0
//------------------------------------------------------------------------------otp__otpmem__byte_2---
// OTP memory byte
#define MA_otp__otpmem__byte_2__a 0x8002
#define MA_otp__otpmem__byte_2__len 8
#define MA_otp__otpmem__byte_2__mask 0xff
#define MA_otp__otpmem__byte_2__shift 0x00
#define MA_otp__otpmem__byte_2__reset 0xff
#define MA_otp__otpmem__byte_2__inputonly 0
//------------------------------------------------------------------------------otp__otpmem__byte_3---
// OTP memory byte
#define MA_otp__otpmem__byte_3__a 0x8003
#define MA_otp__otpmem__byte_3__len 8
#define MA_otp__otpmem__byte_3__mask 0xff
#define MA_otp__otpmem__byte_3__shift 0x00
#define MA_otp__otpmem__byte_3__reset 0xff
#define MA_otp__otpmem__byte_3__inputonly 0
//------------------------------------------------------------------------------otp__otptrack__device_id__3---
// Device ID [31:24]
#define MA_otp__otptrack__device_id__3__a 0x81f1
#define MA_otp__otptrack__device_id__3__len 8
#define MA_otp__otptrack__device_id__3__mask 0xff
#define MA_otp__otptrack__device_id__3__shift 0x00
#define MA_otp__otptrack__device_id__3__reset 0xff
#define MA_otp__otptrack__device_id__3__inputonly 0
//------------------------------------------------------------------------------otp__otptrack__device_id__2---
// Device ID [23:16]
#define MA_otp__otptrack__device_id__2__a 0x81f2
#define MA_otp__otptrack__device_id__2__len 8
#define MA_otp__otptrack__device_id__2__mask 0xff
#define MA_otp__otptrack__device_id__2__shift 0x00
#define MA_otp__otptrack__device_id__2__reset 0xff
#define MA_otp__otptrack__device_id__2__inputonly 0
//------------------------------------------------------------------------------otp__otptrack__ate_site---
// 0-23: Wafernumber, 25: Meruslab, 26: Salland preproduction, 27: ASE, 31:untested
#define MA_otp__otptrack__ate_site__a 0x81f5
#define MA_otp__otptrack__ate_site__len 2
#define MA_otp__otptrack__ate_site__mask 0xc0
#define MA_otp__otptrack__ate_site__shift 0x06
#define MA_otp__otptrack__ate_site__reset 0x03
#define MA_otp__otptrack__ate_site__inputonly 0
//------------------------------------------------------------------------------otp__otptrack__ate_version_minor---
// ATE program version, minor
#define MA_otp__otptrack__ate_version_minor__a 0x81f5
#define MA_otp__otptrack__ate_version_minor__len 6
#define MA_otp__otptrack__ate_version_minor__mask 0x3f
#define MA_otp__otptrack__ate_version_minor__shift 0x00
#define MA_otp__otptrack__ate_version_minor__reset 0x3f
#define MA_otp__otptrack__ate_version_minor__inputonly 0
//------------------------------------------------------------------------------otp__otptrack__device_id__1---
// Device ID [15:8]
#define MA_otp__otptrack__device_id__1__a 0x81f3
#define MA_otp__otptrack__device_id__1__len 8
#define MA_otp__otptrack__device_id__1__mask 0xff
#define MA_otp__otptrack__device_id__1__shift 0x00
#define MA_otp__otptrack__device_id__1__reset 0xff
#define MA_otp__otptrack__device_id__1__inputonly 0
//------------------------------------------------------------------------------otp__otptrack__device_id__0---
// Device ID [7:0]
#define MA_otp__otptrack__device_id__0__a 0x81f4
#define MA_otp__otptrack__device_id__0__len 8
#define MA_otp__otptrack__device_id__0__mask 0xff
#define MA_otp__otptrack__device_id__0__shift 0x00
#define MA_otp__otptrack__device_id__0__reset 0xff
#define MA_otp__otptrack__device_id__0__inputonly 0
//------------------------------------------------------------------------------otp__otptrack__test_result---
// Test result; msb:tested,bit2:afirbist,bit1:dspmembist,bit0:vdd_reg
#define MA_otp__otptrack__test_result__a 0x81f7
#define MA_otp__otptrack__test_result__len 8
#define MA_otp__otptrack__test_result__mask 0xff
#define MA_otp__otptrack__test_result__shift 0x00
#define MA_otp__otptrack__test_result__reset 0xff
#define MA_otp__otptrack__test_result__inputonly 0
//------------------------------------------------------------------------------otp__otptrack__ate_version_major---
// ATE program version, major
#define MA_otp__otptrack__ate_version_major__a 0x81f0
#define MA_otp__otptrack__ate_version_major__len 8
#define MA_otp__otptrack__ate_version_major__mask 0xff
#define MA_otp__otptrack__ate_version_major__shift 0x00
#define MA_otp__otptrack__ate_version_major__reset 0xff
#define MA_otp__otptrack__ate_version_major__inputonly 0
//------------------------------------------------------------------------------otp__otptrack__otp_version_minor---
// OTP layout version, minor
#define MA_otp__otptrack__otp_version_minor__a 0x81f6
#define MA_otp__otptrack__otp_version_minor__len 4
#define MA_otp__otptrack__otp_version_minor__mask 0x0f
#define MA_otp__otptrack__otp_version_minor__shift 0x00
#define MA_otp__otptrack__otp_version_minor__reset 0x0f
#define MA_otp__otptrack__otp_version_minor__inputonly 0
//------------------------------------------------------------------------------otp__otptrack__otp_version_major---
// OTP layout version, major
#define MA_otp__otptrack__otp_version_major__a 0x81f6
#define MA_otp__otptrack__otp_version_major__len 4
#define MA_otp__otptrack__otp_version_major__mask 0xf0
#define MA_otp__otptrack__otp_version_major__shift 0x04
#define MA_otp__otptrack__otp_version_major__reset 0x0f
#define MA_otp__otptrack__otp_version_major__inputonly 0
//------------------------------------------------------------------------------otp__otptrack__wafer_x_pos---
// Wafer position, X
#define MA_otp__otptrack__wafer_x_pos__a 0x81f8
#define MA_otp__otptrack__wafer_x_pos__len 8
#define MA_otp__otptrack__wafer_x_pos__mask 0xff
#define MA_otp__otptrack__wafer_x_pos__shift 0x00
#define MA_otp__otptrack__wafer_x_pos__reset 0xff
#define MA_otp__otptrack__wafer_x_pos__inputonly 0
//------------------------------------------------------------------------------otp__otptrack__wafer_y_pos---
// Wafer position, Y
#define MA_otp__otptrack__wafer_y_pos__a 0x81f9
#define MA_otp__otptrack__wafer_y_pos__len 8
#define MA_otp__otptrack__wafer_y_pos__mask 0xff
#define MA_otp__otptrack__wafer_y_pos__shift 0x00
#define MA_otp__otptrack__wafer_y_pos__reset 0xff
#define MA_otp__otptrack__wafer_y_pos__inputonly 0
/* db_version 2 entries*/
// Define reset value for core and mlpin segment 
#ifndef DISABLE_RESET_VALUES
int MA120_reset[0x600] = { 0x32,0x03,0x00,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x12,0x12,0x00,0x00, // 0x0000 to 0x000f 
                           0x10,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0010 to 0x001f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x0a,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0020 to 0x002f 
                           0x3f,0x53,0x07,0x37,0x90,0x07,0x37,0xd0,0x04,0x26,0xd0,0x07,0x7e,0x53,0x07,0x76, // 0x0030 to 0x003f 
                           0x98,0x07,0x75,0xd0,0x07,0x65,0xd0,0x07,0xfd,0x53,0x07,0xf5,0x98,0x07,0xf5,0xd0, // 0x0040 to 0x004f 
                           0x07,0x76,0x53,0x07,0x76,0x53,0x07,0x76,0x90,0x07,0x76,0xd0,0x07,0x65,0xd0,0x07, // 0x0050 to 0x005f 
                           0x16,0xd0,0x07,0x55,0xd0,0x07,0x55,0xd0,0x07,0x55,0xd0,0x07,0x00,0x21,0x70,0xbc, // 0x0060 to 0x006f 
                           0x0d,0x00,0x31,0x70,0xbc,0x0d,0x44,0x65,0x75,0xb4,0x08,0x44,0x75,0x75,0xac,0x08, // 0x0070 to 0x007f 
                           0x88,0xa9,0x76,0xbc,0x00,0x88,0x79,0x76,0xbc,0x00,0x23,0x01,0xff,0x77,0x13,0x00, // 0x0080 to 0x008f 
                           0x00,0x00,0x00,0x04,0x23,0x2d,0x37,0x45,0x46,0x11,0x40,0x40,0x20,0x40,0x40,0x00, // 0x0090 to 0x009f 
                           0x12,0x04,0x0a,0x0f,0x44,0x65,0x75,0x9a,0x00,0x44,0x65,0x75,0x9a,0x00,0x00,0x00, // 0x00a0 to 0x00af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00b0 to 0x00bf 
                           0x76,0x20,0x08,0x07,0xe5,0xaf,0xa5,0x05,0x03,0x40,0x08,0xac,0x08,0x28,0x05,0x10, // 0x00c0 to 0x00cf 
                           0x20,0x0a,0xd4,0x10,0x00,0x00,0x85,0x40,0x00,0x00,0x0a,0x00,0x00,0x00,0x00,0x40, // 0x00d0 to 0x00df 
                           0x00,0x00,0x40,0x00,0x00,0x00,0x01,0x00,0x00,0x10,0x02,0x00,0x20,0x00,0x00,0x10, // 0x00e0 to 0x00ef 
                           0x00,0x10,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00f0 to 0x00ff 
                           0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x0f,0x77,0x00,0x14,0x00, // 0x0100 to 0x010f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0110 to 0x011f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0120 to 0x012f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0130 to 0x013f 
                           0xb8,0x02,0x43,0x12,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00, // 0x0140 to 0x014f 
                           0x04,0x00,0x00,0x00,0x00,0x20,0x31,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0150 to 0x015f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0160 to 0x016f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0170 to 0x017f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0b,0x1f,0x00,0x10, // 0x0180 to 0x018f 
                           0x00,0x00,0x00,0x00,0x24,0x64,0x01,0x47,0xc2,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0190 to 0x019f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01a0 to 0x01af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01b0 to 0x01bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01c0 to 0x01cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01d0 to 0x01df 
                           0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0x07,0x11,0xff,0x4b, // 0x01e0 to 0x01ef 
                           0x42,0x06,0x00,0x00,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01f0 to 0x01ff 
                           0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0200 to 0x020f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0210 to 0x021f 
                           0x0f,0x10,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0220 to 0x022f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0230 to 0x023f 
                           0x00,0x03,0x00,0x0f,0x00,0x0e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0240 to 0x024f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0250 to 0x025f 
                           0x00,0x01,0x00,0x00,0x00,0x14,0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0260 to 0x026f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0270 to 0x027f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0280 to 0x028f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0290 to 0x029f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02a0 to 0x02af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02b0 to 0x02bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02c0 to 0x02cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02d0 to 0x02df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02e0 to 0x02ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02f0 to 0x02ff 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0300 to 0x030f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0310 to 0x031f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0320 to 0x032f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0330 to 0x033f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0340 to 0x034f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0350 to 0x035f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0360 to 0x036f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0370 to 0x037f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0380 to 0x038f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0390 to 0x039f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03a0 to 0x03af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03b0 to 0x03bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03c0 to 0x03cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03d0 to 0x03df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03e0 to 0x03ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03f0 to 0x03ff 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0400 to 0x040f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0410 to 0x041f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0420 to 0x042f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0430 to 0x043f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0440 to 0x044f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0450 to 0x045f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0460 to 0x046f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0470 to 0x047f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0480 to 0x048f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0490 to 0x049f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04a0 to 0x04af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04b0 to 0x04bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04c0 to 0x04cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04d0 to 0x04df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04e0 to 0x04ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04f0 to 0x04ff 
                           0x01,0x05,0x09,0x0e,0x12,0x16,0x1c,0x28,0x36,0x0d,0x80,0x00,0x00,0x00,0x00,0x00, // 0x0500 to 0x050f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0510 to 0x051f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0520 to 0x052f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0530 to 0x053f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0540 to 0x054f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0550 to 0x055f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0560 to 0x056f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0570 to 0x057f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0580 to 0x058f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0590 to 0x059f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x05a0 to 0x05af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x05b0 to 0x05bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x05c0 to 0x05cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x05d0 to 0x05df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x05e0 to 0x05ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 }; // 0x05f0 to 0x05ff 
int MA120_mapped[0x600] = { 0x7f,0x03,0x3f,0xff,0xff,0x1f,0xff,0xff,0xff,0xff,0x1f,0x1f,0x1f,0x1f,0xff,0xff, // 0x0000 to 0x000f 
                           0xff,0x01,0x1f,0x1f,0x1f,0x1f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f, // 0x0010 to 0x001f 
                           0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x0f,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0020 to 0x002f 
                           0xff,0xff,0x7f,0xff,0xff,0x7f,0xff,0xff,0x7f,0xff,0xff,0x7f,0xff,0xff,0x7f,0xff, // 0x0030 to 0x003f 
                           0xff,0x7f,0xff,0xff,0x7f,0xff,0xff,0x7f,0xff,0xff,0x7f,0xff,0xff,0x7f,0xff,0xff, // 0x0040 to 0x004f 
                           0x7f,0xff,0xff,0x7f,0xff,0xff,0x7f,0xff,0xff,0x7f,0xff,0xff,0x7f,0xff,0xff,0x7f, // 0x0050 to 0x005f 
                           0xff,0xff,0x7f,0xff,0xff,0x7f,0xff,0xff,0x7f,0xff,0xff,0x7f,0xff,0xff,0xff,0xff, // 0x0060 to 0x006f 
                           0x0f,0xff,0xff,0xff,0xff,0x0f,0xff,0xff,0xff,0xff,0x0f,0xff,0xff,0xff,0xff,0x0f, // 0x0070 to 0x007f 
                           0xff,0xff,0xff,0xff,0x0f,0xff,0xff,0xff,0xff,0x0f,0xff,0xff,0xff,0xff,0xff,0x1f, // 0x0080 to 0x008f 
                           0x1f,0x1f,0x1f,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff, // 0x0090 to 0x009f 
                           0x3f,0x1f,0x1f,0x7f,0xff,0xff,0xff,0xff,0x0f,0xff,0xff,0xff,0xff,0x0f,0xff,0x00, // 0x00a0 to 0x00af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x3f,0xff,0xff, // 0x00b0 to 0x00bf 
                           0xff,0xff,0x0f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff, // 0x00c0 to 0x00cf 
                           0xff,0xff,0xff,0xff,0xff,0x3f,0xff,0xff,0xff,0x3f,0xff,0xff,0xff,0x3f,0xff,0xff, // 0x00d0 to 0x00df 
                           0xff,0x3f,0xff,0xff,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f, // 0x00e0 to 0x00ef 
                           0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f, // 0x00f0 to 0x00ff 
                           0xff,0x3f,0xff,0x3f,0x03,0x1f,0x1f,0xff,0x7f,0x01,0x1f,0x1f,0xff,0x7f,0xff,0x0f, // 0x0100 to 0x010f 
                           0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x1f,0xff,0x7f,0x1f,0x1f,0xff,0x7f, // 0x0110 to 0x011f 
                           0x1f,0x1f,0xff,0x7f,0x1f,0x1f,0xff,0x7f,0x07,0xff,0xff,0xff,0xff,0xff,0xff,0x00, // 0x0120 to 0x012f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0130 to 0x013f 
                           0xff,0x07,0xff,0x7f,0xff,0x0f,0xff,0xff,0x0f,0xff,0xff,0x0f,0xff,0xff,0x0f,0xff, // 0x0140 to 0x014f 
                           0xff,0xff,0x7f,0x7f,0xff,0xff,0x3f,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,0xff,0x0f, // 0x0150 to 0x015f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0160 to 0x016f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0170 to 0x017f 
                           0x7f,0x3f,0xff,0x3f,0x1f,0xff,0x1f,0x1f,0x1f,0x7f,0x1f,0xff,0x3f,0x1f,0x1f,0x3f, // 0x0180 to 0x018f 
                           0x1f,0x07,0x1f,0x0f,0x3f,0x7f,0x0f,0x7f,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0190 to 0x019f 
                           0xff,0x01,0xff,0x07,0x0f,0x1f,0x3f,0xff,0x7f,0x0f,0x0f,0x3f,0xff,0x03,0xff,0xff, // 0x01a0 to 0x01af 
                           0xff,0xff,0x01,0x1f,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0x3f,0x3f,0x00,0x00,0x00, // 0x01b0 to 0x01bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01c0 to 0x01cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01d0 to 0x01df 
                           0x3f,0xff,0x1f,0xff,0x07,0x3f,0xff,0x3f,0xff,0x0f,0x3f,0xff,0x0f,0xff,0x03,0xff, // 0x01e0 to 0x01ef 
                           0xff,0x0f,0xff,0x03,0xff,0xff,0x0f,0xff,0x03,0xff,0xff,0x0f,0xff,0x03,0xff,0xff, // 0x01f0 to 0x01ff 
                           0xff,0x3f,0x3f,0xff,0xff,0xff,0xff,0x3f,0xff,0xff,0x0f,0xff,0x0f,0xff,0x0f,0xff, // 0x0200 to 0x020f 
                           0x0f,0xff,0x0f,0xff,0x0f,0xff,0x0f,0xff,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0210 to 0x021f 
                           0x1f,0xff,0xff,0xff,0xff,0x03,0xfc,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0x03, // 0x0220 to 0x022f 
                           0xff,0x03,0x1f,0x1f,0xff,0x03,0xff,0x03,0xff,0xf7,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0230 to 0x023f 
                           0x07,0x03,0x0f,0x0f,0x0f,0x0f,0x3f,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0240 to 0x024f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0250 to 0x025f 
                           0x01,0x03,0xfd,0x00,0x00,0xff,0xff,0xff,0x07,0xff,0x0f,0x07,0x0f,0x3f,0x3f,0x0f, // 0x0260 to 0x026f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0270 to 0x027f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0280 to 0x028f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0290 to 0x029f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02a0 to 0x02af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02b0 to 0x02bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02c0 to 0x02cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02d0 to 0x02df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02e0 to 0x02ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02f0 to 0x02ff 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0300 to 0x030f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0310 to 0x031f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0320 to 0x032f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0330 to 0x033f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0340 to 0x034f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0350 to 0x035f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0360 to 0x036f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0370 to 0x037f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0380 to 0x038f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0390 to 0x039f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03a0 to 0x03af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03b0 to 0x03bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03c0 to 0x03cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03d0 to 0x03df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03e0 to 0x03ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03f0 to 0x03ff 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0400 to 0x040f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0410 to 0x041f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0420 to 0x042f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0430 to 0x043f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0440 to 0x044f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0450 to 0x045f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0460 to 0x046f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0470 to 0x047f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0480 to 0x048f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0490 to 0x049f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04a0 to 0x04af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04b0 to 0x04bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04c0 to 0x04cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04d0 to 0x04df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04e0 to 0x04ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04f0 to 0x04ff 
                           0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x1f,0xff,0x3f,0x0f,0x0f,0x0f,0x0f, // 0x0500 to 0x050f 
                           0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0510 to 0x051f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0520 to 0x052f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0530 to 0x053f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0540 to 0x054f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0550 to 0x055f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0560 to 0x056f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0570 to 0x057f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0580 to 0x058f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0590 to 0x059f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x05a0 to 0x05af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x05b0 to 0x05bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x05c0 to 0x05cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x05d0 to 0x05df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x05e0 to 0x05ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 }; // 0x05f0 to 0x05ff 
int MA120_volatile[0x600] = { 0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0000 to 0x000f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0010 to 0x001f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0020 to 0x002f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0030 to 0x003f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0040 to 0x004f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0050 to 0x005f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0060 to 0x006f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0070 to 0x007f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0080 to 0x008f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0090 to 0x009f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00a0 to 0x00af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x01,0x01, // 0x00b0 to 0x00bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00c0 to 0x00cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00d0 to 0x00df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00e0 to 0x00ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00f0 to 0x00ff 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0100 to 0x010f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01, // 0x0110 to 0x011f 
                           0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x03,0x01,0x01,0x01,0x01,0x02,0x02,0x00, // 0x0120 to 0x012f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0130 to 0x013f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0140 to 0x014f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x01, // 0x0150 to 0x015f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0160 to 0x016f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0170 to 0x017f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0180 to 0x018f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0190 to 0x019f 
                           0x08,0x01,0x03,0x02,0x01,0x01,0x06,0x08,0x07,0x04,0x04,0x06,0x01,0x01,0x01,0x01, // 0x01a0 to 0x01af 
                           0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00, // 0x01b0 to 0x01bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01c0 to 0x01cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01d0 to 0x01df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01e0 to 0x01ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01f0 to 0x01ff 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01, // 0x0200 to 0x020f 
                           0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0210 to 0x021f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x01,0x01,0x01,0x01, // 0x0220 to 0x022f 
                           0x01,0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x04,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0230 to 0x023f 
                           0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0240 to 0x024f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0250 to 0x025f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // 0x0260 to 0x026f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0270 to 0x027f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0280 to 0x028f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0290 to 0x029f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02a0 to 0x02af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02b0 to 0x02bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02c0 to 0x02cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02d0 to 0x02df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02e0 to 0x02ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x02f0 to 0x02ff 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0300 to 0x030f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0310 to 0x031f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0320 to 0x032f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0330 to 0x033f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0340 to 0x034f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0350 to 0x035f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0360 to 0x036f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0370 to 0x037f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0380 to 0x038f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0390 to 0x039f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03a0 to 0x03af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03b0 to 0x03bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03c0 to 0x03cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03d0 to 0x03df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03e0 to 0x03ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x03f0 to 0x03ff 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0400 to 0x040f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0410 to 0x041f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0420 to 0x042f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0430 to 0x043f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0440 to 0x044f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0450 to 0x045f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0460 to 0x046f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0470 to 0x047f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0480 to 0x048f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0490 to 0x049f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04a0 to 0x04af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04b0 to 0x04bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04c0 to 0x04cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04d0 to 0x04df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04e0 to 0x04ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x04f0 to 0x04ff 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01, // 0x0500 to 0x050f 
                           0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0510 to 0x051f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0520 to 0x052f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0530 to 0x053f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0540 to 0x054f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0550 to 0x055f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0560 to 0x056f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0570 to 0x057f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0580 to 0x058f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0590 to 0x059f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x05a0 to 0x05af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x05b0 to 0x05bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x05c0 to 0x05cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x05d0 to 0x05df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x05e0 to 0x05ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 }; // 0x05f0 to 0x05ff 
#endif  /* DISABLE_RESET_VALUES */

#endif   /* _MA120_H_*/
