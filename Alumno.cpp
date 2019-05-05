#include "Alumno.h"
#include <string>

Alumno::Alumno(string nombre, string apellido, string email, Grado grado) : Usuario(nombre, apellido, email) {

	cout << "Hola Datos:" << nombre << apellido << email;
	cout << endl;
	this->grado = &grado;
}


Alumno::~Alumno() {


}

// Setters y getters

void Alumno::setNombreAlumno(string nombre) {
	Usuario::setNombre(nombre);
}

void Alumno::setApellidoAlumno(string apellido) {
	Usuario::setApellido(apellido);
}

void Alumno::setEmailAlumno(string email) {
	Usuario::setEmail(email);
}

void Alumno::setNombreGradoAlumno(string nombreGrado) {
	Alumno::grado->setNombre(nombreGrado);
}

string Alumno::getNombreAlumno() {
	return Usuario::getNombre();
}

string Alumno::getApellidoAlumno() {
	return Usuario::getApellido();
}

string Alumno::getEmailAlumno() {
	return Usuario::getEmail();
}

string Alumno::getNombreGradoAlumno() {
	return Alumno::grado->getNombre();
}

int Alumno::getGradoId() {
	return Alumno::grado->getId();
}

string Alumno::getTituloTfg() {
	return Alumno::tfg.getTitulo();
}

Grado *Alumno::getGrado() {

	return grado;
}
/*
void Alumno::setNombre(string nombrer)
{
	usuario.nombre = nombrer;
}
void Alumno::setApellido(string apellidor)
{
}
void Alumno::setEmail(string emailr)
{
}
*/

void Alumno::ModificarGrado(Grado *grado) {

	this->grado = grado;

}


TFG Alumno::getTfg() {

	return this->tfg;
}

void Alumno::modificarTFG(string titulo, Presentacion presentacion, Profesor tutor) {

	tfg.setTitulo(titulo);
	tfg.modificarTutor(&tutor);
}