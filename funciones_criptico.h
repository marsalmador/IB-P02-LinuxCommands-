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
/**
 * Crea un archivo.
 *
 * @param El nombre del archivo a crear.
 * @return Nada, sólo crea el archivo.
 */
void CrearArchivo(std::string nombre_archivo_2);
/**
 * Encripta una letra mediante el método César usando un parámetro dado por el usuario.
 *
 * @param Una letra y el valor de un parámetro.
 * @return La letra modificada por el método César.
 */
char EncriptarCesar(char letra, int k);
/**
 *Desencripta una letra mediante el método César usando un parámetro dado por el usuario.
 *
 * @param Una letra y el valor de un parámetro.
 * @return La letra modificada por el método César.
 */
char DesencriptarCesar(char letra, int k);
