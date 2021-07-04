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
		cout << "\na= " << a << " b= " << b << endl;
	}
	complex operator+(complex X)
	{
		complex temp;
		temp.a = a + X.a;
		temp.b = b + X.b;
		return temp;
	}
	complex operator-(complex);
	complex operator*(complex);

	void operator==(complex x)
	{
		if (a == x.a && b == x.b)
		{
			cout << "\nEqual";
		}
		else
		{
			cout << "\nNot Equal";
		}
	}
};

complex complex::operator-(complex x)
{
	complex temp;
	temp.a = a - x.a;
	temp.b = b - x.b;
	return temp;
}
complex complex::operator*(complex x)
{
	complex temp;
	temp.a = a * x.a;
	temp.b = b * x.b;
	return temp;
}

int main()
{
	complex c1, c2, c3, c4, c5, c6;
	c1.set_data(3, 4);
	c2.set_data(5, 6);

	c1.show_data();
	c2.show_data();

	//c3=c1.operator+(c2); binary operator overloading
	c3 = c1 + c2;
	c4 = c1 - c2;
	c5 = c1 * c2;

	c3.show_data();
	c4.show_data();
	c5.show_data();

	// c1.operator==(c2);
	c1 == c2;
}