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

		cout << "\nDia: " << dia_ << endl;
		cout << "\nMes: " << mes_ << endl;
		cout << "\nA�o: " << a�o_ << endl;

		validacion();
	}

	void validacion() {

		if (a�o_ % 4 != 0 || (a�o_ % 100 == 0 && a�o_ % 400 != 0)) {
			cout << "\n\nTu a�o NO es bisiesto" << endl;
			bisiesto = 1;
		}
		else {
			cout << "\n\nTu a�o SI es bisiesto" << endl;
			bisiesto = 2;
		}

		switch (mes_) {
		case 1:
			if (dia_ < 1 || dia_ > 31) {
				cout << "\nEl dia no es correcto" << endl;
			}
			else {
				cout << "\nEl dia es correcto" << endl;
			}
			cout << "\nEl mes es correcto" << endl;
			break;
		case 2:
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
			break;
		case 3:
			if (dia_ < 1 || dia_ > 31) {
				cout << "\nEl dia no es correcto" << endl;
			}
			else {
				cout << "\nEl dia es correcto" << endl;
			}
			cout << "\nEl mes es correcto" << endl;
			break;
		case 4:
			if (dia_ < 1 || dia_ > 30) {
				cout << "\nEl dia no es correcto" << endl;
			}
			else {
				cout << "\nEl dia es correcto" << endl;
			}
			cout << "\nEl mes es correcto" << endl;
			break;
		case 5:
			if (dia_ < 1 || dia_ > 31) {
				cout << "\nEl dia no es correcto" << endl;
			}
			else {
				cout << "\nEl dia es correcto" << endl;
			}
			cout << "\nEl mes es correcto" << endl;
			break;
		case 6:
			if (dia_ < 1 || dia_ > 30) {
				cout << "\nEl dia no es correcto" << endl;
			}
			else {
				cout << "\nEl dia es correcto" << endl;
			}
			cout << "\nEl mes es correcto" << endl;
			break;
		case 7:
			if (dia_ < 1 || dia_ > 31) {
				cout << "\nEl dia no es correcto" << endl;
			}
			else {
				cout << "\nEl dia es correcto" << endl;
			}
			cout << "\nEl mes es correcto" << endl;
			break;
		case 8:
			if (dia_ < 1 || dia_ > 31) {
				cout << "\nEl dia no es correcto" << endl;
			}
			else {
				cout << "\nEl dia es correcto" << endl;
			}
			cout << "\nEl mes es correcto" << endl;
			break;
		case 9:
			if (dia_ < 1 || dia_ > 30) {
				cout << "\nEl dia no es correcto" << endl;
			}
			else {
				cout << "\nEl dia es correcto" << endl;
			}
			cout << "\nEl mes es correcto" << endl;
			break;
		case 10:
			if (dia_ < 1 || dia_ > 31) {
				cout << "\nEl dia no es correcto" << endl;
			}
			else {
				cout << "\nEl dia es correcto" << endl;
			}
			cout << "\nEl mes es correcto" << endl;
			break;
		case 11:
			if (dia_ < 1 || dia_ > 30) {
				cout << "\nEl dia no es correcto" << endl;
			}
			else {
				cout << "\nEl dia es correcto" << endl;
			}
			cout << "\nEl mes es correcto" << endl;
			break;
		case 12:
			if (dia_ < 1 || dia_ > 31) {
				cout << "\nEl dia no es correcto" << endl;
			}
			else {
				cout << "\nEl dia es correcto" << endl;
			}
			cout << "\nEl mes es correcto" << endl;
			break;

		default:
			cout << "\nEl mes NO es correcto" << endl;
		}
	}

	void setFecha(string fecha_) {
		fecha = fecha_;
	}

	string getFecha() {
		return fecha;
	}
};

