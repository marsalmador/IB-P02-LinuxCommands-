/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file funciones_criptico.cc
 * @author: Marlon Eduardo Salazar Amador
 * @date: 15 nov 2020
 * @brief description: Este programa incluye las definiciones de las funciones declaradas en el
 * archivo funciones_criptico.h que se utilizan en el archivo cripto.cc
 * @bug No hay bugs conocidos
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
 */

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <fstream>
#include "funciones_cripto.h"

void CrearArchivo(std::string nombre_archivo_2){
  std::ofstream archivo;
  archivo.open(nombre_archivo2.c_str(), std::ios::out);
}

/**
 * En esta función se hace uso del Código ASCII para llevar a cabo
 * la encriptación.
 */
char EncriptarCesar(char letra, int k){
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

/**
 * Sigue el mismo proceso que la función de encriptar pero cambiando
 * el signo del parámetro K, pues el proceso a seguir es el inverso
 * si se desea descodificar el mensaje.
 */
char DesencriptarCesar(char letra, int k){
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
