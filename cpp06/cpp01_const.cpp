//#include<iostream>
//using namespace std;
//class sosimple
//{
//private:
//	int num;
//	int num1 = 100;
//	const int n = 10;
//public:
//	sosimple(int n) :num(n) {}
//	sosimple& addnum(int n)
//	{
//		num += n;
//		return *this;
//	}
//	void showdata()
//	{
//		cout << "show data:" << num << endl;
//	}
//	void showdata() const // const 키워드가 붙은놈을 처리
//	{
//		cout << "const show data:" << num << endl;
//	}
//};
//void yourfunc(const sosimple& obj) // const 키워드 붙은놈 처리
//{
//	obj.showdata();
//}
//int main(void)
//{
//	sosimple obj1(2);
//	const sosimple obj2(7);
//
//	obj1.showdata();
//	obj2.showdata();
//	
//	yourfunc(obj1);
//	yourfunc(obj2);
//	//obj.addnum(20);
//
//	return 0;
//}