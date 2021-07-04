#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x, y, ans;
	cout<<"Enter number and power: ";
	cin>>x>>y;
	ans=1;
	for(int i=1; i<=y; i++)
	{
		ans=ans*x;
	}
	cout<<"Square is "<<ans;
	getch();
	return 0;
}