#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a,b,i;
	cout<<"Enter two number: ";
	cin>>a>>b;

	for(int l=a+1; l<b; l++)
	{
		for(i=2; i<b; i++)
		{
			if(l%i==0)
			{
				break;
			}
		}
		if(i==l)
			cout<<l<<" ";	
	}
	getch();
	return 0;
}