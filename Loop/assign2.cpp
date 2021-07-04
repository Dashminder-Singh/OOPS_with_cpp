#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;

	for(int i=n; i>=1; i--)
	{
		cout<<i<<" ";
	}
	getch();
	return 0;
}