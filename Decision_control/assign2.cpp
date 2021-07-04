#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int P,B,H;
	cout<<"Enter perpendicular, base and hypotenus: ";
	cin>>P>>B>>H;

	int res;
	res=(P*P)+(B*B);
	if(res==(H*H))
		cout<<"Yes, it is Right angle triangle";
	else
		cout<<"Not a Right angle triangle";
	getch();
	return 0;
}