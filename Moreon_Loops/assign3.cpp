#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n,a,b,c;
	cout<<"Enter a number: ";
	cin>>n;
	a=1,b=1;
	cout<<a<<" "<<b<<" ";
	for(int i=2; i<n; i++)
	{
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
	getch();
	return 0;
}