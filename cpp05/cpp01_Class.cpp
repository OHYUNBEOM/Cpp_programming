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
//		name=new char[strlen(aname)+1];// ������ NULL ���ڸ� ���� +1 �ؼ� ����
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
//		cout << "�̸�:" << name << " �й�:" << id << " ����:" << age << endl;
//	}
//};
//int main()
//{
//	Human h("������", 20172537, 26);
//	h.getData();
//	Human ary[3] = { Human("������",111,10) , Human("�󸶹�",222,20), Human("�����",333,30) };
//
//	ary[0].getData();
//	ary[1].getData();
//	ary[2].getData();
//	
//	return 0; // ���⼭ �Ҹ��� ȣ��
//}