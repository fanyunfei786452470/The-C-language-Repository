/* switch 语句*/



/* 
   switch 语句是一种多路半丁语句，它测试表达式是否与一些常量整数值中的某一个值匹配，并执行响应的分支动作
   switch(表达式)
   {
	 case 常量表达式:语句序列
	 case 常量表达式:语句序列
	 default:语句序列
   }

   如果没有哪一分支能匹配表达式，则实行标记为default的分支.default分支是可选的。如果没有default分支页没有其它分支与表达式的值匹配，则该switch语句不执行任何动作。
   在第1章中曾使用if...else 结构编写过一个程序用来统计各个数字、空白符及其它所有字符出现的次数，在此可以用switch语句改写该程序：
 */

#include <stdio.h>
int int main(int argc, char const *argv[])
{
	int c, i, nwhile, nother, ndigit[10];
	nwhile = nother = 0;
	for (int i = 0; i < 10; ++i)
	{
		ndigit[i] = 0;
	}
	while((c = getchar ()) != EOF)
	{
		switch(c)
		{
			case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':ndigit[c - '0']++; break;
			case ' ':
			case '\n':
			case '\t': nwhile++; break;
			default: nother++; break;
		}
	}
	printf("digits = ");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d", ndigit[i]);
	}
	printf(", while space = %d , other = %d \n", nwhile, nother);
	return 0;
}

/* break 语句可以强制控制从 switch、while、for、do循环语句中立即退出*/