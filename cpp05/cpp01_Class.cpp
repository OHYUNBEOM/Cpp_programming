//#include<iostream>
//#include<string.h>
//#pragma warning(disable:4996)
//using namespace std;
//class Human
//{
//private:
//	//char name[20];
//	char* name;
//	int id;
//	int age;
//public:
//	Human(const char *aname, int aid, int aage)
//	{
//		name=new char[strlen(aname)+1];// 마지막 NULL 문자를 위해 +1 해서 생성
//		strcpy(name, aname);
//		id = aid;
//		age = aage;
//	}
//	~Human() 
//	{
//		delete[] name;
//	}
//	void getData()
//	{
//		cout << "이름:" << name << " 학번:" << id << " 나이:" << age << endl;
//	}
//};
//int main()
//{
//	Human h("오윤범", 20172537, 26);
//	h.getData();
//	Human ary[3] = { Human("가나다",111,10) , Human("라마바",222,20), Human("사아자",333,30) };
//
//	ary[0].getData();
//	ary[1].getData();
//	ary[2].getData();
//	
//	return 0; // 여기서 소멸자 호출
//}