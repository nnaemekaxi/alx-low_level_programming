#include <stdarg.h>

/**
* sum_them_all - function adds the unspecified number of items
* @n: the number of parameters the function takes
* @...: the unspecified number of arguments the function takes
*
* Return: If n == 0, return 0
* otherwise it returns the sum of all numbers
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int count, sum = 0;

	va_start(nums, n);

	count = 0;
	while (count < n)
	{
		sum += va_arg(nums, int);
	count++;
	}

	va_end(nums);

	return (sum);
}
