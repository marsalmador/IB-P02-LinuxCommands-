/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file funciones_criptico.h
 * @author: Marlon Eduardo Salazar Amador
 * @date: 15 nov 2020
 * @brief description: Este archivo incluye las declaraciones de las funciones
 * definidas en el archivo funciones_criptico.cc que son utilizadas en el archivo
 * cripto.cc
 * @bug No hay bugs conocidos
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
 */

#include <iostream>

void CrearArchivo(std::string nombre_archivo_2);

char EncriptarCesar(char letra, int k);

char DesencriptarCesar(char letra, int k);
