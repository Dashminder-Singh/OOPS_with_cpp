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
		cout<<a<<"+"<<b<<"i"<<"\n\n";
	}

	complex add(complex X)
	{
		complex temp;
		temp.a=a+ X.a;
		temp.b=b+ X.b;
		return temp;
	}
	complex sub(complex X)
	{
		complex temp;
		temp.a=a- X.a;
		temp.b=b- X.b;
		return temp;
	}
	complex multi(complex X)
	{
		complex temp;
		temp.a=a* X.a;
		temp.b=b* X.b;
		return temp;
	}
};

int main()
{
	complex c1,c2, c3, c4, c5;

	c1.setdata(3,4);
	c2.setdata(5,6);

	c1.showdata();
	c2.showdata();

	c3=c1.add(c2);
	c3.showdata();


	c4=c1.sub(c2);
	c4.showdata();


	c5=c1.multi(c2);
	c5.showdata();

	getch();
	return 0;
}