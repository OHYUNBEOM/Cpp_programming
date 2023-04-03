//작성자 : 오윤범
#include<iostream>
#include<string>
#include "Calculator.h"
using namespace std;
int main()
{
	Calculator calculator;
	string str_input;//사용자가 입력하는 문자열
	cout << "Calculator Console Application" << endl << endl << "Please enter the operation to perform.Format: a + b | a - b | a * b | a / b" << endl << "Press \"ctrl + c\" to exit the program" << endl << endl;
	
	while (true)
	{
		cout << "input >> ";
		getline(cin, str_input);//사용자가 입력하는 문자열을 str_input으로 저장
		if (cin.eof())//ctrl+c 만나면 프로그램 종료
		{
			exit(0);
		}
		calculator.Calculate(str_input);
	}
}