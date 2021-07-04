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
    friend complex operator+(complex, complex);
    friend complex operator-(complex);
};

complex operator+(complex x, complex y) // binary as friend, but not a member
{
    complex temp;
    temp.a = x.a + y.a;
    temp.b = x.b + y.b;
    return temp;
}
complex operator-(complex x) // unary as friend, but not a member
{
    complex temp;
    temp.a = -x.a;
    temp.b = -x.b;
    return temp;
}

int main()
{
    complex c1, c2, c3, c4;
    c1.set_data(5, 6);
    c2.set_data(8, 9);

    c3 = operator+(c1, c2);
    c3.show_data();

    c4 = operator-(c1);
    c4.show_data();
    return 0;
}