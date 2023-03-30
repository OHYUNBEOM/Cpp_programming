//#include<iostream>
//using namespace std;
//class ctest
//{
//private:
//	int num;
//public:
//	ctest(int n)
//	{
//		num = n;
//		cout << num << " CTest 생성" << endl;
//	}
//	~ctest()
//	{
//		cout << "CTest 소멸" << endl;
//	}
//};
//class ctestsub :public ctest
//{
//private:
//	int subnum;
//public:
//	ctestsub(int n, int subnum):ctest(n) // ctestsub의 매개변수로 받는 n,subnum 중 n이 ctest의 생성자로 초기화됨
//	{
//		this->subnum = subnum;
//		cout << this->subnum << " CTestSub 생성" << endl;
//	}
//	~ctestsub()
//	{
//		cout << "CTestSub 소멸" << endl;
//	}
//};
//int main()
//{
//	ctest c(10);
//	ctestsub s(1,10);//1,10 --> 1이 ctest의 num으로, 10이 ctestsub의 subnum으로 들어감
//	return 0;
//}