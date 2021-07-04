#include <iostream>
#include <conio.h>

int main()
{
	int n;
	std::cout<<"Enter a number: ";
	std::cin>>n;

	if(n%7==0)
		std::cout<<"Yes";
	else
		std::cout<<"No";
	getch();
	return 0;
}