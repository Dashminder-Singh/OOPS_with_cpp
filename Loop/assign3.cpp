#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;

	for(int i=1; i<=n; i++)
	{
		cout<<i*2<<" ";
	}
	getch();
	return 0;
}