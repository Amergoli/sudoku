#include "Header.h"

/**
* Diese Funktion gibt das oberste Element des Stapels aus.
*
* @param stack_1 ist der Stapel.
* @param up ist das oberste Element des Stapels.
* @return das oberste Element des Stapels, sonst -1.
*/
int top(struct stack *stack_1, char* up)
{
	if (up != -1)
	 {
		return stack_1[*up].num;
	}
	return -1;
}
