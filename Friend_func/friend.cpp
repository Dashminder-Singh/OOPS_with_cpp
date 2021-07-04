#include <iostream>
using namespace std;

class item
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
    friend void sum(item);
};

void sum(item i)
{
    cout << "sum is " << i.a + i.b << endl;
}
int main()
{
    item i1;
    i1.set_data(10, 20);
    i1.show_data();
    sum(i1); // there is no caller object,because it is not member
    return 0;
}
