#include "include.hpp"
void Metronome(int spead,int beat,int num)
{
	for (int i = 1; i <= num; i++)
	{
		system("cls");
		if (i % 2 == 1)
		{
			cout << "\\" << endl;
			cout << " \\" << endl;
			cout << "  O" << endl;
			cout << "   \\" << endl;
		}
		else
		{
			cout << "    /" << endl;
			cout << "   /" << endl;
			cout << "  O" << endl;
			cout << " /" << endl;
		}
		cout << endl
			 << endl;
		if (speed >= 40 && speed < 46)
			cout << "Grave";
		if (speed >= 46 && speed < 52)
			cout << "Laogo";
		if (speed >= 52 && speed < 56)
			cout << "Lento";
		if (speed >= 56 && speed < 60)
			cout << "Laognetto";
		if (speed >= 60 && speed < 66)
			cout << "Adagio";
		if (speed >= 66 && speed < 72)
			cout << "Adagietto";
		if (speed >= 72 && speed < 80)
			cout << "Andante";
		if (speed >= 80 && speed < 88)
			cout << "Andantino";
		if (speed >= 88 && speed < 96)
			cout << "Maestoso";
		if (speed >= 96 && speed < 108)
			cout << "Moderato";
		if (speed >= 108 && speed < 120)
			cout << "Allegretto";
		if (speed >= 120 && speed < 132)
			cout << "Animato";
		if (speed >= 132 && speed < 160)
			cout << "Allegro";
		if (speed >= 160 && speed < 184)
			cout << "Vivace";
		if (speed >= 184 && speed < 208)
			cout << "Presio";
		if (speed >= 208)
			cout << "Prestissimo";
		cout << endl;
		if (i % beat == 1)
			cout << "Dit" << endl;
		else
			cout << "Dha" << endl;
		Sleep(((double)speed * 1000.0) / 60000.0);
	}
}