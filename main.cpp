#include"include.hpp"
#include"metronome.hpp"
#include"timer.hpp"
using namespace std;
void Menu(){
	while(1){
		system("cls");
		cout<<"TimerMetro v1.0"<<endl;
		cout<<"\t1.Timer"<<endl;
		cout<<"\t2.Metronome"<<endl;
		cout<<"\t0.Bye"<<endl;
		cout<<"Please choise number:"<<endl;
		int n;
		scanf("%d",&n);
		switch(n){
			case -0:
				cout<<"Goodbye."<<endl;
				return;
			case 1:
				system("cls");
				int hour, min, sec;
				cout << "Please input hour,min,sec:";
				cin >> hour >> min >> sec;
				Timer(hour,min,sec);
				cout<<endl<<"Timer end.Enter keybord for exit."<<endl;
				getch();
				break;
			case 2:
				system("cls");
				int speed, beat, num;
				cout << "Please input speed,beat,num:";
				cin >> speed >> beat >> num;
				Metronome(speed,beat,num);
				cout<<"Metronome end.Enter keybord for exit."<<endl;
				getch();
				break;
			default:
				cout<<"Input error!\n"<<endl;
		}
		system("cls");
	}
	cout<<"Goodbye."<<endl;
	Sleep(2000);
	system("cls");
} 
int main(){
	Menu();
	return 0;
} 
