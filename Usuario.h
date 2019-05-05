#pragma once
#include <string>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Usuario {

	string nombre;
	string apellidos;
	string email;
	int numUsuarios;


public:
	Usuario(string, string, string);
	~Usuario();

	//Setters y getters
	void setNombre(string nombre);
	void setApellido(string apellido);
	void setEmail(string email);

	string getNombre();
	string getApellido();
	string getEmail();
};
