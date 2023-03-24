//#include<iostream>
//#include<string.h>
//using namespace std;
//class myclass 
//{
//private:
//	int age;
//	char id;
//	char name[10];
//public:
//	myclass();
//	myclass(char aid, int aage, const char* aname);
//	void get();
//	void set(int a, char b, const char* c);
//};
//myclass::myclass()
//{
//	age = 999;
//	id = 'A';
//	strcpy(name, "생성자");
//}
//
//void myclass::get()
//{
//	cout << "나이:" << age << endl << "id:" << id<< endl << "이름:" << name << endl;
//}
//void myclass::set(int a, char b, const char* c)
//{
//	age = a;
//	id = b;
//	strcpy(name, c);
//}
//int main()
//{
//	myclass o;
//	cout << "생성자에 의한 초기화" << endl;
//	o.get();
//	cout << endl;
//
//	o.set(10, 'c', "oyb");
//	cout << "set 함수에 의한 초기화" << endl;
//	o.get();
//	return 0;
//}