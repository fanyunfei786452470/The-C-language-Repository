#include <stdio.h>
/* count digits, while space , others */
int main(int argc, char const *argv[])
{
	int c, i, nwhile, nother;
	int ndigit[10];
	nwhile = nother = 0;
	for (int i = 0; i < 10; ++i)
	{
		ndigit[i] = 0;
	}
	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
		{
			++ndigit[c - '0'];
		}
		else if (c == ' ' || c == '\n' || c == '\t')
		{
			++nwhile;
		}
		else
		{
			++nother;
		}
	}
        printf("digits = ");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d", ndigit[i]);
	}
	printf(", white space = %d, other = %d \n", nwhile, nother);
	return 0;
}
/* 由定义可知，char 类型的字符是小整型，因此 char 类型的变量和常量在算术表达式中等价于 int 类型的变量和常量。这样做既自然又方便 */
