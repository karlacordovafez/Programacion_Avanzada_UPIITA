//CADENAS
/* Una cadena, es un tipo de dato compuesto (un array de caracteres (char) más
 un caracter nulo '\0' -NULL-
 
 Ejemplo: ABC
 Con esta representación se entiende que se van a almacenar cuatro elementos:
 'a', 'b', 'c' y '\0'. En consecuencia se considera que es un array de cuatro
 elementos de tipo char. El valo real de esta cadena es la dirección de su primer
 carácter y su tipo es un puntero a char. Aplicando el operador * a puntero a 
 char, se obtiene el contenido de la cadena.
 
 Ej:
   *"ABC"         es igual a 'A'
   *("ABC"+ 1)    es igual a 'B'
   *("ABC"+ 2)    es igual a 'C'
   *("ABC"+ 3)    es igual a '\0'

char nombre[4];  //arreglo de caracteres 

   nombre[0] = 'h'; nombre[1] = 'o'; nombre[2] = 'l'; nombre[3] = 'a';
   'h''o''l''a' = hola
   
   char nombre[4] + '\0' = CADENA
   
   Bienvenidos a la clase.'\0'   (.) se le conoce como delimitador
   'B'i'e'n'v'e'n'i'd'o's'
   
   Como estan chicos, yo estoy bien.  (,.) se le conoce como delimitador
      
   char apuntador*;
   
   //apuntador = (char*)malloc(sizeof(char) * tam);
   
   printf("Ingresa un caracter");
   scanf("%c",*(apuntador+posicion) );  //apuntador[posicion]
   
   
   //DECLARACION DE VARIABLES DE CADENA;
   las cadenas se declaran como los restantes tipos de arrays. El operador
   postfijo[] contiene el tamaño máximo del objeto. El tipo de dato es char
   o unsigned char:
   
   char text[81];
   unsigned char datos;
   
   Nota: el tamaño de la cadena debe de contemplar el caracter '\0'. Entonces
   si quiero guardar la palabra hola:
   
   char palabra[5];     hola+'\0'
   
   Ojo: Se puede encontrar una declaración como:
   char *s;
   Es una cadena?
   no
   Es un puntero?
   si
   Es un arreglo de caracteres?
   si
   
   Existe una biblioteca para la manipulación de cadenas que se llama 
   #include <string.h> 
   
   lECTURA DE CADENAS
   El metodo de entrada que se utiliza para guardar datos que va ingresando
   el usuario es con el método scanf(), pero si deseamos guardar cadenas se
   debe de utilizar el formato %s. Lo que hara es cuando esta función dara por
   terminada la cadena. Cuando encuentra un espacio (un blanco) o fin de linea.
   
   Esto puede producir anomalias al no poder captar cadenas con espacios entre
   caracteres.
   
   El método utilizado y el más conveniente es gets(). La funcion gets() permite 
   leer la cadena completa, incluyendo cualquier espacio en blanco, termina al
   leer el caracter cuando exista un salto de linea.
   
   El argumento de gets() ha de ser una variable cadena de suficiente espacio
   para que puedan guardarse todos los caracteres tecleados (recordando que 
   automaticamente se inserta el caracter nulo '\0'
   
   Ej. char bf[21];
   	   gets(bf);
   	   
   Nota: si se ingresa una cadena más de 21 caracteres genera un error, por 
         no tener la capacidad de almacenarla
         
         La funcion devuelve un puntero a la cadena leida y almacenada en su 
         argumento; Si existe un error se va a guardar el valor NULL
         
   FUNCION getchar()
   
   Se utiliza para leer caracter a caracter. La llamada devuelve el siguiente
   caracter cada vez que se teclea, en caso de error regresara EOF ()
   
   FUNCION putchar()
   Se utiliza para escribir en la salida caracter a caracter. El caracter que
   se escribe es el transmitido como argumento.
   
   int putchar(int caracter);
   
   FUNCION puts()
   visualiza una cadena de caracteres, incluyendo el cáracter fin de linea.
   Es la función opuesta de gets(); puts() escribe una cadena y el fin de linea.
   
   int puts(const char *s);*/
   
   #include <stdlib.h>
   #include <stdio.h>
   
   int main(){
   	
   	
   	
   	return 0;
   	
   }
