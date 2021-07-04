#include <stdio.h>

int main()
{
	int l,b,h, vol;
	printf("Enter length, breath and height of cuboid: ");
	scanf("%d%d%d",&l,&b,&h);

	vol=l*b*h;
	printf("Volume of cuboid is %d\n", vol);
	return 0;
}