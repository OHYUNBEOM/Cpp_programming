#include<iostream>
using namespace std;
class base
{
private:
	int num1;
protected:
	int num2;
public:
	int num3;
	base() : num1(1), num2(2), num3(3) {}
};
class derived :protected base {};
int main(void)
{
	derived drv;
	base b;
	cout << b.num3 << endl;
	return 0;
}