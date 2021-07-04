#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n,t,r,s=0;
	cout<<"Enter a number: ";
	cin>>n;

	t=n;
	while(t!=0)
	{
		r=t%10;
		s=s+r;
		t=t/10;
	}
	cout<<"Sum of "<<n<<" is "<<s;
	getch();
	return 0;
}