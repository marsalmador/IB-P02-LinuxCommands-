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
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <fstream>
#include "funciones_cripto.h"

void crearArchivo(std::string nombre_archivo2){
  std::ofstream archivo;
  archivo.open(nombre_archivo2.c_str(), std::ios::out);
}

char encriptarCesar(char letra, int k){
  char resultado;
  if(letra!=char(32)){
    if(isupper(letra)){
        resultado += char(int(letra+k-65)%26 +65);
    }
      else{
        resultado += char(int(letra+k-97)%26 +97);
      }
  }
  else{ 
    return char(32);
  }
  return resultado;
}

char desencriptarCesar(char letra, int k){
  char resultado;
  if(letra!=char(32)){
    if(isupper(letra)){
        resultado += char(int(letra-k-65)%26 +65);
    }
      else{
        resultado += char(int(letra-k-97)%26 +97);
      }
  }
  else{
    return char(32);
  }
  return resultado;
}
