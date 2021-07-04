#include <iostream>
using namespace std;

class Time
{
private:
    int HR, MIN, SEC;

public:
    void set_time(int hr, int min, int sec)
    {
        HR = hr;
        MIN = min;
        SEC = sec;
    }
    void show_time()
    {
        cout << HR << ":" << MIN << ":" << SEC << endl;
    }
    Time operator++() // pre increment
    {
        Time temp;
        temp.SEC = ++SEC % 60;
        temp.MIN = MIN + SEC / 60;
        temp.HR = HR + MIN / 60;
        MIN = MIN % 60;
        return temp;
    }
    Time operator++(int) // post increment
    {
        Time temp;
        temp.SEC = SEC++ % 60;
        temp.MIN = MIN + SEC / 60;
        temp.HR = HR + MIN / 60;
        MIN = MIN % 60;
        return temp;
    }
};

int main()
{
    Time t1, t2, t3, t4;
    t1.set_time(8, 35, 70);
    t2.set_time(9, 46, 80);

    t3 = ++t1;
    t3 = ++t1;
    t3.show_time();

    t4 = t2++;
    t4 = t2++;
    t4 = t2++;
    t4.show_time();
    return 0;
}
