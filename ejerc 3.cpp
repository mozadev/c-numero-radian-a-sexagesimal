#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

	float radianes;
	int grados,minutos,segundos;
	cout << "ingrese angulo en radianes: ";
	cin >> radianes;


	grados = radianes /57.29 ;
	minutos = (radianes % 57.29) / 57.29;
	segundos= (tiempseg % 3600) % 60;

	cout << "hora: " << grados << endl;
	cout << "minutos: " << minutos << endl;
	cout << "segundos: " << segundos << endl;


	_getch();

}