#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n,ans;
	cout<<"Enter a table numeber: ";
	cin>>n;

	for(int i=1; i<=10; i++)
	{
		ans=n*i;
		cout<<n<<"* "<<i<<"= "<<ans<<endl;
	}
	getch();
	return 0;
}