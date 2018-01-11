/* else-if 语句*/



/*
   在C语言中经常遇到下列结构：
   if（表达式）
   {
	 语句
   }
   else if（表达式）
   {
     语句	
   }
   else if（表达式）
   {
	 语句
   }
   else if（表达式）
   {
	 语句
   }
   else 
   {
	 语句
   }

   最后一个else 部分用于处理“上述条件均不成立”的情况
   下面举一个折半查找的经典例子
*/
/* binsearch: find x in v[0] <= v[1] <= ...<=v[n-1] */
int binsearch(int x, int v[], int n)
{
	int low, high, mid;
	low = 0;
	high = n - 1;
	while(low <= high)
	{
		mid = (low + high)/2;
		if (x < v[mid])
		{
			high = mid + 1;
		}
		else if (x > v[mid])
		{
			low = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}