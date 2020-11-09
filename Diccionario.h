#ifndef DICCIONARIO_H
#define DICCIONARIO_H

/* Liberias */

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;


/* MODOS DE EJECCUCIÓN */

#define MAX_RANGO 20 // [!]MODIFICAR el MÁXIMO RANGO de CARACTERES -> argv[1]
#define ARCHIVO "DICCIONARIO.txt" //[!]Nombre Archivo Generado

#define BINARIO "01" // [!]PUEDES CREAR TU PROPIO MODO (Mirar Guía)
#define HEXADECIMAL "1234567890abcdef"
#define OCTAL "01234567"
#define DECIMAL "0123456789"
#define SEMICOMPLETO "0123456789aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ"
#define COMPLETO "0123456789aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZñÑçÇ!@#$%^&*()-_+=~`[]{}|\\:;\"'<>,.?/ "


/* PROTOTIPOS */

void guiaDeUso();
template<typename VALOR>
void comprobarRangoMaximoMinimo(VALOR);
void insertarValor(string&, char** ); 
void generarDiccionario(string const&, size_t, string const&);
void generarFichero(string);
void comprobarArchivoExiste(const char *);
void mensajeDeAdvertenciaTiempo(int);
void animacionInicial();
void animacionFinal();


#endif //DICCIONARIO_H