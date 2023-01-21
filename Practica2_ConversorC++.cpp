// Practica2_ConversorC++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
	// Crear un programa conversor con el menú de monedas, distancia y peso.

	/*
	*  Base será MXN, Monedas: Al menos 5 de diferentes paises
	*  Base serán Kms, Distancia: in, ft, cm, nm, ly
	*  Base serán Kgs, Peso: ton, oz, lb, ug, tg
	*/

	cout << "Que conversion quieres hacer?\n";
	cout << "1.- Monedas (MXN).  2.- Distancia (Kms).  3.-Peso (Kgs).\n";
	int opcion_menu;
	cin >> opcion_menu;

	switch (opcion_menu)
	{
	case 1:
		float peso_mexicano;
		cout << "Ingresa la cantidad de dinero (MXN): ";
		cin >> peso_mexicano;

		cout << "1.- Dolar americano.  2.-Euro.  3.-Peso chileno.  4.-Rial Catari.  5.-Yuan Chino.\n";
		int opcion;
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			cout << "La cantidad de " << peso_mexicano << " pesos mexicanos a dolar americano es: " << peso_mexicano * 0.053;
			break;
		case 2:
			cout << "La cantidad de " << peso_mexicano << " pesos mexicanos a euro es: " << peso_mexicano * 0.049;
			break;
		case 3:
			cout << "La cantidad de " << peso_mexicano << " pesos mexicanos a peso chileno es: " << peso_mexicano * 43.54;
			break;
		case 4:
			cout << "La cantidad de " << peso_mexicano << " pesos mexicanos a rial catari es: " << peso_mexicano * 0.19;
			break;
		case 5:
			cout << "La cantidad de " << peso_mexicano << " pesos mexicanos a yuan chino es: " << peso_mexicano * 0.36;
			break;
		default: cout << "Opcion incorrecta";
			break;
		}
		break;
	case 2:
		float kilometros;
		cout << "\nIngresa los kilometros a convertir: ";
		cin >> kilometros;

		cout << "1.- Pulgadas (in).  2.-Pies (ft).  3.-Centimetros (cm).  4.-Nanometros (nm).  5.-Años luz (ly).\n";
		int opcion2;
		cin >> opcion2;

		switch (opcion2)
		{
		case 1:
			cout << "La cantidad de " << kilometros << " a pulgadas es: " << kilometros * 39370.1;
			break;
		case 2:
			cout << "La cantidad de " << kilometros << " a pies es: " << kilometros * 3280.84;
			break;
		case 3:
			cout << "La cantidad de " << kilometros << " a centimetros es: " << kilometros * 100000;
			break;
		case 4:
			cout << "La cantidad de " << kilometros << " a nanometros es: " << kilometros * 1000000000000;
			break;
		case 5:
			cout << "La cantidad de " << kilometros << " a años luz es: " << kilometros * 1.056970721911E-13;
			break;
		default: cout << "Opcion incorrecta";
			break;
		}
		break;
	case 3:
		float kilogramos;
		cout << "\nIngresa los kilogramos a convertir: ";
		cin >> kilogramos;

		cout << "1.- Toneladas (Ton).  2.-Onzas (oz).  3.-Libras (lb).  4.-Microgramos (ug).  5.-Teragramos (tg).\n";
		int opcion3;
		cin >> opcion3;

		switch (opcion3)
		{
		case 1:
			cout << "La cantidad de " << kilogramos << " a toneladas es: " << kilogramos * 0.001;
			break;
		case 2:
			cout << "La cantidad de " << kilogramos << " a onzas es: " << kilogramos * 35.274;
			break;
		case 3:
			cout << "La cantidad de " << kilogramos << " a libras es: " << kilogramos * 2.20462;
			break;
		case 4:
			cout << "La cantidad de " << kilogramos << " a microgramos es: " << kilogramos * 1e+9;
			break;
		case 5:
			cout << "La cantidad de " << kilogramos << " a teragramos es: " << kilogramos * 1e-9;
			break;
		default: cout << "Opcion incorrecta";
			break;
		}
		break;
	default: cout << "Opcion de menu incorrecta";
		break;
	}
}
