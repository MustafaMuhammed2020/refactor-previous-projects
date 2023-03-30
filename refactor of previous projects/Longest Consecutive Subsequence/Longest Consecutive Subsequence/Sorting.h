/*************************************************************************/
/* Author    : Mustafa Mohammed Abdo                                     */
/* Date      : 29 Mar 2023                                               */
/* Version   : V01                                                       */
/* Hint      : Prototypes of insertion sorting                           */
/*************************************************************************/

/* HEADER FILE GUARD */
#ifndef Sorting_H
#define Sorting_H

#include"standard_types.h"


/* Description:
 * - This function takes a reference to an array of integers
 * - Sorts the array in ascending order
 * - Using the insertion sort algorithm
 * Return:
 * - returns -1 if the array is empty
 * - returns -2 if the array size is 0 or >10
 * - returns 0 if sorting is done without errors
 */
sint8_t insertionSort(sint32_t* array, uint8_t arraySize);



/* Description:
 * - This function takes a reference to an array of integers
 * - Prints all array elements
 * Return:
 * - Nothing to return
 */
void printArray(sint32_t * array, uint8_t arraySize);






#endif
