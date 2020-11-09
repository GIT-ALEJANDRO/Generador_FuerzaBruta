### Características

- Desarrollado en C++ 11. 
- Soporte Multiplataforma ❤️ Linux, MacOS y Windows.
- 6 Modos disponibles (Binario, Octal, Decimal, Hexadecimal, Semicompleto, Completo).
- Genera automáticamente un archivo de extensión ".txt" , en la misma ruta donde ejecutes la aplicación.
- Se ejecuta desde el terminal pasandole argumentos.
- Animaciones y control total sobre la aplicación.
- Integrado un modo de ayuda y guiado completo.
- Compilado para Windows y sistemas Unix (Mac y Linux). 
- Idioma: Español 

*PROXIMAMENTE*
- Solucionar el problema al visualizar carácteres UTF8 con Windows.
- Mejora en la eficiencia algorítmica.
- Añadir Inglés u otro idioma adicional


# Generador de Fuerza Bruta 🔓 

![Alt text](Imagenes/Captura.png?raw=true "Imagen_Permutaciones")


**Guía de uso**
----

1) El primer paso es descargar todos los archivos en nuestro sistema.
2) La aplicación ya viene compilada para todos los sistemas operativos.
3) **Abrir la terminal** dentro de la *carpeta **"Generador Fuerza Bruta"***

4a) Si tu sistema es **Linux o MacOS**, ejecutar la aplicación del siguiente modo:
```bash
./Generador -h
```
4b) Si tu sistema operativo es **Windows**, ejecutar la aplicación del siguiente modo:
```bash
.\GeneradorWindows.exe -h 
```
5) Esto **abríra la guía de uso y como funciona la aplicación** en el terminal.

***NOTA:*** En caso de querer compilar la apicación, tanto en Windows como en otro sistema operativo, desde el terminal usar el siguiente comando: 
```bash
g++ -std=c++11 Generador.cpp -o Generador
```
*Tener presente que requiere tener instalador g++ en el sistema.*


### Modos de uso 

La aplicación consta de **2 argumentos principales** para su funcionamiento. 

El **primer argumento determina** la longitud máxima que tendrán las permutaciones que vayamos a generar. 

El **segundo argumento** corresponde al modo en que se generaran esas permutaciones. 


**Advertencia:** Por seguridad la longitud máxima es de 20. Es modificable desde el archivo "Diccionario.h" luego tocaría compilar (ver Guía de uso) !!


### Modos Disponibles (Segundo Argumento)

Existen **6 modos para generar permutaciones**: 

| Modos de Uso  | Carácteres      | 
| ------------- |:---------------:| 
| binario       |01               | 
| octal         |01234567         |   
| decimal       |0123456789       | 
| hexadecimal   |0123456789abcdef | 
| semicompleto  |Teclado completo SIN caracteres extraños| 
| completo      |Teclado completo CON caracteres extraños| 


***NOTA:*** *Poner el argumento todo en minúsculas o mayúsculas.*


### Ejemplo de uso (En LINUX o MAC)

***CASO 1 :*** Supongamos queremos generar en modo binario, todas las posibles combinaciones, para una contraseña de una longitud máxima de 10 caracteres:
```bash
./Generador 10 binario 
```
***CASO 2:*** Supongamos queremos generar de modo completo, todas las posibles combinaciones, para una contraseña de una longitud máxima de 15 caracteres:
```bash
./Generador 15 completo 
```

***Advertencia***: Puede tardar un buen rato ya que podemos generar un archivo con muchos MB o GB. 


### Ejemplo de uso (En Windows)

***CASO 1 :*** Supongamos queremos generar en modo binario, todas las posibles combinaciones, para una contraseña de una longitud máxima de 10 caracteres:
```bash
.\GeneradorWindows.exe 10 binario 
```
***CASO 2:*** Supongamos queremos generar de modo completo, todas las posibles combinaciones, para una contraseña de una longitud máxima de 15 caracteres:
```bash
.\GeneradorWindows.exe 15 completo 
```

***Advertencia***: Puede tardar un buen rato ya que podemos generar un archivo con muchos MB o GB. 

### Licencia 

Copyright (C) 2020  
Autor: Alejandro García

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
	
### FIN

**Este programa ha sido creado para aprender, no para ser utilizado con malos propositos**


