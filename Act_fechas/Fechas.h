#pragma once

#include<iostream>
#include<String.h>

using namespace std;

class Fechas
{
	private:
		string fecha;

	public:
		void fechas() {
			
			auto dia_ = std::strtol(fecha.data(), nullptr, 10);
			auto mes_ = std::strtol(fecha.data(), nullptr, 10);
			auto año_ = std::strtol(fecha.data(), nullptr, 10);

			if (mes_ < 1 && mes_ > 12) {
				cout << "\nEl mes no es correcto" << endl;
			}

			if (mes_ == 1 && dia_ < 1 && dia_ > 31) {
				cout << "Los datos del mes son incorrectos" << endl;
			}
			if (mes_ == 2 && dia_ < 1 && dia_ > 28) {
				cout << "Los datos del mes son incorrectos" << endl;
			}
			if (mes_ == 3 && dia_ < 1 && dia_ > 31) {
				cout << "Los datos del mes son incorrectos" << endl;
			}
			if (mes_ == 4 && dia_ < 1 && dia_ > 30) {
				cout << "Los datos del mes son incorrectos" << endl;
			}
			if (mes_ == 5 && dia_ < 1 && dia_ > 31) {
				cout << "Los datos del mes son incorrectos" << endl;
			}
			if (mes_ == 6 && dia_ < 1 && dia_ > 30) {
				cout << "Los datos del mes son incorrectos" << endl;
			}
			if (mes_ == 7 && dia_ < 1 && dia_ > 31) {
				cout << "Los datos del mes son incorrectos" << endl;
			}
			if (mes_ == 8 && dia_ < 1 && dia_ > 31) {
				cout << "Los datos del mes son incorrectos" << endl;
			}
			if (mes_ == 9 && dia_ < 1 && dia_ > 30) {
				cout << "Los datos del mes son incorrectos" << endl;
			}
			if (mes_ == 10 && dia_ < 1 && dia_ > 30) {
				cout << "Los datos del mes son incorrectos" << endl;
			}
			if (mes_ == 11 && dia_ < 1 && dia_ > 30) {
				cout << "Los datos del mes son incorrectos" << endl;
			}
			if (mes_ == 12 && dia_ < 1 && dia_ > 30) {
				cout << "Los datos del mes son incorrectos" << endl;
			}



			if (año_ % 4 != 0 || (año_ % 100 == 0 && año_ % 400 != 0)) {
				cout << "\m\nTu año NO es bisiesto" << endl;
			}
			else {
				cout << "\m\nTu año SI es bisiesto" << endl;
			}
		};

	void setFecha(string fecha_) {
		fecha = fecha_;
	}

	string getFecha() {
		return fecha;
	}
};

