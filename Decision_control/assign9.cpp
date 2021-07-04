#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter 3 numbers: ";
	cin>>a>>b>>c;

	if(a>b && a>c)
		cout<<a<<" is Greater";
	else if(b>c)
		cout<<b<<" is Greater";
	else
		cout<<c<<" is Greater";
	getch();
	return 0;
}