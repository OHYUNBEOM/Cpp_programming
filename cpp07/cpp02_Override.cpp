#include <iostream>
using namespace std;
class First
{
public:
	void MyFunc()
	{
		cout << "FirstFunc" << endl;
	}
};
class Second : public First
{
public:
	void MyFunc()
	{
		cout << "SecondFunc" << endl;
	}
};
class Third : public Second
{
public:
	void MyFunc()
	{
		cout << "ThirdFunc" << endl;
	}
};
int main(void)
{
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;

	fptr->MyFunc();
	sptr->MyFunc();//오버라이딩된 Second 클래스의 MyFunc()가 호출됨
	tptr->MyFunc();//오버라이딩된 Third 클래스의 MyFunc()가 호출됨
	delete tptr;
	return 0;
}
