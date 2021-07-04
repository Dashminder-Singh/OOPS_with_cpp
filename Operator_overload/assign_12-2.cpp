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
    Time operator+(Time);
    Time operator-(Time);
    bool operator>(Time);
};

Time Time::operator+(Time x)
{
    Time temp;

    temp.SEC = SEC + x.SEC;
    temp.MIN = MIN + x.MIN + temp.SEC / 60;
    temp.HR = HR + x.HR + MIN / 60;
    temp.SEC = temp.SEC % 60;
    temp.MIN = temp.MIN % 60;
    return temp;
}
Time Time::operator-(Time x)
{
    Time temp;

    temp.SEC = SEC - x.SEC;
    temp.MIN = MIN - x.MIN - temp.SEC / 60;
    temp.HR = HR - x.HR + MIN / 60;
    temp.SEC = temp.SEC % 60;
    temp.MIN = temp.MIN % 60;
    return temp;
}

bool Time::operator>(Time x)
{
    if (HR > x.HR && MIN > x.MIN && SEC > x.SEC)
        return true;
    else
        return false;
}

int main()
{
    Time t1, t2, t3, t4;
    t1.set_time(6, 45, 55);
    t2.set_time(5, 10, 45);

    t3 = t1 + t2;
    t3.show_time();
    t4 = t1 - t2;
    t4.show_time();

    if (t1 > t2)
    {
        t1.show_time();
        cout << "is greater";
    }
    else
    {
        t2.show_time();
        cout << "is greater";
    }

    return 0;
}
