/*---------------------------------------------------------------------------------------*/
/*   Merus Audio MA120   register map                                                    */
/*                                                                                       */
/*   Provides : Defines for registers and symbols in merus audio amplifiers              */
/*              Macros for set and get content of symbols                                */
/*              Read-modify-write on write to symbols less then 8 bits                   */
/*                                                                                       */
/*   Symbols is a collection of 1 to 8 bits within a single address                      */
/*                                                                                       */
/*   Provided as is - free to use and share                                              */
/*                                                                                       */
/*   Timestamp                        :                         Tue Apr 30 15:03:36 2019 */
/*   Created from database            :                                       ma120_rev1 */
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
#define set_obj_MA_core__pa__PMP_select(o,y) ({ uint8_t __ret = o.read(0); o.write(0,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__pa__PMP_select(y) ({ uint8_t __ret = ma_read_byte(0); ma_write_byte(0,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__pa__PMP_select(o) (o.read(0) & 0x07)>>0
#define get_MA_core__pa__PMP_select() ( ma_read_byte(0) & 0x07)>>0
//------------------------------------------------------------------------------core__pa__mode_pbtl---
// High to use PBTL mode
#define MA_core__pa__mode_pbtl__a 0x0000
#define MA_core__pa__mode_pbtl__len 1
#define MA_core__pa__mode_pbtl__mask 0x08
#define MA_core__pa__mode_pbtl__shift 0x03
#define MA_core__pa__mode_pbtl__reset 0x00
#define MA_core__pa__mode_pbtl__inputonly 0
#define set_obj_MA_core__pa__mode_pbtl(o,y) ({ uint8_t __ret = o.read(0); o.write(0,(__ret&0xf7)|((y<<3)&0x08)); })
#define set_MA_core__pa__mode_pbtl(y) ({ uint8_t __ret = ma_read_byte(0); ma_write_byte(0,(__ret&0xf7)|((y<<3)&0x08)); })
#define get_obj_MA_core__pa__mode_pbtl(o) (o.read(0) & 0x08)>>3
#define get_MA_core__pa__mode_pbtl() ( ma_read_byte(0) & 0x08)>>3
//------------------------------------------------------------------------------core__pa__pvdd_scale---
// Pvdd level config. for DNR optimization.
#define MA_core__pa__pvdd_scale__a 0x0000
#define MA_core__pa__pvdd_scale__len 2
#define MA_core__pa__pvdd_scale__mask 0x30
#define MA_core__pa__pvdd_scale__shift 0x04
#define MA_core__pa__pvdd_scale__reset 0x03
#define MA_core__pa__pvdd_scale__inputonly 0
#define set_obj_MA_core__pa__pvdd_scale(o,y) ({ uint8_t __ret = o.read(0); o.write(0,(__ret&0xcf)|((y<<4)&0x30)); })
#define set_MA_core__pa__pvdd_scale(y) ({ uint8_t __ret = ma_read_byte(0); ma_write_byte(0,(__ret&0xcf)|((y<<4)&0x30)); })
#define get_obj_MA_core__pa__pvdd_scale(o) (o.read(0) & 0x30)>>4
#define get_MA_core__pa__pvdd_scale() ( ma_read_byte(0) & 0x30)>>4
//------------------------------------------------------------------------------core__pa__TBD_reg_ctrl---
// High: override pin programmed settings with register stettings<br>
#define MA_core__pa__TBD_reg_ctrl__a 0x0000
#define MA_core__pa__TBD_reg_ctrl__len 1
#define MA_core__pa__TBD_reg_ctrl__mask 0x40
#define MA_core__pa__TBD_reg_ctrl__shift 0x06
#define MA_core__pa__TBD_reg_ctrl__reset 0x00
#define MA_core__pa__TBD_reg_ctrl__inputonly 0
#define set_obj_MA_core__pa__TBD_reg_ctrl(o,y) ({ uint8_t __ret = o.read(0); o.write(0,(__ret&0xbf)|((y<<6)&0x40)); })
#define set_MA_core__pa__TBD_reg_ctrl(y) ({ uint8_t __ret = ma_read_byte(0); ma_write_byte(0,(__ret&0xbf)|((y<<6)&0x40)); })
#define get_obj_MA_core__pa__TBD_reg_ctrl(o) (o.read(0) & 0x40)>>6
#define get_MA_core__pa__TBD_reg_ctrl() ( ma_read_byte(0) & 0x40)>>6
//------------------------------------------------------------------------------core__pa__gd_dVdt---
// Gate driver dV/dt (strength) selection. "00" = lowest, "11" = highest<br>
#define MA_core__pa__gd_dVdt__a 0x0001
#define MA_core__pa__gd_dVdt__len 2
#define MA_core__pa__gd_dVdt__mask 0x03
#define MA_core__pa__gd_dVdt__shift 0x00
#define MA_core__pa__gd_dVdt__reset 0x03
#define MA_core__pa__gd_dVdt__inputonly 0
#define set_obj_MA_core__pa__gd_dVdt(o,y) ({ uint8_t __ret = o.read(1); o.write(1,(__ret&0xfc)|((y<<0)&0x03)); })
#define set_MA_core__pa__gd_dVdt(y) ({ uint8_t __ret = ma_read_byte(1); ma_write_byte(1,(__ret&0xfc)|((y<<0)&0x03)); })
#define get_obj_MA_core__pa__gd_dVdt(o) (o.read(1) & 0x03)>>0
#define get_MA_core__pa__gd_dVdt() ( ma_read_byte(1) & 0x03)>>0
//------------------------------------------------------------------------------core__pa__mute_ch0---
// High to force channel 0 to mute.
#define MA_core__pa__mute_ch0__a 0x0002
#define MA_core__pa__mute_ch0__len 1
#define MA_core__pa__mute_ch0__mask 0x01
#define MA_core__pa__mute_ch0__shift 0x00
#define MA_core__pa__mute_ch0__reset 0x00
#define MA_core__pa__mute_ch0__inputonly 0
#define set_obj_MA_core__pa__mute_ch0(o,y) ({ uint8_t __ret = o.read(2); o.write(2,(__ret&0xfe)|((y<<0)&0x01)); })
#define set_MA_core__pa__mute_ch0(y) ({ uint8_t __ret = ma_read_byte(2); ma_write_byte(2,(__ret&0xfe)|((y<<0)&0x01)); })
#define get_obj_MA_core__pa__mute_ch0(o) (o.read(2) & 0x01)>>0
#define get_MA_core__pa__mute_ch0() ( ma_read_byte(2) & 0x01)>>0
//------------------------------------------------------------------------------core__pa__mute_ch1---
// High to force channel 1 to mute
#define MA_core__pa__mute_ch1__a 0x0002
#define MA_core__pa__mute_ch1__len 1
#define MA_core__pa__mute_ch1__mask 0x02
#define MA_core__pa__mute_ch1__shift 0x01
#define MA_core__pa__mute_ch1__reset 0x00
#define MA_core__pa__mute_ch1__inputonly 0
#define set_obj_MA_core__pa__mute_ch1(o,y) ({ uint8_t __ret = o.read(2); o.write(2,(__ret&0xfd)|((y<<1)&0x02)); })
#define set_MA_core__pa__mute_ch1(y) ({ uint8_t __ret = ma_read_byte(2); ma_write_byte(2,(__ret&0xfd)|((y<<1)&0x02)); })
#define get_obj_MA_core__pa__mute_ch1(o) (o.read(2) & 0x02)>>1
#define get_MA_core__pa__mute_ch1() ( ma_read_byte(2) & 0x02)>>1
//------------------------------------------------------------------------------core__pa__disable_ch0---
// 
#define MA_core__pa__disable_ch0__a 0x0002
#define MA_core__pa__disable_ch0__len 1
#define MA_core__pa__disable_ch0__mask 0x04
#define MA_core__pa__disable_ch0__shift 0x02
#define MA_core__pa__disable_ch0__reset 0x00
#define MA_core__pa__disable_ch0__inputonly 0
#define set_obj_MA_core__pa__disable_ch0(o,y) ({ uint8_t __ret = o.read(2); o.write(2,(__ret&0xfb)|((y<<2)&0x04)); })
#define set_MA_core__pa__disable_ch0(y) ({ uint8_t __ret = ma_read_byte(2); ma_write_byte(2,(__ret&0xfb)|((y<<2)&0x04)); })
#define get_obj_MA_core__pa__disable_ch0(o) (o.read(2) & 0x04)>>2
#define get_MA_core__pa__disable_ch0() ( ma_read_byte(2) & 0x04)>>2
//------------------------------------------------------------------------------core__pa__disable_ch1---
// High to disable channel 1.
#define MA_core__pa__disable_ch1__a 0x0002
#define MA_core__pa__disable_ch1__len 1
#define MA_core__pa__disable_ch1__mask 0x08
#define MA_core__pa__disable_ch1__shift 0x03
#define MA_core__pa__disable_ch1__reset 0x00
#define MA_core__pa__disable_ch1__inputonly 0
#define set_obj_MA_core__pa__disable_ch1(o,y) ({ uint8_t __ret = o.read(2); o.write(2,(__ret&0xf7)|((y<<3)&0x08)); })
#define set_MA_core__pa__disable_ch1(y) ({ uint8_t __ret = ma_read_byte(2); ma_write_byte(2,(__ret&0xf7)|((y<<3)&0x08)); })
#define get_obj_MA_core__pa__disable_ch1(o) (o.read(2) & 0x08)>>3
#define get_MA_core__pa__disable_ch1() ( ma_read_byte(2) & 0x08)>>3
//------------------------------------------------------------------------------core__pa__standby---
// High to force chip standby.
#define MA_core__pa__standby__a 0x0002
#define MA_core__pa__standby__len 1
#define MA_core__pa__standby__mask 0x10
#define MA_core__pa__standby__shift 0x04
#define MA_core__pa__standby__reset 0x00
#define MA_core__pa__standby__inputonly 0
#define set_obj_MA_core__pa__standby(o,y) ({ uint8_t __ret = o.read(2); o.write(2,(__ret&0xef)|((y<<4)&0x10)); })
#define set_MA_core__pa__standby(y) ({ uint8_t __ret = ma_read_byte(2); ma_write_byte(2,(__ret&0xef)|((y<<4)&0x10)); })
#define get_obj_MA_core__pa__standby(o) (o.read(2) & 0x10)>>4
#define get_MA_core__pa__standby() ( ma_read_byte(2) & 0x10)>>4
//------------------------------------------------------------------------------core__pa__dsp_enable---
// High to enable the digital audio processor
#define MA_core__pa__dsp_enable__a 0x0005
#define MA_core__pa__dsp_enable__len 1
#define MA_core__pa__dsp_enable__mask 0x02
#define MA_core__pa__dsp_enable__shift 0x01
#define MA_core__pa__dsp_enable__reset 0x00
#define MA_core__pa__dsp_enable__inputonly 0
#define set_obj_MA_core__pa__dsp_enable(o,y) ({ uint8_t __ret = o.read(5); o.write(5,(__ret&0xfd)|((y<<1)&0x02)); })
#define set_MA_core__pa__dsp_enable(y) ({ uint8_t __ret = ma_read_byte(5); ma_write_byte(5,(__ret&0xfd)|((y<<1)&0x02)); })
#define get_obj_MA_core__pa__dsp_enable(o) (o.read(5) & 0x02)>>1
#define get_MA_core__pa__dsp_enable() ( ma_read_byte(5) & 0x02)>>1
//------------------------------------------------------------------------------core__pa__dsp_restart---
// High: the DSP is halted, Low: the DSP is running
#define MA_core__pa__dsp_restart__a 0x0005
#define MA_core__pa__dsp_restart__len 1
#define MA_core__pa__dsp_restart__mask 0x04
#define MA_core__pa__dsp_restart__shift 0x02
#define MA_core__pa__dsp_restart__reset 0x00
#define MA_core__pa__dsp_restart__inputonly 0
#define set_obj_MA_core__pa__dsp_restart(o,y) ({ uint8_t __ret = o.read(5); o.write(5,(__ret&0xfb)|((y<<2)&0x04)); })
#define set_MA_core__pa__dsp_restart(y) ({ uint8_t __ret = ma_read_byte(5); ma_write_byte(5,(__ret&0xfb)|((y<<2)&0x04)); })
#define get_obj_MA_core__pa__dsp_restart(o) (o.read(5) & 0x04)>>2
#define get_MA_core__pa__dsp_restart() ( ma_read_byte(5) & 0x04)>>2
//------------------------------------------------------------------------------core__pa__volume_ch0---
// Channel 0 volume setting
#define MA_core__pa__volume_ch0__a 0x0003
#define MA_core__pa__volume_ch0__len 8
#define MA_core__pa__volume_ch0__mask 0xff
#define MA_core__pa__volume_ch0__shift 0x00
#define MA_core__pa__volume_ch0__reset 0x20
#define MA_core__pa__volume_ch0__inputonly 0
#define set_obj_MA_core__pa__volume_ch0(o,y) o.write(3,y);
#define set_MA_core__pa__volume_ch0(y) ma_write_byte(3,y);
#define get_obj_MA_core__pa__volume_ch0(o) (o.read(3) & 0xff)>>0
#define get_MA_core__pa__volume_ch0() ( ma_read_byte(3) & 0xff)>>0
//------------------------------------------------------------------------------core__pa__volume_ch1---
// Channel 1 volume setting
#define MA_core__pa__volume_ch1__a 0x0004
#define MA_core__pa__volume_ch1__len 8
#define MA_core__pa__volume_ch1__mask 0xff
#define MA_core__pa__volume_ch1__shift 0x00
#define MA_core__pa__volume_ch1__reset 0x20
#define MA_core__pa__volume_ch1__inputonly 0
#define set_obj_MA_core__pa__volume_ch1(o,y) o.write(4,y);
#define set_MA_core__pa__volume_ch1(y) ma_write_byte(4,y);
#define get_obj_MA_core__pa__volume_ch1(o) (o.read(4) & 0xff)>>0
#define get_MA_core__pa__volume_ch1() ( ma_read_byte(4) & 0xff)>>0
//------------------------------------------------------------------------------core__pa__dsp_bypass---
// High to take audio directly from i2s/tdm input
#define MA_core__pa__dsp_bypass__a 0x0005
#define MA_core__pa__dsp_bypass__len 1
#define MA_core__pa__dsp_bypass__mask 0x08
#define MA_core__pa__dsp_bypass__shift 0x03
#define MA_core__pa__dsp_bypass__reset 0x00
#define MA_core__pa__dsp_bypass__inputonly 0
#define set_obj_MA_core__pa__dsp_bypass(o,y) ({ uint8_t __ret = o.read(5); o.write(5,(__ret&0xf7)|((y<<3)&0x08)); })
#define set_MA_core__pa__dsp_bypass(y) ({ uint8_t __ret = ma_read_byte(5); ma_write_byte(5,(__ret&0xf7)|((y<<3)&0x08)); })
#define get_obj_MA_core__pa__dsp_bypass(o) (o.read(5) & 0x08)>>3
#define get_MA_core__pa__dsp_bypass() ( ma_read_byte(5) & 0x08)>>3
//------------------------------------------------------------------------------core__pa__vol_instant---
// High: Apply volume settings instantly - without ramp
#define MA_core__pa__vol_instant__a 0x0005
#define MA_core__pa__vol_instant__len 1
#define MA_core__pa__vol_instant__mask 0x01
#define MA_core__pa__vol_instant__shift 0x00
#define MA_core__pa__vol_instant__reset 0x00
#define MA_core__pa__vol_instant__inputonly 0
#define set_obj_MA_core__pa__vol_instant(o,y) ({ uint8_t __ret = o.read(5); o.write(5,(__ret&0xfe)|((y<<0)&0x01)); })
#define set_MA_core__pa__vol_instant(y) ({ uint8_t __ret = ma_read_byte(5); ma_write_byte(5,(__ret&0xfe)|((y<<0)&0x01)); })
#define get_obj_MA_core__pa__vol_instant(o) (o.read(5) & 0x01)>>0
#define get_MA_core__pa__vol_instant() ( ma_read_byte(5) & 0x01)>>0
//------------------------------------------------------------------------------core__pa__clip_pin---
// State of the "clip" signal driving the nClip pin -- "1" means "clip"<br>
#define MA_core__pa__clip_pin__a 0x0006
#define MA_core__pa__clip_pin__len 1
#define MA_core__pa__clip_pin__mask 0x01
#define MA_core__pa__clip_pin__shift 0x00
#define MA_core__pa__clip_pin__reset 0x00
#define MA_core__pa__clip_pin__inputonly 1
#define set_obj_MA_core__pa__clip_pin(o,y) ({ uint8_t __ret = o.read(6); o.write(6,(__ret&0xfe)|((y<<0)&0x01)); })
#define set_MA_core__pa__clip_pin(y) ({ uint8_t __ret = ma_read_byte(6); ma_write_byte(6,(__ret&0xfe)|((y<<0)&0x01)); })
#define get_obj_MA_core__pa__clip_pin(o) (o.read(6) & 0x01)>>0
#define get_MA_core__pa__clip_pin() ( ma_read_byte(6) & 0x01)>>0
//------------------------------------------------------------------------------core__pa__err_pin---
// Status of the "err" signal driving the nErr pin -- "1" means "error"<br>
#define MA_core__pa__err_pin__a 0x0006
#define MA_core__pa__err_pin__len 1
#define MA_core__pa__err_pin__mask 0x02
#define MA_core__pa__err_pin__shift 0x01
#define MA_core__pa__err_pin__reset 0x00
#define MA_core__pa__err_pin__inputonly 1
#define set_obj_MA_core__pa__err_pin(o,y) ({ uint8_t __ret = o.read(6); o.write(6,(__ret&0xfd)|((y<<1)&0x02)); })
#define set_MA_core__pa__err_pin(y) ({ uint8_t __ret = ma_read_byte(6); ma_write_byte(6,(__ret&0xfd)|((y<<1)&0x02)); })
#define get_obj_MA_core__pa__err_pin(o) (o.read(6) & 0x02)>>1
#define get_MA_core__pa__err_pin() ( ma_read_byte(6) & 0x02)>>1
//------------------------------------------------------------------------------core__pa__temp_chip---
// Current chip temperature reading
#define MA_core__pa__temp_chip__a 0x0007
#define MA_core__pa__temp_chip__len 8
#define MA_core__pa__temp_chip__mask 0xff
#define MA_core__pa__temp_chip__shift 0x00
#define MA_core__pa__temp_chip__reset 0x00
#define MA_core__pa__temp_chip__inputonly 1
#define set_obj_MA_core__pa__temp_chip(o,y) o.write(7,y);
#define set_MA_core__pa__temp_chip(y) ma_write_byte(7,y);
#define get_obj_MA_core__pa__temp_chip(o) (o.read(7) & 0xff)>>0
#define get_MA_core__pa__temp_chip() ( ma_read_byte(7) & 0xff)>>0
//------------------------------------------------------------------------------core__pa__pvdd_chip---
// Current chip Pvdd reading
#define MA_core__pa__pvdd_chip__a 0x0008
#define MA_core__pa__pvdd_chip__len 8
#define MA_core__pa__pvdd_chip__mask 0xff
#define MA_core__pa__pvdd_chip__shift 0x00
#define MA_core__pa__pvdd_chip__reset 0x00
#define MA_core__pa__pvdd_chip__inputonly 1
#define set_obj_MA_core__pa__pvdd_chip(o,y) o.write(8,y);
#define set_MA_core__pa__pvdd_chip(y) ma_write_byte(8,y);
#define get_obj_MA_core__pa__pvdd_chip(o) (o.read(8) & 0xff)>>0
#define get_MA_core__pa__pvdd_chip() ( ma_read_byte(8) & 0xff)>>0
//------------------------------------------------------------------------------core__pa__attack_ch1---
// Channel 1 attack time for limiter
#define MA_core__pa__attack_ch1__a 0x000a
#define MA_core__pa__attack_ch1__len 5
#define MA_core__pa__attack_ch1__mask 0x1f
#define MA_core__pa__attack_ch1__shift 0x00
#define MA_core__pa__attack_ch1__reset 0x00
#define MA_core__pa__attack_ch1__inputonly 0
#define set_obj_MA_core__pa__attack_ch1(o,y) ({ uint8_t __ret = o.read(10); o.write(10,(__ret&0xe0)|((y<<0)&0x1f)); })
#define set_MA_core__pa__attack_ch1(y) ({ uint8_t __ret = ma_read_byte(10); ma_write_byte(10,(__ret&0xe0)|((y<<0)&0x1f)); })
#define get_obj_MA_core__pa__attack_ch1(o) (o.read(10) & 0x1f)>>0
#define get_MA_core__pa__attack_ch1() ( ma_read_byte(10) & 0x1f)>>0
//------------------------------------------------------------------------------core__pa__attack_ch0---
// Channel 0 attack time for limiter
#define MA_core__pa__attack_ch0__a 0x0009
#define MA_core__pa__attack_ch0__len 5
#define MA_core__pa__attack_ch0__mask 0x1f
#define MA_core__pa__attack_ch0__shift 0x00
#define MA_core__pa__attack_ch0__reset 0x00
#define MA_core__pa__attack_ch0__inputonly 0
#define set_obj_MA_core__pa__attack_ch0(o,y) ({ uint8_t __ret = o.read(9); o.write(9,(__ret&0xe0)|((y<<0)&0x1f)); })
#define set_MA_core__pa__attack_ch0(y) ({ uint8_t __ret = ma_read_byte(9); ma_write_byte(9,(__ret&0xe0)|((y<<0)&0x1f)); })
#define get_obj_MA_core__pa__attack_ch0(o) (o.read(9) & 0x1f)>>0
#define get_MA_core__pa__attack_ch0() ( ma_read_byte(9) & 0x1f)>>0
//------------------------------------------------------------------------------core__pa__release_ch0---
// Channel 0 release time for limiter
#define MA_core__pa__release_ch0__a 0x000b
#define MA_core__pa__release_ch0__len 5
#define MA_core__pa__release_ch0__mask 0x1f
#define MA_core__pa__release_ch0__shift 0x00
#define MA_core__pa__release_ch0__reset 0x12
#define MA_core__pa__release_ch0__inputonly 0
#define set_obj_MA_core__pa__release_ch0(o,y) ({ uint8_t __ret = o.read(11); o.write(11,(__ret&0xe0)|((y<<0)&0x1f)); })
#define set_MA_core__pa__release_ch0(y) ({ uint8_t __ret = ma_read_byte(11); ma_write_byte(11,(__ret&0xe0)|((y<<0)&0x1f)); })
#define get_obj_MA_core__pa__release_ch0(o) (o.read(11) & 0x1f)>>0
#define get_MA_core__pa__release_ch0() ( ma_read_byte(11) & 0x1f)>>0
//------------------------------------------------------------------------------core__pa__release_ch1---
// Channel 1 release time for limiter
#define MA_core__pa__release_ch1__a 0x000c
#define MA_core__pa__release_ch1__len 5
#define MA_core__pa__release_ch1__mask 0x1f
#define MA_core__pa__release_ch1__shift 0x00
#define MA_core__pa__release_ch1__reset 0x12
#define MA_core__pa__release_ch1__inputonly 0
#define set_obj_MA_core__pa__release_ch1(o,y) ({ uint8_t __ret = o.read(12); o.write(12,(__ret&0xe0)|((y<<0)&0x1f)); })
#define set_MA_core__pa__release_ch1(y) ({ uint8_t __ret = ma_read_byte(12); ma_write_byte(12,(__ret&0xe0)|((y<<0)&0x1f)); })
#define get_obj_MA_core__pa__release_ch1(o) (o.read(12) & 0x1f)>>0
#define get_MA_core__pa__release_ch1() ( ma_read_byte(12) & 0x1f)>>0
//------------------------------------------------------------------------------core__pa__threshold_ch0---
// Channel 0 limiter threshold
#define MA_core__pa__threshold_ch0__a 0x000d
#define MA_core__pa__threshold_ch0__len 8
#define MA_core__pa__threshold_ch0__mask 0xff
#define MA_core__pa__threshold_ch0__shift 0x00
#define MA_core__pa__threshold_ch0__reset 0x00
#define MA_core__pa__threshold_ch0__inputonly 0
#define set_obj_MA_core__pa__threshold_ch0(o,y) o.write(13,y);
#define set_MA_core__pa__threshold_ch0(y) ma_write_byte(13,y);
#define get_obj_MA_core__pa__threshold_ch0(o) (o.read(13) & 0xff)>>0
#define get_MA_core__pa__threshold_ch0() ( ma_read_byte(13) & 0xff)>>0
//------------------------------------------------------------------------------core__pa__threshold_ch1---
// Channel 1 limiter threshold
#define MA_core__pa__threshold_ch1__a 0x000e
#define MA_core__pa__threshold_ch1__len 8
#define MA_core__pa__threshold_ch1__mask 0xff
#define MA_core__pa__threshold_ch1__shift 0x00
#define MA_core__pa__threshold_ch1__reset 0x00
#define MA_core__pa__threshold_ch1__inputonly 0
#define set_obj_MA_core__pa__threshold_ch1(o,y) o.write(14,y);
#define set_MA_core__pa__threshold_ch1(y) ma_write_byte(14,y);
#define get_obj_MA_core__pa__threshold_ch1(o) (o.read(14) & 0xff)>>0
#define get_MA_core__pa__threshold_ch1() ( ma_read_byte(14) & 0xff)>>0
//------------------------------------------------------------------------------core__i2s_tdm__data_alignment---
// 000: i2s, 001: left justified, 100: right justified 16bit, 101: right justified 18bit, 110: right justified 20bit, 111: right justified 24bit
#define MA_core__i2s_tdm__data_alignment__a 0x0010
#define MA_core__i2s_tdm__data_alignment__len 3
#define MA_core__i2s_tdm__data_alignment__mask 0x07
#define MA_core__i2s_tdm__data_alignment__shift 0x00
#define MA_core__i2s_tdm__data_alignment__reset 0x00
#define MA_core__i2s_tdm__data_alignment__inputonly 0
#define set_obj_MA_core__i2s_tdm__data_alignment(o,y) ({ uint8_t __ret = o.read(16); o.write(16,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__data_alignment(y) ({ uint8_t __ret = ma_read_byte(16); ma_write_byte(16,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__data_alignment(o) (o.read(16) & 0x07)>>0
#define get_MA_core__i2s_tdm__data_alignment() ( ma_read_byte(16) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__sck_pol---
// 0: data change on rising edge of sck
#define MA_core__i2s_tdm__sck_pol__a 0x0010
#define MA_core__i2s_tdm__sck_pol__len 1
#define MA_core__i2s_tdm__sck_pol__mask 0x08
#define MA_core__i2s_tdm__sck_pol__shift 0x03
#define MA_core__i2s_tdm__sck_pol__reset 0x01
#define MA_core__i2s_tdm__sck_pol__inputonly 0
#define set_obj_MA_core__i2s_tdm__sck_pol(o,y) ({ uint8_t __ret = o.read(16); o.write(16,(__ret&0xf7)|((y<<3)&0x08)); })
#define set_MA_core__i2s_tdm__sck_pol(y) ({ uint8_t __ret = ma_read_byte(16); ma_write_byte(16,(__ret&0xf7)|((y<<3)&0x08)); })
#define get_obj_MA_core__i2s_tdm__sck_pol(o) (o.read(16) & 0x08)>>3
#define get_MA_core__i2s_tdm__sck_pol() ( ma_read_byte(16) & 0x08)>>3
//------------------------------------------------------------------------------core__i2s_tdm__slot_size---
// Channel slot size: 00: 32bit, 01: 24bit, 10: 16bit
#define MA_core__i2s_tdm__slot_size__a 0x0010
#define MA_core__i2s_tdm__slot_size__len 2
#define MA_core__i2s_tdm__slot_size__mask 0x30
#define MA_core__i2s_tdm__slot_size__shift 0x04
#define MA_core__i2s_tdm__slot_size__reset 0x00
#define MA_core__i2s_tdm__slot_size__inputonly 0
#define set_obj_MA_core__i2s_tdm__slot_size(o,y) ({ uint8_t __ret = o.read(16); o.write(16,(__ret&0xcf)|((y<<4)&0x30)); })
#define set_MA_core__i2s_tdm__slot_size(y) ({ uint8_t __ret = ma_read_byte(16); ma_write_byte(16,(__ret&0xcf)|((y<<4)&0x30)); })
#define get_obj_MA_core__i2s_tdm__slot_size(o) (o.read(16) & 0x30)>>4
#define get_MA_core__i2s_tdm__slot_size() ( ma_read_byte(16) & 0x30)>>4
//------------------------------------------------------------------------------core__i2s_tdm__ws_fs_rising---
// 0: Frame start at rising ws/fs
#define MA_core__i2s_tdm__ws_fs_rising__a 0x0010
#define MA_core__i2s_tdm__ws_fs_rising__len 1
#define MA_core__i2s_tdm__ws_fs_rising__mask 0x40
#define MA_core__i2s_tdm__ws_fs_rising__shift 0x06
#define MA_core__i2s_tdm__ws_fs_rising__reset 0x00
#define MA_core__i2s_tdm__ws_fs_rising__inputonly 0
#define set_obj_MA_core__i2s_tdm__ws_fs_rising(o,y) ({ uint8_t __ret = o.read(16); o.write(16,(__ret&0xbf)|((y<<6)&0x40)); })
#define set_MA_core__i2s_tdm__ws_fs_rising(y) ({ uint8_t __ret = ma_read_byte(16); ma_write_byte(16,(__ret&0xbf)|((y<<6)&0x40)); })
#define get_obj_MA_core__i2s_tdm__ws_fs_rising(o) (o.read(16) & 0x40)>>6
#define get_MA_core__i2s_tdm__ws_fs_rising() ( ma_read_byte(16) & 0x40)>>6
//------------------------------------------------------------------------------core__i2s_tdm__lsb_first---
// 0: The lsb is transmitted first
#define MA_core__i2s_tdm__lsb_first__a 0x0010
#define MA_core__i2s_tdm__lsb_first__len 1
#define MA_core__i2s_tdm__lsb_first__mask 0x80
#define MA_core__i2s_tdm__lsb_first__shift 0x07
#define MA_core__i2s_tdm__lsb_first__reset 0x00
#define MA_core__i2s_tdm__lsb_first__inputonly 0
#define set_obj_MA_core__i2s_tdm__lsb_first(o,y) ({ uint8_t __ret = o.read(16); o.write(16,(__ret&0x7f)|((y<<7)&0x80)); })
#define set_MA_core__i2s_tdm__lsb_first(y) ({ uint8_t __ret = ma_read_byte(16); ma_write_byte(16,(__ret&0x7f)|((y<<7)&0x80)); })
#define get_obj_MA_core__i2s_tdm__lsb_first(o) (o.read(16) & 0x80)>>7
#define get_MA_core__i2s_tdm__lsb_first() ( ma_read_byte(16) & 0x80)>>7
//------------------------------------------------------------------------------core__i2s_tdm__tdm_input_map0---
// tdm input map ch0 xxx (thh)
#define MA_core__i2s_tdm__tdm_input_map0__a 0x0011
#define MA_core__i2s_tdm__tdm_input_map0__len 5
#define MA_core__i2s_tdm__tdm_input_map0__mask 0x1f
#define MA_core__i2s_tdm__tdm_input_map0__shift 0x00
#define MA_core__i2s_tdm__tdm_input_map0__reset 0x00
#define MA_core__i2s_tdm__tdm_input_map0__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_input_map0(o,y) ({ uint8_t __ret = o.read(17); o.write(17,(__ret&0xe0)|((y<<0)&0x1f)); })
#define set_MA_core__i2s_tdm__tdm_input_map0(y) ({ uint8_t __ret = ma_read_byte(17); ma_write_byte(17,(__ret&0xe0)|((y<<0)&0x1f)); })
#define get_obj_MA_core__i2s_tdm__tdm_input_map0(o) (o.read(17) & 0x1f)>>0
#define get_MA_core__i2s_tdm__tdm_input_map0() ( ma_read_byte(17) & 0x1f)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_input_map1---
// tdm input map ch1 xxx (thh)
#define MA_core__i2s_tdm__tdm_input_map1__a 0x0012
#define MA_core__i2s_tdm__tdm_input_map1__len 5
#define MA_core__i2s_tdm__tdm_input_map1__mask 0x1f
#define MA_core__i2s_tdm__tdm_input_map1__shift 0x00
#define MA_core__i2s_tdm__tdm_input_map1__reset 0x01
#define MA_core__i2s_tdm__tdm_input_map1__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_input_map1(o,y) ({ uint8_t __ret = o.read(18); o.write(18,(__ret&0xe0)|((y<<0)&0x1f)); })
#define set_MA_core__i2s_tdm__tdm_input_map1(y) ({ uint8_t __ret = ma_read_byte(18); ma_write_byte(18,(__ret&0xe0)|((y<<0)&0x1f)); })
#define get_obj_MA_core__i2s_tdm__tdm_input_map1(o) (o.read(18) & 0x1f)>>0
#define get_MA_core__i2s_tdm__tdm_input_map1() ( ma_read_byte(18) & 0x1f)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_input_map2---
// tdm input map ch2 xxx (thh)
#define MA_core__i2s_tdm__tdm_input_map2__a 0x0013
#define MA_core__i2s_tdm__tdm_input_map2__len 5
#define MA_core__i2s_tdm__tdm_input_map2__mask 0x1f
#define MA_core__i2s_tdm__tdm_input_map2__shift 0x00
#define MA_core__i2s_tdm__tdm_input_map2__reset 0x00
#define MA_core__i2s_tdm__tdm_input_map2__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_input_map2(o,y) ({ uint8_t __ret = o.read(19); o.write(19,(__ret&0xe0)|((y<<0)&0x1f)); })
#define set_MA_core__i2s_tdm__tdm_input_map2(y) ({ uint8_t __ret = ma_read_byte(19); ma_write_byte(19,(__ret&0xe0)|((y<<0)&0x1f)); })
#define get_obj_MA_core__i2s_tdm__tdm_input_map2(o) (o.read(19) & 0x1f)>>0
#define get_MA_core__i2s_tdm__tdm_input_map2() ( ma_read_byte(19) & 0x1f)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_input_map3---
// tdm input map ch3 xxx (thh)
#define MA_core__i2s_tdm__tdm_input_map3__a 0x0014
#define MA_core__i2s_tdm__tdm_input_map3__len 5
#define MA_core__i2s_tdm__tdm_input_map3__mask 0x1f
#define MA_core__i2s_tdm__tdm_input_map3__shift 0x00
#define MA_core__i2s_tdm__tdm_input_map3__reset 0x00
#define MA_core__i2s_tdm__tdm_input_map3__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_input_map3(o,y) ({ uint8_t __ret = o.read(20); o.write(20,(__ret&0xe0)|((y<<0)&0x1f)); })
#define set_MA_core__i2s_tdm__tdm_input_map3(y) ({ uint8_t __ret = ma_read_byte(20); ma_write_byte(20,(__ret&0xe0)|((y<<0)&0x1f)); })
#define get_obj_MA_core__i2s_tdm__tdm_input_map3(o) (o.read(20) & 0x1f)>>0
#define get_MA_core__i2s_tdm__tdm_input_map3() ( ma_read_byte(20) & 0x1f)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map0---
// tdm output map slot0 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map0__a 0x0015
#define MA_core__i2s_tdm__tdm_output_map0__len 3
#define MA_core__i2s_tdm__tdm_output_map0__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map0__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map0__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map0__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map0(o,y) ({ uint8_t __ret = o.read(21); o.write(21,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map0(y) ({ uint8_t __ret = ma_read_byte(21); ma_write_byte(21,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map0(o) (o.read(21) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map0() ( ma_read_byte(21) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map1---
// tdm output map slot1 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map1__a 0x0015
#define MA_core__i2s_tdm__tdm_output_map1__len 3
#define MA_core__i2s_tdm__tdm_output_map1__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map1__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map1__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map1__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map1(o,y) ({ uint8_t __ret = o.read(21); o.write(21,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map1(y) ({ uint8_t __ret = ma_read_byte(21); ma_write_byte(21,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map1(o) (o.read(21) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map1() ( ma_read_byte(21) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map2---
// tdm output map slot2 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map2__a 0x0016
#define MA_core__i2s_tdm__tdm_output_map2__len 3
#define MA_core__i2s_tdm__tdm_output_map2__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map2__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map2__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map2__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map2(o,y) ({ uint8_t __ret = o.read(22); o.write(22,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map2(y) ({ uint8_t __ret = ma_read_byte(22); ma_write_byte(22,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map2(o) (o.read(22) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map2() ( ma_read_byte(22) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map3---
// tdm output map slot3 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map3__a 0x0016
#define MA_core__i2s_tdm__tdm_output_map3__len 3
#define MA_core__i2s_tdm__tdm_output_map3__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map3__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map3__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map3__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map3(o,y) ({ uint8_t __ret = o.read(22); o.write(22,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map3(y) ({ uint8_t __ret = ma_read_byte(22); ma_write_byte(22,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map3(o) (o.read(22) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map3() ( ma_read_byte(22) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map4---
// tdm output map slot4 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map4__a 0x0017
#define MA_core__i2s_tdm__tdm_output_map4__len 3
#define MA_core__i2s_tdm__tdm_output_map4__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map4__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map4__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map4__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map4(o,y) ({ uint8_t __ret = o.read(23); o.write(23,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map4(y) ({ uint8_t __ret = ma_read_byte(23); ma_write_byte(23,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map4(o) (o.read(23) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map4() ( ma_read_byte(23) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map5---
// tdm output map slot5 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map5__a 0x0017
#define MA_core__i2s_tdm__tdm_output_map5__len 3
#define MA_core__i2s_tdm__tdm_output_map5__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map5__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map5__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map5__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map5(o,y) ({ uint8_t __ret = o.read(23); o.write(23,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map5(y) ({ uint8_t __ret = ma_read_byte(23); ma_write_byte(23,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map5(o) (o.read(23) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map5() ( ma_read_byte(23) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map6---
// tdm output map slot6 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map6__a 0x0018
#define MA_core__i2s_tdm__tdm_output_map6__len 3
#define MA_core__i2s_tdm__tdm_output_map6__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map6__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map6__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map6__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map6(o,y) ({ uint8_t __ret = o.read(24); o.write(24,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map6(y) ({ uint8_t __ret = ma_read_byte(24); ma_write_byte(24,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map6(o) (o.read(24) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map6() ( ma_read_byte(24) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map7---
// tdm output map slot7 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map7__a 0x0018
#define MA_core__i2s_tdm__tdm_output_map7__len 3
#define MA_core__i2s_tdm__tdm_output_map7__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map7__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map7__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map7__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map7(o,y) ({ uint8_t __ret = o.read(24); o.write(24,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map7(y) ({ uint8_t __ret = ma_read_byte(24); ma_write_byte(24,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map7(o) (o.read(24) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map7() ( ma_read_byte(24) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map8---
// tdm output map slot8 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map8__a 0x0019
#define MA_core__i2s_tdm__tdm_output_map8__len 3
#define MA_core__i2s_tdm__tdm_output_map8__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map8__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map8__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map8__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map8(o,y) ({ uint8_t __ret = o.read(25); o.write(25,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map8(y) ({ uint8_t __ret = ma_read_byte(25); ma_write_byte(25,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map8(o) (o.read(25) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map8() ( ma_read_byte(25) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map9---
// tdm output map slot9 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map9__a 0x0019
#define MA_core__i2s_tdm__tdm_output_map9__len 3
#define MA_core__i2s_tdm__tdm_output_map9__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map9__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map9__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map9__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map9(o,y) ({ uint8_t __ret = o.read(25); o.write(25,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map9(y) ({ uint8_t __ret = ma_read_byte(25); ma_write_byte(25,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map9(o) (o.read(25) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map9() ( ma_read_byte(25) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map10---
// tdm output map slot10 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map10__a 0x001a
#define MA_core__i2s_tdm__tdm_output_map10__len 3
#define MA_core__i2s_tdm__tdm_output_map10__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map10__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map10__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map10__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map10(o,y) ({ uint8_t __ret = o.read(26); o.write(26,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map10(y) ({ uint8_t __ret = ma_read_byte(26); ma_write_byte(26,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map10(o) (o.read(26) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map10() ( ma_read_byte(26) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map11---
// tdm output map slot11 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map11__a 0x001a
#define MA_core__i2s_tdm__tdm_output_map11__len 3
#define MA_core__i2s_tdm__tdm_output_map11__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map11__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map11__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map11__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map11(o,y) ({ uint8_t __ret = o.read(26); o.write(26,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map11(y) ({ uint8_t __ret = ma_read_byte(26); ma_write_byte(26,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map11(o) (o.read(26) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map11() ( ma_read_byte(26) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map12---
// tdm output map slot12 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map12__a 0x001b
#define MA_core__i2s_tdm__tdm_output_map12__len 3
#define MA_core__i2s_tdm__tdm_output_map12__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map12__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map12__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map12__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map12(o,y) ({ uint8_t __ret = o.read(27); o.write(27,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map12(y) ({ uint8_t __ret = ma_read_byte(27); ma_write_byte(27,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map12(o) (o.read(27) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map12() ( ma_read_byte(27) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map13---
// tdm output map slot13 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map13__a 0x001b
#define MA_core__i2s_tdm__tdm_output_map13__len 3
#define MA_core__i2s_tdm__tdm_output_map13__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map13__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map13__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map13__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map13(o,y) ({ uint8_t __ret = o.read(27); o.write(27,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map13(y) ({ uint8_t __ret = ma_read_byte(27); ma_write_byte(27,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map13(o) (o.read(27) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map13() ( ma_read_byte(27) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map14---
// tdm output map slot14 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map14__a 0x001c
#define MA_core__i2s_tdm__tdm_output_map14__len 3
#define MA_core__i2s_tdm__tdm_output_map14__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map14__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map14__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map14__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map14(o,y) ({ uint8_t __ret = o.read(28); o.write(28,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map14(y) ({ uint8_t __ret = ma_read_byte(28); ma_write_byte(28,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map14(o) (o.read(28) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map14() ( ma_read_byte(28) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map15---
// tdm output map slot15 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map15__a 0x001c
#define MA_core__i2s_tdm__tdm_output_map15__len 3
#define MA_core__i2s_tdm__tdm_output_map15__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map15__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map15__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map15__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map15(o,y) ({ uint8_t __ret = o.read(28); o.write(28,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map15(y) ({ uint8_t __ret = ma_read_byte(28); ma_write_byte(28,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map15(o) (o.read(28) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map15() ( ma_read_byte(28) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map16---
// tdm output map slot16 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map16__a 0x001d
#define MA_core__i2s_tdm__tdm_output_map16__len 3
#define MA_core__i2s_tdm__tdm_output_map16__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map16__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map16__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map16__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map16(o,y) ({ uint8_t __ret = o.read(29); o.write(29,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map16(y) ({ uint8_t __ret = ma_read_byte(29); ma_write_byte(29,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map16(o) (o.read(29) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map16() ( ma_read_byte(29) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map17---
// tdm output map slot17 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map17__a 0x001d
#define MA_core__i2s_tdm__tdm_output_map17__len 3
#define MA_core__i2s_tdm__tdm_output_map17__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map17__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map17__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map17__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map17(o,y) ({ uint8_t __ret = o.read(29); o.write(29,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map17(y) ({ uint8_t __ret = ma_read_byte(29); ma_write_byte(29,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map17(o) (o.read(29) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map17() ( ma_read_byte(29) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map18---
// tdm output map slot18 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map18__a 0x001e
#define MA_core__i2s_tdm__tdm_output_map18__len 3
#define MA_core__i2s_tdm__tdm_output_map18__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map18__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map18__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map18__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map18(o,y) ({ uint8_t __ret = o.read(30); o.write(30,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map18(y) ({ uint8_t __ret = ma_read_byte(30); ma_write_byte(30,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map18(o) (o.read(30) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map18() ( ma_read_byte(30) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map19---
// tdm output map slot19 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map19__a 0x001e
#define MA_core__i2s_tdm__tdm_output_map19__len 3
#define MA_core__i2s_tdm__tdm_output_map19__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map19__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map19__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map19__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map19(o,y) ({ uint8_t __ret = o.read(30); o.write(30,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map19(y) ({ uint8_t __ret = ma_read_byte(30); ma_write_byte(30,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map19(o) (o.read(30) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map19() ( ma_read_byte(30) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map20---
// tdm output map slot20 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map20__a 0x001f
#define MA_core__i2s_tdm__tdm_output_map20__len 3
#define MA_core__i2s_tdm__tdm_output_map20__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map20__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map20__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map20__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map20(o,y) ({ uint8_t __ret = o.read(31); o.write(31,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map20(y) ({ uint8_t __ret = ma_read_byte(31); ma_write_byte(31,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map20(o) (o.read(31) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map20() ( ma_read_byte(31) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map21---
// tdm output map slot21 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map21__a 0x001f
#define MA_core__i2s_tdm__tdm_output_map21__len 3
#define MA_core__i2s_tdm__tdm_output_map21__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map21__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map21__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map21__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map21(o,y) ({ uint8_t __ret = o.read(31); o.write(31,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map21(y) ({ uint8_t __ret = ma_read_byte(31); ma_write_byte(31,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map21(o) (o.read(31) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map21() ( ma_read_byte(31) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map22---
// tdm output map slot22 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map22__a 0x0020
#define MA_core__i2s_tdm__tdm_output_map22__len 3
#define MA_core__i2s_tdm__tdm_output_map22__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map22__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map22__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map22__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map22(o,y) ({ uint8_t __ret = o.read(32); o.write(32,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map22(y) ({ uint8_t __ret = ma_read_byte(32); ma_write_byte(32,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map22(o) (o.read(32) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map22() ( ma_read_byte(32) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map23---
// tdm output map slot23 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map23__a 0x0020
#define MA_core__i2s_tdm__tdm_output_map23__len 3
#define MA_core__i2s_tdm__tdm_output_map23__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map23__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map23__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map23__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map23(o,y) ({ uint8_t __ret = o.read(32); o.write(32,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map23(y) ({ uint8_t __ret = ma_read_byte(32); ma_write_byte(32,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map23(o) (o.read(32) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map23() ( ma_read_byte(32) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map24---
// tdm output map slot24 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map24__a 0x0021
#define MA_core__i2s_tdm__tdm_output_map24__len 3
#define MA_core__i2s_tdm__tdm_output_map24__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map24__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map24__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map24__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map24(o,y) ({ uint8_t __ret = o.read(33); o.write(33,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map24(y) ({ uint8_t __ret = ma_read_byte(33); ma_write_byte(33,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map24(o) (o.read(33) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map24() ( ma_read_byte(33) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map25---
// tdm output map slot25 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map25__a 0x0021
#define MA_core__i2s_tdm__tdm_output_map25__len 3
#define MA_core__i2s_tdm__tdm_output_map25__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map25__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map25__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map25__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map25(o,y) ({ uint8_t __ret = o.read(33); o.write(33,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map25(y) ({ uint8_t __ret = ma_read_byte(33); ma_write_byte(33,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map25(o) (o.read(33) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map25() ( ma_read_byte(33) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map26---
// tdm output map slot26 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map26__a 0x0022
#define MA_core__i2s_tdm__tdm_output_map26__len 3
#define MA_core__i2s_tdm__tdm_output_map26__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map26__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map26__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map26__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map26(o,y) ({ uint8_t __ret = o.read(34); o.write(34,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map26(y) ({ uint8_t __ret = ma_read_byte(34); ma_write_byte(34,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map26(o) (o.read(34) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map26() ( ma_read_byte(34) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map27---
// tdm output map slot27 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map27__a 0x0022
#define MA_core__i2s_tdm__tdm_output_map27__len 3
#define MA_core__i2s_tdm__tdm_output_map27__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map27__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map27__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map27__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map27(o,y) ({ uint8_t __ret = o.read(34); o.write(34,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map27(y) ({ uint8_t __ret = ma_read_byte(34); ma_write_byte(34,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map27(o) (o.read(34) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map27() ( ma_read_byte(34) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map28---
// tdm output map slot28 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map28__a 0x0023
#define MA_core__i2s_tdm__tdm_output_map28__len 3
#define MA_core__i2s_tdm__tdm_output_map28__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map28__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map28__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map28__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map28(o,y) ({ uint8_t __ret = o.read(35); o.write(35,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map28(y) ({ uint8_t __ret = ma_read_byte(35); ma_write_byte(35,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map28(o) (o.read(35) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map28() ( ma_read_byte(35) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map29---
// tdm output map slot29 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map29__a 0x0023
#define MA_core__i2s_tdm__tdm_output_map29__len 3
#define MA_core__i2s_tdm__tdm_output_map29__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map29__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map29__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map29__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map29(o,y) ({ uint8_t __ret = o.read(35); o.write(35,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map29(y) ({ uint8_t __ret = ma_read_byte(35); ma_write_byte(35,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map29(o) (o.read(35) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map29() ( ma_read_byte(35) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map30---
// tdm output map slot30 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map30__a 0x0024
#define MA_core__i2s_tdm__tdm_output_map30__len 3
#define MA_core__i2s_tdm__tdm_output_map30__mask 0x07
#define MA_core__i2s_tdm__tdm_output_map30__shift 0x00
#define MA_core__i2s_tdm__tdm_output_map30__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map30__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map30(o,y) ({ uint8_t __ret = o.read(36); o.write(36,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_core__i2s_tdm__tdm_output_map30(y) ({ uint8_t __ret = ma_read_byte(36); ma_write_byte(36,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map30(o) (o.read(36) & 0x07)>>0
#define get_MA_core__i2s_tdm__tdm_output_map30() ( ma_read_byte(36) & 0x07)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tdm_output_map31---
// tdm output map slot31 xxx (thh)
#define MA_core__i2s_tdm__tdm_output_map31__a 0x0024
#define MA_core__i2s_tdm__tdm_output_map31__len 3
#define MA_core__i2s_tdm__tdm_output_map31__mask 0x38
#define MA_core__i2s_tdm__tdm_output_map31__shift 0x03
#define MA_core__i2s_tdm__tdm_output_map31__reset 0x00
#define MA_core__i2s_tdm__tdm_output_map31__inputonly 0
#define set_obj_MA_core__i2s_tdm__tdm_output_map31(o,y) ({ uint8_t __ret = o.read(36); o.write(36,(__ret&0xc7)|((y<<3)&0x38)); })
#define set_MA_core__i2s_tdm__tdm_output_map31(y) ({ uint8_t __ret = ma_read_byte(36); ma_write_byte(36,(__ret&0xc7)|((y<<3)&0x38)); })
#define get_obj_MA_core__i2s_tdm__tdm_output_map31(o) (o.read(36) & 0x38)>>3
#define get_MA_core__i2s_tdm__tdm_output_map31() ( ma_read_byte(36) & 0x38)>>3
//------------------------------------------------------------------------------core__i2s_tdm__tx_loopback---
// 1: tx audio data is a loop back of rx audio data
#define MA_core__i2s_tdm__tx_loopback__a 0x0025
#define MA_core__i2s_tdm__tx_loopback__len 1
#define MA_core__i2s_tdm__tx_loopback__mask 0x01
#define MA_core__i2s_tdm__tx_loopback__shift 0x00
#define MA_core__i2s_tdm__tx_loopback__reset 0x00
#define MA_core__i2s_tdm__tx_loopback__inputonly 0
#define set_obj_MA_core__i2s_tdm__tx_loopback(o,y) ({ uint8_t __ret = o.read(37); o.write(37,(__ret&0xfe)|((y<<0)&0x01)); })
#define set_MA_core__i2s_tdm__tx_loopback(y) ({ uint8_t __ret = ma_read_byte(37); ma_write_byte(37,(__ret&0xfe)|((y<<0)&0x01)); })
#define get_obj_MA_core__i2s_tdm__tx_loopback(o) (o.read(37) & 0x01)>>0
#define get_MA_core__i2s_tdm__tx_loopback() ( ma_read_byte(37) & 0x01)>>0
//------------------------------------------------------------------------------core__i2s_tdm__tx_enable---
// 1: enable the i2s / tdm data output pin
#define MA_core__i2s_tdm__tx_enable__a 0x0025
#define MA_core__i2s_tdm__tx_enable__len 1
#define MA_core__i2s_tdm__tx_enable__mask 0x04
#define MA_core__i2s_tdm__tx_enable__shift 0x02
#define MA_core__i2s_tdm__tx_enable__reset 0x00
#define MA_core__i2s_tdm__tx_enable__inputonly 0
#define set_obj_MA_core__i2s_tdm__tx_enable(o,y) ({ uint8_t __ret = o.read(37); o.write(37,(__ret&0xfb)|((y<<2)&0x04)); })
#define set_MA_core__i2s_tdm__tx_enable(y) ({ uint8_t __ret = ma_read_byte(37); ma_write_byte(37,(__ret&0xfb)|((y<<2)&0x04)); })
#define get_obj_MA_core__i2s_tdm__tx_enable(o) (o.read(37) & 0x04)>>2
#define get_MA_core__i2s_tdm__tx_enable() ( ma_read_byte(37) & 0x04)>>2
//------------------------------------------------------------------------------core__i2s_tdm__rx_enable---
// 1: enable the i2s / tdm receiver. (Must be enabled to play audio)
#define MA_core__i2s_tdm__rx_enable__a 0x0025
#define MA_core__i2s_tdm__rx_enable__len 1
#define MA_core__i2s_tdm__rx_enable__mask 0x02
#define MA_core__i2s_tdm__rx_enable__shift 0x01
#define MA_core__i2s_tdm__rx_enable__reset 0x01
#define MA_core__i2s_tdm__rx_enable__inputonly 0
#define set_obj_MA_core__i2s_tdm__rx_enable(o,y) ({ uint8_t __ret = o.read(37); o.write(37,(__ret&0xfd)|((y<<1)&0x02)); })
#define set_MA_core__i2s_tdm__rx_enable(y) ({ uint8_t __ret = ma_read_byte(37); ma_write_byte(37,(__ret&0xfd)|((y<<1)&0x02)); })
#define get_obj_MA_core__i2s_tdm__rx_enable(o) (o.read(37) & 0x02)>>1
#define get_MA_core__i2s_tdm__rx_enable() ( ma_read_byte(37) & 0x02)>>1
//------------------------------------------------------------------------------core__i2s_tdm__tx_strong_drive---
// 1: Enable extra drive strength on i2s / tdm data output pin (i2s_do)
#define MA_core__i2s_tdm__tx_strong_drive__a 0x0025
#define MA_core__i2s_tdm__tx_strong_drive__len 1
#define MA_core__i2s_tdm__tx_strong_drive__mask 0x08
#define MA_core__i2s_tdm__tx_strong_drive__shift 0x03
#define MA_core__i2s_tdm__tx_strong_drive__reset 0x01
#define MA_core__i2s_tdm__tx_strong_drive__inputonly 0
#define set_obj_MA_core__i2s_tdm__tx_strong_drive(o,y) ({ uint8_t __ret = o.read(37); o.write(37,(__ret&0xf7)|((y<<3)&0x08)); })
#define set_MA_core__i2s_tdm__tx_strong_drive(y) ({ uint8_t __ret = ma_read_byte(37); ma_write_byte(37,(__ret&0xf7)|((y<<3)&0x08)); })
#define get_obj_MA_core__i2s_tdm__tx_strong_drive(o) (o.read(37) & 0x08)>>3
#define get_MA_core__i2s_tdm__tx_strong_drive() ( ma_read_byte(37) & 0x08)>>3
//------------------------------------------------------------------------------core__system__rb_protect_override---
// Register bank protection override
#define MA_core__system__rb_protect_override__a 0x0261
#define MA_core__system__rb_protect_override__len 8
#define MA_core__system__rb_protect_override__mask 0xff
#define MA_core__system__rb_protect_override__shift 0x00
#define MA_core__system__rb_protect_override__reset 0x00
#define MA_core__system__rb_protect_override__inputonly 0
#define set_obj_MA_core__system__rb_protect_override(o,y) o.write(609,y);
#define set_MA_core__system__rb_protect_override(y) ma_write_byte(609,y);
#define get_obj_MA_core__system__rb_protect_override(o) (o.read(609) & 0xff)>>0
#define get_MA_core__system__rb_protect_override() ( ma_read_byte(609) & 0xff)>>0
//------------------------------------------------------------------------------mlpin__mlp__limit0---
// 120 KOhm upper limit
#define MA_mlpin__mlp__limit0__a 0x0500
#define MA_mlpin__mlp__limit0__len 6
#define MA_mlpin__mlp__limit0__mask 0x3f
#define MA_mlpin__mlp__limit0__shift 0x00
#define MA_mlpin__mlp__limit0__reset 0x01
#define MA_mlpin__mlp__limit0__inputonly 0
#define set_obj_MA_mlpin__mlp__limit0(o,y) ({ uint8_t __ret = o.read(1280); o.write(1280,(__ret&0xc0)|((y<<0)&0x3f)); })
#define set_MA_mlpin__mlp__limit0(y) ({ uint8_t __ret = ma_read_byte(1280); ma_write_byte(1280,(__ret&0xc0)|((y<<0)&0x3f)); })
#define get_obj_MA_mlpin__mlp__limit0(o) (o.read(1280) & 0x3f)>>0
#define get_MA_mlpin__mlp__limit0() ( ma_read_byte(1280) & 0x3f)>>0
//------------------------------------------------------------------------------mlpin__mlp__limit1---
// 62 KOhm upper limit
#define MA_mlpin__mlp__limit1__a 0x0501
#define MA_mlpin__mlp__limit1__len 6
#define MA_mlpin__mlp__limit1__mask 0x3f
#define MA_mlpin__mlp__limit1__shift 0x00
#define MA_mlpin__mlp__limit1__reset 0x05
#define MA_mlpin__mlp__limit1__inputonly 0
#define set_obj_MA_mlpin__mlp__limit1(o,y) ({ uint8_t __ret = o.read(1281); o.write(1281,(__ret&0xc0)|((y<<0)&0x3f)); })
#define set_MA_mlpin__mlp__limit1(y) ({ uint8_t __ret = ma_read_byte(1281); ma_write_byte(1281,(__ret&0xc0)|((y<<0)&0x3f)); })
#define get_obj_MA_mlpin__mlp__limit1(o) (o.read(1281) & 0x3f)>>0
#define get_MA_mlpin__mlp__limit1() ( ma_read_byte(1281) & 0x3f)>>0
//------------------------------------------------------------------------------mlpin__mlp__limit2---
// 39 KOhm upper limit
#define MA_mlpin__mlp__limit2__a 0x0502
#define MA_mlpin__mlp__limit2__len 6
#define MA_mlpin__mlp__limit2__mask 0x3f
#define MA_mlpin__mlp__limit2__shift 0x00
#define MA_mlpin__mlp__limit2__reset 0x09
#define MA_mlpin__mlp__limit2__inputonly 0
#define set_obj_MA_mlpin__mlp__limit2(o,y) ({ uint8_t __ret = o.read(1282); o.write(1282,(__ret&0xc0)|((y<<0)&0x3f)); })
#define set_MA_mlpin__mlp__limit2(y) ({ uint8_t __ret = ma_read_byte(1282); ma_write_byte(1282,(__ret&0xc0)|((y<<0)&0x3f)); })
#define get_obj_MA_mlpin__mlp__limit2(o) (o.read(1282) & 0x3f)>>0
#define get_MA_mlpin__mlp__limit2() ( ma_read_byte(1282) & 0x3f)>>0
//------------------------------------------------------------------------------mlpin__mlp__limit3---
// 30 KOhm upper limit
#define MA_mlpin__mlp__limit3__a 0x0503
#define MA_mlpin__mlp__limit3__len 6
#define MA_mlpin__mlp__limit3__mask 0x3f
#define MA_mlpin__mlp__limit3__shift 0x00
#define MA_mlpin__mlp__limit3__reset 0x0e
#define MA_mlpin__mlp__limit3__inputonly 0
#define set_obj_MA_mlpin__mlp__limit3(o,y) ({ uint8_t __ret = o.read(1283); o.write(1283,(__ret&0xc0)|((y<<0)&0x3f)); })
#define set_MA_mlpin__mlp__limit3(y) ({ uint8_t __ret = ma_read_byte(1283); ma_write_byte(1283,(__ret&0xc0)|((y<<0)&0x3f)); })
#define get_obj_MA_mlpin__mlp__limit3(o) (o.read(1283) & 0x3f)>>0
#define get_MA_mlpin__mlp__limit3() ( ma_read_byte(1283) & 0x3f)>>0
//------------------------------------------------------------------------------mlpin__mlp__limit4---
// 24 KOhm upper limit
#define MA_mlpin__mlp__limit4__a 0x0504
#define MA_mlpin__mlp__limit4__len 6
#define MA_mlpin__mlp__limit4__mask 0x3f
#define MA_mlpin__mlp__limit4__shift 0x00
#define MA_mlpin__mlp__limit4__reset 0x12
#define MA_mlpin__mlp__limit4__inputonly 0
#define set_obj_MA_mlpin__mlp__limit4(o,y) ({ uint8_t __ret = o.read(1284); o.write(1284,(__ret&0xc0)|((y<<0)&0x3f)); })
#define set_MA_mlpin__mlp__limit4(y) ({ uint8_t __ret = ma_read_byte(1284); ma_write_byte(1284,(__ret&0xc0)|((y<<0)&0x3f)); })
#define get_obj_MA_mlpin__mlp__limit4(o) (o.read(1284) & 0x3f)>>0
#define get_MA_mlpin__mlp__limit4() ( ma_read_byte(1284) & 0x3f)>>0
//------------------------------------------------------------------------------mlpin__mlp__limit5---
// 20 KOhm upper limit
#define MA_mlpin__mlp__limit5__a 0x0505
#define MA_mlpin__mlp__limit5__len 6
#define MA_mlpin__mlp__limit5__mask 0x3f
#define MA_mlpin__mlp__limit5__shift 0x00
#define MA_mlpin__mlp__limit5__reset 0x16
#define MA_mlpin__mlp__limit5__inputonly 0
#define set_obj_MA_mlpin__mlp__limit5(o,y) ({ uint8_t __ret = o.read(1285); o.write(1285,(__ret&0xc0)|((y<<0)&0x3f)); })
#define set_MA_mlpin__mlp__limit5(y) ({ uint8_t __ret = ma_read_byte(1285); ma_write_byte(1285,(__ret&0xc0)|((y<<0)&0x3f)); })
#define get_obj_MA_mlpin__mlp__limit5(o) (o.read(1285) & 0x3f)>>0
#define get_MA_mlpin__mlp__limit5() ( ma_read_byte(1285) & 0x3f)>>0
//------------------------------------------------------------------------------mlpin__mlp__limit6---
// 15 KOhm upper limit
#define MA_mlpin__mlp__limit6__a 0x0506
#define MA_mlpin__mlp__limit6__len 6
#define MA_mlpin__mlp__limit6__mask 0x3f
#define MA_mlpin__mlp__limit6__shift 0x00
#define MA_mlpin__mlp__limit6__reset 0x1c
#define MA_mlpin__mlp__limit6__inputonly 0
#define set_obj_MA_mlpin__mlp__limit6(o,y) ({ uint8_t __ret = o.read(1286); o.write(1286,(__ret&0xc0)|((y<<0)&0x3f)); })
#define set_MA_mlpin__mlp__limit6(y) ({ uint8_t __ret = ma_read_byte(1286); ma_write_byte(1286,(__ret&0xc0)|((y<<0)&0x3f)); })
#define get_obj_MA_mlpin__mlp__limit6(o) (o.read(1286) & 0x3f)>>0
#define get_MA_mlpin__mlp__limit6() ( ma_read_byte(1286) & 0x3f)>>0
//------------------------------------------------------------------------------mlpin__mlp__limit7---
// 10 KOhm upper limit
#define MA_mlpin__mlp__limit7__a 0x0507
#define MA_mlpin__mlp__limit7__len 6
#define MA_mlpin__mlp__limit7__mask 0x3f
#define MA_mlpin__mlp__limit7__shift 0x00
#define MA_mlpin__mlp__limit7__reset 0x28
#define MA_mlpin__mlp__limit7__inputonly 0
#define set_obj_MA_mlpin__mlp__limit7(o,y) ({ uint8_t __ret = o.read(1287); o.write(1287,(__ret&0xc0)|((y<<0)&0x3f)); })
#define set_MA_mlpin__mlp__limit7(y) ({ uint8_t __ret = ma_read_byte(1287); ma_write_byte(1287,(__ret&0xc0)|((y<<0)&0x3f)); })
#define get_obj_MA_mlpin__mlp__limit7(o) (o.read(1287) & 0x3f)>>0
#define get_MA_mlpin__mlp__limit7() ( ma_read_byte(1287) & 0x3f)>>0
//------------------------------------------------------------------------------mlpin__mlp__limit8---
// 10 KOhm lower limit
#define MA_mlpin__mlp__limit8__a 0x0508
#define MA_mlpin__mlp__limit8__len 6
#define MA_mlpin__mlp__limit8__mask 0x3f
#define MA_mlpin__mlp__limit8__shift 0x00
#define MA_mlpin__mlp__limit8__reset 0x36
#define MA_mlpin__mlp__limit8__inputonly 0
#define set_obj_MA_mlpin__mlp__limit8(o,y) ({ uint8_t __ret = o.read(1288); o.write(1288,(__ret&0xc0)|((y<<0)&0x3f)); })
#define set_MA_mlpin__mlp__limit8(y) ({ uint8_t __ret = ma_read_byte(1288); ma_write_byte(1288,(__ret&0xc0)|((y<<0)&0x3f)); })
#define get_obj_MA_mlpin__mlp__limit8(o) (o.read(1288) & 0x3f)>>0
#define get_MA_mlpin__mlp__limit8() ( ma_read_byte(1288) & 0x3f)>>0
//------------------------------------------------------------------------------mlpin__mlp__decrement---
// Enable auto-decrement of the select register allowing you to do sequential messurements of several pins
#define MA_mlpin__mlp__decrement__a 0x0509
#define MA_mlpin__mlp__decrement__len 1
#define MA_mlpin__mlp__decrement__mask 0x08
#define MA_mlpin__mlp__decrement__shift 0x03
#define MA_mlpin__mlp__decrement__reset 0x01
#define MA_mlpin__mlp__decrement__inputonly 0
#define set_obj_MA_mlpin__mlp__decrement(o,y) ({ uint8_t __ret = o.read(1289); o.write(1289,(__ret&0xf7)|((y<<3)&0x08)); })
#define set_MA_mlpin__mlp__decrement(y) ({ uint8_t __ret = ma_read_byte(1289); ma_write_byte(1289,(__ret&0xf7)|((y<<3)&0x08)); })
#define get_obj_MA_mlpin__mlp__decrement(o) (o.read(1289) & 0x08)>>3
#define get_MA_mlpin__mlp__decrement() ( ma_read_byte(1289) & 0x08)>>3
//------------------------------------------------------------------------------mlpin__mlp__sel---
// Start decode of the given pin (see coding on the config registers) or apply test mode load (sel=6)
#define MA_mlpin__mlp__sel__a 0x0509
#define MA_mlpin__mlp__sel__len 3
#define MA_mlpin__mlp__sel__mask 0x07
#define MA_mlpin__mlp__sel__shift 0x00
#define MA_mlpin__mlp__sel__reset 0x05
#define MA_mlpin__mlp__sel__inputonly 0
#define set_obj_MA_mlpin__mlp__sel(o,y) ({ uint8_t __ret = o.read(1289); o.write(1289,(__ret&0xf8)|((y<<0)&0x07)); })
#define set_MA_mlpin__mlp__sel(y) ({ uint8_t __ret = ma_read_byte(1289); ma_write_byte(1289,(__ret&0xf8)|((y<<0)&0x07)); })
#define get_obj_MA_mlpin__mlp__sel(o) (o.read(1289) & 0x07)>>0
#define get_MA_mlpin__mlp__sel() ( ma_read_byte(1289) & 0x07)>>0
//------------------------------------------------------------------------------mlpin__mlp__msel_cfg---
// msel pin configuration (sel=1); 0: tie high, 1: 120 KOhm
#define MA_mlpin__mlp__msel_cfg__a 0x050c
#define MA_mlpin__mlp__msel_cfg__len 4
#define MA_mlpin__mlp__msel_cfg__mask 0x0f
#define MA_mlpin__mlp__msel_cfg__shift 0x00
#define MA_mlpin__mlp__msel_cfg__reset 0x00
#define MA_mlpin__mlp__msel_cfg__inputonly 1
#define set_obj_MA_mlpin__mlp__msel_cfg(o,y) ({ uint8_t __ret = o.read(1292); o.write(1292,(__ret&0xf0)|((y<<0)&0x0f)); })
#define set_MA_mlpin__mlp__msel_cfg(y) ({ uint8_t __ret = ma_read_byte(1292); ma_write_byte(1292,(__ret&0xf0)|((y<<0)&0x0f)); })
#define get_obj_MA_mlpin__mlp__msel_cfg(o) (o.read(1292) & 0x0f)>>0
#define get_MA_mlpin__mlp__msel_cfg() ( ma_read_byte(1292) & 0x0f)>>0
//------------------------------------------------------------------------------mlpin__mlp__i2c_ad0_cfg---
// i2c_ad0 pin configuration (sel=3); 2: 62 KOhm, 3: 39 KOhm
#define MA_mlpin__mlp__i2c_ad0_cfg__a 0x050e
#define MA_mlpin__mlp__i2c_ad0_cfg__len 4
#define MA_mlpin__mlp__i2c_ad0_cfg__mask 0x0f
#define MA_mlpin__mlp__i2c_ad0_cfg__shift 0x00
#define MA_mlpin__mlp__i2c_ad0_cfg__reset 0x00
#define MA_mlpin__mlp__i2c_ad0_cfg__inputonly 1
#define set_obj_MA_mlpin__mlp__i2c_ad0_cfg(o,y) ({ uint8_t __ret = o.read(1294); o.write(1294,(__ret&0xf0)|((y<<0)&0x0f)); })
#define set_MA_mlpin__mlp__i2c_ad0_cfg(y) ({ uint8_t __ret = ma_read_byte(1294); ma_write_byte(1294,(__ret&0xf0)|((y<<0)&0x0f)); })
#define get_obj_MA_mlpin__mlp__i2c_ad0_cfg(o) (o.read(1294) & 0x0f)>>0
#define get_MA_mlpin__mlp__i2c_ad0_cfg() ( ma_read_byte(1294) & 0x0f)>>0
//------------------------------------------------------------------------------mlpin__mlp__i2c_ad1_cfg---
// i2c_ad1 pin configuration (sel=2); 4: 30 KOhm, 5: 24 KOhm
#define MA_mlpin__mlp__i2c_ad1_cfg__a 0x050d
#define MA_mlpin__mlp__i2c_ad1_cfg__len 4
#define MA_mlpin__mlp__i2c_ad1_cfg__mask 0x0f
#define MA_mlpin__mlp__i2c_ad1_cfg__shift 0x00
#define MA_mlpin__mlp__i2c_ad1_cfg__reset 0x00
#define MA_mlpin__mlp__i2c_ad1_cfg__inputonly 1
#define set_obj_MA_mlpin__mlp__i2c_ad1_cfg(o,y) ({ uint8_t __ret = o.read(1293); o.write(1293,(__ret&0xf0)|((y<<0)&0x0f)); })
#define set_MA_mlpin__mlp__i2c_ad1_cfg(y) ({ uint8_t __ret = ma_read_byte(1293); ma_write_byte(1293,(__ret&0xf0)|((y<<0)&0x0f)); })
#define get_obj_MA_mlpin__mlp__i2c_ad1_cfg(o) (o.read(1293) & 0x0f)>>0
#define get_MA_mlpin__mlp__i2c_ad1_cfg() ( ma_read_byte(1293) & 0x0f)>>0
//------------------------------------------------------------------------------mlpin__mlp__i2c_sda_cfg---
// i2c_sda pin configuration (sel=4); 6: 20 KOhm, 7: 15 KOhm
#define MA_mlpin__mlp__i2c_sda_cfg__a 0x050f
#define MA_mlpin__mlp__i2c_sda_cfg__len 4
#define MA_mlpin__mlp__i2c_sda_cfg__mask 0x0f
#define MA_mlpin__mlp__i2c_sda_cfg__shift 0x00
#define MA_mlpin__mlp__i2c_sda_cfg__reset 0x00
#define MA_mlpin__mlp__i2c_sda_cfg__inputonly 1
#define set_obj_MA_mlpin__mlp__i2c_sda_cfg(o,y) ({ uint8_t __ret = o.read(1295); o.write(1295,(__ret&0xf0)|((y<<0)&0x0f)); })
#define set_MA_mlpin__mlp__i2c_sda_cfg(y) ({ uint8_t __ret = ma_read_byte(1295); ma_write_byte(1295,(__ret&0xf0)|((y<<0)&0x0f)); })
#define get_obj_MA_mlpin__mlp__i2c_sda_cfg(o) (o.read(1295) & 0x0f)>>0
#define get_MA_mlpin__mlp__i2c_sda_cfg() ( ma_read_byte(1295) & 0x0f)>>0
//------------------------------------------------------------------------------mlpin__mlp__i2c_scl_cfg---
// i2c_scl pin configuration (sel=5); 8: 10 KOhm, 9: tie low
#define MA_mlpin__mlp__i2c_scl_cfg__a 0x0510
#define MA_mlpin__mlp__i2c_scl_cfg__len 4
#define MA_mlpin__mlp__i2c_scl_cfg__mask 0x0f
#define MA_mlpin__mlp__i2c_scl_cfg__shift 0x00
#define MA_mlpin__mlp__i2c_scl_cfg__reset 0x00
#define MA_mlpin__mlp__i2c_scl_cfg__inputonly 1
#define set_obj_MA_mlpin__mlp__i2c_scl_cfg(o,y) ({ uint8_t __ret = o.read(1296); o.write(1296,(__ret&0xf0)|((y<<0)&0x0f)); })
#define set_MA_mlpin__mlp__i2c_scl_cfg(y) ({ uint8_t __ret = ma_read_byte(1296); ma_write_byte(1296,(__ret&0xf0)|((y<<0)&0x0f)); })
#define get_obj_MA_mlpin__mlp__i2c_scl_cfg(o) (o.read(1296) & 0x0f)>>0
#define get_MA_mlpin__mlp__i2c_scl_cfg() ( ma_read_byte(1296) & 0x0f)>>0
//------------------------------------------------------------------------------mlpin__mlp__timeout---
// Number of calibration clock cycles to wait for ADC to settle
#define MA_mlpin__mlp__timeout__a 0x050a
#define MA_mlpin__mlp__timeout__len 8
#define MA_mlpin__mlp__timeout__mask 0xff
#define MA_mlpin__mlp__timeout__shift 0x00
#define MA_mlpin__mlp__timeout__reset 0x20
#define MA_mlpin__mlp__timeout__inputonly 0
#define set_obj_MA_mlpin__mlp__timeout(o,y) o.write(1290,y);
#define set_MA_mlpin__mlp__timeout(y) ma_write_byte(1290,y);
#define get_obj_MA_mlpin__mlp__timeout(o) (o.read(1290) & 0xff)>>0
#define get_MA_mlpin__mlp__timeout() ( ma_read_byte(1290) & 0xff)>>0
//------------------------------------------------------------------------------mlpin__mlp__iset---
// Number of enabled current sources in the last messurement
#define MA_mlpin__mlp__iset__a 0x050b
#define MA_mlpin__mlp__iset__len 6
#define MA_mlpin__mlp__iset__mask 0x3f
#define MA_mlpin__mlp__iset__shift 0x00
#define MA_mlpin__mlp__iset__reset 0x00
#define MA_mlpin__mlp__iset__inputonly 0
#define set_obj_MA_mlpin__mlp__iset(o,y) ({ uint8_t __ret = o.read(1291); o.write(1291,(__ret&0xc0)|((y<<0)&0x3f)); })
#define set_MA_mlpin__mlp__iset(y) ({ uint8_t __ret = ma_read_byte(1291); ma_write_byte(1291,(__ret&0xc0)|((y<<0)&0x3f)); })
#define get_obj_MA_mlpin__mlp__iset(o) (o.read(1291) & 0x3f)>>0
#define get_MA_mlpin__mlp__iset() ( ma_read_byte(1291) & 0x3f)>>0
//------------------------------------------------------------------------------mlpin__mlp__sar_disable---
// Test mode where SAR is disabled and the current sources are enabled directly from the iset register
#define MA_mlpin__mlp__sar_disable__a 0x0509
#define MA_mlpin__mlp__sar_disable__len 1
#define MA_mlpin__mlp__sar_disable__mask 0x10
#define MA_mlpin__mlp__sar_disable__shift 0x04
#define MA_mlpin__mlp__sar_disable__reset 0x00
#define MA_mlpin__mlp__sar_disable__inputonly 0
#define set_obj_MA_mlpin__mlp__sar_disable(o,y) ({ uint8_t __ret = o.read(1289); o.write(1289,(__ret&0xef)|((y<<4)&0x10)); })
#define set_MA_mlpin__mlp__sar_disable(y) ({ uint8_t __ret = ma_read_byte(1289); ma_write_byte(1289,(__ret&0xef)|((y<<4)&0x10)); })
#define get_obj_MA_mlpin__mlp__sar_disable(o) (o.read(1289) & 0x10)>>4
#define get_MA_mlpin__mlp__sar_disable() ( ma_read_byte(1289) & 0x10)>>4
//------------------------------------------------------------------------------acfg__avdd__osc_3m_ctrim---
// 3MHz RC oscillator coarse trim
#define MA_acfg__avdd__osc_3m_ctrim__a 0x0608
#define MA_acfg__avdd__osc_3m_ctrim__len 6
#define MA_acfg__avdd__osc_3m_ctrim__mask 0x3f
#define MA_acfg__avdd__osc_3m_ctrim__shift 0x00
#define MA_acfg__avdd__osc_3m_ctrim__reset 0x00
#define MA_acfg__avdd__osc_3m_ctrim__inputonly 0
#define set_obj_MA_acfg__avdd__osc_3m_ctrim(o,y) ({ uint8_t __ret = o.read(1544); o.write(1544,(__ret&0xc0)|((y<<0)&0x3f)); })
#define set_MA_acfg__avdd__osc_3m_ctrim(y) ({ uint8_t __ret = ma_read_byte(1544); ma_write_byte(1544,(__ret&0xc0)|((y<<0)&0x3f)); })
#define get_obj_MA_acfg__avdd__osc_3m_ctrim(o) (o.read(1544) & 0x3f)>>0
#define get_MA_acfg__avdd__osc_3m_ctrim() ( ma_read_byte(1544) & 0x3f)>>0
//------------------------------------------------------------------------------acfg__avdd__osc_3m_ftrim---
// 3MHz RC oscillator fine trim
#define MA_acfg__avdd__osc_3m_ftrim__a 0x0609
#define MA_acfg__avdd__osc_3m_ftrim__len 6
#define MA_acfg__avdd__osc_3m_ftrim__mask 0x3f
#define MA_acfg__avdd__osc_3m_ftrim__shift 0x00
#define MA_acfg__avdd__osc_3m_ftrim__reset 0x00
#define MA_acfg__avdd__osc_3m_ftrim__inputonly 0
#define set_obj_MA_acfg__avdd__osc_3m_ftrim(o,y) ({ uint8_t __ret = o.read(1545); o.write(1545,(__ret&0xc0)|((y<<0)&0x3f)); })
#define set_MA_acfg__avdd__osc_3m_ftrim(y) ({ uint8_t __ret = ma_read_byte(1545); ma_write_byte(1545,(__ret&0xc0)|((y<<0)&0x3f)); })
#define get_obj_MA_acfg__avdd__osc_3m_ftrim(o) (o.read(1545) & 0x3f)>>0
#define get_MA_acfg__avdd__osc_3m_ftrim() ( ma_read_byte(1545) & 0x3f)>>0
//------------------------------------------------------------------------------acfg__avdd__test_mode---
// Overwrite POR circuit
#define MA_acfg__avdd__test_mode__a 0x0608
#define MA_acfg__avdd__test_mode__len 1
#define MA_acfg__avdd__test_mode__mask 0x40
#define MA_acfg__avdd__test_mode__shift 0x06
#define MA_acfg__avdd__test_mode__reset 0x00
#define MA_acfg__avdd__test_mode__inputonly 0
#define set_obj_MA_acfg__avdd__test_mode(o,y) ({ uint8_t __ret = o.read(1544); o.write(1544,(__ret&0xbf)|((y<<6)&0x40)); })
#define set_MA_acfg__avdd__test_mode(y) ({ uint8_t __ret = ma_read_byte(1544); ma_write_byte(1544,(__ret&0xbf)|((y<<6)&0x40)); })
#define get_obj_MA_acfg__avdd__test_mode(o) (o.read(1544) & 0x40)>>6
#define get_MA_acfg__avdd__test_mode() ( ma_read_byte(1544) & 0x40)>>6
//------------------------------------------------------------------------------acfg__avdd__amux_ch1b2---
// Amux ch1 bit 2
#define MA_acfg__avdd__amux_ch1b2__a 0x0608
#define MA_acfg__avdd__amux_ch1b2__len 1
#define MA_acfg__avdd__amux_ch1b2__mask 0x80
#define MA_acfg__avdd__amux_ch1b2__shift 0x07
#define MA_acfg__avdd__amux_ch1b2__reset 0x00
#define MA_acfg__avdd__amux_ch1b2__inputonly 0
#define set_obj_MA_acfg__avdd__amux_ch1b2(o,y) ({ uint8_t __ret = o.read(1544); o.write(1544,(__ret&0x7f)|((y<<7)&0x80)); })
#define set_MA_acfg__avdd__amux_ch1b2(y) ({ uint8_t __ret = ma_read_byte(1544); ma_write_byte(1544,(__ret&0x7f)|((y<<7)&0x80)); })
#define get_obj_MA_acfg__avdd__amux_ch1b2(o) (o.read(1544) & 0x80)>>7
#define get_MA_acfg__avdd__amux_ch1b2() ( ma_read_byte(1544) & 0x80)>>7
//------------------------------------------------------------------------------acfg__avdd__amux_ch1b10---
// Amux ch1 bit 1:0
#define MA_acfg__avdd__amux_ch1b10__a 0x0609
#define MA_acfg__avdd__amux_ch1b10__len 2
#define MA_acfg__avdd__amux_ch1b10__mask 0xc0
#define MA_acfg__avdd__amux_ch1b10__shift 0x06
#define MA_acfg__avdd__amux_ch1b10__reset 0x00
#define MA_acfg__avdd__amux_ch1b10__inputonly 0
#define set_obj_MA_acfg__avdd__amux_ch1b10(o,y) ({ uint8_t __ret = o.read(1545); o.write(1545,(__ret&0x3f)|((y<<6)&0xc0)); })
#define set_MA_acfg__avdd__amux_ch1b10(y) ({ uint8_t __ret = ma_read_byte(1545); ma_write_byte(1545,(__ret&0x3f)|((y<<6)&0xc0)); })
#define get_obj_MA_acfg__avdd__amux_ch1b10(o) (o.read(1545) & 0xc0)>>6
#define get_MA_acfg__avdd__amux_ch1b10() ( ma_read_byte(1545) & 0xc0)>>6
//------------------------------------------------------------------------------acfg__avdd__vcf_trim---
// vcf_trim
#define MA_acfg__avdd__vcf_trim__a 0x060b
#define MA_acfg__avdd__vcf_trim__len 4
#define MA_acfg__avdd__vcf_trim__mask 0x0f
#define MA_acfg__avdd__vcf_trim__shift 0x00
#define MA_acfg__avdd__vcf_trim__reset 0x00
#define MA_acfg__avdd__vcf_trim__inputonly 0
#define set_obj_MA_acfg__avdd__vcf_trim(o,y) ({ uint8_t __ret = o.read(1547); o.write(1547,(__ret&0xf0)|((y<<0)&0x0f)); })
#define set_MA_acfg__avdd__vcf_trim(y) ({ uint8_t __ret = ma_read_byte(1547); ma_write_byte(1547,(__ret&0xf0)|((y<<0)&0x0f)); })
#define get_obj_MA_acfg__avdd__vcf_trim(o) (o.read(1547) & 0x0f)>>0
#define get_MA_acfg__avdd__vcf_trim() ( ma_read_byte(1547) & 0x0f)>>0
//------------------------------------------------------------------------------acfg__avdd__rxtrim---
// Trim curret try 152
#define MA_acfg__avdd__rxtrim__a 0x060a
#define MA_acfg__avdd__rxtrim__len 8
#define MA_acfg__avdd__rxtrim__mask 0xff
#define MA_acfg__avdd__rxtrim__shift 0x00
#define MA_acfg__avdd__rxtrim__reset 0x00
#define MA_acfg__avdd__rxtrim__inputonly 0
#define set_obj_MA_acfg__avdd__rxtrim(o,y) o.write(1546,y);
#define set_MA_acfg__avdd__rxtrim(y) ma_write_byte(1546,y);
#define get_obj_MA_acfg__avdd__rxtrim(o) (o.read(1546) & 0xff)>>0
#define get_MA_acfg__avdd__rxtrim() ( ma_read_byte(1546) & 0xff)>>0
//------------------------------------------------------------------------------acfg__avdd__amux_ch0---
// Amux ch0
#define MA_acfg__avdd__amux_ch0__a 0x060b
#define MA_acfg__avdd__amux_ch0__len 4
#define MA_acfg__avdd__amux_ch0__mask 0xf0
#define MA_acfg__avdd__amux_ch0__shift 0x04
#define MA_acfg__avdd__amux_ch0__reset 0x00
#define MA_acfg__avdd__amux_ch0__inputonly 0
#define set_obj_MA_acfg__avdd__amux_ch0(o,y) ({ uint8_t __ret = o.read(1547); o.write(1547,(__ret&0x0f)|((y<<4)&0xf0)); })
#define set_MA_acfg__avdd__amux_ch0(y) ({ uint8_t __ret = ma_read_byte(1547); ma_write_byte(1547,(__ret&0x0f)|((y<<4)&0xf0)); })
#define get_obj_MA_acfg__avdd__amux_ch0(o) (o.read(1547) & 0xf0)>>4
#define get_MA_acfg__avdd__amux_ch0() ( ma_read_byte(1547) & 0xf0)>>4
//------------------------------------------------------------------------------acfg__avdd__hw_id---
// Hardware id
#define MA_acfg__avdd__hw_id__a 0x060c
#define MA_acfg__avdd__hw_id__len 8
#define MA_acfg__avdd__hw_id__mask 0xff
#define MA_acfg__avdd__hw_id__shift 0x00
#define MA_acfg__avdd__hw_id__reset 0x00
#define MA_acfg__avdd__hw_id__inputonly 1
#define set_obj_MA_acfg__avdd__hw_id(o,y) o.write(1548,y);
#define set_MA_acfg__avdd__hw_id(y) ma_write_byte(1548,y);
#define get_obj_MA_acfg__avdd__hw_id(o) (o.read(1548) & 0xff)>>0
#define get_MA_acfg__avdd__hw_id() ( ma_read_byte(1548) & 0xff)>>0
//------------------------------------------------------------------------------dsp__pmem__addr0_0---
// Program memory address 0 least significant byte
#define MA_dsp__pmem__addr0_0__a 0x1000
#define MA_dsp__pmem__addr0_0__len 8
#define MA_dsp__pmem__addr0_0__mask 0xff
#define MA_dsp__pmem__addr0_0__shift 0x00
#define MA_dsp__pmem__addr0_0__reset 0x00
#define MA_dsp__pmem__addr0_0__inputonly 0
#define set_obj_MA_dsp__pmem__addr0_0(o,y) o.write(4096,y);
#define set_MA_dsp__pmem__addr0_0(y) ma_write_byte(4096,y);
#define get_obj_MA_dsp__pmem__addr0_0(o) (o.read(4096) & 0xff)>>0
#define get_MA_dsp__pmem__addr0_0() ( ma_read_byte(4096) & 0xff)>>0
//------------------------------------------------------------------------------dsp__pmem__addr0_1---
// Program memory address 0 middle byte
#define MA_dsp__pmem__addr0_1__a 0x1001
#define MA_dsp__pmem__addr0_1__len 8
#define MA_dsp__pmem__addr0_1__mask 0xff
#define MA_dsp__pmem__addr0_1__shift 0x00
#define MA_dsp__pmem__addr0_1__reset 0x00
#define MA_dsp__pmem__addr0_1__inputonly 0
#define set_obj_MA_dsp__pmem__addr0_1(o,y) o.write(4097,y);
#define set_MA_dsp__pmem__addr0_1(y) ma_write_byte(4097,y);
#define get_obj_MA_dsp__pmem__addr0_1(o) (o.read(4097) & 0xff)>>0
#define get_MA_dsp__pmem__addr0_1() ( ma_read_byte(4097) & 0xff)>>0
//------------------------------------------------------------------------------dsp__pmem__addr0_2---
// Program memory address 0 most signficant  byte (writing commits to hardblock memory)
#define MA_dsp__pmem__addr0_2__a 0x1002
#define MA_dsp__pmem__addr0_2__len 8
#define MA_dsp__pmem__addr0_2__mask 0xff
#define MA_dsp__pmem__addr0_2__shift 0x00
#define MA_dsp__pmem__addr0_2__reset 0x00
#define MA_dsp__pmem__addr0_2__inputonly 0
#define set_obj_MA_dsp__pmem__addr0_2(o,y) o.write(4098,y);
#define set_MA_dsp__pmem__addr0_2(y) ma_write_byte(4098,y);
#define get_obj_MA_dsp__pmem__addr0_2(o) (o.read(4098) & 0xff)>>0
#define get_MA_dsp__pmem__addr0_2() ( ma_read_byte(4098) & 0xff)>>0
//------------------------------------------------------------------------------dsp__pmem__addr1_0---
// Program memory address 1 least significant byte
#define MA_dsp__pmem__addr1_0__a 0x1004
#define MA_dsp__pmem__addr1_0__len 8
#define MA_dsp__pmem__addr1_0__mask 0xff
#define MA_dsp__pmem__addr1_0__shift 0x00
#define MA_dsp__pmem__addr1_0__reset 0x00
#define MA_dsp__pmem__addr1_0__inputonly 0
#define set_obj_MA_dsp__pmem__addr1_0(o,y) o.write(4100,y);
#define set_MA_dsp__pmem__addr1_0(y) ma_write_byte(4100,y);
#define get_obj_MA_dsp__pmem__addr1_0(o) (o.read(4100) & 0xff)>>0
#define get_MA_dsp__pmem__addr1_0() ( ma_read_byte(4100) & 0xff)>>0
//------------------------------------------------------------------------------dsp__pmem__addr1_1---
// Program memory address 1 middle byte
#define MA_dsp__pmem__addr1_1__a 0x1005
#define MA_dsp__pmem__addr1_1__len 8
#define MA_dsp__pmem__addr1_1__mask 0xff
#define MA_dsp__pmem__addr1_1__shift 0x00
#define MA_dsp__pmem__addr1_1__reset 0x00
#define MA_dsp__pmem__addr1_1__inputonly 0
#define set_obj_MA_dsp__pmem__addr1_1(o,y) o.write(4101,y);
#define set_MA_dsp__pmem__addr1_1(y) ma_write_byte(4101,y);
#define get_obj_MA_dsp__pmem__addr1_1(o) (o.read(4101) & 0xff)>>0
#define get_MA_dsp__pmem__addr1_1() ( ma_read_byte(4101) & 0xff)>>0
//------------------------------------------------------------------------------dsp__pmem__addr1_2---
// Program memory address 1 most signficant  byte (writing commits to hardblock memory)
#define MA_dsp__pmem__addr1_2__a 0x1006
#define MA_dsp__pmem__addr1_2__len 8
#define MA_dsp__pmem__addr1_2__mask 0xff
#define MA_dsp__pmem__addr1_2__shift 0x00
#define MA_dsp__pmem__addr1_2__reset 0x00
#define MA_dsp__pmem__addr1_2__inputonly 0
#define set_obj_MA_dsp__pmem__addr1_2(o,y) o.write(4102,y);
#define set_MA_dsp__pmem__addr1_2(y) ma_write_byte(4102,y);
#define get_obj_MA_dsp__pmem__addr1_2(o) (o.read(4102) & 0xff)>>0
#define get_MA_dsp__pmem__addr1_2() ( ma_read_byte(4102) & 0xff)>>0
//------------------------------------------------------------------------------otp__otpmem__byte_0---
// OTP memory byte
#define MA_otp__otpmem__byte_0__a 0x8000
#define MA_otp__otpmem__byte_0__len 8
#define MA_otp__otpmem__byte_0__mask 0xff
#define MA_otp__otpmem__byte_0__shift 0x00
#define MA_otp__otpmem__byte_0__reset 0xff
#define MA_otp__otpmem__byte_0__inputonly 0
#define set_obj_MA_otp__otpmem__byte_0(o,y) o.write(32768,y);
#define set_MA_otp__otpmem__byte_0(y) ma_write_byte(32768,y);
#define get_obj_MA_otp__otpmem__byte_0(o) (o.read(32768) & 0xff)>>0
#define get_MA_otp__otpmem__byte_0() ( ma_read_byte(32768) & 0xff)>>0
//------------------------------------------------------------------------------otp__otpmem__byte_1---
// OTP memory byte
#define MA_otp__otpmem__byte_1__a 0x8001
#define MA_otp__otpmem__byte_1__len 8
#define MA_otp__otpmem__byte_1__mask 0xff
#define MA_otp__otpmem__byte_1__shift 0x00
#define MA_otp__otpmem__byte_1__reset 0xff
#define MA_otp__otpmem__byte_1__inputonly 0
#define set_obj_MA_otp__otpmem__byte_1(o,y) o.write(32769,y);
#define set_MA_otp__otpmem__byte_1(y) ma_write_byte(32769,y);
#define get_obj_MA_otp__otpmem__byte_1(o) (o.read(32769) & 0xff)>>0
#define get_MA_otp__otpmem__byte_1() ( ma_read_byte(32769) & 0xff)>>0
//------------------------------------------------------------------------------otp__otpmem__byte_2---
// OTP memory byte
#define MA_otp__otpmem__byte_2__a 0x8002
#define MA_otp__otpmem__byte_2__len 8
#define MA_otp__otpmem__byte_2__mask 0xff
#define MA_otp__otpmem__byte_2__shift 0x00
#define MA_otp__otpmem__byte_2__reset 0xff
#define MA_otp__otpmem__byte_2__inputonly 0
#define set_obj_MA_otp__otpmem__byte_2(o,y) o.write(32770,y);
#define set_MA_otp__otpmem__byte_2(y) ma_write_byte(32770,y);
#define get_obj_MA_otp__otpmem__byte_2(o) (o.read(32770) & 0xff)>>0
#define get_MA_otp__otpmem__byte_2() ( ma_read_byte(32770) & 0xff)>>0
//------------------------------------------------------------------------------otp__otpmem__byte_3---
// OTP memory byte
#define MA_otp__otpmem__byte_3__a 0x8003
#define MA_otp__otpmem__byte_3__len 8
#define MA_otp__otpmem__byte_3__mask 0xff
#define MA_otp__otpmem__byte_3__shift 0x00
#define MA_otp__otpmem__byte_3__reset 0xff
#define MA_otp__otpmem__byte_3__inputonly 0
#define set_obj_MA_otp__otpmem__byte_3(o,y) o.write(32771,y);
#define set_MA_otp__otpmem__byte_3(y) ma_write_byte(32771,y);
#define get_obj_MA_otp__otpmem__byte_3(o) (o.read(32771) & 0xff)>>0
#define get_MA_otp__otpmem__byte_3() ( ma_read_byte(32771) & 0xff)>>0
//------------------------------------------------------------------------------otp__otptrack__datecode3---
// Finaltest date code byte 3
#define MA_otp__otptrack__datecode3__a 0x81f1
#define MA_otp__otptrack__datecode3__len 8
#define MA_otp__otptrack__datecode3__mask 0xff
#define MA_otp__otptrack__datecode3__shift 0x00
#define MA_otp__otptrack__datecode3__reset 0xff
#define MA_otp__otptrack__datecode3__inputonly 0
#define set_obj_MA_otp__otptrack__datecode3(o,y) o.write(33265,y);
#define set_MA_otp__otptrack__datecode3(y) ma_write_byte(33265,y);
#define get_obj_MA_otp__otptrack__datecode3(o) (o.read(33265) & 0xff)>>0
#define get_MA_otp__otptrack__datecode3() ( ma_read_byte(33265) & 0xff)>>0
//------------------------------------------------------------------------------otp__otptrack__datecode2---
// Finaltest date code byte 2
#define MA_otp__otptrack__datecode2__a 0x81f2
#define MA_otp__otptrack__datecode2__len 8
#define MA_otp__otptrack__datecode2__mask 0xff
#define MA_otp__otptrack__datecode2__shift 0x00
#define MA_otp__otptrack__datecode2__reset 0xff
#define MA_otp__otptrack__datecode2__inputonly 0
#define set_obj_MA_otp__otptrack__datecode2(o,y) o.write(33266,y);
#define set_MA_otp__otptrack__datecode2(y) ma_write_byte(33266,y);
#define get_obj_MA_otp__otptrack__datecode2(o) (o.read(33266) & 0xff)>>0
#define get_MA_otp__otptrack__datecode2() ( ma_read_byte(33266) & 0xff)>>0
//------------------------------------------------------------------------------otp__otptrack__testsite---
// 0-23: Wafernumber, 25: Meruslab, 26: Salland preproduction, 27: ASE, 31:untested
#define MA_otp__otptrack__testsite__a 0x81f0
#define MA_otp__otptrack__testsite__len 5
#define MA_otp__otptrack__testsite__mask 0x1f
#define MA_otp__otptrack__testsite__shift 0x00
#define MA_otp__otptrack__testsite__reset 0x1f
#define MA_otp__otptrack__testsite__inputonly 0
#define set_obj_MA_otp__otptrack__testsite(o,y) ({ uint8_t __ret = o.read(33264); o.write(33264,(__ret&0xe0)|((y<<0)&0x1f)); })
#define set_MA_otp__otptrack__testsite(y) ({ uint8_t __ret = ma_read_byte(33264); ma_write_byte(33264,(__ret&0xe0)|((y<<0)&0x1f)); })
#define get_obj_MA_otp__otptrack__testsite(o) (o.read(33264) & 0x1f)>>0
#define get_MA_otp__otptrack__testsite() ( ma_read_byte(33264) & 0x1f)>>0
//------------------------------------------------------------------------------otp__otptrack__testversion---
// Test program version
#define MA_otp__otptrack__testversion__a 0x81f0
#define MA_otp__otptrack__testversion__len 3
#define MA_otp__otptrack__testversion__mask 0xe0
#define MA_otp__otptrack__testversion__shift 0x05
#define MA_otp__otptrack__testversion__reset 0x07
#define MA_otp__otptrack__testversion__inputonly 0
#define set_obj_MA_otp__otptrack__testversion(o,y) ({ uint8_t __ret = o.read(33264); o.write(33264,(__ret&0x1f)|((y<<5)&0xe0)); })
#define set_MA_otp__otptrack__testversion(y) ({ uint8_t __ret = ma_read_byte(33264); ma_write_byte(33264,(__ret&0x1f)|((y<<5)&0xe0)); })
#define get_obj_MA_otp__otptrack__testversion(o) (o.read(33264) & 0xe0)>>5
#define get_MA_otp__otptrack__testversion() ( ma_read_byte(33264) & 0xe0)>>5
//------------------------------------------------------------------------------otp__otptrack__datecode1---
// Finaltest date code byte 1
#define MA_otp__otptrack__datecode1__a 0x81f3
#define MA_otp__otptrack__datecode1__len 8
#define MA_otp__otptrack__datecode1__mask 0xff
#define MA_otp__otptrack__datecode1__shift 0x00
#define MA_otp__otptrack__datecode1__reset 0xff
#define MA_otp__otptrack__datecode1__inputonly 0
#define set_obj_MA_otp__otptrack__datecode1(o,y) o.write(33267,y);
#define set_MA_otp__otptrack__datecode1(y) ma_write_byte(33267,y);
#define get_obj_MA_otp__otptrack__datecode1(o) (o.read(33267) & 0xff)>>0
#define get_MA_otp__otptrack__datecode1() ( ma_read_byte(33267) & 0xff)>>0
//------------------------------------------------------------------------------otp__otptrack__datecode0---
// Finaltest date code byte 0, seconds
#define MA_otp__otptrack__datecode0__a 0x81f4
#define MA_otp__otptrack__datecode0__len 8
#define MA_otp__otptrack__datecode0__mask 0xff
#define MA_otp__otptrack__datecode0__shift 0x00
#define MA_otp__otptrack__datecode0__reset 0xff
#define MA_otp__otptrack__datecode0__inputonly 0
#define set_obj_MA_otp__otptrack__datecode0(o,y) o.write(33268,y);
#define set_MA_otp__otptrack__datecode0(y) ma_write_byte(33268,y);
#define get_obj_MA_otp__otptrack__datecode0(o) (o.read(33268) & 0xff)>>0
#define get_MA_otp__otptrack__datecode0() ( ma_read_byte(33268) & 0xff)>>0
//------------------------------------------------------------------------------otp__otptrack__testresult---
// msb:tested,bit2:afirbist,bit1:dspmembist,bit0:vdd_reg
#define MA_otp__otptrack__testresult__a 0x81f5
#define MA_otp__otptrack__testresult__len 8
#define MA_otp__otptrack__testresult__mask 0xff
#define MA_otp__otptrack__testresult__shift 0x00
#define MA_otp__otptrack__testresult__reset 0xff
#define MA_otp__otptrack__testresult__inputonly 0
#define set_obj_MA_otp__otptrack__testresult(o,y) o.write(33269,y);
#define set_MA_otp__otptrack__testresult(y) ma_write_byte(33269,y);
#define get_obj_MA_otp__otptrack__testresult(o) (o.read(33269) & 0xff)>>0
#define get_MA_otp__otptrack__testresult() ( ma_read_byte(33269) & 0xff)>>0
/* db_version 2 entries*/
// Define reset value for core and mlpin segment 
#ifndef DISABLE_RESET_VALUES
int MA120_reset[0x600] = { 0x32,0x03,0x00,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x12,0x12,0x00,0x00,0x00, // 0x0000 to 0x000f 
                           0x08,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0010 to 0x001f 
                           0x00,0x00,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0020 to 0x002f 
                           0x3f,0x57,0x00,0x3b,0x8c,0x00,0x33,0xc8,0x00,0x22,0xc8,0x00,0x7e,0x57,0x00,0x7a, // 0x0030 to 0x003f 
                           0x8c,0x00,0x71,0xc8,0x00,0x61,0xc8,0x00,0xfd,0x57,0x00,0xf9,0x8c,0x00,0xf1,0xc8, // 0x0040 to 0x004f 
                           0x00,0x72,0x57,0x00,0x7e,0x57,0x00,0x76,0x8c,0x00,0x77,0xc8,0x00,0x65,0xc8,0x00, // 0x0050 to 0x005f 
                           0x16,0xc8,0x00,0x15,0xc8,0x00,0x15,0xc8,0x00,0x15,0xc8,0x00,0x00,0x21,0x70,0x98, // 0x0060 to 0x006f 
                           0x0d,0x00,0x31,0x70,0x98,0x0d,0x44,0x65,0x75,0x9a,0x08,0x44,0x75,0x75,0x9a,0x08, // 0x0070 to 0x007f 
                           0x88,0xa9,0x76,0x93,0x00,0x88,0x79,0x76,0x93,0x00,0x77,0x13,0x23,0x01,0x6f,0x0a, // 0x0080 to 0x008f 
                           0x0f,0x1e,0x43,0x46,0x11,0x40,0x40,0x20,0x40,0x40,0x00,0x12,0x04,0x44,0x65,0x75, // 0x0090 to 0x009f 
                           0x9a,0x00,0x44,0x65,0x75,0x9a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00a0 to 0x00af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00b0 to 0x00bf 
                           0x96,0x20,0x08,0x0c,0x20,0x00,0x3f,0x00,0x3b,0x7d,0x73,0x40,0x00,0x03,0x00,0x0e, // 0x00c0 to 0x00cf 
                           0x00,0x0c,0x00,0x0a,0x00,0x08,0x10,0x20,0x0a,0xd4,0x10,0x00,0x00,0x85,0x40,0x00, // 0x00d0 to 0x00df 
                           0x00,0x0a,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x00,0x01,0x00,0x00, // 0x00e0 to 0x00ef 
                           0x10,0x02,0x00,0x00,0x00,0x00,0x10,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00f0 to 0x00ff 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x1f, // 0x0100 to 0x010f 
                           0x1f,0x77,0x00,0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0110 to 0x011f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0120 to 0x012f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0130 to 0x013f 
                           0xba,0x20,0x3a,0x43,0x13,0x01,0x83,0x00,0xc0,0x00,0x80,0x00,0x80,0x00,0x80,0x00, // 0x0140 to 0x014f 
                           0x80,0x01,0xc2,0x00,0xc0,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0150 to 0x015f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0160 to 0x016f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0170 to 0x017f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x06,0x18,0x00, // 0x0180 to 0x018f 
                           0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0190 to 0x019f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01a0 to 0x01af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01b0 to 0x01bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01c0 to 0x01cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01d0 to 0x01df 
                           0x03,0x02,0xcd,0xcc,0x00,0x80,0x00,0x80,0x23,0x1a,0x73,0x03,0x2f,0x54,0x52,0x69, // 0x01e0 to 0x01ef 
                           0x0c,0x1f,0x0d,0x75,0xa5,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01f0 to 0x01ff 
                           0x0f,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0200 to 0x020f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0210 to 0x021f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0220 to 0x022f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0230 to 0x023f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0240 to 0x024f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x32,0x64,0x00, // 0x0250 to 0x025f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0260 to 0x026f 
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
                           0x01,0x05,0x09,0x0e,0x12,0x16,0x1c,0x28,0x36,0x0d,0x20,0x00,0x00,0x00,0x00,0x00, // 0x0500 to 0x050f 
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
int MA120_mapped[0x600] = { 0x7f,0x03,0x1f,0xff,0xff,0x0f,0x03,0xff,0xff,0x1f,0x1f,0x1f,0x1f,0xff,0xff,0x00, // 0x0000 to 0x000f 
                           0xff,0x1f,0x1f,0x1f,0x1f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f, // 0x0010 to 0x001f 
                           0x3f,0x3f,0x3f,0x3f,0x3f,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0020 to 0x002f 
                           0xff,0xff,0x0f,0xff,0xff,0x0f,0xff,0xff,0x0f,0xff,0xff,0x0f,0xff,0xff,0x0f,0xff, // 0x0030 to 0x003f 
                           0xff,0x0f,0xff,0xff,0x0f,0xff,0xff,0x0f,0xff,0xff,0x0f,0xff,0xff,0x0f,0xff,0xff, // 0x0040 to 0x004f 
                           0x0f,0xff,0xff,0x0f,0xff,0xff,0x0f,0xff,0xff,0x0f,0xff,0xff,0x0f,0xff,0xff,0x0f, // 0x0050 to 0x005f 
                           0xff,0xff,0x0f,0xff,0xff,0x0f,0xff,0xff,0x0f,0xff,0xff,0x0f,0xff,0xff,0xff,0xff, // 0x0060 to 0x006f 
                           0x0f,0xff,0xff,0xff,0xff,0x0f,0xff,0xff,0xff,0xff,0x0f,0xff,0xff,0xff,0xff,0x0f, // 0x0070 to 0x007f 
                           0xff,0xff,0xff,0xff,0x0f,0xff,0xff,0xff,0xff,0x0f,0xff,0xff,0xff,0xff,0xff,0xff, // 0x0080 to 0x008f 
                           0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff, // 0x0090 to 0x009f 
                           0xff,0x0f,0xff,0xff,0xff,0xff,0x0f,0xff,0x07,0x3f,0xff,0xff,0x00,0x00,0x00,0x00, // 0x00a0 to 0x00af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00b0 to 0x00bf 
                           0xff,0xff,0x0f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff, // 0x00c0 to 0x00cf 
                           0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xff,0xff,0xff, // 0x00d0 to 0x00df 
                           0x3f,0xff,0xff,0xff,0x3f,0xff,0xff,0xff,0x3f,0xff,0xff,0xff,0x3f,0xff,0x3f,0xff, // 0x00e0 to 0x00ef 
                           0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff, // 0x00f0 to 0x00ff 
                           0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0x03,0x1f,0x1f,0xff,0x3f,0x01,0x1f, // 0x0100 to 0x010f 
                           0x1f,0xff,0x3f,0xff,0x0f,0x7f,0x00,0x00,0x1f,0x1f,0xff,0x3f,0x1f,0x1f,0xff,0x3f, // 0x0110 to 0x011f 
                           0x1f,0x1f,0xff,0x3f,0x1f,0x1f,0xff,0x3f,0x07,0xff,0xff,0xff,0xff,0xff,0xff,0x00, // 0x0120 to 0x012f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0130 to 0x013f 
                           0xff,0x3f,0x3f,0xff,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff, // 0x0140 to 0x014f 
                           0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x3f,0x00,0xff,0x00, // 0x0150 to 0x015f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0160 to 0x016f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0170 to 0x017f 
                           0x7f,0xff,0x3f,0x3f,0x07,0xff,0x7f,0x1f,0x1f,0x3f,0x07,0xff,0x1f,0x1f,0x1f,0x1f, // 0x0180 to 0x018f 
                           0x3f,0x1f,0x07,0x1f,0x0f,0x00,0x00,0x00,0xff,0x01,0xff,0x1f,0x0f,0x1f,0x1f,0x7f, // 0x0190 to 0x019f 
                           0x0f,0x1f,0x0f,0x1f,0xff,0x03,0xff,0xff,0x1f,0xff,0x01,0x1f,0x3f,0xff,0x3f,0x1f, // 0x01a0 to 0x01af 
                           0x3f,0xff,0x3f,0xff,0x3f,0x1f,0x1f,0x1f,0xff,0x3f,0xff,0x3f,0x3f,0x3f,0xff,0x3f, // 0x01b0 to 0x01bf 
                           0x1f,0x3f,0x1f,0x3f,0xff,0x3f,0xff,0x3f,0x3f,0x3f,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01c0 to 0x01cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01d0 to 0x01df 
                           0xff,0x07,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,0xff,0x03,0xff,0xff,0xff,0xff, // 0x01e0 to 0x01ef 
                           0xff,0xff,0x3f,0xff,0xff,0x07,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01f0 to 0x01ff 
                           0x0f,0xf7,0xff,0xff,0xff,0x00,0xf0,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0x03, // 0x0200 to 0x020f 
                           0xff,0x03,0xff,0xff,0x03,0xff,0x03,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0210 to 0x021f 
                           0x07,0x03,0x0f,0x0f,0x0f,0x0f,0x3f,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0220 to 0x022f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0230 to 0x023f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0240 to 0x024f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x3d,0x00,0x00,0xff,0xff,0xff, // 0x0250 to 0x025f 
                           0x07,0xff,0x0f,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0260 to 0x026f 
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
int MA120_volatile[0x600] = { 0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0000 to 0x000f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0010 to 0x001f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0020 to 0x002f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0030 to 0x003f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0040 to 0x004f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0050 to 0x005f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0060 to 0x006f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0070 to 0x007f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0080 to 0x008f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0090 to 0x009f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x01,0x01,0x00,0x00,0x00,0x00, // 0x00a0 to 0x00af 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00b0 to 0x00bf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00c0 to 0x00cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00d0 to 0x00df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00e0 to 0x00ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x00f0 to 0x00ff 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0100 to 0x010f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01, // 0x0110 to 0x011f 
                           0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x03,0x01,0x01,0x01,0x01,0x02,0x02,0x00, // 0x0120 to 0x012f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0130 to 0x013f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0140 to 0x014f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00, // 0x0150 to 0x015f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0160 to 0x016f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0170 to 0x017f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0180 to 0x018f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x01,0x03,0x03,0x01,0x01,0x05,0x07, // 0x0190 to 0x019f 
                           0x04,0x05,0x04,0x05,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01, // 0x01a0 to 0x01af 
                           0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01, // 0x01b0 to 0x01bf 
                           0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01c0 to 0x01cf 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01d0 to 0x01df 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01e0 to 0x01ef 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x01f0 to 0x01ff 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x01,0x01,0x01,0x01, // 0x0200 to 0x020f 
                           0x01,0x01,0x03,0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0210 to 0x021f 
                           0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0220 to 0x022f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0230 to 0x023f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0240 to 0x024f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0250 to 0x025f 
                           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0x0260 to 0x026f 
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
