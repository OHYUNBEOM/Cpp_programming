//#include<iostream>
//using namespace std;
//#define id_len	20
//#define max_spd	200
//#define fuel_step	2
//#define acc_step	10
//#define brk_step	10
//
//struct Car
//{
//	char gamerid[id_len];//소유자id
//	int fuelgauge;//연료량
//	int curspeed;//현재속도
//};
//
//void showcarstate(const Car& car)
//{
//	cout << "소유자ID " << car.gamerid << endl;
//	cout << "연료량 " << car.fuelgauge <<"%" << endl;
//	cout << "현재속도 " << car.curspeed<<"km/s" << endl << endl;
//}
//
//void accel(Car& car)
//{
//	if (car.fuelgauge <= 0)
//		return;
//	else
//		car.fuelgauge -= fuel_step;
//	
//	if (car.curspeed + acc_step >= max_spd)
//	{
//		car.curspeed = max_spd;
//		return;
//	}
//	
//	car.curspeed += acc_step;
//}
//
//void Break(Car & car)
//{
//	if (car.curspeed < brk_step)
//	{
//		car.curspeed = 0;
//		return;
//	}
//	car.curspeed -= brk_step;
//}
//
//int main(void)
//{
//	Car run99 = { "run99",100,0 };
//	accel(run99);
//	accel(run99);
//	showcarstate(run99);
//	Break(run99);
//	showcarstate(run99);
//
//	Car sped77 = { "sped77",100,0 };
//	accel(sped77);
//	Break(sped77);
//	showcarstate(sped77);
//	return 0;
//}