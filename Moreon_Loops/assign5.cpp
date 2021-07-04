#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a,b,H;
	cout<<"Enter two number: ";
	cin>>a>>b;

	for(H=a<b?a:b; H>=1; H--)
	{
		cout<<H<<" ";
		if(a%H==0 && b%H==0)
			break;
	}
	cout<<"\nHCF is "<<H;
	getch();
	return 0;
}