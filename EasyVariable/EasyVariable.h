/**
* @file 		EasyVariable.h
* @brief		To provide a common function port to modify variables' value
* @author		dongdd
*/
#ifndef _EASYVARIABLE_H_
#define _EASYVARIABLE_H_

/**********************************************************************************/
								/* include headers */
/**********************************************************************************/
#include "stdio.h"

#include "EasyVariableBase.h"
#include "EasyVariableConfig.h"

/**********************************************************************************/
								/* macro */
/**********************************************************************************/
#define EasyVariable_Assert(bFlag, Return)			if(bFlag){return Return;}

/**********************************************************************************/
								/* function declaration */
/**********************************************************************************/
void EasyVariableWirte(EasyVariableUint32_t u32DataIndex, void* pvodDataValue);
void EasyVariableRead(EasyVariableUint32_t u32DataIndex, void* pvodDataValue);

#endif
