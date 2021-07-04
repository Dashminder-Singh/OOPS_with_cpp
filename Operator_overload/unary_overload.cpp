#include <iostream>
using namespace std;

class complex
{
private:
	int a, b;

public:
	void set_data(int x, int y)
	{
		a = x;
		b = y;
	}
	void show_data()
	{
		cout << "a= " << a << " b= " << b << endl;
	}
	complex operator-()
	{
		complex temp;
		temp.a = -a;
		temp.b = -b;
		return temp;
	}
	complex operator++() // pre increment
	{
		complex temp;
		temp.a = ++a;
		temp.b = ++b;
		return temp;
	}
	complex operator++(int) // post increment
	{
		complex temp;
		temp.a = a++;
		temp.b = b++;
		return temp;
	}
};

int main()
{
	complex c1, c2, c3, c4;
	c1.set_data(5, 8);
	c2.set_data(6, 10);

	c3 = ++c1;
	//c3=c1.operator++();
	c4 = c2++;
	//c4=c2.operator++(4);
	c1.show_data();
	c2.show_data();
	c3.show_data();
	c4.show_data();
}