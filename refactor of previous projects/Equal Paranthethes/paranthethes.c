/*************************************************************************************/
/* AUTHOR    : MUSTAFA MOHAMMED ABDOU                                                */
/* DATE      : 28 MAR 2023                                                           */
/* VERSION   : V01                                                                   */
/* HINT      : IMPLEMENTATION  OF PARANTHESES FUNCTIONS                              */
/*************************************************************************************/

#include"paranthethes.h"


sint8_t isBalancedParanthethes(uint8_t* expression)
{
	/* HOLDS THE RETURN OF THE FUNCTION */
	sint8_t Localreturnvalue = 9 , Localstackstate = 0;

	uint8_t Loaclpushcounter = 0, Localpopcounter = 0, Lcalexpressionletter = 0, Localpopdata = 0, Localtopelement = 0 , emptystatus = 1;

	ST_stack_t* paranthesesstack; /* POINTER TO STACK */

	createEmptyStack(&paranthesesstack); /* CREATE STACK TO HOLD PARANTHESES */

	while (expression[Lcalexpressionletter] != '\0') /* SCAN ALL STRING LETTERS */
	{
		if (expression[Lcalexpressionletter] == '(')
		{
			Localstackstate = isFull(&paranthesesstack); /* CHECK IF THE STACK IS FULL */

			if (!Localstackstate)  /* THIS MEANS STACK IS NOT FULL  */
			{
				//printf("pushed\n");
				push(&paranthesesstack, '('); /* PUSH INTO THE STACK */
				Loaclpushcounter++;  /* COUNT ONE PUSH */
				emptystatus = 0; /* CHANGE THE STATUS OF THE STACK */
			}
			else /* WHEN THE STACK IS FULL */
			{
				printf("You Exceeded The Maximum Of The Stack\n");
				break;
			}
		}

		else if (expression[Lcalexpressionletter] == '{')
		{
			Localstackstate = isFull(&paranthesesstack); /* CHECK IF THE STACK IS FULL */

			if (!Localstackstate)  /* THIS MEANS STACK IS NOT FULL  */
			{
				//printf("pushed\n");
				push(&paranthesesstack, '{'); /* PUSH INTO THE STACK */
				Loaclpushcounter++;  /* COUNT ONE PUSH */
			}
			else /* WHEN THE STACK IS FULL */
			{
				printf("You Exceeded The Maximum Of The Stack\n");
				break;
			}
		}

		else if (expression[Lcalexpressionletter] == ')')
		{
			Localstackstate = isEmpty(&paranthesesstack); /* CHECK IF THE STACK IS EMPTY */

			if (Localstackstate == -2) /* THIS MEANS THE STACK IS EMPTY */
			{
				//printf("empty\n");
				Localreturnvalue = -1; /* NOT BALANCED */
				return -1; ;          /* DON'T CONTINUE */
			}

			else /* STACK IS NOT EMPTY */
			{
				Localstackstate = getStackTop(&paranthesesstack, &Localtopelement); /* GET THE TOP ELEMENT IN THE STACK */

				if (Localtopelement == '(')
				{
					//printf("popped\n");
					pop(&paranthesesstack, &Localpopdata); /* POP THE LAST ELEMENT */
					Localpopcounter++;  /* COUNT ONE POP */

				}
				else /* TOP ELEMENT DOESN'T MATCH */
				{
					Localreturnvalue = -1; /* NOT BALANCED */
					break;
				}

			}

		}

		else if (expression[Lcalexpressionletter] == '}')
		{
			Localstackstate = isEmpty(&paranthesesstack); /* CHECK IF THE STACK IS EMPTY */

			if (Localstackstate == -2) /* THIS MEANS THE STACK IS EMPTY */
			{
				Localreturnvalue = -1; /* NOT BALANCED */
				return -1 ;                /* DON'T CONTINUE */

			}

			else /* STACK IS NOT EMPTY */
			{
				Localstackstate = getStackTop(&paranthesesstack, &Localtopelement); /* GET THE TOP ELEMENT IN THE STACK */

				if (Localtopelement == '{')
				{
					//printf("popped\n");
					pop(&paranthesesstack, &Localpopdata); /* POP THE LAST ELEMENT */
					Localpopcounter++;  /* COUNT ONE POP */

				}
				else /* TOP ELEMENT DOESN'T MATCH */
				{
					Localreturnvalue = -1; /* NOT BALANCED */
					break ;
				}

			}

		}

		Lcalexpressionletter++; /* JUMP TO THE NEXT LETTER */
	}

	Localstackstate = isEmpty(&paranthesesstack);

	if ((Localstackstate == -2) && (Loaclpushcounter > 0)) /* STACK IS EMPTY AND ELEMENTS WERE PUSHED */
	{
		Localreturnvalue = 0 ; /* BALANCED */
	}

	
	else if((Localstackstate == -2) && (Loaclpushcounter == 0)) /* STACK IS EMPTY AND NOTHING PUSHED */
	{
		Localreturnvalue = -2; /* NO PARANTHETHES USED */
	}

	
	else if ((Localstackstate != -2) && (Loaclpushcounter > 0)) /* STACK IS NOT EMPTY AT THE END */
	{
		Localreturnvalue = -1; /* NOT BALANCED */
	}

	//printf("%d\n", Localreturnvalue);


	return Localreturnvalue; /* RETURN THE VALUE */


}