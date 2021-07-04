#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a,b,L;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	for(L=a>b?a:b; L<=a*b; L=L+(a>b?a:b))
	{
		cout<<L<<" ";
		if(L%a==0 && L%b==0)
		{
			break;
		}
	}
	cout<<"\nLCM is "<<L;
	getch();
	return 0;
}