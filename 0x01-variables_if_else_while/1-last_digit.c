include <stdlib.h>
#include <time.h>
/**
 * main -determining if a number is positive or negative 
 *
 * Return: Always 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes here*/
printf("Last digit of %d is ", n);
if (n % 10 > 5)
printf("and is greater than 5\n");
else if (n % 10 == 0)
printf("and is 0\n");
else
printf("and is less than 6 and not 0\n");
return (0);
}
