/*************************************************************************************/
/* AUTHOR    : MUSTAFA MOHAMMED ABDOU                                                */
/* DATE      : 28 MAR 2023                                                           */
/* VERSION   : V01                                                                   */
/* HINT      : STACK IMPLEMENTATION BAED ON ARRAY                                    */
/*************************************************************************************/

#include"stack.h"


/* DEFINE THE MAX SIZE OF THE STACK */
#define STACK_SIZE 10


void createEmptyStack(ST_stack_t* stack)
{
    stack->elements[10] = 0 ;  /* INITIALIZE ELEMENTS WITH ZEROS */
    stack->top = -1;          /* INITIALIZE THE TOP WITH -1 */

}


sint8_t push(ST_stack_t* stack, uint8_t data)
{
    sint8_t returnvalue = 0; /* HOLDS THE RETURN VALUE */

    if (stack->top == 9)  /* CHECK IF THE STACK IS FULL OR NOT */
    {
        returnvalue = -1; /* RETURN -1 WHEN THE STACK IS FULL */
    }

    /* THERE IS FREE SPACE TO ADD ELEMENT */
    else
    {
        stack->top++ ;                         /* INCREMENT THE SP BY 1  */
        stack->elements[stack->top] = data;    /* ADD THE ELEMENT (PUSH) */
        returnvalue = 0;
    }

    return returnvalue ; /* RETURN THE FUNCTION STATUS */
}


sint8_t pop(ST_stack_t * stack, uint8_t* data)
{
    sint8_t returnvalue = 0;    /* HOLDS THE RETURN VALUE */

    if (stack->top == -1)       /* CHECK IF THE STACK IS EMPTY */
    {
        returnvalue = -2; 
    }

    /* THERE IS ELEMENTS IN THE STACK */
    else
    {
        *data = stack->elements[stack->top]; /* STORE THE VALUEBEFORE POP OPERATION */
        stack->top-- ;   /* DECREMENT HE SP TO POINT TO THE PREVIOUS ELEMENT (POP) */
        returnvalue = 0;
    }

    return returnvalue ; /* return the function status */
}


sint8_t printStack(ST_stack_t* stack)
{
    sint8_t Localreturnvalue = 0 , LocalIterator = 0 ; /* VARIABLE HOLDS THE RETURN VALUE FROM THE FUNCTION */

    if (stack->top == 9)     /* THE STACK IS FULL */
    {
        Localreturnvalue = -1;
    }

    else if (stack->top == -1)  /* STACK IS EMPTY */
    {
        Localreturnvalue = -2;
    }

    else /* OTHERWISE */
    {
        Localreturnvalue = 0;
    }

    for (LocalIterator = stack->top ; stack->top >= 0; stack->top--)
    {
        printf("%d\n", stack->elements[stack->top]); /* PRINT ALL STACK ELEMENTS */
    }

    return Localreturnvalue; /* RETURN THE VALUE */
}

sint8_t getStackTop(ST_stack_t* stack, uint8_t* topData)
{
    sint8_t Localreturnvalue = 0; /* HOLDS THE RETUR OF THE FUNCTION */

    if (stack->top == -1) /* STACK IS EMPTY */
    {
        Localreturnvalue = -2;
    }

    else /* OTHERWISE */
    {
        Localreturnvalue = 0;
    }
    *topData = stack->elements[stack->top]; /* STORE THE LAST ADDED ELEMENT (TOP) */

    return Localreturnvalue; /* RETURN THE FUNCTION STATUS */
}

sint8_t isFull(ST_stack_t* stack)
{
    sint8_t Localreturnvalue = 0; /* HLDS THE RETURN VALUE OF THE FUNCTION */
    
    if (stack->top == 9)  /* STACK IS FULL */
    {
        Localreturnvalue = -1;
    }
    else /* OTHERWISE */
    {
        Localreturnvalue = 0;
    }

    return Localreturnvalue; /* RETURN THE FUNCTION STATUS */
}

sint8_t isEmpty(ST_stack_t* stack)
{
    sint8_t Localreturnvalue = 0; /* HOLDS THE RETURN OF THE FUNCTION */

    if (stack->top == -1) /* STACK IS EMPTY */
    {
        Localreturnvalue = -2;
    }
    else /* OTHERWISE */
    {
        Localreturnvalue = 0;
    }

    return Localreturnvalue; /* RETURN THE FUNCTION STATUS */
}