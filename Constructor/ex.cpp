#include <iostream>
using namespace std;

class example
{
private:
	int a,b;
public:

	example()
	{
		a=0,b=0;
	}
	/*example(int x)  parametrized constructor
	{
		a=x, b=0;
	}
	example(int x,int y)
	{
		a=x,b=y;
	}*/
	/*void set_data(int x,int y)
	{
		a=x,b=y;
	}*/
	void show_data()
	{
		cout<<"\na= "<<a<<" b= "<<b<<"\n";
	}
};

int main()
{
	example e1;
	e1.show_data();
	return 0;
}