#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n, highest=0, r;
	cout<<"Enter a number: ";
	cin>>n;

	while(n!=0)
	{
		r=n%10;
		if(highest<r)
		{
			highest=r;
		}
		n=n/10;
	}
	cout<<"The highest value is "<<highest;
	getch();
	return 0;
}