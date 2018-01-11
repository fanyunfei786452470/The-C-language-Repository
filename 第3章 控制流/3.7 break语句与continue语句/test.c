/* break语句与continue语句 */



/* 
   break语句可以从 switch、for、while、do-while等循环中提前退出
   下面的trim用于删除字符串尾部的空格符、制表符与换行符，当发现最右侧的字符为非空格符、非制表符、非换行符时，就使用break语句从循环退出
*/
/* trim: remove trailing blanks, tabs, newlines */
int trim(char s[])
{
	int n ;
	for (n = strlen(s) - 1; n >= 0; n--)
	{
		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
		{
			break;
		}
		s[n + 1] = '\0';
		return n;
	}
}

/* 下面的程序是用于处理数组 a中的非负元素。如果某个元素的值为负，则跳过不处理*/
int n = 10;
int a[n];
for (int i = 0; i < n; ++i)
{
	if (a[i] < 0)
	{
		continue;
	}
}