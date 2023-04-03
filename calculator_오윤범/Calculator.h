//작성자 : 오윤범
#ifndef CALCULATOR_H
#define CALCULATOR_H
#include<string>
#include<vector>
using namespace std;
class Calculator
{
public:
	double Calculate(string str);
private:
	vector<double> number;
	vector<char> cper;
};
#endif