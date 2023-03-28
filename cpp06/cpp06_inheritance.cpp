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
//	soderived drv1(15);//부모클래스 sobase의 생성자 호출 후 soderived의 생성자 호출
//	soderived drv2(27);
//	return 0;
//}