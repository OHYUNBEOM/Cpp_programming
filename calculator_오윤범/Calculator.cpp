//작성자 : 오윤범
#include "Calculator.h"
#include<iostream>
#include<sstream>
#include<vector>
#include<ctype.h>//isdigit() 사용하기 위해 필요함
using namespace std;
double Calculator::Calculate(string str)
{
	number.clear();//벡터 공간 초기화
	cper.clear();// 벡터 공간 초기화
	stringstream ss(str);//1+2 라고 입력한다고 가정
	double cal_number;//계산 시 사용되는 숫자들을 담는 변수
	char cal_cper;//계산 시 사용되는 연산자들을 담는 변수
	bool valid_input = true;//입력값이 유효한지 판단
	while (ss >> cal_number)//cal_number:1,2 
	{
		number.push_back(cal_number);//number[0]=1 , number[1]=2
		if (ss >> cal_cper)// cal_cper:+
		{
			cper.push_back(cal_cper);//cper[0]= +
		}
	}

	for (int i = 0; i < str.length(); i++)//입력된 문자열 길이만큼 돌면서
	{
		if (!isdigit(str[i]) && str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/')//!isdigit(str[i] -> str[i]가 숫자가 아니고, 사칙연산(+ - * /) 이 아닌 다른 입력이 들어오면 
		{
			valid_input = false;//valid_input을 false로 바꿔줌
			break;
		}
	}

	if (valid_input)//유효한 입력값이 들어왔을때만(유효한 입력인지는 25행~32행에서 판단) 정상적으로 수행
	{
		double result = number[0];//1+2 입력시에 처음에 result에는 1이 들어오고
		for (int i = 0; i < cper.size(); i++)
		{
			switch (cper[i])
			{
			case '+':
				result += number[i + 1];// 1+2 라고 입력이 들어오면 number[0] + num[1] 즉 1+2가 result값으로 저장됨
				cout << "= " << result << endl;
				break;
			case '-':
				result -= number[i + 1];//+와동일
				cout << "= " << result << endl;
				break;
			case '*':
				result *= number[i + 1];//*와 동일
				cout << "= " << result << endl;
				break;
			case '/':
				if (number[i + 1] != 0)//나누는수가 0이 아니면 정상 실행
				{
					result /= number[i + 1];
					cout << "= " << result << endl;
				}
				else
				{
					cout << "Attempted to divide by zero!" << endl;//나누는 수가 0인경우 오류 발생
				}
				break;
			default:
				break;
			}
		}
		return result;
	}
	else//정상적인 입력이 아닌 경우 즉 valid_input 이 false인 경우
	{
		cout << "정상적인 수식을 입력하세요!!" << endl;//오류발생
		return 0;
	}
}