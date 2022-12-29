#pragma once
#include <string>
#include "Persona.hpp"
using namespace std;

// CLASE: HIJO, CLASE PADRE
class Alumno : public Persona
{
	public:
		Alumno();
		int getCodigoAlumno();
		void setCodigoAlumno(int);
		double getNota();
		void setNota(double);
		void mostrar();

	private:
		int _codigoAlumno;
		double _nota;
};