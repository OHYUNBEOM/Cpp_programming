#include<iostream>
using namespace std;
#define SUM(x,y) x+y // ��ũ�� �Լ� , �ڷ����� �ʿ���ٴ°��� ���� ū ����
#define SQLARE(x) x*x // ������ ���� �ǵ����� ���� ���� ��µǴ� ��츦 ����
#define SQLARE1(x) (x)*(x) 
int main()
{
	cout << SUM(10, 20) << endl;
	cout << SUM(10.2, 20.3) << endl;
	
	cout << SQLARE(10+1) << endl; // 10+1*10+1 = 21
	cout << SQLARE1(10+1) << endl; // (10+1) * (10+1) = 121
	return 0;
}