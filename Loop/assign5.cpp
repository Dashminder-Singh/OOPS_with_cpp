#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n,sum;
	cout<<"Enter a number: ";
	cin>>n;
	sum=0;
	for(int i=1; i<=n; i++)
	{
		sum=sum+i;
	}
	cout<<"Sum of "<<n<<" is "<<sum;
	getch();
	return 0;
}