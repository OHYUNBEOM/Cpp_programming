//#include<iostream>
//using namespace std;
//
//class myclass
//{
//private:
//	int value;
//public:
//	myclass(int avalue) :value(avalue) {}
//	myclass operator+(const myclass & other) const{ // + 연산자 오버로딩
//		return myclass(value + other.value);
//	}
//	void print()
//	{
//		cout << value << endl;
//	}
//};
//int main()
//{
//	myclass a(10);
//	a.print();
//
//	myclass b(a);
//	b.print();
//
//	myclass c = b;
//	c.print();
//
//	myclass d = a + b + c;
//	d.print();
//
//	return 0;
//}