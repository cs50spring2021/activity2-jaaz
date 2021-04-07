/* 
 * str2int.h - a utility function to safely convert a string to int
 * return a bool depending on outcome of operation
 *
 * Amittai Siavava, April 2021
 */

#ifndef __STR2INT_H__
#define __STR2INT_H__

#include <stdbool.h>

/* ***************** str2int ********************** */
/*
 * Convert a string to an integer, returning that integer.
 * Returns true if successful, or false if any error. 
 * It is an error if there is any additional character beyond the integer.
 * Assumes number is a valid pointer.
 */
extern bool str2int(const char string[], int * number);

#endif //  __READLINE_H__