/*************************************************************************************/
/* AUTHOR    : MUSTAFA MOHAMMED ABDOU                                                */
/* DATE      : 28 MAR 2023                                                           */
/* VERSION   : V01                                                                   */
/* HINT      : PROTOTYPES OF PARANTHESES FUNCTIONS                                   */
/*************************************************************************************/


/* FILE GUARD  */
#ifndef PARANTHESES_H
#define PARANTHESES_H

#include<stdio.h>


#include"stack.h"

#include"standard_types.h"


/* Description:
 * - This function takes an expression array max 10 characters
 * - Checks if the parentheses are balanced or not
 * - Checks the following parentheses types {, }, (, ) only
 * Return:
 * - returns -2 if the neither of paranthethes is used
 * - returns -1 if the parentheses are not balanced
 * - returns 0 if the parentheses are balanced
 */
sint8_t isBalancedParanthethes(uint8_t* expression);






#endif // !PARANTHESES_H
