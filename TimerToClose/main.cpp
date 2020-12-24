#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;


void main() {
	setlocale(0, "");

	cout << "Введите время для отсчета" << endl;
	int time;
	int sec;
	int  minute;
	int hours;
	cin >> time;
	
	while (time != 0) {
		time--;
		sec = time;
		hours = sec / 3600;
		sec = sec - hours * 3600;
		minute = sec / 60;
		sec = sec % 60;
		cout << "Осталось: " << hours << " : " << minute << " : " << sec;
		Sleep(1000);
		system("cls");
	}


	system("close");
}