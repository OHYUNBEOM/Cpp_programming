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
//		cout << num << " CTest ����" << endl;
//	}
//	~ctest()
//	{
//		cout << "CTest �Ҹ�" << endl;
//	}
//};
//class ctestsub :public ctest
//{
//private:
//	int subnum;
//public:
//	ctestsub(int n, int subnum):ctest(n) // ctestsub�� �Ű������� �޴� n,subnum �� n�� ctest�� �����ڷ� �ʱ�ȭ��
//	{
//		this->subnum = subnum;
//		cout << this->subnum << " CTestSub ����" << endl;
//	}
//	~ctestsub()
//	{
//		cout << "CTestSub �Ҹ�" << endl;
//	}
//};
//int main()
//{
//	ctest c(10);
//	ctestsub s(1,10);//1,10 --> 1�� ctest�� num����, 10�� ctestsub�� subnum���� ��
//	return 0;
//}