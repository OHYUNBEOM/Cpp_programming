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
//{// ��ӹ޴� Ŭ���� ��������� ������ �ϸ� ������ ���� ���·� :��ӹ޴�Ŭ����(�������) ����
//	this->studentid = studentid;
//}
//void student::showdata()
//{
//	getdata();
//	cout << "studentId: " << studentid << endl;
//}
//int main()
//{
//	cout << "person ��ü ���" << endl;
//	person p("������", 26);
//	p.getdata();
//
//	cout << endl << "student ��ü ���" << endl;
//	student s("������", 26, 20172537);
//	s.showdata();
//
//	return 0;
//}