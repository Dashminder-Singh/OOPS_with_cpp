#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;

	if(ch>='A' && ch<='Z')
		cout<<"uppercase alphabet";
	else if(ch>='a' && ch<='z')
		cout<<"lowercase alphabet";
	else if(ch=='@' || ch>='!' && ch<=')')
		cout<<"special character";
	else
		cout<<"digit";
	getch();
	return 0;
}