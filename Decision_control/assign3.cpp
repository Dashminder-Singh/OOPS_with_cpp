#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;

	if(n>=0 && n<=7)
		cout<<"Octal";
	else if(n<0)
		cout<<"invalid";
	else
		cout<<"Not Octal";
	getch();
	return 0;
}