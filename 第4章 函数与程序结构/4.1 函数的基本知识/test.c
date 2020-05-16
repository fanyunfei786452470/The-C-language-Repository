/* 函数与程序结构 */
/* 
   函数可以把打的及孙任务分解成若干个较小的任务，程序设计人员可以基于函数进一步构造程序，而不需要重新编写一些代码。一个设计得当的函数可以把程序中不需要了解的具体操作细节隐藏起来，从而使整个程序结构更加的清晰，并降低了修改程序的难度
   C语言在设计中考虑了函数的高效性与易用性。C语言程序一般都由许多小的函数组成，而不是有少量较大的函数组成。一个程序可以保存在一个或者多个源文件中。各个文件可以单独编译，并可以与库中已编译过的函数一起加载。
*/

/* 函数的基本知识 */



/* 在这里举一个例子：在一组文本行中查找包含字符串“ould”的行 */
#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int getLine(char line[], int max);
int strindex(char sourc[], char searchfor[]);

char pattern[] = "ould"; /* pattern to search for */

/* find all lines matching pattern */

int main()
{
	char line[MAXLINE];
	int found = 0;
	while(getLine(line, MAXLINE) > 0)
	{
		if (strindex(line, pattern) >= 0)
		{
			printf("%s\n", line);
			found++;
		}
	}
	return found;
}


/* getLine: get line into s, return length */
int getLine(char s[], int lim)
{
	int c, i;
	i = 0;
	while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
	{
		s[i++] = c;
	}
	if (c == '\n')
	{
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}


/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[])
{
	int i, j, k;
	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; ++j, ++k)
		{
			/* code */
		}
		if (k > 0 && t[k] == '\0')
		{
			return i;
		}
	}
	return -1;
}