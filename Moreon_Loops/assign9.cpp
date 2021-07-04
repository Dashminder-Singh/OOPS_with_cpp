#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n,r,rev=0;
	cout<<"Enter a number: ";
	cin>>n;

	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	cout<<"Reverse is "<<rev;
	getch();
	return 0;
}