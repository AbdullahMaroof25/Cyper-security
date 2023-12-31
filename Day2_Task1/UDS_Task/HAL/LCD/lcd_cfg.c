/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  lcd_cfg.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "lcd_cfg.h"
#include "std_types.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/
u8 customChar[NO_CSTOM_CHAR][NO_CSTOM_CHAR_BYTES]=
{
		{0x0A,0x1F,0x1F,0x1F,0x1F,0x0E,0x04,0x00},	/* Heart symbol	 */
		{0x04,0x1F,0x11,0x11,0x11,0x11,0x11,0x1F},	/* Empty battery */
		{0x04,0x1F,0x11,0x11,0x11,0x11,0x1F,0x1F},	/*	20% battery  */
		{0x04,0x1F,0x11,0x11,0x11,0x1F,0x1F,0x1F},  /*	40% battery  */
		{0x04,0x1F,0x11,0x11,0x1F,0x1F,0x1F,0x1F},	/*	60% battery  */
		{0x04,0x1F,0x11,0x1F,0x1F,0x1F,0x1F,0x1F},	/*	80% battery  */
		{0x04,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F},	/*	100% battery */
		{0x00,0x00,0x01,0x01,0x05,0x05,0x15,0x15},	/*	Mobile Signal*/
};
/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: lcd_cfg.c
 *********************************************************************************************************************/
