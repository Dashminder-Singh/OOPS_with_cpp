#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct Book
{
	int bookid;
	char title[20];
	float price;
};

struct Book input();
void display(struct Book);
struct Book input()
{
	struct Book b;
	cout<<"Enter Book id , Name and Price: ";
	cin>>b.bookid;
	cin.ignore();
	cin.getline(b.title,20);
	cin>>b.price;
	return b;
}
void display(struct Book b)
{
	cout<<"Book id: "<<b.bookid<<"\n"
	<<"Book title: "<<b.title<<"\n"<<"Book price: "<<b.price<<"\n\n";
}
int main()
{
	struct Book b1={101,"Depth in C", 250.5};
	struct Book b2;
	b2.bookid=102;
	strcpy(b2.title,"Drilling in C");
	b2.price=150.5;

	struct Book b3;
	b3=input();
	display(b1);
	display(b2);
	display(b3);
	getch();
	return 0;
}