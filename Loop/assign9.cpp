#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n,count;
	cout<<"Enter a number: ";
	cin>>n;
	if(n==0)
	{
		cout<<"No. of digit is 1";
	}
	else
	{
		count=0;
		while(n!=0)
		{
			n=n/10;
			count++;
		}
		cout<<"No. of digit is "<<count;
	}
	getch();
	return 0;
}