/**
	Progaramacion oreintada a objetos
	Actividad 1
	Josue Bonilla Cárdenas
	Reg:22110106
	CETI colomos
	26/Septiembre/2022
**/

#include<iostream>
#include<String.h>
#include"Fechas.h"

using namespace std;

void main() {

	Fechas fechas;

	string fecha;

	cout << "\n\tJosue bonilla Cardenas - 2P - Tarea 2\n\n" << endl;

	cout << "\n Introdusca la fecha:" << endl;
	cin >> fecha;

	fechas.setFecha(fecha);

	fechas.cambio_variables();

	Fechas fechas_a(fechas);

	cout << "\n" << fechas_a << endl;

};