//#include<iostream>
//#include<cstring>
//using namespace std;
//class person
//{
//private:
//	char name[30];
//	int age;
//public:
//	person(const char*, int);
//	void getdata();
//};
//person::person(const char* name, int age)
//{
//	strcpy_s(this->name, name);
//	this->age = age;
//}
//void person::getdata()
//{
//	cout << "name: " << name << endl;
//	cout << "age: " << age << endl;
//}
//class student: public person
//{
//private:
//	int studentid;
//public:
//	student(const char*, int, int);
//	void showdata();
//};
//student::student(const char* name, int age, int studentid):person(name,age)
//{// 상속받는 클래스 멤버변수를 쓰려고 하면 다음과 같은 형태로 :상속받는클래스(멤버변수) 형태
//	this->studentid = studentid;
//}
//void student::showdata()
//{
//	getdata();
//	cout << "studentId: " << studentid << endl;
//}
//int main()
//{
//	cout << "person 객체 출력" << endl;
//	person p("오윤범", 26);
//	p.getdata();
//
//	cout << endl << "student 객체 출력" << endl;
//	student s("오윤범", 26, 20172537);
//	s.showdata();
//
//	return 0;
//}