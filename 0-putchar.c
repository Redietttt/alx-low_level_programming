#include"main.h"

/**
 * main - entry point
 *
 * description: prints _putchar using putchar prototype
 *
 * return: always 0 (success)
 */
 
 int main(void)
{ 
char t{} = "_putchar";
int h;

for (h = 0; h < 8; ++h)
	_putchar(t[h]);
_putchar('\n');

return (0);
}

