/* while循环与for循环 */



/*
   while 的循环语句：
   while(表达式)
   {
	 语句；
   }  

   for循环语句：
   for(表达式1; 表达式2; 表达式3)
   {
	 语句;
   }
   等价于：
   表达式1;
   while(表达式2)
   {
	 语句;
	 表达式3;
   }
   注意：当while或for循环语句中包含continue语句时，上述就不一定等价了
*/


/* 
   for循环语句的3个组成部分都是表达式，实际上三个表达式都可以省略，但是三个“;”必须保留。在开发过程中是选while循环还是for循环，主要取决于程序员的个人偏好
   例如：
   while((c = getchar()) == ' ' || c == '\n' || c == '\t')
   {
	 
   }
   像这种没有初始化或者重新初始化的操作，使用while循环语句更自然一些
   在此重新编写将字符串转换为对应数值的函数atoi：
*/
#include <ctype.h>

/* atoi: convert s to integer ; version 2*/
int atoi(char s[])
{
	int i, n, sign;
	for (i = 0; isspace(s[i]); i++)
	{
		
	}
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
	{
		i++;
	}
	for (n = 0; isdigit[s[i]]; i++)
	{
		n = 10 * n + (s[i] - '0');
	}
	return sign * n;
}

/* 对整形数组进行排序的Shell排序算法*/
/* shellsort：sort v[0]...v[n-1] into increasing order */
void shellsort(int v[], int n)
{
	int gap, i, j, temp;
	for (gap = n/2; gap > 0; gap /= 2)
	{
		for (i = gap; i < n; ++i)
		{
			for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
			{
				temp = v[j];
				v[j] = v[j + gap];
				v[j + gap] = temp;
			}
		}
	}
}

/* 倒置字符串s中各个字符的位置 */
#include <string.h>
/* reverse : reverse string s in place */
void reverse(char s[])
{
	int c, i, j;
	for (i = 0, j < strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
