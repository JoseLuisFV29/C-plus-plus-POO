#pragma once
#include <string>
using namespace std;
/*MODIFICADORES DE ACCESO
	Public(+): PARA TODOS
	Private(-): Para una sola clase
	Protected(#): Para una clase y sus hijos*/
class Persona
{
	public:
		Persona();
		int getEdad();
		void setEdad(int);
		string getNombre();
		void setNombre(string);
		void virtual mostrar();

	private:
		int _edad;
		string _nombre;
};