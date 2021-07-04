#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a, b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;

	if(a>b)
		cout<<a<<" is greater than "<<b;
	else
		cout<<a<<" is less than "<<b;
	getch();
	return 0;
}