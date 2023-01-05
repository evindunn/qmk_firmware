/* Copyright 2023 Evin Dunn <evindunn14@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

#define LAYOUT( \
  K0,   K1,  K2,  K3,  K4, \
  K5,   K6,  K7,  K8,  K9, \
  K10, K11, K12, K13, K14, \
  K15, K16, K17, K18, K19, \
  K20, K21, K22, K23, K24  \
) \
{ \
  { K0,   K1,  K2,  K3,  K4 }, \
  { K5,   K6,  K7,  K8,  K9 }, \
  { K10, K11, K12, K13, K14 }, \
  { K15, K16, K17, K18, K19 }, \
  { K20, K21, K22, K23, K24 }  \
}
