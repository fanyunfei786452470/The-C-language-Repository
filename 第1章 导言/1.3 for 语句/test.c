#include <stdio.h>
int main(int argc, char const *argv[])
{
	int fahr;
	for (int i = 0; fahr <= 300; fahr = fahr + 20)		
	{
		printf("%3d %6.1f\n", fahr, (5.0/9) * (fahr - 32));
	}
	return 0;
}
