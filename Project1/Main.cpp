#include <iostream>
#include "Persona.hpp"
#include "Alumno.hpp"
using namespace std;

void main()
{
	Persona objPersona = Persona();
	objPersona.setEdad(18);
	objPersona.setNombre("Pedro");

	Alumno objAlumno = Alumno();
	objAlumno.setNombre("Marianito");
	objAlumno.setEdad(13);
	objAlumno.setCodigoAlumno(666);
	objAlumno.setNota(14.5);
	cout << "======CLASE: PERSONA======"<<endl;
	objPersona.mostrar();
	cout << "======CLASE: Alumno======"<<endl;
	objAlumno.mostrar();
	cout << endl;
	system("pause");
}