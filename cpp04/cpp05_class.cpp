//콜론 초기화 필요 경우 : 1. 상수멤버변수 2.객체멤버변수 3.참조멤버변수 (4.멤버변수)
#include<iostream>
using namespace std;
class ConstSome
{
public:
	const int val;
	ConstSome(int n) :val(n) {}
	void printval()
	{
		cout << val << endl;
	}
};
class refsome
{
public:
	int& ref;
	refsome(int n) :ref(n) {}
	void printval()
	{
		cout << ref << endl;
	}
};
class position
{
public:
	int x, y;
	position(int ax, int ay)
	{
		x = ax;
		y = ay;
	}
};
class objsome
{
public:
	position pos;
	objsome(int ax, int ay) :pos(ax, ay) {}
	void printval()
	{
		cout << pos.x <<' ' << pos.y << endl;
	}
};
int main()
{
	ConstSome c(10);
	c.printval();

	int n = 30;
	refsome r(n);
	r.printval();

	objsome o(10, 20);
	o.printval();

	return 0;
}