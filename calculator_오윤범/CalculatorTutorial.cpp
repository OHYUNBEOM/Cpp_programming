//�ۼ��� : ������
#include<iostream>
#include<string>
#include "Calculator.h"
using namespace std;
int main()
{
	Calculator calculator;
	string str_input;//����ڰ� �Է��ϴ� ���ڿ�
	cout << "Calculator Console Application" << endl << endl << "Please enter the operation to perform.Format: a + b | a - b | a * b | a / b" << endl << "Press \"ctrl + c\" to exit the program" << endl << endl;
	
	while (true)
	{
		cout << "input >> ";
		getline(cin, str_input);//����ڰ� �Է��ϴ� ���ڿ��� str_input���� ����
		if (cin.eof())//ctrl+c ������ ���α׷� ����
		{
			exit(0);
		}
		calculator.Calculate(str_input);
	}
}