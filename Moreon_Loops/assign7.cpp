#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n,r,bin=0,i=1;
	cout<<"Enter a number: ";
	cin>>n;

	while(n!=0)
	{
		r=n%2;
		bin=bin+r*i;
		n=n/2;
		i=i*10;
	}
	cout<<"Binary is "<<bin;
	getch();
	return 0;
}