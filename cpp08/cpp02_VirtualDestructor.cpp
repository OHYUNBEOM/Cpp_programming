//#include<iostream>
//using namespace std;
//class ctest
//{
//private:
//	int num;
//public:
//	ctest(int n) :num(n)
//	{
//		cout << num << " CTest constructor" << endl;
//	}
//	virtual ~ctest() // 가상함수로 선언시에 소멸될때 호출되고 ~ctest()로 선언 시 호출 안됨
//	{
//		cout << "CTest destrcutor" << endl;
//	}
//	void func()
//	{
//		cout << "CTest func()" << endl;
//	}
//	virtual void vfunc()//가상함수 
//	{
//		cout << "CTest vfunc()" << endl;
//	}
//};
//// 가상 소멸자를 사용하면 기본 클래스의 소멸자가 호출되면
//// 파생 클래스의 소멸자도 호출되도록 보장할 수 있습니다.
//class ctestsub :public ctest
//{
//private:
//	int snum;
//public:
//	ctestsub(int n1, int n2) :ctest(n1), snum(n2)
//	{
//		cout << snum << " CTestSub constructor" << endl;
//	}
//	~ctestsub()
//	{
//		cout << "CTestSub destructor" << endl;
//	}
//	void vfunc()
//	{
//		cout << "CTestSub func()" << endl;
//	}
//};
//int main()
//{
//	/*ctest c1(10);
//	cout << "=========" << endl;
//	ctestsub c2(1, 10);
//	cout << "========" << endl;*/
//	ctest* ps = new ctestsub(3, 33);
//	delete ps;
//	return 0;
//}