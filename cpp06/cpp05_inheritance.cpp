//#include<iostream>
//using namespace std;
//class super
//{
//public:
//	super() { cout << "Super()" << endl; }
//	~super() { cout << "~Super()" << endl; }
//};
//class sub :public super
//{
//public:
//	sub() { cout << "Sub()" << endl; }
//	~sub() { cout << "~Sub()" << endl; }
//};
//int main()
//{
//	cout << "Start" << endl;
//	sub obj;//sub의 생성자 호출 -> Super을 상속받기에 sub 호출시 super 생성자또한 호출됨
//	cout << "Stop" << endl;
//	return 0; // 소멸 시 자식 class의 객체가 먼저 소멸됨
//}