/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Tue Jan  6 18:01:37 2009
 *                 MD5 Checksum         91c88a5712579194ae1f9db9f34ff5d5
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7420/rdb/b0/bchp_hif_rgr1.h $
 * 
 * Hydra_Software_Devel/1   1/6/09 7:51p tdo
 * PR50865: Add initial rdb generated header files for 7420 B0
 *
 ***************************************************************************/

#ifndef BCHP_HIF_RGR1_H__
#define BCHP_HIF_RGR1_H__

/***************************************************************************
 *HIF_RGR1 - HIF RBUS-GISB-RBUS Bridge Registers
 ***************************************************************************/
#define BCHP_HIF_RGR1_REVISION                   0x00458000 /* RGR Bridge Revision */
#define BCHP_HIF_RGR1_CTRL                       0x00458004 /* RGR Bridge Control Register */
#define BCHP_HIF_RGR1_RBUS_TIMER                 0x00458008 /* RGR Bridge RBUS Timer Register */
#define BCHP_HIF_RGR1_SW_RESET_0                 0x0045800c /* RGR Bridge Software Reset 0 Register */
#define BCHP_HIF_RGR1_SW_RESET_1                 0x00458010 /* RGR Bridge Software Reset 1 Register */

/***************************************************************************
 *REVISION - RGR Bridge Revision
 ***************************************************************************/
/* HIF_RGR1 :: REVISION :: reserved0 [31:16] */
#define BCHP_HIF_RGR1_REVISION_reserved0_MASK                      0xffff0000
#define BCHP_HIF_RGR1_REVISION_reserved0_SHIFT                     16

/* HIF_RGR1 :: REVISION :: MAJOR [15:08] */
#define BCHP_HIF_RGR1_REVISION_MAJOR_MASK                          0x0000ff00
#define BCHP_HIF_RGR1_REVISION_MAJOR_SHIFT                         8

/* HIF_RGR1 :: REVISION :: MINOR [07:00] */
#define BCHP_HIF_RGR1_REVISION_MINOR_MASK                          0x000000ff
#define BCHP_HIF_RGR1_REVISION_MINOR_SHIFT                         0

/***************************************************************************
 *CTRL - RGR Bridge Control Register
 ***************************************************************************/
/* HIF_RGR1 :: CTRL :: reserved0 [31:02] */
#define BCHP_HIF_RGR1_CTRL_reserved0_MASK                          0xfffffffc
#define BCHP_HIF_RGR1_CTRL_reserved0_SHIFT                         2

/* HIF_RGR1 :: CTRL :: rbus_error_intr [01:01] */
#define BCHP_HIF_RGR1_CTRL_rbus_error_intr_MASK                    0x00000002
#define BCHP_HIF_RGR1_CTRL_rbus_error_intr_SHIFT                   1
#define BCHP_HIF_RGR1_CTRL_rbus_error_intr_INTR_DISABLE            0
#define BCHP_HIF_RGR1_CTRL_rbus_error_intr_INTR_ENABLE             1

/* HIF_RGR1 :: CTRL :: gisb_error_intr [00:00] */
#define BCHP_HIF_RGR1_CTRL_gisb_error_intr_MASK                    0x00000001
#define BCHP_HIF_RGR1_CTRL_gisb_error_intr_SHIFT                   0
#define BCHP_HIF_RGR1_CTRL_gisb_error_intr_INTR_DISABLE            0
#define BCHP_HIF_RGR1_CTRL_gisb_error_intr_INTR_ENABLE             1

/***************************************************************************
 *RBUS_TIMER - RGR Bridge RBUS Timer Register
 ***************************************************************************/
/* HIF_RGR1 :: RBUS_TIMER :: timer_value [31:00] */
#define BCHP_HIF_RGR1_RBUS_TIMER_timer_value_MASK                  0xffffffff
#define BCHP_HIF_RGR1_RBUS_TIMER_timer_value_SHIFT                 0

/***************************************************************************
 *SW_RESET_0 - RGR Bridge Software Reset 0 Register
 ***************************************************************************/
/* HIF_RGR1 :: SW_RESET_0 :: reserved0 [31:01] */
#define BCHP_HIF_RGR1_SW_RESET_0_reserved0_MASK                    0xfffffffe
#define BCHP_HIF_RGR1_SW_RESET_0_reserved0_SHIFT                   1

/* HIF_RGR1 :: SW_RESET_0 :: SPARE_SW_RESET [00:00] */
#define BCHP_HIF_RGR1_SW_RESET_0_SPARE_SW_RESET_MASK               0x00000001
#define BCHP_HIF_RGR1_SW_RESET_0_SPARE_SW_RESET_SHIFT              0
#define BCHP_HIF_RGR1_SW_RESET_0_SPARE_SW_RESET_DEASSERT           0
#define BCHP_HIF_RGR1_SW_RESET_0_SPARE_SW_RESET_ASSERT             1

/***************************************************************************
 *SW_RESET_1 - RGR Bridge Software Reset 1 Register
 ***************************************************************************/
/* HIF_RGR1 :: SW_RESET_1 :: reserved0 [31:02] */
#define BCHP_HIF_RGR1_SW_RESET_1_reserved0_MASK                    0xfffffffc
#define BCHP_HIF_RGR1_SW_RESET_1_reserved0_SHIFT                   2

/* HIF_RGR1 :: SW_RESET_1 :: PCIE_BRIDGE_SW_RESET [01:01] */
#define BCHP_HIF_RGR1_SW_RESET_1_PCIE_BRIDGE_SW_RESET_MASK         0x00000002
#define BCHP_HIF_RGR1_SW_RESET_1_PCIE_BRIDGE_SW_RESET_SHIFT        1
#define BCHP_HIF_RGR1_SW_RESET_1_PCIE_BRIDGE_SW_RESET_DEASSERT     0
#define BCHP_HIF_RGR1_SW_RESET_1_PCIE_BRIDGE_SW_RESET_ASSERT       1

/* HIF_RGR1 :: SW_RESET_1 :: PCIE_SW_PERST [00:00] */
#define BCHP_HIF_RGR1_SW_RESET_1_PCIE_SW_PERST_MASK                0x00000001
#define BCHP_HIF_RGR1_SW_RESET_1_PCIE_SW_PERST_SHIFT               0
#define BCHP_HIF_RGR1_SW_RESET_1_PCIE_SW_PERST_DEASSERT            0
#define BCHP_HIF_RGR1_SW_RESET_1_PCIE_SW_PERST_ASSERT              1

#endif /* #ifndef BCHP_HIF_RGR1_H__ */

/* End of File */