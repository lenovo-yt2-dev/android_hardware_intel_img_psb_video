/*
 * Copyright (c) 2007 Intel Corporation. All Rights Reserved.
 * Copyright (c) Imagination Technologies Limited, UK  
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL PRECISION INSIGHT AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/******************************************************************************

 @File         msvdx_mtx_reg_io2.h

 @Title        MSVDX MMU defines

 @Platform     </b>\n

 @Description  </b>\n This file contains the MSVDX_MTX_REG_IO2_H Defintions.

******************************************************************************/
#if !defined (__MSVDX_MTX_REG_IO2_H__)
#define __MSVDX_MTX_REG_IO2_H__

#ifdef __cplusplus
extern "C" {
#endif


#define MTX_CORE_CR_MTX_ENABLE_OFFSET		(0x0000)

// MTX_CORE     CR_MTX_ENABLE     MTX_MAJ_REV
#define MTX_CORE_CR_MTX_ENABLE_MTX_MAJ_REV_MASK		(0xFF000000)
#define MTX_CORE_CR_MTX_ENABLE_MTX_MAJ_REV_LSBMASK		(0x000000FF)
#define MTX_CORE_CR_MTX_ENABLE_MTX_MAJ_REV_SHIFT		(24)

// MTX_CORE     CR_MTX_ENABLE     MTX_MIN_REV
#define MTX_CORE_CR_MTX_ENABLE_MTX_MIN_REV_MASK		(0x00FF0000)
#define MTX_CORE_CR_MTX_ENABLE_MTX_MIN_REV_LSBMASK		(0x000000FF)
#define MTX_CORE_CR_MTX_ENABLE_MTX_MIN_REV_SHIFT		(16)

// MTX_CORE     CR_MTX_ENABLE     MTX_TCAPS
#define MTX_CORE_CR_MTX_ENABLE_MTX_TCAPS_MASK		(0x0000F000)
#define MTX_CORE_CR_MTX_ENABLE_MTX_TCAPS_LSBMASK		(0x0000000F)
#define MTX_CORE_CR_MTX_ENABLE_MTX_TCAPS_SHIFT		(12)

// MTX_CORE     CR_MTX_ENABLE     MTX_ARCH
#define MTX_CORE_CR_MTX_ENABLE_MTX_ARCH_MASK		(0x00000800)
#define MTX_CORE_CR_MTX_ENABLE_MTX_ARCH_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_ENABLE_MTX_ARCH_SHIFT		(11)

// MTX_CORE     CR_MTX_ENABLE     MTX_STEP_REC
#define MTX_CORE_CR_MTX_ENABLE_MTX_STEP_REC_MASK		(0x000000F0)
#define MTX_CORE_CR_MTX_ENABLE_MTX_STEP_REC_LSBMASK		(0x0000000F)
#define MTX_CORE_CR_MTX_ENABLE_MTX_STEP_REC_SHIFT		(4)

// MTX_CORE     CR_MTX_ENABLE     MTX_TSTOPPED
#define MTX_CORE_CR_MTX_ENABLE_MTX_TSTOPPED_MASK		(0x00000004)
#define MTX_CORE_CR_MTX_ENABLE_MTX_TSTOPPED_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_ENABLE_MTX_TSTOPPED_SHIFT		(2)

// MTX_CORE     CR_MTX_ENABLE     MTX_TOFF
#define MTX_CORE_CR_MTX_ENABLE_MTX_TOFF_MASK		(0x00000002)
#define MTX_CORE_CR_MTX_ENABLE_MTX_TOFF_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_ENABLE_MTX_TOFF_SHIFT		(1)

// MTX_CORE     CR_MTX_ENABLE     MTX_ENABLE
#define MTX_CORE_CR_MTX_ENABLE_MTX_ENABLE_MASK		(0x00000001)
#define MTX_CORE_CR_MTX_ENABLE_MTX_ENABLE_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_ENABLE_MTX_ENABLE_SHIFT		(0)

#define MTX_CORE_CR_MTX_STATUS_OFFSET		(0x0008)

// MTX_CORE     CR_MTX_STATUS     MTX_HREASON
#define MTX_CORE_CR_MTX_STATUS_MTX_HREASON_MASK		(0x000C0000)
#define MTX_CORE_CR_MTX_STATUS_MTX_HREASON_LSBMASK		(0x00000003)
#define MTX_CORE_CR_MTX_STATUS_MTX_HREASON_SHIFT		(18)

// MTX_CORE     CR_MTX_STATUS     MTX_LSM_STEP
#define MTX_CORE_CR_MTX_STATUS_MTX_LSM_STEP_MASK		(0x00000700)
#define MTX_CORE_CR_MTX_STATUS_MTX_LSM_STEP_LSBMASK		(0x00000007)
#define MTX_CORE_CR_MTX_STATUS_MTX_LSM_STEP_SHIFT		(8)

// MTX_CORE     CR_MTX_STATUS     MTX_CF_Z
#define MTX_CORE_CR_MTX_STATUS_MTX_CF_Z_MASK		(0x00000008)
#define MTX_CORE_CR_MTX_STATUS_MTX_CF_Z_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_STATUS_MTX_CF_Z_SHIFT		(3)

// MTX_CORE     CR_MTX_STATUS     MTX_CF_N
#define MTX_CORE_CR_MTX_STATUS_MTX_CF_N_MASK		(0x00000004)
#define MTX_CORE_CR_MTX_STATUS_MTX_CF_N_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_STATUS_MTX_CF_N_SHIFT		(2)

// MTX_CORE     CR_MTX_STATUS     MTX_CR_O
#define MTX_CORE_CR_MTX_STATUS_MTX_CR_O_MASK		(0x00000002)
#define MTX_CORE_CR_MTX_STATUS_MTX_CR_O_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_STATUS_MTX_CR_O_SHIFT		(1)

// MTX_CORE     CR_MTX_STATUS     MTX_CF_C
#define MTX_CORE_CR_MTX_STATUS_MTX_CF_C_MASK		(0x00000001)
#define MTX_CORE_CR_MTX_STATUS_MTX_CF_C_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_STATUS_MTX_CF_C_SHIFT		(0)

#define MTX_CORE_CR_MTX_KICK_OFFSET		(0x0080)

// MTX_CORE     CR_MTX_KICK     MTX_KICK
#define MTX_CORE_CR_MTX_KICK_MTX_KICK_MASK		(0x0000FFFF)
#define MTX_CORE_CR_MTX_KICK_MTX_KICK_LSBMASK		(0x0000FFFF)
#define MTX_CORE_CR_MTX_KICK_MTX_KICK_SHIFT		(0)

#define MTX_CORE_CR_MTX_KICKI_OFFSET		(0x0088)

// MTX_CORE     CR_MTX_KICKI     MTX_KICKI
#define MTX_CORE_CR_MTX_KICKI_MTX_KICKI_MASK		(0x0000FFFF)
#define MTX_CORE_CR_MTX_KICKI_MTX_KICKI_LSBMASK		(0x0000FFFF)
#define MTX_CORE_CR_MTX_KICKI_MTX_KICKI_SHIFT		(0)

#define MTX_CORE_CR_MTX_FAULT0_OFFSET		(0x0090)

// MTX_CORE     CR_MTX_FAULT0     REQ_LD_REG
#define MTX_CORE_CR_MTX_FAULT0_REQ_LD_REG_MASK		(0xF8000000)
#define MTX_CORE_CR_MTX_FAULT0_REQ_LD_REG_LSBMASK		(0x0000001F)
#define MTX_CORE_CR_MTX_FAULT0_REQ_LD_REG_SHIFT		(27)

// MTX_CORE     CR_MTX_FAULT0     REQ_LD_DEST
#define MTX_CORE_CR_MTX_FAULT0_REQ_LD_DEST_MASK		(0x00FF0000)
#define MTX_CORE_CR_MTX_FAULT0_REQ_LD_DEST_LSBMASK		(0x000000FF)
#define MTX_CORE_CR_MTX_FAULT0_REQ_LD_DEST_SHIFT		(16)

// MTX_CORE     CR_MTX_FAULT0     REQ_STATE
#define MTX_CORE_CR_MTX_FAULT0_REQ_STATE_MASK		(0x00000C00)
#define MTX_CORE_CR_MTX_FAULT0_REQ_STATE_LSBMASK		(0x00000003)
#define MTX_CORE_CR_MTX_FAULT0_REQ_STATE_SHIFT		(10)

// MTX_CORE     CR_MTX_FAULT0     REQ_RN_W
#define MTX_CORE_CR_MTX_FAULT0_REQ_RN_W_MASK		(0x00000100)
#define MTX_CORE_CR_MTX_FAULT0_REQ_RN_W_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_FAULT0_REQ_RN_W_SHIFT		(8)

// MTX_CORE     CR_MTX_FAULT0     REQ_SB
#define MTX_CORE_CR_MTX_FAULT0_REQ_SB_MASK		(0x000000FF)
#define MTX_CORE_CR_MTX_FAULT0_REQ_SB_LSBMASK		(0x000000FF)
#define MTX_CORE_CR_MTX_FAULT0_REQ_SB_SHIFT		(0)

#define MTX_CORE_CR_MTX_REGISTER_READ_WRITE_DATA_OFFSET		(0x00F8)

#define MTX_CORE_CR_MTX_REGISTER_READ_WRITE_REQUEST_OFFSET		(0x00FC)

// MTX_CORE     CR_MTX_REGISTER_READ_WRITE_REQUEST     MTX_DREADY
#define MTX_CORE_CR_MTX_REGISTER_READ_WRITE_REQUEST_MTX_DREADY_MASK		(0x80000000)
#define MTX_CORE_CR_MTX_REGISTER_READ_WRITE_REQUEST_MTX_DREADY_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_REGISTER_READ_WRITE_REQUEST_MTX_DREADY_SHIFT		(31)

// MTX_CORE     CR_MTX_REGISTER_READ_WRITE_REQUEST     MTX_RNW
#define MTX_CORE_CR_MTX_REGISTER_READ_WRITE_REQUEST_MTX_RNW_MASK		(0x00010000)
#define MTX_CORE_CR_MTX_REGISTER_READ_WRITE_REQUEST_MTX_RNW_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_REGISTER_READ_WRITE_REQUEST_MTX_RNW_SHIFT		(16)

// MTX_CORE     CR_MTX_REGISTER_READ_WRITE_REQUEST     MTX_RSPECIFIER
#define MTX_CORE_CR_MTX_REGISTER_READ_WRITE_REQUEST_MTX_RSPECIFIER_MASK		(0x00000070)
#define MTX_CORE_CR_MTX_REGISTER_READ_WRITE_REQUEST_MTX_RSPECIFIER_LSBMASK		(0x00000007)
#define MTX_CORE_CR_MTX_REGISTER_READ_WRITE_REQUEST_MTX_RSPECIFIER_SHIFT		(4)

// MTX_CORE     CR_MTX_REGISTER_READ_WRITE_REQUEST     MTX_USPECIFIER
#define MTX_CORE_CR_MTX_REGISTER_READ_WRITE_REQUEST_MTX_USPECIFIER_MASK		(0x0000000F)
#define MTX_CORE_CR_MTX_REGISTER_READ_WRITE_REQUEST_MTX_USPECIFIER_LSBMASK		(0x0000000F)
#define MTX_CORE_CR_MTX_REGISTER_READ_WRITE_REQUEST_MTX_USPECIFIER_SHIFT		(0)

#define MTX_CORE_CR_MTX_RAM_ACCESS_DATA_EXCHANGE_OFFSET		(0x0100)

#define MTX_CORE_CR_MTX_RAM_ACCESS_DATA_TRANSFER_OFFSET		(0x0104)

#define MTX_CORE_CR_MTX_RAM_ACCESS_CONTROL_OFFSET		(0x0108)

// MTX_CORE     CR_MTX_RAM_ACCESS_CONTROL     MTX_MCMID
#define MTX_CORE_CR_MTX_RAM_ACCESS_CONTROL_MTX_MCMID_MASK		(0x0FF00000)
#define MTX_CORE_CR_MTX_RAM_ACCESS_CONTROL_MTX_MCMID_LSBMASK		(0x000000FF)
#define MTX_CORE_CR_MTX_RAM_ACCESS_CONTROL_MTX_MCMID_SHIFT		(20)

// MTX_CORE     CR_MTX_RAM_ACCESS_CONTROL     MTX_MCM_ADDR
#define MTX_CORE_CR_MTX_RAM_ACCESS_CONTROL_MTX_MCM_ADDR_MASK		(0x000FFFFC)
#define MTX_CORE_CR_MTX_RAM_ACCESS_CONTROL_MTX_MCM_ADDR_LSBMASK		(0x0003FFFF)
#define MTX_CORE_CR_MTX_RAM_ACCESS_CONTROL_MTX_MCM_ADDR_SHIFT		(2)

// MTX_CORE     CR_MTX_RAM_ACCESS_CONTROL     MTX_MCMAI
#define MTX_CORE_CR_MTX_RAM_ACCESS_CONTROL_MTX_MCMAI_MASK		(0x00000002)
#define MTX_CORE_CR_MTX_RAM_ACCESS_CONTROL_MTX_MCMAI_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_RAM_ACCESS_CONTROL_MTX_MCMAI_SHIFT		(1)

// MTX_CORE     CR_MTX_RAM_ACCESS_CONTROL     MTX_MCMR
#define MTX_CORE_CR_MTX_RAM_ACCESS_CONTROL_MTX_MCMR_MASK		(0x00000001)
#define MTX_CORE_CR_MTX_RAM_ACCESS_CONTROL_MTX_MCMR_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_RAM_ACCESS_CONTROL_MTX_MCMR_SHIFT		(0)

#define MTX_CORE_CR_MTX_RAM_ACCESS_STATUS_OFFSET		(0x010C)

// MTX_CORE     CR_MTX_RAM_ACCESS_STATUS     MTX_MTX_MCM_STAT
#define MTX_CORE_CR_MTX_RAM_ACCESS_STATUS_MTX_MTX_MCM_STAT_MASK		(0x00000001)
#define MTX_CORE_CR_MTX_RAM_ACCESS_STATUS_MTX_MTX_MCM_STAT_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_RAM_ACCESS_STATUS_MTX_MTX_MCM_STAT_SHIFT		(0)

#define MTX_CORE_CR_MTX_SOFT_RESET_OFFSET		(0x0200)

// MTX_CORE     CR_MTX_SOFT_RESET     MTX_RESET
#define MTX_CORE_CR_MTX_SOFT_RESET_MTX_RESET_MASK		(0x00000001)
#define MTX_CORE_CR_MTX_SOFT_RESET_MTX_RESET_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_SOFT_RESET_MTX_RESET_SHIFT		(0)

#define MTX_CORE_CR_MTX_SYSC_CDMAC_OFFSET		(0x0340)

// MTX_CORE     CR_MTX_SYSC_CDMAC     BURSTSIZE
#define MTX_CORE_CR_MTX_SYSC_CDMAC_BURSTSIZE_MASK		(0x07000000)
#define MTX_CORE_CR_MTX_SYSC_CDMAC_BURSTSIZE_LSBMASK		(0x00000007)
#define MTX_CORE_CR_MTX_SYSC_CDMAC_BURSTSIZE_SHIFT		(24)

// MTX_CORE     CR_MTX_SYSC_CDMAC     RNW
#define MTX_CORE_CR_MTX_SYSC_CDMAC_RNW_MASK		(0x00020000)
#define MTX_CORE_CR_MTX_SYSC_CDMAC_RNW_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_SYSC_CDMAC_RNW_SHIFT		(17)

// MTX_CORE     CR_MTX_SYSC_CDMAC     ENABLE
#define MTX_CORE_CR_MTX_SYSC_CDMAC_ENABLE_MASK		(0x00010000)
#define MTX_CORE_CR_MTX_SYSC_CDMAC_ENABLE_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_SYSC_CDMAC_ENABLE_SHIFT		(16)

// MTX_CORE     CR_MTX_SYSC_CDMAC     LENGTH
#define MTX_CORE_CR_MTX_SYSC_CDMAC_LENGTH_MASK		(0x0000FFFF)
#define MTX_CORE_CR_MTX_SYSC_CDMAC_LENGTH_LSBMASK		(0x0000FFFF)
#define MTX_CORE_CR_MTX_SYSC_CDMAC_LENGTH_SHIFT		(0)

#define MTX_CORE_CR_MTX_SYSC_CDMAA_OFFSET		(0x0344)

// MTX_CORE     CR_MTX_SYSC_CDMAA     CDMAA_ADDRESS
#define MTX_CORE_CR_MTX_SYSC_CDMAA_CDMAA_ADDRESS_MASK		(0x03FFFFFC)
#define MTX_CORE_CR_MTX_SYSC_CDMAA_CDMAA_ADDRESS_LSBMASK		(0x00FFFFFF)
#define MTX_CORE_CR_MTX_SYSC_CDMAA_CDMAA_ADDRESS_SHIFT		(2)

#define MTX_CORE_CR_MTX_SYSC_CDMAS0_OFFSET		(0x0348)

// MTX_CORE     CR_MTX_SYSC_CDMAS0     COUNT
#define MTX_CORE_CR_MTX_SYSC_CDMAS0_COUNT_MASK		(0xFFFF0000)
#define MTX_CORE_CR_MTX_SYSC_CDMAS0_COUNT_LSBMASK		(0x0000FFFF)
#define MTX_CORE_CR_MTX_SYSC_CDMAS0_COUNT_SHIFT		(16)

// MTX_CORE     CR_MTX_SYSC_CDMAS0     RAMNUMBER
#define MTX_CORE_CR_MTX_SYSC_CDMAS0_RAMNUMBER_MASK		(0x00000F00)
#define MTX_CORE_CR_MTX_SYSC_CDMAS0_RAMNUMBER_LSBMASK		(0x0000000F)
#define MTX_CORE_CR_MTX_SYSC_CDMAS0_RAMNUMBER_SHIFT		(8)

// MTX_CORE     CR_MTX_SYSC_CDMAS0     DMAREQUEST
#define MTX_CORE_CR_MTX_SYSC_CDMAS0_DMAREQUEST_MASK		(0x00000010)
#define MTX_CORE_CR_MTX_SYSC_CDMAS0_DMAREQUEST_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_SYSC_CDMAS0_DMAREQUEST_SHIFT		(4)

// MTX_CORE     CR_MTX_SYSC_CDMAS0     DONOTHING
#define MTX_CORE_CR_MTX_SYSC_CDMAS0_DONOTHING_MASK		(0x00000001)
#define MTX_CORE_CR_MTX_SYSC_CDMAS0_DONOTHING_LSBMASK		(0x00000001)
#define MTX_CORE_CR_MTX_SYSC_CDMAS0_DONOTHING_SHIFT		(0)

#define MTX_CORE_CR_MTX_SYSC_CDMAS1_OFFSET		(0x034C)

// MTX_CORE     CR_MTX_SYSC_CDMAS1     CDMAS1_ADDRESS
#define MTX_CORE_CR_MTX_SYSC_CDMAS1_CDMAS1_ADDRESS_MASK		(0x03FFFFFC)
#define MTX_CORE_CR_MTX_SYSC_CDMAS1_CDMAS1_ADDRESS_LSBMASK		(0x00FFFFFF)
#define MTX_CORE_CR_MTX_SYSC_CDMAS1_CDMAS1_ADDRESS_SHIFT		(2)

#define MTX_CORE_CR_MTX_SYSC_CDMAT_OFFSET		(0x0350)

// MTX_CORE     CR_MTX_SYSC_CDMAT     TRANSFERDATA
#define MTX_CORE_CR_MTX_SYSC_CDMAT_TRANSFERDATA_MASK		(0xFFFFFFFF)
#define MTX_CORE_CR_MTX_SYSC_CDMAT_TRANSFERDATA_LSBMASK		(0xFFFFFFFF)
#define MTX_CORE_CR_MTX_SYSC_CDMAT_TRANSFERDATA_SHIFT		(0)



#ifdef __cplusplus
}
#endif

#endif /* __MSVDX_MTX_REG_IO2_H__ */