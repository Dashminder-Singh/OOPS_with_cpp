#include <iostream>
#include <conio.h>
using namespace std;

class complex
{
private:
	int a,b;
public:
	void setdata(int x, int y)
	{
		a=x,b=y;
	}
	void showdata()
	{
		cout<<a<<"+"<<b<<"i\n";
	}
};

int main()
{
	complex c1,c2;
	c1.setdata(3,4);
	c2.setdata(5,9);
	c1.showdata();
	c2.showdata();
	getch();
	return 0;
}