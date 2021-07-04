#include <iostream>
#include <conio.h>
using namespace std;

class time
{
private:
	int HR, MIN, SEC;

public:
	void set_time(int, int, int);
	void show_time();
	time add_time(time X);
};

void time::set_time(int hr, int min, int sec)
{
	HR = hr;
	MIN = min;
	SEC = sec;
}
void time::show_time()
{
	cout << HR << ":" << MIN << ":" << SEC << endl;
}

time time::add_time(time X)
{
	time temp;

	temp.SEC = SEC + X.SEC;
	temp.MIN = MIN + X.MIN + temp.SEC / 60;
	temp.SEC = temp.SEC % 60;

	temp.HR = HR + X.HR + temp.MIN / 60;
	temp.MIN = temp.MIN % 60;
	return temp;
}

int main()
{
	time t1, t2, t3;
	t1.set_time(3, 40, 50);
	t1.show_time();
	t2.set_time(2, 10, 55);
	t2.show_time();

	t3 = t1.add_time(t2);
	t3.show_time();
	return 0;
}