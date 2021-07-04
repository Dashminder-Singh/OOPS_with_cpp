#include <stdio.h>

int main()
{
	int temp;
	int a=10, b=5;
	printf("a= %d b=%d\n",a,b);

	temp=a;
	a=b;
	b=temp;
	printf("a= %d b=%d\n",a,b);
	return 0;
}