#include "Alumno.hpp"
#include <iostream>
#include <string>

Alumno::Alumno()
{
}

int Alumno::getCodigoAlumno()
{
	return _codigoAlumno;
}

void Alumno::setCodigoAlumno(int codigoAlumno)
{
	_codigoAlumno = codigoAlumno;
}

double Alumno::getNota()
{
	return _nota;
}

void Alumno::setNota(double nota)
{
	_nota = nota;
}

void Alumno::mostrar()
{
	Persona::mostrar();
	cout << "Codigo Alumno: " << Alumno::getCodigoAlumno() << endl;
	cout << "Nota del Alumno: " << Alumno::getNota() << endl;
}