#include "Imprimir.h"

/* Se podría añadir el tutor del alumno a imprimir */
void imprimirAlumno(Alumno alumno) {
	assert((alumno.getNombreAlumno() != string(0x00)) && (alumno.getApellidoAlumno() != string(0x00)) && (alumno.getEmailAlumno() != string(0x00)) && (alumno.getGradoId() != 0x00));
	std::cout << "Alumno: " << alumno.getNombreAlumno() << " " << alumno.getApellidoAlumno() << ", con email: " << alumno.getEmailAlumno() << ", del grado: " << alumno.getNombreGradoAlumno() << ", con TFG: " << alumno.getTituloTfg() << endl;
}

/* IMPORTANTE:
	Quitar asserts:
	-Si cuando un profesor no tiene doctorado getDoctorado() se deja como NULL (quitar profesor.getDoctorado() != 0x00)
	-Si dia y slot pueden ser NULL pues no están disponibles, (quitar dia != 0x00 && slot != 0x00) y descomentar el else líneas 23-27*/
void imprimirProfesor(Profesor profesor, int dia, int slot) {
	assert(profesor.getNombreProfesor() != string(0x00) && (profesor.getApellidoProfesor() != string(0x00) && (profesor.getEmailProfesor() != string(0x00)) && (profesor.getDoctorado() != 0x00)) && (dia != 0x00) && (slot != 0x00));
	std::cout << "Profesor: " << profesor.getNombreProfesor() << " " << profesor.getApellidoProfesor() << ", con email: " << profesor.getEmailProfesor() << " ";
	std::cout << " presente en los siguientes grados: ";
	for (int i = 0; i < profesor.getNGrados(); i++)
		std::cout << profesor.getGrados()[i];
	std::cout << " presente en las defensas de: " << profesor.getNumTFGs() << " TFGs";
	if (profesor.getDoctorado())
		std::cout << ", con doctorado ";
	else
		std::cout << ", sin doctorado ";

	if (profesor.getDisponibilidadProfesor(dia, slot))
		std::cout << ", esta disponible." << endl;
	/* Descomentar este else si tanto dia como slot pueden ser NULL
	   Y quitar la última condición del assert (dia != 0x00 && slot != 0x00)
	else
		std::cout << ", no esta disponible." << endl;
		*/
}