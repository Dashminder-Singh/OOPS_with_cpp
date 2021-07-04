#include <iostream>
#include <stdio.h>
using namespace std;

class List
{

private:
	struct node
	{
		int item;
		node *next;
	};
	node *start;

public:
	List()
	{
		start = NULL;
	}
	void insert_last(int);
	void remove_first();
	void display();

	~List()
	{
		while (start != NULL)
		{
			remove_first();
		}
	}
};

void List::insert_last(int data)
{
	node *n, *t;
	n = new node;
	n->item = data;
	n->next = NULL;

	if (start == NULL)
	{
		start = n;
	}
	else
	{
		t = start;
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = n;
	}
}

void List::remove_first()
{
	node *r;
	if (start == NULL)
	{
		cout << "nothing to remove\n";
	}
	else
	{
		r = start;
		start = start->next;
		delete r;
	}
}
void List::display()
{
	node *t;
	t = start;

	if (start == NULL)
	{
		cout << "Empty";
	}
	while (t != NULL)
	{
		cout << t->item << " ";
		t = t->next;
		if (t != NULL)
			cout << "->";
	}
	cout << endl;
}

int menu()
{
	int choice;
	cout << "\n1.Insert last: ";
	cout << "\n2.remove first: ";
	cout << "\n3.Exit: ";
	cout << "\nEnter your choice: ";
	cin >> choice;
	return choice;
}

int main()
{
	List l1;

	int data;

	while (1)
	{
		system("cls");
		l1.display();
		switch (menu())
		{
		case 1:
			cout << "Enter data: ";
			cin >> data;
			l1.insert_last(data);
			break;
		case 2:
			l1.remove_first();
			break;
		case 3:
			exit(0);
			break;
		default:
			cout << "invalid choice";
			break;
		}
	}
	return 0;
}