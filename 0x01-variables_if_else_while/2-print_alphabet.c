#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is",n);
	num = n % 10;
		if(num > 5)
		{
			printf("%d and is grater than 5\n", num);
		}
		else if((num < 6) && (num < 0))
	        {
		       printf("%d and is less than 6 and not 0\n", num);
	        }
		else
		{
			printf("%d and is 0\n", num);
		}
	return (0);
}