#include<iostream>
using namespace std;
class Myclass
{
	int num;
public:
	Myclass(int n) :num(n) 
	{
		cout << "생성자 호출" << endl;
	}
	Myclass(Myclass& other) // 복사생성자 : 참조형으로 받아야함(&)
	{
		cout << "복사생성자 호출" << endl;
		num = other.num;//참조하고있는 other의 num으로 초기화
	}
	void getData()
	{
		cout << num << endl;
	}
};

int main()
{
	Myclass m1(10);	// 생성자 호출
	Myclass m2 = m1; // 복사생성자 호출 , int num2=num1
	Myclass m3(m2); // 복사생성자 호출
	m1.getData();
	m2.getData();
	m3.getData();
	return 0;
}