//#include<iostream>
//using namespace std;
//
//class sobase
//{
//private:
//	int basenum;
//public:
//	sobase(int n) :basenum(n) { cout << "SoBase(): " << basenum << endl; }
//	~sobase(){ cout << "~SoBase(): " << basenum << endl; }
//};
//class soderived :public sobase
//{
//private:
//	int derivnum;
//public:
//	soderived(int n) :sobase(n), derivnum(n)
//	{
//		cout << "SoDerived(): " << derivnum << endl;
//	}
//	~soderived()
//	{
//		cout << "~SoDerived(): " << derivnum << endl;
//	}
//};
//int main(void)
//{
//	soderived drv1(15);//�θ�Ŭ���� sobase�� ������ ȣ�� �� soderived�� ������ ȣ��
//	soderived drv2(27);
//	return 0;
//}