#include "Usuario.h"


Usuario::Usuario(string nombre, string apellidos, string email) {

	if (nombre.length() != 0)
		this->nombre = nombre;
	else
		nombre = " ";

	if (apellidos.length() != 0)
		this->apellidos = apellidos;

	else
		apellidos = " ";

	if (email.length() != 0)
		this->email = email;

	else
		cout << "error clave no insertada!" << endl;
}

void Usuario::setNombre(string nombre) {
	this->nombre = nombre;
}

void Usuario::setApellido(string apellido) {
	this->apellidos = apellido;
}

void Usuario::setEmail(string email) {
	this->email = email;
}

string Usuario::getNombre() {
	return this->nombre;
}

string Usuario::getApellido() {
	return this->apellidos;
}

string Usuario::getEmail() {
	return this->email;
}

Usuario::~Usuario() {


	//codificar guardado en la base de datos



}

