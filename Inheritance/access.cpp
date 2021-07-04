#include <iostream>
#include <string.h>
using namespace std;

class Person
{
	private:
		char name[20];
		int age;
	protected:
		void set_name(char *n)
		{
			strcpy(name,n);
		}
		void set_age(int a)
		{
			age=a;
		}
	public:
		char *get_name()
		{
			return name;
		}
		int get_age()
		{
			return age;
		}
};

class Employee :public Person
{
	private:
		float salary;
	protected:
		void set_salary(float s)
		{
			salary=s;
		}
	public:
		float get_salary()
		{
			return salary;
		}
		void set_employee_data(char n[],int a, float s)
		{
			set_name(n);
			set_age(a);
			set_salary(s);
		}
};

int main()
{
	char name[]="John";
	Employee e1;

	e1.set_employee_data(name,25,40000.5);

	cout<<"\nName: "<<e1.get_name()<<endl;

	cout<<"\nage: "<<e1.get_age()<<endl;

	cout<<"\nSalary: "<<e1.get_salary()<<endl;
}