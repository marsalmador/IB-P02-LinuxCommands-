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
 * César. Para ello, el usuario debe introducir una serie de datos en la forma dada
 * por el comando "--help"
 * @bug No hay bugs conocidos
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
 */

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <fstream>
#include "funciones_cripto.h"
#include "funciones_cripto.cc"

int main(int argc, char* argv[]) {
  if(argc > 1 && argc < 3 && (strcmp(argv[1], "--help") == 0)){
    std::cout<<std::endl<<"./cripto -- Cifrado de ficheros"<<std::endl;
    std::cout<<"Modo de uso: ./cripto fichero_entrada fichero_salida metodo ";
    std::cout<<"password operacion"<<std::endl<<std::endl;
    std::cout<<"fichero_entrada: Fichero a codificar"<<std::endl;
    std::cout<<"fichero_salida:  Fichero codificado"<<std::endl;
    std::cout<<"metodo:          Indica el metodo de encriptado"<<std::endl;
    std::cout<<"                   1: Cifrado xor"<<std::endl;
    std::cout<<"                   2: Cifrado de Cesar"<<std::endl;
    std::cout<<"password:        Palabra secreta en el caso de metodo 1, Valor";
    std::cout<<" de K en el metodo 2"<<std::endl;
    std::cout<<"operacion:       Operacion a realizar en el fichero"<<std::endl;
    std::cout<<"                   +: encriptar el fichero"<<std::endl;
    std::cout<<"                   -: desencriptar el fichero"<<std::endl;
    std::cout<<std::endl;
  }
  if(argc==1){
    std::cout<<std::endl<<"./cripto -- Cifrado de ficheros"<<std::endl;
    std::cout<<"Modo de uso: ./cripto fichero_entrada fichero_salida metodo ";
    std::cout<<"password operacion"<<std::endl;
    std::cout<<"Pruebe ./cripto --help para mas informacion"<<std::endl;
    std::cout<<std::endl;
  }
  
  if(argc==6 && (strcmp(argv[3], "2") == 0) && (strcmp(argv[5], "+") == 0)) {
    CrearArchivo(argv[2]);   
    const std::string nfichero = argv[1];
    const std::string nfsalida = argv[2];
    char letra;
    std::ifstream fichero;
    std::ofstream salida;
    fichero.open(nfichero.c_str());
    salida.open(nfsalida.c_str());
    if(!fichero.eof()) {
      fichero.get(letra);
      while (!fichero.eof()) {
        char *valor_k_char = argv[4];
        int valor_k_int = atoi(valor_k_char);
        salida << EncriptarCesar(letra, valor_k_int);
        fichero.get(letra);        
      }
    fichero.close();
    }
  return 0;
  }

  if(argc==6 && (strcmp(argv[3], "2") == 0) && (strcmp(argv[5], "-") == 0)) {
    CrearArchivo(argv[2]);
    const std::string nfichero = argv[1];
    const std::string nfsalida = argv[2];
    char letra;
    std::ifstream fichero;
    std::ofstream salida;
    fichero.open(nfichero.c_str());
    salida.open(nfsalida.c_str());
    if(!fichero.eof()) {
      fichero.get(letra);
      while (!fichero.eof()) {
        char *valor_k_char = argv[4];
        int valor_k_int = atoi(valor_k_char);
        salida << DesencriptarCesar(letra, valor_k_int);
        fichero.get(letra);
      }
    fichero.close();
    }
  return 0;
  }
}
