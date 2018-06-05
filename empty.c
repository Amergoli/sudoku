#include "Header.h"
/***
* Erzeugt einen leeren Stapel
*
* @param up ist das oberste Element des Stapels.
* @return stack_1 ist ein Zeiger auf das Feld des Stapels.
*/

struct stack* empty(char *up)
{
	struct stack *stack_1[81];
	*up = -1;
	return stack_1;
}
