#include <iostream>
#include <conio.h>
using namespace std;

int f1(int);
double f1(double);

int f1(int x)
{
	return x;
}
double f1(double x)
{
	return x;
}

int main()
{
	char A='B';
	cout<<" "<<f1(A);
	getch();
	return 0;
}