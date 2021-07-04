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
    complex operator+(int);
    friend complex operator+(int, complex);
};

complex complex::operator+(int x)
{
    complex temp;
    temp.a = a + x;
    temp.b = b;
    return temp;
}
complex operator+(int x, complex y)
{
    complex temp;
    temp.a = x + y.a;
    temp.b = x + y.b;
    return temp;
}

int main()
{
    complex c1, c2, c3;
    c1.set_data(5, 6);
    c2 = c1 + 5;
    c2.show_data();

    //c3=6+c1;
    c3 = operator+(6, c1); // friend func
    c3.show_data();

    return 0;
}