#include<iostream>
using namespace std;
#define SUM(x,y) x+y // 매크로 함수 , 자료형이 필요없다는것이 가장 큰 장점
#define SQLARE(x) x*x // 다음과 같이 의도하지 않은 값이 출력되는 경우를 주의
#define SQLARE1(x) (x)*(x) 
int main()
{
	cout << SUM(10, 20) << endl;
	cout << SUM(10.2, 20.3) << endl;
	
	cout << SQLARE(10+1) << endl; // 10+1*10+1 = 21
	cout << SQLARE1(10+1) << endl; // (10+1) * (10+1) = 121
	return 0;
}