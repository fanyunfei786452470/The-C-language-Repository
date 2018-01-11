/* 赋值运算符与表达式 */



int i = 0；
i += 2；
/* 
   大多数二元运算符（即有左、右两个操作数的运算符，比如+）都有一个相应的赋值运算符op=，其中，op可以是下面这些运算符之一：
   +  -  *  /  %  <<  >>  &  ^  |
   如果expr1和expr2是表达式，那么 expr1 op= expr2 <==>  expr1 = (expr1) op (expr2)  
*/



/* 这里使用函数bitcount来统计其整数参数的值为1的二进制位的个数*/
/*  bitcount : count 1 bits in x */
int bitcount(unsigned x)
{
	int b;
	for (b = 0; x != 0; x >>= 1)
	{
		if (x & 01)
		{
			b++;
		}
	}
	return b;
}
/* 这里将x生命为无符号类型是为了保证将x右移时，无论该程序在什么机器上运行，左边空出的为都用0（而不是符号位）填补*/