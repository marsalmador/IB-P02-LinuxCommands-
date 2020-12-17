/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file encriptar.cc
 * @author: Marlon Eduardo Salazar Amador
 * @date: 15 nov 2020
 * @brief description: Este programa permite al usuario encriptar y desencriptar el
 * contenido de un documento de texto en un nuevo archivo utilizando el código de
 * César
 * @bug No hay bugs conocidos
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
 */

#include <iostream>

void CrearArchivo(std::string nombre_archivo_2);

char EncriptarCesar(char letra, int k);

char DesencriptarCesar(char letra, int k);
