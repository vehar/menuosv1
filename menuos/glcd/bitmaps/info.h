/* info bitmap file for GLCD library */
/* Bitmap created from info.bmp      */
/* Date: 11 Jan 2013      */
/* Image Pixels = 135    */
/* Image Bytes  = 30     */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef info_H
#define info_H

static uint8_t info[] PROGMEM = {
  15, // width
  9, // height

  /* page 0 (lines 0-7) */
  0x0,0x0,0x0,0x0,0xf8,0x8c,0x1,0x80,0x80,0x0,0x0,0x0,0x0,0x0,0x0,
  /* page 1 (lines 8-15) */
  0x0,0x0,0x0,0x0,0x0,0x1,0x1,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
};
#endif