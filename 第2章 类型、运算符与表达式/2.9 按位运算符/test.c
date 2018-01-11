/* 按位运算符 */



/* 
   C语言提供了6个按位运算符，这些运算符只能作用于整形操作数，即只能作用于带符号或者无符号char、short、int、long类型：
   &    按位与（AND）
   |    按位或（OR）
   ^    按位异或（XOR）
   <<   左移
   >>   右移
   ~    按位求反（一元运算符）
   为进一步说明某些位运算符，看函数getbits(x, p, n),例如：getbits(x,4,3)返回x中第4，3，2三位的值
*/

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p + 1 - n) & ~(~0 << n));
}