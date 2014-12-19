/*****************************************************************************

//                             版权所有 (C), 1998-2010, 华为技术有限公司
//
*****************************************************************************
//  文 件 名   : msp_ftm.h
//  版 本 号   : V1.0
//  生成日期   : 2010-05-08
//  功能描述   : 该模块对外部组件提供FTM的应用接口
//
//  函数列表   : TODO: ...
//  修改历史   :
//  1.日    期 : 2010-05-08
//    修改内容 : 创建文件
//
*****************************************************************************/

/*****************************************************************************
// PROJECT   :
// SUBSYSTEM :
// MODULE    :
// OWNER     :
*****************************************************************************/


#ifndef __MSP_FTM_H__
#define __MSP_FTM_H__

typedef enum
{
    EN_FTM_TMODE_SIGNAL = 0,
    EN_FTM_TMODE_NONESIGNAL,
    EN_FTM_TMODE_LOAD,    /* 当前版本不支持*/
    EN_FTM_TMODE_RESET,   /* 当前版本不支持*/
    EN_FTM_TMODE_SIGNAL_NOCARD,
    EN_FTM_TMODE_OFFLINE,
    EN_FTM_TMODE_UNKNOWN = 6
} FTM_TMODE_ENUM;


/*****************************************************************************
// 函数名称: FTM_GetMode
// 功能描述: 获取FTM当前模式的同步接口
//
// 参数说明:
//   pFtmMode [out]: FTM 模式
//
//
//
// 返 回 值:
//    成功：ERR_MSP_SUCCESS                 表示操作成功
//    失败：ERR_MSP_INVALID_PARAMETER       传入参数为空
//          ERR_MSP_UNKNOWN                 未知错误
//          ERR_MSP_NOT_SUPPORT	            不支持
//
// 调用要求: MSP初始化后，否则返回错误码 ERR_MSP_UNKNOWN
// 调用举例: TODO: ...
*****************************************************************************/
extern VOS_UINT32 FTM_GetMode(FTM_TMODE_ENUM* penFtmMode);

#endif /*__MSP_FTM_H__*/


