/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : MtcGmmInterface.h
  版 本 号   : 初稿
  生成日期   : 2013年12月8日
  最近修改   :
  功能描述   : MTC 与 GMM模块共用头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2013年12月8日
    修改内容   : 创建文件

******************************************************************************/

#ifndef _MTCGMMINTERFACE_H_
#define _MTCGMMINTERFACE_H_

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"
#include "PsTypeDef.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/

/*****************************************************************************
  3 枚举定义
*****************************************************************************/
/*****************************************************************************
枚举名    : MTC_GMM_MSG_ID_ENUM
结构说明  : MTC模块和GMM模块之间的消息

  1.日    期   : 2013年12月8日
    修改内容   : SVLTE优化G-TL ps切换性能修改
*****************************************************************************/
enum MTC_GMM_MSG_ID_ENUM
{
    /* 消息名称 */                         /* 消息ID */                         /* 备注 */
    /* MTC --> GMM */
    ID_MTC_GMM_RRC_AREA_LOST_IND = 0x0001,                                      /* _H2ASN_MsgChoice MTC_GMM_RRC_AREA_LOST_IND_STRU */

    /* GMM --> MTC */

    ID_GMM_MTC_MSG_ID_BUTT
};
typedef VOS_UINT32  MTC_GMM_MSG_ID_ENUM_UINT32;


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
 结构名    : MTC_GMM_RRC_AREA_LOST_IND_STRU
 结构说明  : rrc丢网指示
 1.日    期   : 2013年12月8日
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    MSG_HEADER_STRU              stMsgHeader;                                   /*_H2ASN_Skip*/
    VOS_UINT8                    aucReserved[4];
} MTC_GMM_RRC_AREA_LOST_IND_STRU;

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/

/*****************************************************************************
  H2ASN顶级消息结构定义
*****************************************************************************/
typedef struct
{
    MTC_GMM_MSG_ID_ENUM_UINT32          enMsgID;                                /*_H2ASN_MsgChoice_Export MTC_GMM_MSG_ID_ENUM_UINT32*/
    VOS_UINT8                           aucMsgBlock[4];
    /***************************************************************************
        _H2ASN_MsgChoice_When_Comment          MTC_GMM_MSG_ID_ENUM_UINT32
    ****************************************************************************/
} MTC_GMM_MSG_DATA;
/*_H2ASN_Length UINT32*/

typedef struct
{
    VOS_MSG_HEADER
    MTC_GMM_MSG_DATA                    stMsgData;
} MtcGmmInterface_MSG;

/*****************************************************************************
  10 函数声明
*****************************************************************************/

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of MtcGmmInterface.h */

