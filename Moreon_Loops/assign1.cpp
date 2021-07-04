#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter a number: ";
	cin>>n;

	for(i=2; i<n; i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(n!=i)
		cout<<"Not prime";
	else
		cout<<"Prime";
	getch();
	return 0;
}