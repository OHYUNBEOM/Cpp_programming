#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
class person
{
private:
	char *name;
	int birthday;
public:
	person(const char *aname, int abirthday)
	{
		cout << "按眉 积己" << endl;
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
		birthday = abirthday;
	}
	person(const person& other)
	{
		cout << "按眉2 积己" << endl;
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		birthday = other.birthday;
	}
	~person()
	{
		cout << "按眉 家戈" << endl;
		delete[] name;
	}
	void showperson()
	{
		cout << name << " " << birthday << endl;
	}
};
int main()
{
	person p1("坷辣裹", 19980903);
	p1.showperson();

	person p2(p1);
	p2.showperson();

	//person p3;
	//p3 = p2;
	//p3.showperson();

	return 0;
}