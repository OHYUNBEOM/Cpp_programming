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
//	virtual ~ctest() // �����Լ��� ����ÿ� �Ҹ�ɶ� ȣ��ǰ� ~ctest()�� ���� �� ȣ�� �ȵ�
//	{
//		cout << "CTest destrcutor" << endl;
//	}
//	void func()
//	{
//		cout << "CTest func()" << endl;
//	}
//	virtual void vfunc()//�����Լ� 
//	{
//		cout << "CTest vfunc()" << endl;
//	}
//};
//// ���� �Ҹ��ڸ� ����ϸ� �⺻ Ŭ������ �Ҹ��ڰ� ȣ��Ǹ�
//// �Ļ� Ŭ������ �Ҹ��ڵ� ȣ��ǵ��� ������ �� �ֽ��ϴ�.
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