#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
              lastd = n%10;
   if (lastd>5)
{
printf("lastd digit of %d is %d and is greater than 5\n", n , lastd);
else if (lastd==0)
{
Printf("lastd digit of %d is %d and is 0\n", n, lastd);
}
	/* your code goes there */
	return (0);
}

