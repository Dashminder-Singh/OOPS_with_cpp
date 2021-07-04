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
    complex operator--()
    {
        complex temp;
        temp.a = --a;
        temp.b = --b;
        return temp;
    }
    complex operator--(int)
    {
        complex temp;
        temp.a = a--;
        temp.b = b--;
        return temp;
    }
};

int main()
{
    complex c1, c2, c3, c4;

    c1.set_data(8, 6);
    c2.set_data(5, 9);
    c3 = --c1;
    c1.show_data();
    c3.show_data();
    c4 = c2--;
    c4.show_data();
    c2.show_data();
    return 0;
}
