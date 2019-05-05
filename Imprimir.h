#pragma once
#include "Alumno.h"
#include "Profesor.h"
#include "Presentacion.h"
#include "TFG.h"
#include "Parrilla.h"

#include <iostream>
#include <string>
#include <cassert>

void imprimirAlumno(Alumno alumno);
void imprimirProfesor(Profesor profesor, int dia, int slot);
//Falta la impresión de las presentaciones pasando una Parrilla con un array de punteros a presentaciones
//void imprimirPresentaciones(Parrilla);