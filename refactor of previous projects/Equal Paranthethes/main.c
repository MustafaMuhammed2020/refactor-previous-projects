/*************************************************************************************/
/* AUTHOR    : MUSTAFA MOHAMMED ABDOU                                                */
/* DATE      : 28 MAR 2023                                                           */
/* VERSION   : V01                                                                   */
/* HINT      : (Check Balanced Paranthethes) APPLICATION ON STACK                    */
/*************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include <stdio.h>

#include <string.h>

#include"paranthethes.h"

#include"stack.h"


/* MAIN PROGRAM */
int main(void)
{
    sint8_t Localstringstatus = 0; /* HOLDS THE RETURN FROM isBalancedParanthethes() */

    /*
    1. Test Case 1  { (2 + 3) }   ==> expected to be balanced
    2. Test Case 2  { ((2 + 3) }  ==> not balanced
    3. Test Case 3  [(2 + 3)]     ==> balanced
    4. Test Case 4  { (2 + 3) / ((3 + 3) * (15 - 10)) } ==>balanced
    5. Test Case 5  (2 + 3) / ((3 + 3) * (15 - 10))     ==> balanced
    6. Test Case 6  { {2 + 3) / ((3 + 3) * (15 - 10)))  ==> not balanced
    7. Test Case 7  {(2 + 3(/ ((3 + 3) * (15 - 10))}    ==> not balanced
    8. Test Case 8  {(2 + 3) / ((3 + 3(*)15 - 10))}     ==> balanced
    9. Test Case 9  })2 + 3) / ((3 + 3) * (15 - 10)) } ==> not balanced
   10. Test Case 10 { (2 + 3) / (<3 + 3>*(15 - 10)) }  ==> balanced
     */


    uint8_t* str = "{ (2 + 3) / (<3 + 3>*(15 - 10)) }";   /* STRING FOR TESTING */

    printf("Enter an expression to vaidate\n");

    scanf("%s", &str);


    Localstringstatus = isBalancedParanthethes(&str); /* CALL THE FUNCTION */

    if (Localstringstatus == 0)
    {
        printf("parantheses Are Balanced\n");

    }

    else if (Localstringstatus == -1)
    {
        printf("parantheses Are Not Balanced\n");
    }

    else if (Localstringstatus == -2)
    {
        printf("Neither Parentheses is used\n");
    }

    for (;;)
    {

    }

    return 0;
}


