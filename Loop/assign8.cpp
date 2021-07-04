#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n,fact;
	cout<<"Enter a number: ";
	cin>>n;
	fact=1;
	for(int i=1; i<=n; i++)
	{
		fact=fact*i;
	}
	cout<<n<<"! = "<<fact;
	getch();
	return 0;
}