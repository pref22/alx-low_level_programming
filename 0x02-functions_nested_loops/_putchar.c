#include "main_h"
#include <unistd_h>

/**
*_putchar - check the code
*
*Return: On success 1.
*On error, -1 is returned
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
