/* Copyright 2023 Dual Tachyon
 * https://github.com/DualTachyon
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 */

#ifndef FONT_H
#define FONT_H

#include <stdint.h>
extern const uint8_t gFontChinese_out[2187];
#define CHAR_SIZE 20U
#define CHAR_COL 10U
#define CHAR_ROW 11U
#define GET_BIT(byte, bitPosition) (((byte) >> (bitPosition)) & 0x01U)

//extern const uint8_t gFontChinese[123][16] ;
//gFontBig
extern const uint8_t gFontBigDigits[11][20/*20*/];
extern const uint8_t gFont3x5[96][3];
extern const uint8_t gFontSmall[95 - 1][6];
#ifdef ENABLE_SMALL_BOLD
	extern const uint8_t gFontSmallBold[95 - 1][6];
#endif

#endif

