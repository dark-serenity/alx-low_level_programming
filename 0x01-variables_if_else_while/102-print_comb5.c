#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers,
 *              meeting the given requirements, using putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3, num4;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			for (num3 = 0; num3 < 10; num3++)
			{
				for (num4 = 0; num4 < 10; num4++)
				{
					int firstNum = num1 * 10 + num2;
					int secondNum = num3 * 10 + num4;

					if (firstNum < secondNum)
					{
						putchar(num1 + '0');
						putchar(num2 + '0');
						putchar(' ');
						putchar(num3 + '0');
						putchar(num4 + '0');

						if (firstNum != 98 || secondNum != 99)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

