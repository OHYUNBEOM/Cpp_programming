#include<iostream>
using namespace std;
class Myclass
{
	int num;
public:
	Myclass(int n) :num(n) 
	{
		cout << "������ ȣ��" << endl;
	}
	Myclass(Myclass& other) // ��������� : ���������� �޾ƾ���(&)
	{
		cout << "��������� ȣ��" << endl;
		num = other.num;//�����ϰ��ִ� other�� num���� �ʱ�ȭ
	}
	void getData()
	{
		cout << num << endl;
	}
};

int main()
{
	Myclass m1(10);	// ������ ȣ��
	Myclass m2 = m1; // ��������� ȣ�� , int num2=num1
	Myclass m3(m2); // ��������� ȣ��
	m1.getData();
	m2.getData();
	m3.getData();
	return 0;
}