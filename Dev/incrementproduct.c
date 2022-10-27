#include <stdio.h>
int main()
{
	int a = 5, b;
	b = ++a * ++a * ++a;
	printf("Answer is %d",b);
	return 0;
}