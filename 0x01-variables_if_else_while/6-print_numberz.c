#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 1 (Success)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		put char((num % 10) + '0');
	putchar('\n');
	return (0);
}
