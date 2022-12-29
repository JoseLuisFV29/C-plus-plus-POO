#include "persona.hpp"
#include <iostream>
#include <string>

Persona::Persona()
{
}
int Persona::getEdad()
{
	return _edad;
}
void Persona::setEdad(int edad)
{
	_edad = edad;
}
string Persona::getNombre()
{
	return _nombre;
}
void Persona::setNombre(string nombre)
{
	_nombre = nombre;
}
void Persona::mostrar()
{
	cout << "Nombre: " << Persona::getNombre() << endl;
	cout << "Edad: " << Persona::getEdad() << endl;
}
