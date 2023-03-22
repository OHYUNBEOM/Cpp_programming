//#include<iostream>
//using namespace std;
//int g = 0;
//
//void func()
//{
//	cout << "func() : " << &func << endl;
//}
//
//int main()
//{
//	int n = 10;
//	static int c;
//	const int d = 10;
//	char ary[10] = "hi";
//
//	func();
//	cout << "local : " << &n << endl;
//	cout << "global : " << &g << endl;
//	// 함수와 전역변수의 주소값이 유사한것을 볼 수 있고, 지역변수의 주소값은 많이 떨어져있음을 인지
//	cout << "static : " << &c << endl;
//	cout << "const : " << &d << endl;
//	cout << "array : " << &ary << endl;
//
//	return 0;
//}