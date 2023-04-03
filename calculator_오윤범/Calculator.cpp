//�ۼ��� : ������
#include "Calculator.h"
#include<iostream>
#include<sstream>
#include<vector>
#include<ctype.h>//isdigit() ����ϱ� ���� �ʿ���
using namespace std;
double Calculator::Calculate(string str)
{
	number.clear();//���� ���� �ʱ�ȭ
	cper.clear();// ���� ���� �ʱ�ȭ
	stringstream ss(str);//1+2 ��� �Է��Ѵٰ� ����
	double cal_number;//��� �� ���Ǵ� ���ڵ��� ��� ����
	char cal_cper;//��� �� ���Ǵ� �����ڵ��� ��� ����
	bool valid_input = true;//�Է°��� ��ȿ���� �Ǵ�
	while (ss >> cal_number)//cal_number:1,2 
	{
		number.push_back(cal_number);//number[0]=1 , number[1]=2
		if (ss >> cal_cper)// cal_cper:+
		{
			cper.push_back(cal_cper);//cper[0]= +
		}
	}

	for (int i = 0; i < str.length(); i++)//�Էµ� ���ڿ� ���̸�ŭ ���鼭
	{
		if (!isdigit(str[i]) && str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/')//!isdigit(str[i] -> str[i]�� ���ڰ� �ƴϰ�, ��Ģ����(+ - * /) �� �ƴ� �ٸ� �Է��� ������ 
		{
			valid_input = false;//valid_input�� false�� �ٲ���
			break;
		}
	}

	if (valid_input)//��ȿ�� �Է°��� ����������(��ȿ�� �Է������� 25��~32�࿡�� �Ǵ�) ���������� ����
	{
		double result = number[0];//1+2 �Է½ÿ� ó���� result���� 1�� ������
		for (int i = 0; i < cper.size(); i++)
		{
			switch (cper[i])
			{
			case '+':
				result += number[i + 1];// 1+2 ��� �Է��� ������ number[0] + num[1] �� 1+2�� result������ �����
				cout << "= " << result << endl;
				break;
			case '-':
				result -= number[i + 1];//+�͵���
				cout << "= " << result << endl;
				break;
			case '*':
				result *= number[i + 1];//*�� ����
				cout << "= " << result << endl;
				break;
			case '/':
				if (number[i + 1] != 0)//�����¼��� 0�� �ƴϸ� ���� ����
				{
					result /= number[i + 1];
					cout << "= " << result << endl;
				}
				else
				{
					cout << "Attempted to divide by zero!" << endl;//������ ���� 0�ΰ�� ���� �߻�
				}
				break;
			default:
				break;
			}
		}
		return result;
	}
	else//�������� �Է��� �ƴ� ��� �� valid_input �� false�� ���
	{
		cout << "�������� ������ �Է��ϼ���!!" << endl;//�����߻�
		return 0;
	}
}