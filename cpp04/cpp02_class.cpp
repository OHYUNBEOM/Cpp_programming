//#include<iostream>
//using namespace std;
//
//class fruitseller
//{
//private:
//	int apple_price;
//	int numofapples;
//	int mymoney;
//public:
//	fruitseller(int price, int num, int money)
//	{
//		apple_price = price;
//		numofapples = num;
//		mymoney = money;
//	}
//	int saleapples(int money)
//	{
//		int num = money / apple_price;
//		numofapples = num;
//		mymoney += money;
//		return num;
//	}
//	void showsalesresult() const
//	{
//		cout << "���� ���: " << numofapples << endl;
//		cout << "�Ǹ� ����: " << mymoney << endl << endl;
//	}
//};
//class fruitbuyer
//{
//private:
//	int mymoney;
//	int numofapples;
//public:
//	fruitbuyer(int money)
//	{
//		mymoney = money;
//		numofapples = 0;
//	}
//	void buyapples(fruitseller& seller, int money)
//	{
//		numofapples += seller.saleapples(money);
//		mymoney -= money;
//	}
//	void showbuyresult() const
//	{
//		cout << "���� �ܾ�: " << mymoney << endl;
//		cout << "��� ����: " << numofapples << endl << endl;
//	}
//};
//int main()
//{
//	fruitseller seller(1000, 20, 0);
//	fruitbuyer buyer(5000);
//	buyer.buyapples(seller, 2000);
//
//	cout << "���� �Ǹ��� ��Ȳ" << endl;
//	seller.showsalesresult();
//	cout << "���� ������ ��Ȳ" << endl;
//	buyer.showbuyresult();
//	return 0;
//}