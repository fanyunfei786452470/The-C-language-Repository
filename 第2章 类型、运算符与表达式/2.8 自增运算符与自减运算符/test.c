/* 自增运算符与自减运算符 */



/* 
   C语言中提供了两个用于变量递增与递减的特殊运算符分别为：++ --
   （1）++ 和-- 两个运算符的主要表现在：它们既可以用作前缀运算符（如：++n），也可以用作后缀运算符（如：n++），其效果都是讲变量n的值加1，不同的是：表达式++n现将n加1，然后再使用变量n的值，而n++则是先使用变量n的值，然后再将n的值递增1
   （2）在不需要使用任何具体值且仅需要递增变量的情况下，前缀方式和后缀方式的效果相同。但在某些情况下需要酌情考虑例如下函数：
 */
/* squeeze: delete all c from s */
void squeeze(char s[], int c)
{
	int i, j;
	for (i = j = 0; s[i] != '\0'; ++i)
	{
		if (s[i] != c)
		{
			s[j++] = s[i];
		}
	}
	s[j] = '\0';
}

/* 考虑标准函数strcat(s, t)*/
/* strcat: concatenate t to end of s ; s must be big enougn */
void strcat(char s[], char t[])
{
	int i, j;
	while(s[i] != '\0')
	{
		i++;
	}
	while((s[i++] = t[j++]) != '\0')
	{
		
	}
}