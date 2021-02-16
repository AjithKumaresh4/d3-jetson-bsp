/**
 * @author Tyler Hart <thart@d3engineering.com>
 *
 * imx390 v4l2 driver for Nvidia Jetson
 *
 * Copyright (c) 2020, D3 Engineering.	All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _IMX390_MODE_1936X1100_SP2_2LANE_H
#define _IMX390_MODE_1936X1100_SP2_2LANE_H

#include <linux/regmap.h>

extern const struct reg_sequence imx390_mode_1936x1100SP2_2L[];
extern const size_t imx390_mode_1936x1100SP2_2L_len;

#endif
