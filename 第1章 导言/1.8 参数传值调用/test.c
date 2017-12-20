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
/* 在 C 语言中，所有函数参数都是“通过值”传递的。也就是说，传递给被调用函数的参数值存放在临时变量中，而不是存放在原来的变量中。这与其它某些语言是不同的 */
