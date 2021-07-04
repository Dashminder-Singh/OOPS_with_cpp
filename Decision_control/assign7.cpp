#include <iostream>
#include <conio.h>

int main()
{
	int n;
	std::cout<<"Enter a number: ";
	std::cin>>n;

	if(n%2==0)
		std::cout<<"Even";
	else
		std::cout<<"Odd";
	getch();
	return 0;
}