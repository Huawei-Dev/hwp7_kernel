/*
 ******************************************************************************
 *                     INTERPEAK SOURCE FILE
 *
 *   Document no: @(#) $Name: VXWORKS_ITER18A_FRZ10 $ $RCSfile: ipcom_usr_init.c,v $ $Revision: 1.7 $
 *   $Source: /home/interpeak/CVSRoot/ipcom/src/ipcom_usr_init.c,v $
 *   $State: Exp $ $Locker:  $
 *
 *   INTERPEAK_COPYRIGHT_STRING
 *   Design and implementation by Lennart Bang <lob@interpeak.se>
 ******************************************************************************
 */


/*
 ****************************************************************************
 * 1                    DESCRIPTION
 ****************************************************************************
 */

/*
 ****************************************************************************
 * 2                    CONFIGURATION
 ****************************************************************************
 */

#ifdef IPCOM_KERNEL
#error USR_INIT_BADLY_COMPILED
#endif
#include "ipcom_config.h"


/*
 ****************************************************************************
 * 3                    INCLUDE FILES
 ****************************************************************************
 */

#define IPCOM_USE_CLIB_PROTO
#include "ipcom_type.h"
#include "ipcom_cstyle.h"
#include "ipcom_clib.h"
#include "ipcom_err.h"
#include "ipcom_os.h"


/*
 ****************************************************************************
 * 4                    DEFINES
 ****************************************************************************
 */

/*
 ****************************************************************************
 * 5                    TYPES
 ****************************************************************************
 */

/*
 ****************************************************************************
 * 6                    EXTERN PROTOTYPES
 ****************************************************************************
 */

IP_EXTERN Ipcom_mutex ipcom_once_mutex;


/*
 ****************************************************************************
 * 7                    LOCAL PROTOTYPES
 ****************************************************************************
 */

IP_PUBLIC Ip_err ipcom_usr_create(void);


/*
 ****************************************************************************
 * 8                    DATA
 ****************************************************************************
 */

IP_PUBLIC const char *ipcom_version =
"@(#) IPCOM $Name: VXWORKS_ITER18A_FRZ10 $ - INTERPEAK_COPYRIGHT_STRING";

IP_STATIC Ip_bool ipcom_usr_created = IP_FALSE;


/*
 ****************************************************************************
 * 9                    STATIC FUNCTIONS
 ****************************************************************************
 */

/*
 ****************************************************************************
 * 10                   GLOBAL FUNCTIONS
 ****************************************************************************
 */

/*
 ****************************************************************************
 * 11                   PUBLIC FUNCTIONS
 ****************************************************************************
 */

/*
 *===========================================================================
 *                    ipcom_usr_create
 *===========================================================================
 * Description:
 * Parameters:
 * Returns:
 */
IP_PUBLIC Ip_err
ipcom_usr_create(void)
{
    Ip_err   err;

    /*!!RACE CONDITION*/
    if (ipcom_usr_created)
        return IPCOM_SUCCESS;
    ipcom_usr_created = IP_TRUE;

    err = ipcom_mutex_create(&ipcom_once_mutex);
    if (err != IPCOM_SUCCESS)
        goto fail;

    /****** SUCCESS *****/
    return err;


    /****** Create fail *****/
 fail:
    IP_PANIC();
    return err;
}


/*
 ****************************************************************************
 *                      END OF FILE
 ****************************************************************************
 */

