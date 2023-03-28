//#include<iostream>
//using namespace std;
//
//void static_counter()
//{
//	static int cnt=0; // static int cnt; 로 선언해도 static은 default값이 0임
//	cnt++;
//	cout << "Current static cnt: " << cnt << endl;
//}
//void counter()
//{
//	int cnt = 0;
//	cnt++;
//	cout << "Current cnt: " << cnt << endl;
//}
//int main(void)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		static_counter();
//		counter();
//	}
//	return 0;
//}