//�ݷ� �ʱ�ȭ �ʿ� ��� : 1. ���������� 2.��ü������� 3.����������� (4.�������)
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