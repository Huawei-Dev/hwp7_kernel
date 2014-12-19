/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : RnicEnd.h
  版 本 号   : 初稿
  生成日期   : 2011年12月06日
  最近修改   :
  功能描述   : RNIC任务初始化
  函数列表   :

  修改历史   :
  1.日    期   : 2011年12月06日
    修改内容   : 创建文件

******************************************************************************/
#ifndef __RNIC_INIT_H__
#define __RNIC_INIT_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"
#include "AtRnicInterface.h"
#include "PsCommonDef.h"
#include "RnicLinuxInterface.h"

#include "RnicDebug.h"
#include "AcpuReset.h"

/*****************************************************************************
  2 宏定义
*****************************************************************************/
/*================================================*/
/* 数值宏定义 */
/*================================================*/

/*================================================*/
/* 功能函数宏定义 */
/*================================================*/

/*******************************************************************************
  3 枚举定义
*******************************************************************************/

/*****************************************************************************
  4 全局变量声明
*****************************************************************************/

/*****************************************************************************
  5 消息头定义
*****************************************************************************/

/*****************************************************************************
  6 消息定义
*****************************************************************************/

/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/

/*****************************************************************************
  8 UNION定义
*****************************************************************************/

/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/

/*****************************************************************************
  10 函数声明
*****************************************************************************/
extern VOS_UINT32 RNIC_PidInit (enum VOS_INIT_PHASE_DEFINE enPhase);
extern VOS_UINT32 RNIC_FidInit (enum VOS_INIT_PHASE_DEFINE enPhase);

VOS_INT RNIC_CCpuResetCallback(
    DRV_RESET_CALLCBFUN_MOMENT          enParam,
    VOS_INT                             iUserData
);

#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* RNIC.h */
