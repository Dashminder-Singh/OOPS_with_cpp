#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;

	if(n>0)
		cout<<"Postive";
	else if(n<0)
		cout<<"Negative";
	else
		cout<<"Zero";
	getch();
	return 0;
}