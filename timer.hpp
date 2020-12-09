#include "include.hpp"
void Timer(int hour,int min,int sec){
	system("cls");
	while (hour || min || sec)
	{
		system("cls");
		sec--;
		if (sec == -1)
		{
			min--;
			sec = 59;
		}
		if (min == -1)
		{
			hour--;
			min = 59;
		}
		cout.fill('0');
		cout << setw(2) << hour << ":";
		cout.fill('0');
		cout << setw(2) << min << ":";
		cout.fill('0');
		cout << setw(2) << sec;
		Sleep(1000);
	}
}