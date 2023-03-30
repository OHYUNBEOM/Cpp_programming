//#include <iostream>
//using namespace std;
//
//class First
//{
//public:
//	void FirstFunc()
//	{
//		cout << "FirstFunc()" << endl;
//	}
//	virtual void SimpleFunc()
//	{
//		cout << "First's SimpleFunc()" << endl;
//	}
//};
//class Second : public First
//{
//public:
//	void SecondFunc()
//	{
//		cout << "SecondFunc()" << endl;
//	}
//	virtual void SimpleFunc()
//	{
//		cout << "Second's SimpleFunc()" << endl;
//	}
//};
//class Third : public Second
//{
//public:
//	void ThirdFunc()
//	{
//		cout << "ThirdFunc()" << endl;
//	}
//	virtual void SimpleFunc()
//	{
//		cout << "Third's SimpleFunc()" << endl;
//	}
//};
//int main(void)
//{
//	Third obj;
//	obj.FirstFunc();//상속하고있는 상위 클래스의 메소드에 접근 가능
//	obj.SecondFunc();
//	obj.ThirdFunc();
//	obj.SimpleFunc();
//
//	Second& sref = obj;
//	sref.FirstFunc();
//	sref.SecondFunc();
//	sref.SimpleFunc();//simpleFunc는 가상함수로 선언되어있어 처음 생성된 객체 기준
//
//	First& fref = obj;
//	fref.FirstFunc();
//	fref.SimpleFunc();
//	return 0;
//}