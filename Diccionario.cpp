/*
    Copyright (C) 2020  
    Author: Alejandro García

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/


#include "Diccionario.h"
/* [!]COMPILACIÓN:  g++ -std=c++11 Diccionario.cpp -o Diccionario */


int main(int argc, char** argv)
{
     /* Si los argumentos son diferentes a 3 o
        Contiene el argumento '-h' de HELP (AYUDA)
        Se abrirá una guia informativa para usar 
        el programa.
    */
    if (argc != 3 || strcmp(argv[1],"-h") == 0 )
    {
        /* Metodo -> GUIA DE USO */
        guiaDeUso();
        /* SALIDA PROGRAMA EXITOSA */
        exit(0); 
    }

    /* ANIMACION INICIAL */
    animacionInicial();

    /* ARGV[1] - LONGITUD MAXIMA  (PARSEAR CHAR a INT 4 BYTES ) */
    int rango = atoi(argv[1]);
    comprobarRangoMaximoMinimo(rango);

    /* ARGV[2] - CARACTERES GENERAR DICCIONARIO */
    string caracteres;
    insertarValor(caracteres, argv);
    
    /* COMPROBAR si existe el archivo para NO Sobreescribir */
    comprobarArchivoExiste(ARCHIVO);

    /* GENERAR el Diccionario */
    mensajeDeAdvertenciaTiempo(rango);
    generarDiccionario(caracteres, rango, "");

    /* Animacion Final*/
    animacionFinal();
}


void animacionFinal()
{
    cout<<endl;
    cout<<"[!]Archivo: DICCIONARIO.txt"<<endl;
    cout<<"[*]Generado en la Misma Ruta donde ejecuto el programa"<<endl;
    cout<<"  ███████╗██╗███╗░░██╗   "<<endl;
    cout<<"  ██╔════╝██║████╗░██║   "<<endl;
    cout<<"  █████╗░░██║██╔██╗██║   "<<endl;
    cout<<"  ██╔══╝░░██║██║╚████║   "<<endl;
    cout<<"  ██║░░░░░██║██║░╚███║   "<<endl;
    cout<<"  ╚═╝░░░░░╚═╝╚═╝░░╚══╝   "<<endl;
}


void animacionInicial()
{
cout<<"╭━━━╮╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╭╮╱╱╱╱╱╭━━━╮╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╭━━╮╱╱╱╱╱╭╮       "<<endl;
cout<<"┃╭━╮┃╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱┃┃╱╱╱╱╱┃╭━━╯╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱┃╭╮┃╱╱╱╱╭╯╰╮      "<<endl;
cout<<"┃┃╱╰╋━━┳━╮╭━━┳━┳━━┳━╯┣━━┳━╮┃╰━━┳╮╭┳━━┳━┳━━━┳━━╮┃╰╯╰┳━┳╮┣╮╭╋━━╮   "<<endl;
cout<<"┃┃╭━┫┃━┫╭╮┫┃━┫╭┫╭╮┃╭╮┃╭╮┃╭╯┃╭━━┫┃┃┃┃━┫╭╋━━┃┃╭╮┃┃╭━╮┃╭┫┃┃┃┃┃╭╮┃   "<<endl;
cout<<"┃╰┻━┃┃━┫┃┃┃┃━┫┃┃╭╮┃╰╯┃╰╯┃┃╱┃┃╱╱┃╰╯┃┃━┫┃┃┃━━┫╭╮┃┃╰━╯┃┃┃╰╯┃╰┫╭╮┃   "<<endl;
cout<<"╰━━━┻━━┻╯╰┻━━┻╯╰╯╰┻━━┻━━┻╯╱╰╯╱╱╰━━┻━━┻╯╰━━━┻╯╰╯╰━━━┻╯╰━━┻━┻╯╰╯   "<<endl;
cout<<"___________________________________________________4̷l̷3̷___________"<<endl;
}


void guiaDeUso()
{
    /* GUIA DE USO  */
    cout << "_________________________________"<< endl;
    cout << "     GENERADOR FUERZA BRUTA      "<< endl;
    cout << "               ***               "<< endl;
    cout << "           GUÍA DE USO           "<< endl;
    cout << " ./Diccionario (Longitud) (Modo) "<< endl;
    cout << " ./Diccionario     8     binario "<< endl;
    cout << "                                 "<< endl;
    cout << "        MODOS DISPONIBLES        "<< endl;
    cout << "           binario               "<< endl;
    cout << "           hexadecimal           "<< endl;
    cout << "           octal                 "<< endl;
    cout << "           decimal               "<< endl;
    cout << "           semicompleto          "<< endl;
    cout << "           completo              "<< endl;
    cout << "                                 "<< endl;
    cout << "Versión 0.2______________________"<< endl;
}


void mensajeDeAdvertenciaTiempo(int rango)
{
    if (rango >= 4)
    {
        cout<<"[*]ADVERTENCIA: Puede tardar varios minutos..."<<endl;
    }else
    {
        cout<<"[*]ADVERTENCIA: Generando el archivo..."<<endl;
    }
}


void comprobarArchivoExiste(const char* archivo)
{
    /* Si el Archivo Existe */
    if(ifstream(archivo) )
    {
        /* Lo borramos Para NO Sobreescribir */
        remove(archivo);
    }
}


void generarFichero(string PREFIJO)
{
    /* Crear Variable */
    ofstream Archivo;

    /* ABRIR en MODO INSERTAR -> OUTput | APPend */
    Archivo.open(ARCHIVO, ios::out | ios::app);

    /* Si FALLA */
    if (Archivo.fail() )
    {
        puts("[x]ERROR: Crear Archivo");
        exit(1);
    }else 
    {
        /* AGREGAMOS PERMUTACIONES */
        Archivo << PREFIJO+"\n";
    }

    /* Cerrar Archivo: Liberar Memoria */
    Archivo.close();
}


void generarDiccionario(string const& caracteres, size_t rango, string const& prefijo) 
{
    /* [!]RECURSIVIDAD - Eficiencia permutaciones O(n!) */
    if(prefijo.length() == rango) 
    {
        return;

    }else 
    {   
        for(auto i : caracteres) 
        {
            string siguiente = prefijo + i;
            /* FUNCION para escribir 'prefijo' en el archivo .TXT */
            generarFichero(siguiente);
            /* LLAMADA recursiva con el nuevo prefijo 'siguiente' O(n!) */
            generarDiccionario(caracteres, rango, siguiente);
        }
    }
}


void insertarValor(string& valor, char** argv)
{
    /* Añadir el argumento elegido por el usuario a la VARIABLE VALORES */
    if (strcmp(argv[2],"HEXADECIMAL")==0 || strcmp(argv[2],"hexadecimal")==0)
    {
        /* Insertamos la cadena -> HEXADECIMAL */
        valor = HEXADECIMAL;
        cout << "Hexadecimal: "<< valor << endl;

    }else if (strcmp(argv[2],"BINARIO")==0 || strcmp(argv[2],"binario")==0)
    {
        /* Insertamos la cadena -> BINARIO */
        valor = BINARIO;
        cout << "Binario: "<< valor << endl; 
    }else if (strcmp(argv[2],"OCTAL")==0 || strcmp(argv[2],"octal")==0)
    {
        /* Insertamos la cadena -> OCTAL */
        valor = OCTAL;
        cout << "Octal: "<< valor << endl; 
    }else if (strcmp(argv[2],"DECIMAL")==0 || strcmp(argv[2],"decimal")==0)
    {
        /* Insertamos la cadena -> DECIMAL */
        valor = DECIMAL;
        cout << "Decimal: "<< valor << endl; 
    }else if (strcmp(argv[2],"SEMICOMPLETO")==0 || strcmp(argv[2],"semicompleto")==0)
    {
        /* Insertamos la cadena -> SEMICOMPLETO */
        valor = SEMICOMPLETO;
        cout << "SemiCompleto: "<< valor << endl; 
    }else if (strcmp(argv[2],"COMPLETO")==0 || strcmp(argv[2],"completo")==0)
    {
        /* Insertamos la cadena -> COMPLETO */
        valor = COMPLETO;
        cout << "Completo: "<< valor << endl; 
    }else
    {
        /* SINO */
        cout <<"[x]Error: Argumento Diccionario Invalido" <<endl;
        cout <<"[*]Visualizar Guia de Uso:  ./Diccionario -h" <<endl;
        exit(1);
    }
}


template<typename VALOR>
void comprobarRangoMaximoMinimo(VALOR comprobar)
{
    /* Si el Valor del Argumento es MAYOR al Rango MAximo
    O el Valor es Menor e Igual a 0
    */
    if ( comprobar > MAX_RANGO || comprobar <= 0)
    {
        /* Rango Incorrecto */
        cout << "[x]RANGO INCORRECTO" << endl;
        cout << "[*]Rango: 1 al "<< MAX_RANGO << endl;
        /* Salida Erronea */
        exit(1);
    }    
}