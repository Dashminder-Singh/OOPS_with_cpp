#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n,r,oct=0,i=1;
	cout<<"Enter a number: ";
	cin>>n;

	while(n!=0)
	{
		r=n%8;
		oct=oct+r*i;
		n=n/8;
		i=i*10;
	}
	cout<<"Octal is "<<oct;
	getch();
	return 0;
}