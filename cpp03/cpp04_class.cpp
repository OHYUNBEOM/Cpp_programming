#include<iostream>
using namespace std;
class Myclass
{
private://�ܺ����� �Ұ�
	int private_val;
public ://�ܺ����� ����
	int public_val;
protected://��ӽÿ��� ���ٰ���
	int protected_val;

public:
	void set(int num) // Ŭ���� ���� private�� ���� ����
	{
		private_val = num; 
	}
	void get()
	{
		cout << public_val << endl;
		cout << private_val << endl;
	}
};
int main()
{
	Myclass o;
	o.public_val = 100;
	o.set(1000);

	o.get();
}