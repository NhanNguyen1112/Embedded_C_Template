/**
****************************************************************************************************
*   @file    Can.h
*   @brief 
*	@author  
*	@Version
*	@license
****************************************************************************************************

*   @details 
*	@physics

****************************************************************************************************
*/

/*==================================================================================================
==================================================================================================*/
#ifndef DEMO_H
#define DEMO_H

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "test.h"

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define DEMO      ((int)0x01U)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
* @brief          
* @details       
*
*/
typedef enum
    {
        ENUM1 = 0U,   /**<  */
		ENUM2 = 1U
    } demo_e;


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief          struct name demo_t
* @details        This structure is .....
*
*/
typedef struct
	{
		int a;
		int b;
	} demo_t;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
extern int demo_variable;

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
extern void demo(void);

#endif /* DEMO_H */
