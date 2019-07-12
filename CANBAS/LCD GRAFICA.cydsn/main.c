/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"


const unsigned char inicio [] = {
0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x38, 0x38, 0x38, 0xF8, 0xF8, 0xF0, 0xE0, 0x00, 0x00,
0x00, 0x00, 0xE0, 0xF8, 0xF8, 0x78, 0xF8, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8,
0xF8, 0x38, 0x38, 0x78, 0xF8, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0xF8, 0x78, 0xF8,
0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x38, 0x38, 0x38, 0xF8, 0xF8, 0xF0,
0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x0F, 0x3F, 0xFF, 0xFF, 0xFB, 0xE1, 0x80, 0xC0,
0xF8, 0xFF, 0xFF, 0x3F, 0x3B, 0x38, 0x3B, 0x3F, 0xFF, 0xFE, 0xF0, 0x80, 0x00, 0xFF, 0xFF, 0xFF,
0xFF, 0xE0, 0xE0, 0xE0, 0xF9, 0xFF, 0x7F, 0x1F, 0x80, 0xF0, 0xFE, 0xFF, 0x3F, 0x3B, 0x38, 0x39,
0x3F, 0xFF, 0xFF, 0xF8, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x0F, 0x1F, 0x7F, 0xFF, 0xFB,
0xE1, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1F, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0x87,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xC0, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x80, 0xFF, 0x87, 0x0E, 0x18, 0x30, 0xE1, 0xFF, 0x00, 0x88, 0xFB, 0x80, 0x00, 0x78,
0xC0, 0x84, 0x88, 0x00, 0x78, 0x84, 0x84, 0x78, 0x30, 0x00, 0xFF, 0xFF, 0x00, 0x60, 0xE4, 0x54,
0xF8, 0x80, 0x40, 0x98, 0xB4, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x81, 0xFF, 0x81, 0x11, 0x0F, 0x06,
0x40, 0xE8, 0x54, 0xFC, 0xF0, 0x00, 0xD8, 0xB4, 0xB4, 0x60, 0x00, 0xFF, 0x84, 0x00, 0x88, 0xF8,
0x88, 0x08, 0x60, 0xE0, 0x54, 0xF8, 0x80, 0x00, 0xF8, 0xF8, 0x08, 0x0C, 0xF8, 0x80, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF8, 0xF8, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x9F, 0xCF, 0xCF, 0xCF, 0xEC, 0xE4, 0xE7, 0xE7, 0xE7, 0xE7, 0xF7,
0xF3, 0xF3, 0xF1, 0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xE0, 0xE0, 0x20, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x20, 0xE0, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xF0, 0xE0, 0x07, 0x0F, 0xCF, 0xCF, 0xCF, 0xCF, 0xCF, 0xEF, 0xE7, 0xEF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x03, 0x00, 0x12, 0x1F, 0x12, 0x01, 0x18, 0x18, 0x15, 0x1F,
0x1E, 0x00, 0x1E, 0x1F, 0x01, 0x03, 0x1F, 0x00, 0x0C, 0x1E, 0x11, 0x01, 0x00, 0x12, 0x1F, 0x10,
0x00, 0x17, 0x05, 0x1D, 0x08, 0x0C, 0x1E, 0x11, 0x01, 0x00, 0x0E, 0x1F, 0x01, 0x11, 0x1F, 0x00,
0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x00, 0x00, 0x10, 0x04, 0x1F, 0x11, 0x11, 0x1F, 0x04, 0x00,
0xFF, 0x12, 0x01, 0x13, 0x0E, 0x00, 0x0E, 0x15, 0x15, 0x07, 0x00, 0x13, 0x19, 0x0D, 0x03, 0x11,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x77, 0xE7, 0xF7, 0xF3, 0xF9, 0xF8,
0xF9, 0xF9, 0xF9, 0xF9, 0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x08, 0xF8, 0xF8, 0x08, 0x00, 0xC0, 0x40, 0x40, 0xC0, 0x80, 0x08, 0xF8, 0xC8, 0x40,
0xC0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x40, 0xC0, 0xC0, 0x40, 0xC0, 0x80, 0x00, 0x00,
0x00, 0x00, 0xE0, 0x10, 0x08, 0x08, 0x08, 0x88, 0x98, 0x80, 0x00, 0xC0, 0x50, 0x08, 0xC0, 0x80,
0x40, 0xC0, 0xC0, 0x40, 0xC0, 0x80, 0x40, 0xC0, 0xC0, 0x00, 0x80, 0xC0, 0x00, 0xC0, 0x80, 0x40,
0x01, 0x81, 0xC0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x20, 0x1F, 0x0F, 0x00, 0x01, 0x03, 0x04, 0x04, 0x03, 0x01, 0x04, 0x07, 0x04, 0x00,
0x07, 0x07, 0x00, 0x07, 0x07, 0x02, 0x07, 0x04, 0x04, 0x07, 0x04, 0x00, 0x07, 0x07, 0x00, 0x00,
0x00, 0x00, 0x01, 0x03, 0x04, 0x04, 0x04, 0x06, 0x03, 0x00, 0x00, 0x07, 0x04, 0x04, 0x03, 0x01,
0x04, 0x07, 0x04, 0x04, 0x07, 0x07, 0x00, 0x07, 0x07, 0x00, 0x03, 0x06, 0x04, 0x04, 0x00, 0x04,
0x06, 0x05, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03,
0x03, 0x07, 0x07, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x07, 0x07, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


const unsigned char tabla[1024] = {     
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0x40, 0x60, 0x60, 0x20, 0x30, 0x10, 0x10, 0x18, 0x18,
		0x08, 0x08, 0x0C, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x06, 0x06, 0x06, 0x06, 0x02, 0x02, 0x02, 0xFE,
		0xFE, 0x02, 0x02, 0x02, 0x02, 0x06, 0x06, 0x06, 0x06, 0x04, 0x04, 0x04, 0x04, 0x0C, 0x08, 0x08,
		0x08, 0x18, 0x10, 0x10, 0x30, 0x20, 0x20, 0x60, 0x40, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x20, 0x10, 0x18, 0x08, 0x0C,
		0x06, 0x02, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xC0,
		0xC1, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x06,
		0x04, 0x0C, 0x18, 0x10, 0x30, 0x60, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
		0xC0, 0x60, 0x30, 0x18, 0x3C, 0x66, 0xC3, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x80, 0xC0, 0x40, 0x60, 0x30, 0x10, 0x18, 0x08, 0x0C, 0x04, 0x06, 0x06, 0x02, 0x03,
		0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
		0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01,
		0x03, 0x02, 0x02, 0x06, 0x04, 0x0C, 0x08, 0x18, 0x10, 0x30, 0x20, 0x60, 0xC0, 0x80, 0x80, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0xC3, 0x66, 0x3C, 0x18, 0x30, 0x60, 0xC0,
		0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x60, 0x38, 0x0C, 0x06, 0x03,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x80, 0xC0, 0x60, 0x30, 0x78, 0xCC, 0x86,
		0x02, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x40,
		0x60, 0x60, 0x20, 0x30, 0x10, 0x10, 0x18, 0x18, 0x08, 0x08, 0x08, 0x0C, 0x0C, 0x0C, 0x0C, 0xFC,
		0xFC, 0x0C, 0x0C, 0x0C, 0x0C, 0x08, 0x08, 0x08, 0x08, 0x18, 0x10, 0x10, 0x30, 0x20, 0x20, 0x60,
		0x40, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03,
		0x86, 0xCC, 0x78, 0x30, 0x60, 0xC0, 0x80, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x01, 0x03, 0x0E, 0x18, 0x70, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x78, 0x1C, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0xC0, 0x70, 0x18, 0x0C, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
		0x03, 0x02, 0x00, 0x80, 0xC0, 0x60, 0xF0, 0x98, 0x0C, 0x04, 0x06, 0x03, 0x01, 0x01, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x83,
		0x83, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x01, 0x03, 0x02, 0x06, 0x0C, 0x98, 0xF0, 0x70, 0x60, 0xC0, 0x00, 0x02, 0x03,
		0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x1C, 0x30, 0xE0, 0x80, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0E, 0x38, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0xE0, 0x3C, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0xC0, 0x70, 0x1C, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x70,
		0x18, 0x0E, 0x03, 0x01, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x04, 0x00, 0x00, 0x80, 0xC0, 0xE0,
		0x30, 0x18, 0x08, 0x0C, 0x04, 0x06, 0x02, 0x03, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x3F,
		0x3F, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x03, 0x03, 0x02, 0x06, 0x04, 0x0C, 0x18, 0x10,
		0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x04, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x1C,
		0x30, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0E, 0x38, 0xE0,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1E, 0xF0, 0x80, 0x00, 0x00,
		0x00, 0xE0, 0xFE, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x3E,
		0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x3C, 0x07, 0x01, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x70, 0x1C, 0x06, 0x03, 0x01, 0x00, 0x01,
		0x03, 0x06, 0x0C, 0x08, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x20, 0x30, 0x10, 0x10, 0x18, 0x08, 0xF8,
		0xF8, 0x08, 0x18, 0x18, 0x10, 0x30, 0x20, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x0C, 0x06, 0x03,
		0x01, 0x00, 0x00, 0x01, 0x07, 0x0C, 0x38, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x03, 0x1E, 0xF0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
		0x1F, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1F, 0xF8, 0x00,
		0x00, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFC, 0xBF, 0x80,
		0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFE, 0x87, 0x80, 0x80, 0x80, 0x80,
		0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xE0, 0xFE, 0x83, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
		0x80, 0x80, 0x80, 0xF0, 0xBC, 0x87, 0x81, 0x81, 0x83, 0x86, 0x8C, 0x98, 0x80, 0xC0, 0x60, 0x27,
		0x37, 0x20, 0x60, 0xC8, 0x98, 0x8C, 0x86, 0x83, 0x81, 0x81, 0x83, 0x8E, 0xF8, 0x80, 0x80, 0x80,
		0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x9F, 0xF8, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
		0x80, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xF0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
		0x80, 0x83, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xBF, 0xFE
};
//-------Funciones LCD---------

void lcd_pulso(){
   E_Write(1);       // Pulse the enable pin
   CyDelayUs(2);
    E_Write(0);
   CyDelayUs(2);
   return;
}

void lcd_comando(char data2){
   RS_Write(0);
   DB_Write(data2);
   lcd_pulso();
   return;
}

void lcd_dato(char data1){
   RS_Write(1);
    DB_Write(data1);
   lcd_pulso();
   return;
}
void lcd_chip(char b){
	if(b==1){
        CS_Write(2);
    //GLCD_CS1=0;      // Reset the chip select lines
    //GLCD_CS2=1;
}else{
    CS_Write(1);
	 //GLCD_CS1=1;      // Reset the chip select lines
	 //GLCD_CS2=0;
}
   return;
}


void lcd_init(){
         
     RST_Write(1);	//Reinicia LCD
     CyDelayUs(2000);
     RST_Write(0);
     CyDelayUs(2000);
     RST_Write(1);
     CyDelayUs(50000);

     lcd_chip(0); //Primera Mitad Pantalla
     lcd_comando(0x3E);
     lcd_comando(0xC0);// Linea de desplegado inicial en cero
     lcd_comando(0xB8);// Y=0
     lcd_comando(0x40);// X=0
     lcd_comando(0x3F);
     
     lcd_chip(1);// Segunda Mitad Pantalla
     lcd_comando(0x3E);//Apaga el display
     lcd_comando(0xC0);// Linea de desplegado inicial en cero
     lcd_comando(0xB8);// Y=0
     lcd_comando(0x40);// X=0
     lcd_comando(0x3F);
     return;
}
void lcd_inicio(){
   unsigned char cont,w;
   unsigned int index=0;//llega a 1024
   for(cont=0;cont<8;cont++){
   lcd_chip(0);//Primera Mitad
   lcd_comando(0b10111000| cont);//Pagina X seleccionada
   lcd_comando(0b11000000);//Linea 0
   for(w=0;w<64;w++){
   lcd_dato(inicio[index]);
   index++;
   }
   lcd_chip(1);//Primera Mitad
   lcd_comando(0b10111000| cont);//Pagina X seleccionada
   lcd_comando(0b11000000);//Linea 0
   for(w=0;w<64;w++){
   lcd_dato(inicio[index]);
   index++;
   }
   }
   return;
}


void lcd_radar(){
   unsigned char cont,w;
   unsigned int index=0;//llega a 1024
   lcd_comando(0b11000000);//Linea 0
   for(cont=0;cont<8;cont++){
   lcd_chip(0);//Primera Mitad
   lcd_comando(0b10111000| cont);//Pagina X seleccionada
   lcd_comando(0b11000000);//Linea 0
   for(w=0;w<64;w++){
   lcd_dato(tabla[index]);
   index++;
   }
   lcd_chip(1);//Primera Mitad
   lcd_comando(0b10111000| cont);//Pagina X seleccionada
   lcd_comando(0b11000000);//Linea 0
   for(w=0;w<64;w++){
   lcd_dato(tabla[index]);
   index++;
   }
   }
   return;
}

void lcd_clear(){
	char x, y,aux;
	RS_Write(0);
   for(y=0;y<8;y++){   
      lcd_chip(0);//Primera Mitad
      aux=0b10111000| y;
      lcd_comando(aux);//Pagina X seleccionada
      lcd_comando(0b11000000);//Linea 0
      for(x=0;x<64;x++){
         lcd_dato(0x00);
      }
      lcd_chip(1);//Segunda Mitad
      aux=0b10111000| y;
      lcd_comando(aux);//Pagina X seleccionada
      lcd_comando(0b11000000);//Linea 0
      for(x=0;x<64;x++){
         lcd_dato(0b00000000);//Se incrementan las posiciones y automaticamente
      }
   }
   return;
}


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
     lcd_init();//Inicializa LCD
	 //lcd_clear();//Limpia la lcd 
	 lcd_inicio();
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
