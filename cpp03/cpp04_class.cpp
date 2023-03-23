#include<iostream>
using namespace std;
class Myclass
{
private://외부접근 불가
	int private_val;
public ://외부접근 가능
	int public_val;
protected://상속시에만 접근가능
	int protected_val;

public:
	void set(int num) // 클래스 내부 private값 접근 위함
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