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
		a=x;
		b=y;		
	}
	void showdata()
	{
		cout<<a<<"+"<<b<<"i"<<"\n";
	}

	complex add(complex X)
	{
		complex temp;
		temp.a=a+X.a;
		temp.b=b+X.b;
		return temp;
	}
};

int main()
{
	complex c1,c2,c3;

	c1.setdata(3,5);
	c2.setdata(6,10);

	c1.showdata();
	c2.showdata();

	c3=c1.add(c2);
	c3.showdata();
	getch();
	return 0;
}