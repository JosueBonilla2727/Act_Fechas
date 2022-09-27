#pragma once

#include <iostream>
#include <String.h>
#include <sstream>
#include <string>

using namespace std;

class Fechas
{
private:
	string fecha;
	string dia;
	string mes;
	string a�o;
	char d, m, a;
	int bisiesto, dia_, mes_, a�o_;

public:

	void cambio_variables() {

		stringstream input_stringstream(fecha);

		getline(input_stringstream, dia, '/');
		getline(input_stringstream, mes, '/');
		getline(input_stringstream, a�o, '/');

		dia_ = stoi(dia);
		mes_ = stoi(mes);
		a�o_ = stoi(a�o);

		d = dia_ + '0';
		m = mes_ + '0';
		a = a�o_ + '0';

		cout << "\nDia: " << dia_ << endl;
		cout << "\nMes: " << mes_ << endl;
		cout << "\nA�o: " << a�o_ << endl;

		validacion();
	}

	/*
	Fechas operator++(int) {
		Fechas copia(*this);
		dia_++;

		return copia;
	}
	*/

	Fechas& operator ++() {
		dia_++;
		mes_++;
		a�o_++;
		return *this;
	}


	string datoEnString;

	operator const char* () {
		ostringstream fechas_s;
		fechas_s << mes_ << "/" << dia_ << "/" << a�o_ << endl;
		datoEnString = fechas_s.str();
		return datoEnString.c_str();
	}

	void validacion() {

		a�o_viciesto();

		switch (mes_) {
		case 1:
			dias_31();
			break;

		case 2:
			dias_febrero();
			break;

		case 3:
			dias_31();
			break;

		case 4:
			dias_30();
			break;

		case 5:
			dias_31();
			break;

		case 6:
			dias_30();
			break;

		case 7:
			dias_31();
			break;

		case 8:
			dias_31();
			break;

		case 9:
			dias_30();
			break;

		case 10:
			dias_31();
			break;

		case 11:
			dias_30();
			break;

		case 12:
			dias_31();
			break;

		default:
			cout << "\nEl mes NO es correcto" << endl;
		}
	}

	void a�o_viciesto() {
		if (a�o_ % 4 != 0 || (a�o_ % 100 == 0 && a�o_ % 400 != 0)) {
			cout << "\n\nTu a�o NO es bisiesto" << endl;
			bisiesto = 1;
		}
		else {
			cout << "\n\nTu a�o SI es bisiesto" << endl;
			bisiesto = 2;
		}
	}

	void dias_30() {
		if (dia_ < 1 || dia_ > 30) {
			cout << "\nEl dia no es correcto" << endl;
		}
		else {
			cout << "\nEl dia es correcto" << endl;
		}
		cout << "\nEl mes es correcto" << endl;
	}

	void dias_31() {
		if (dia_ < 1 || dia_ > 31) {
			cout << "\nEl dia no es correcto" << endl;
		}
		else {
			cout << "\nEl dia es correcto" << endl;
		}
		cout << "\nEl mes es correcto" << endl;
	}

	void dias_febrero() {
		if (bisiesto == 1) {
			if (dia_ < 1 || dia_ > 28) {
				cout << "\nEl dia no es correcto" << endl;
			}
			else {
				cout << "\nEl dia es correcto" << endl;
			}
		}
		else {
			if (bisiesto == 2) {
				if (dia_ < 1 || dia_ > 29) {
					cout << "\nEl dia no es correcto" << endl;
				}
				else {
					cout << "\nEl dia es correcto" << endl;
				}
			}
		}
		cout << "\nEl mes es correcto" << endl;
	}

	void setFecha(string fecha_) {
		fecha = fecha_;
	}

	string getFecha() {
		return fecha;
	}
};