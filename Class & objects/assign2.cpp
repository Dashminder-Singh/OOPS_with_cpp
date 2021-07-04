#include <iostream>
#include <conio.h>
using namespace std;

class time
{
private:
	int HR, MIN, SEC;
public:
	void set_time(int,int,int);
	void show_time();
	void normalize();
};

void time::set_time(int hr, int min, int sec)
{
	HR=hr;
	MIN=min;
	SEC=sec;
}
void time::show_time()
{
	cout<<"\n"<<HR<<":"<<MIN<<":"<<SEC<<endl;
}
void time::normalize()
{
	MIN=MIN+SEC/60;
	SEC=SEC%60;
	HR=HR+MIN/60;
	MIN=MIN%60;
}

int main()
{
	time t1;
	t1.set_time(3,45,70);
	t1.show_time();
	t1.normalize();
	t1.show_time();
	return 0;
}