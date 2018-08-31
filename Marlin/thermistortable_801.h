/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// 100k 0805 Murata NCP21WF104J03RA with 4.7k pullup
const short temptable_801[][2] PROGMEM = {
  { OV(   1), 350 }, //This value is a guess.
  { OV( 357), 125 },
  { OV( 392), 120 },
  { OV( 428), 115 },
  { OV( 466), 110 },
  { OV( 506), 105 },
  { OV( 546), 100 },
  { OV( 587),  95 },
  { OV( 628),  90 },
  { OV( 669),  85 },
  { OV( 708),  80 },
  { OV( 746),  75 },
  { OV( 781),  70 },
  { OV( 814),  65 },
  { OV( 844),  60 },
  { OV( 872),  55 },
  { OV( 896),  50 },
  { OV( 918),  45 },
  { OV( 936),  40 },
  { OV( 952),  35 },
  { OV( 966),  30 },
  { OV( 977),  25 },
  { OV( 987),  20 },
  { OV(1001),  10 },
  { OV(1010),   0 },
  { OV(1013),  -5 }
};
