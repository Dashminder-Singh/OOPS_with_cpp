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
    complex operator+(complex);
};
complex complex::operator+(complex x)
{
    complex temp;
    temp.a = a + x.a;
    temp.b = b + x.b;
    return temp;
}

int main()
{
    complex c1, c2, c3, c4;
    c1.set_data(1, 2);
    c2.set_data(2, 3);
    c3.set_data(3, 4);

    c4 = c1 + c2 + c3;
    c4.show_data();
    return 0;
}