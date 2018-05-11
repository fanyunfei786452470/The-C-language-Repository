#include <stdio.h>
#include <ctype.h>

/* atof: convert string s to double */
double atof(char s[])
{
	double va1, power;
	int i, sign;

	for (i = 0; i < isspace(s[i]); ++i) /* skip white space */
	{
		/* code */
	}
	sign = (s[i] == '-') ? -1 :1;
	if (s[i] == '+' || s[i] == '-')
	{
		i++;
	}

	for (va1 = 0.0; isdigit(s[i]); ++i) /* 判断是否为10进制字符 */
	{
		va1 = 10.0 * va1 + (s[i] - '0');
	}

	if (s[i] == '.')
	{
		i++;
	}

	for (power = 1.0; isdigit(s[i]); ++i)
	{
		va1 = 10.0 * va1 + (s[i] - '0');
		power *= 10;
	}
	return sign * va1 / power;
}


int main(int argc, char const *argv[])
{
	char * s = "1245.67";
	printf("%f\n", atof(s));
	return 0;
}
