/* do-while 循环*/



/* 
   do-while循环在循环体执行后测试终止条件，这样循环体至少被执行一次
   do{
	 语句；
   }while(表达式);
   表明：do-while循环比while循环和for循环用得少得多
 */

/* 下面举个itoa的例子：把数字转换为字符串*/

/* itoa：convert n to characters in s */
void itoa(int n, char s[])
{
	int i, sign;
	if ((sign = n) < 0)
	{
		n = -n;
	}
	i = 0;
	do{
		s[i++] = n % 10 + '0';
	}while((n / 10) > 0);
	if (sign < 0)
	{
		s[i++] = '-';
	}
	s[i] = '\0';
	reverse(s);
}