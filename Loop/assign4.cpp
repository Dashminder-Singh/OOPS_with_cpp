#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n,x;
	cout<<"Enter a number: ";
	cin>>n;

	for(int i=n; i>=1; i--)
	{
		x=(2*i)-1;
		cout<<x<<" ";
	}
	getch();
	return 0;
}