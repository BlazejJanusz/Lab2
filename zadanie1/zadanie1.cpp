

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main()
{ 
	/*
	int x;
	int y = 3;
	cout << "Podaj liczbe";

	do
		
	if (x % 2 != 0 && x >= 3)
		cin >> x;
	{
		y = 0;
	}
	else 
	{
		if (y == 1)
			cout << "liczba prob sie skonczyla";
		else
			y = y - 1;
		cout << "podaj inna liczba";
	}
			
	while (y != 0);
	*/
	int IloscWierszy;
		cout << "podaj ilosc wierszy";
		cin >> IloscWierszy; 
	
		int IloscKolumn = IloscWierszy, Liczbaspacji = IloscWierszy - 1;
		char Znak;

		for (int wiersz = 0; wiersz < IloscWierszy; wiersz++)
		{
			for (int kolumna = 0; kolumna <= IloscKolumn; kolumna++)
			{
				Znak = (kolumna <= Liczbaspacji) ? ' ' : '#';
				cout << Znak;
			}
			cout << endl;
			IloscKolumn++;
			Liczbaspacji--;

		}
		IloscKolumn = IloscWierszy, Liczbaspacji = 0;
		for (int wiersz = 1; wiersz < IloscWierszy; wiersz++)
		{
			for (int kolumna = 0; kolumna <= IloscKolumn; kolumna++)
			{
				Znak = (kolumna <= Liczbaspacji) ? ' ' : '#';
				cout << Znak;
			}
			cout << endl;
			IloscKolumn++;
			Liczbaspacji++;

		}




}




