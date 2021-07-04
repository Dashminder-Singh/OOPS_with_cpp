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
		cout << "A= " << a << " B= " << b << endl;
	}
	complex operator+(complex);
	complex operator-(complex);
	complex operator*(complex);
	bool operator==(complex);
};

complex complex::operator+(complex x)
{
	complex temp;
	temp.a = a + x.a;
	temp.b = b + x.b;
	return temp;
}
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

bool complex::operator==(complex x)
{
	if (a == x.a && b == x.b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	complex c1, c2, c3, c4, c5, c6;
	c1.set_data(5, 8);
	c2.set_data(5, 8);

	if (c1 == c2)
		cout << "Equal\n";
	else
		cout << "Not equal\n";

	c3 = c1 + c2;
	c3.show_data();

	c4 = c1 - c2;
	c4.show_data();

	c5 = c1 * c2;
	c5.show_data();

	return 0;
}