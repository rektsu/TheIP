
#pragma once

#include <stdio.h>
#include "Usuario.h"


class Grado {

	int id;
	string nombre;

public:
	static int nGrados;

	Grado();
	Grado(string);
	~Grado();

	/*
	 deberiamos tener una lista de alumnos y profesores por cada grado?? como se organizarian los headers en ese caso??

	 Alumno *GetAlumnos();
	 Profesor *GetProfesores();

	 */

	//Setters y getters

	string getNombre();
	void setNombre(string);
	int getId();
	void setId(int id);

};
