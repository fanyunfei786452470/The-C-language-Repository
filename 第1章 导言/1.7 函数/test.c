#include <stdio.h>
int power(int m, int n);
/* test power function */
int main(int argc, char const *argv[])
{
	int i ;
	for (int i = 0; i < 10; ++i)
	{
		printf("%d %d %d\n", i, power(2,1), power(-3, 1));
	}
	return 0;
}

/* power:raise base to n-th power; n >= 0 */
int power(int base , int n)
{
	int i, p;
	p = 1;
	for (int i = 0; i <= n; ++i)
	{
		p = p * base;
	}
	return p;
}
