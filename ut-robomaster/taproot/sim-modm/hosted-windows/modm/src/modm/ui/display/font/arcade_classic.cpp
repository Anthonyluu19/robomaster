/*
 * Copyright (c) 2010-2012, Fabian Greif
 * Copyright (c) 2012-2013, Niklas Hauser
 * Copyright (c) 2013, Kevin Läufer
 * Copyright (c) 2013, 2015, Sascha Schade
 * Copyright (c) 2014, Daniel Krebs
 *
 * This file is part of the modm project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
// ----------------------------------------------------------------------------

// created with FontCreator 3.0

#include <modm/architecture/interface/accessor.hpp>

namespace modm
{
	namespace font
	{
		FLASH_STORAGE(uint8_t ArcadeClassic[]) =
		{
			0x08, 0x03, // total size of this array
			7,	// width (may vary)
			8,	// height
			0,	// hspace
			1, 	// vspace
			32,	// first char
			96,	// char count

			// char widths
			// for each character the separate width in pixels
			 7,  7,  7,  7,  7,  7,  7,  7,  7,  7,
			 7,  7,  7,  7,  7,  7,  7,  7,  7,  7,
			 7,  7,  7,  7,  7,  7,  7,  7,  7,  7,
			 7,  7,  7,  7,  7,  7,  7,  7,  7,  7,
			 7,  7,  7,  7,  7,  7,  7,  7,  7,  7,
			 7,  7,  7,  7,  7,  7,  7,  7,  7,  7,
			 7,  7,  7,  7,  7,  7,  7,  7,  7,  7,
			 7,  7,  7,  7,  7,  7,  7,  7,  7,  7,
			 7,  7,  7,  7,  7,  7,  7,  7,  7,  7,
			 7,  7,  7,  7,  7,  7,

			// font data
			// bit field of all characters
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 32
			0x00, 0x40, 0x18, 0x0F, 0x07, 0x03, 0x00, // 33
			0x00, 0x0B, 0x07, 0x00, 0x0B, 0x07, 0x00, // 34
			0x14, 0x7F, 0x7F, 0x14, 0x7F, 0x7F, 0x14, // 35
			0x04, 0x2E, 0x2A, 0x6B, 0x2A, 0x3A, 0x10, // 36
			0x46, 0x66, 0x30, 0x18, 0x0C, 0x66, 0x62, // 37
			0x36, 0x7F, 0x49, 0x5D, 0x37, 0x72, 0x50, // 38
			0x00, 0x00, 0x00, 0x0B, 0x07, 0x00, 0x00, // 39
			0x00, 0x00, 0x1C, 0x3E, 0x63, 0x41, 0x00, // 40
			0x00, 0x41, 0x63, 0x3E, 0x1C, 0x00, 0x00, // 41
			0x00, 0x14, 0x08, 0x3E, 0x08, 0x14, 0x00, // 42
			0x00, 0x08, 0x08, 0x3E, 0x08, 0x08, 0x00, // 43
			0x00, 0x00, 0xB0, 0x70, 0x00, 0x00, 0x00, // 44
			0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, // 45
			0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, // 46
			0x40, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x02, // 47
			0x1C, 0x3E, 0x61, 0x41, 0x43, 0x3E, 0x1C, // 48
			0x40, 0x42, 0x7F, 0x7F, 0x40, 0x40, 0x00, // 49
			0x62, 0x73, 0x59, 0x49, 0x4D, 0x4F, 0x46, // 50
			0x20, 0x61, 0x49, 0x4D, 0x4F, 0x7B, 0x31, // 51
			0x18, 0x1C, 0x16, 0x13, 0x7F, 0x7F, 0x10, // 52
			0x27, 0x67, 0x45, 0x45, 0x45, 0x7D, 0x38, // 53
			0x3C, 0x7E, 0x4B, 0x49, 0x49, 0x79, 0x30, // 54
			0x03, 0x03, 0x71, 0x79, 0x0D, 0x07, 0x03, // 55
			0x36, 0x4F, 0x4D, 0x59, 0x59, 0x76, 0x30, // 56
			0x06, 0x4F, 0x49, 0x49, 0x69, 0x3F, 0x1E, // 57
			0x00, 0x00, 0x6C, 0x6C, 0x00, 0x00, 0x00, // 58
			0x00, 0x00, 0xAC, 0x6C, 0x00, 0x00, 0x00, // 59
			0x00, 0x08, 0x1C, 0x36, 0x63, 0x41, 0x00, // 60
			0x00, 0x14, 0x14, 0x14, 0x14, 0x14, 0x00, // 61
			0x00, 0x41, 0x63, 0x36, 0x1C, 0x08, 0x00, // 62
			0x02, 0x03, 0x51, 0x59, 0x09, 0x0F, 0x06, // 63
			0x3C, 0x42, 0x99, 0xA5, 0x99, 0x52, 0x1C, // 64
			0x7C, 0x7E, 0x13, 0x11, 0x13, 0x7E, 0x7C, // 65
			0x7F, 0x7F, 0x49, 0x49, 0x49, 0x7F, 0x36, // 66
			0x1C, 0x3E, 0x63, 0x41, 0x41, 0x63, 0x22, // 67
			0x7F, 0x7F, 0x41, 0x41, 0x63, 0x3E, 0x1C, // 68
			0x7F, 0x7F, 0x49, 0x49, 0x49, 0x41, 0x40, // 69
			0x7F, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x01, // 70
			0x1C, 0x3E, 0x63, 0x41, 0x49, 0x79, 0x79, // 71
			0x7F, 0x7F, 0x08, 0x08, 0x08, 0x7F, 0x7F, // 72
			0x41, 0x41, 0x7F, 0x7F, 0x41, 0x41, 0x00, // 73
			0x20, 0x60, 0x40, 0x40, 0x40, 0x7F, 0x3F, // 74
			0x7F, 0x7F, 0x18, 0x3C, 0x76, 0x63, 0x41, // 75
			0x7F, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x40, // 76
			0x7F, 0x7F, 0x06, 0x0C, 0x06, 0x7F, 0x7F, // 77
			0x7F, 0x7F, 0x06, 0x0C, 0x18, 0x7F, 0x7F, // 78
			0x3E, 0x7F, 0x41, 0x41, 0x41, 0x7F, 0x3E, // 79
			0x7F, 0x7F, 0x11, 0x11, 0x11, 0x1F, 0x0E, // 80
			0x3E, 0x7F, 0x41, 0x51, 0x71, 0x3F, 0x5E, // 81
			0x7F, 0x7F, 0x11, 0x31, 0x79, 0x6F, 0x46, // 82
			0x26, 0x6F, 0x49, 0x49, 0x4B, 0x7A, 0x30, // 83
			0x01, 0x01, 0x7F, 0x7F, 0x01, 0x01, 0x00, // 84
			0x3F, 0x7F, 0x40, 0x40, 0x40, 0x7F, 0x3F, // 85
			0x0F, 0x1F, 0x30, 0x60, 0x30, 0x1F, 0x0F, // 86
			0x7F, 0x7F, 0x30, 0x18, 0x30, 0x7F, 0x7F, // 87
			0x63, 0x77, 0x3E, 0x1C, 0x3E, 0x77, 0x63, // 88
			0x07, 0x0F, 0x78, 0x78, 0x0F, 0x07, 0x00, // 89
			0x61, 0x71, 0x79, 0x5D, 0x4F, 0x47, 0x43, // 90
			0x00, 0x00, 0x7F, 0x7F, 0x41, 0x00, 0x00, // 91
			0x02, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, // 92
			0x00, 0x00, 0x41, 0x7F, 0x7F, 0x00, 0x00, // 93
			0x00, 0x00, 0x04, 0x06, 0x04, 0x00, 0x00, // 94
			0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
			0x00, 0x00, 0x02, 0x06, 0x04, 0x00, 0x00, // 96
			0x7C, 0x7E, 0x13, 0x11, 0x13, 0x7E, 0x7C, // 97
			0x7F, 0x7F, 0x49, 0x49, 0x49, 0x7F, 0x36, // 98
			0x1C, 0x3E, 0x63, 0x41, 0x41, 0x63, 0x22, // 99
			0x7F, 0x7F, 0x41, 0x41, 0x63, 0x3E, 0x1C, // 100
			0x7F, 0x7F, 0x49, 0x49, 0x49, 0x41, 0x40, // 101
			0x7F, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x01, // 102
			0x1C, 0x3E, 0x63, 0x41, 0x49, 0x79, 0x79, // 103
			0x7F, 0x7F, 0x08, 0x08, 0x08, 0x7F, 0x7F, // 104
			0x41, 0x41, 0x7F, 0x7F, 0x41, 0x41, 0x00, // 105
			0x20, 0x60, 0x40, 0x40, 0x40, 0x7F, 0x3F, // 106
			0x7F, 0x7F, 0x18, 0x3C, 0x76, 0x63, 0x41, // 107
			0x7F, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x40, // 108
			0x7F, 0x7F, 0x06, 0x0C, 0x06, 0x7F, 0x7F, // 109
			0x7F, 0x7F, 0x06, 0x0C, 0x18, 0x7F, 0x7F, // 110
			0x3E, 0x7F, 0x41, 0x41, 0x41, 0x7F, 0x3E, // 111
			0x7F, 0x7F, 0x11, 0x11, 0x11, 0x1F, 0x0E, // 112
			0x3E, 0x7F, 0x41, 0x51, 0x71, 0x3F, 0x5E, // 113
			0x7F, 0x7F, 0x11, 0x31, 0x79, 0x6F, 0x46, // 114
			0x26, 0x6F, 0x49, 0x49, 0x4B, 0x7A, 0x30, // 115
			0x01, 0x01, 0x7F, 0x7F, 0x01, 0x01, 0x00, // 116
			0x3F, 0x7F, 0x40, 0x40, 0x40, 0x7F, 0x3F, // 117
			0x0F, 0x1F, 0x30, 0x60, 0x30, 0x1F, 0x0F, // 118
			0x7F, 0x7F, 0x30, 0x18, 0x30, 0x7F, 0x7F, // 119
			0x63, 0x77, 0x3E, 0x1C, 0x3E, 0x77, 0x63, // 120
			0x07, 0x0F, 0x78, 0x78, 0x0F, 0x07, 0x00, // 121
			0x61, 0x71, 0x79, 0x5D, 0x4F, 0x47, 0x43, // 122
			0x00, 0x00, 0x08, 0x3E, 0x77, 0x41, 0x00, // 123
			0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00, // 124
			0x00, 0x00, 0x41, 0x77, 0x3E, 0x08, 0x00, // 125
			0x00, 0x18, 0x0C, 0x1C, 0x18, 0x0C, 0x00, // 126
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 127
		};
	}
}

