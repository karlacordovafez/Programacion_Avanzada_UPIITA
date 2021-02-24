/*Archivos
Un flujo (stream) es un conjunto de datos que fluyen entre un origen o fuente
(productor) y un destino o sumidero (consumidor). Entre el origen y el destino
debe de existir un canal de comunicacion (pipe) por donde fluyan los datos.

La apertura de un archivo supone establecer la conexion del programa con el 
dispositivo que contiene al archivo; por el canal que comunica el archivo con el
programa van a fluir la secuencia de datos.

Puntero FILE

los Archivos tienen un nombre interno que es un puntero a una estructura definida
(puntero a archivo). Esta estructura contiene informacion sobre el archivo, tal
como la definicion del buffer que utiliza, el modo de apertura del archivo, el
último caracter leído del buffer y otros detalles.

typedef struct {
	short level;
	unsigned flags;
	char fd;
	unsigned char hold;
	short bsize;
	unsigned char *buffer;
	unsigned istemp;
	short token;
} FILE;

Solo al programador le debe de interesar que existe el tipo FILE y que es nece-
sario definir un puntero a FILE por cada archivo a procesar.

Para declarar un puntero file 
FILE *punterofile;

APERTURA DE UN ARCHIVO
Para procesar un archivo en C (aplica para casi cualquier lenguaje de programacion)
la primera operacion que hay que realizar es abrir el archivo. La apertura
del archivo supone conectar el archivo externo con el programa, e indicar como
va ser tratado el archivo : binario , de caracter, etc..

El programa accede a los archivos a traves de un puntero a la estructura FILE,
la funcion de apertura devuelve dicho puntero. 

La funcion para abir un archivo es fopen()

fopen(nombre_archivo, modo_apertura)

La funcion va a devolver un puntero de tipo FILE, a traves de dicho puntero el
programa hace referencia al archivo. Esta función puede generar un error, por lo
que es conveniente verificar que no regrese NULL.

Modo_apertura: 
Se refiere la manera en como el archivo se va a leer o como se va a guardar.
como binario o texto.

Modo		Significado
"r"			Abre para lectura
"w"			Abre para crear nuevo archivo (si ya existe se pierden los datos)
"a"			Abre para añadir al final
"r+"		Abre archivo ya existente para modificar (leer/escribir)
"w+"		Crea un archivo para escribir/leer (si ya existe se pierden los datos)
"a+"		Abre el archivo para modificar (escribir/leer) al final. Si no
			existe es como w+
			
- NULL Y EOF
Las funciones -fopen(), strcpy(), etc..- si no pueden realizar la operacion 
regresa NULL.
Todas las operaciones de archivos que empiecen con "f" si alguna de ellas falla
regresan EOF, pero de igual forma para conocer que se ha llegado el fin de un
archivo tambien se regresa EOF -End Of File-

CIERRE DE ARCHIVOS
los archivos en C trabajan con una memoria intermedia buffer. la cual se debe 
de liberar al finalizar de hacer operaciones con los archivos. con la funcion
fclose()
Sintaxis
   int fclose(FILE *puntero_file);
   
FUNCIONES DE ENTRADA Y SALIDA ARA ARCHIVOS
Las funciones de entrada y de salida para los archivos se mediante el puntero
FILE asociado. podemos utilizar la analogia de las funciones que se utilizan
para mandar texto o leer datos con la consola, solo utilizando al principio 
"f"
printf(), scanf(), getchar(), putchar(), gets() y puts(). la equivalencia en 
archivos seria:
fprintf(), fscanf(), fputs(), fgets().

FUNCIONES putc() y fputc()
Ambas funciones son identicas. lo que realizan es escribir un caracter en el
archivo asociado con el puntero FILE. Devuelven el caracter escrito o EOF si 
no puede escribir .
	putc(caracter, puntero_archivo);
	fputc(caracter, puntero_archivo);
	
*Siendo caracter el que se va a escribir en el archivo.

FUNCIONES getc() y fgetc()
Ambas funciones son identicas. lo que realizan es leer un caracter en el
archivo asociado con el puntero FILE. Devuelven el caracter leido o EOF si 
no puede leer .	
	getc(puntero_archivo);
	fgetc(puntero_archivo);
	
FUNCIONES fputs() y fgets()
Estas funciones escriben/leen una cadena de caracteres en el archivo asociado.
la funcion fputs() escribe una cadena de caracteres. Devuelve EOF si no ha 
podido escribir la cadena, un valor positivo si la escritura es correcta.
	fputs(cadena, puntero_archivo);

La funcion fgets() lee una cadena de caracteres del archivo. Termina la 
captación de la cadena cuando lee el cracter de fin de linea o bien cuando
ha leido n-1 caracteres, siendo n un argumento entero de la funcion.La funcion
deuvelve un puntero a la cadena devuelta o NULL si ha habido un error.
	fgets(cadena, n, puntero_archivo);
	
FUNCIONES fprintf() y fscanf()
Permiten escribir y leer variables de cualquier tipo de dato estandar, con 
la facultad de usar los formatos (%d, %f, %s, %c), para transformar los datos

Estas dos funciones tiene como primer argumento el puntero a FILE asociado
al archivo de texto.

FUNCION feof()
Permite conocer cuando se alcanza el fin de archivo o ya no encuentra nada
para seguir leyendo. Devuelve un valor distinto a cero (0) (true) si existen
datos para leer en caso contrario devuelve cero (0) false cuando ya no 
encuentra nada para leer
   			
*/


#include <stdlib.h>
#include <stdio.h>

FILE *archivo;
char nombre_archivo[] = "Archivo_prueba.txt";
char buffer[200];
int main(){
	
	archivo = fopen(nombre_archivo,"r");
	if(archivo != NULL){
	//	fprintf(archivo,"Este es mi primer archivo");
		fscanf(archivo,"%[^\n]",buffer);
		printf("SCANF %s",buffer);
		fgets(buffer,150,archivo);
		printf("\nGETS %s",buffer);
	}
	else
	printf("No se pudo abrir el archivo!");
	
	fclose(archivo);
	
	return 0;
}
