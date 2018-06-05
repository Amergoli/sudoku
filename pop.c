#include "Header.h"
/**
* Diese Funktion loescht das oberste Element des Stapels.
*
* @param stack_1 ist der Stapel.
* @param up ist das oberste Element des Stapels.
*/

void pop(struct stack *stack_1,  char* up)
{
	int oben;

	oben = *up;
	oben=oben-1;
	*up = oben;
}
