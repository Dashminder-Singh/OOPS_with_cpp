#include <stdio.h>

int main()
{
	int p, r, t, ans;

	printf("Enter principle amount, rate and time: ");
	scanf("%d%d%d",&p,&r,&t);

	ans=(p*r*t)/100;

	printf("Simple Interest is %d\n",ans);
	
	return 0;
}