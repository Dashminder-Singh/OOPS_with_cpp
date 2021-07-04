#include <iostream>
using namespace std;

class time
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
	void normalize()
	{
		MIN = MIN + SEC / 60;
		HR = HR + MIN / 60;
		SEC = SEC % 60;
		MIN = MIN % 60;
	}
};

int main()
{
	time t1;
	t1.set_time(2, 40, 70);
	t1.show_time();
	t1.normalize();
	t1.show_time();
	return 0;
}