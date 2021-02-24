#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#define MAX_CADENA 250

int caracterespecial(int posicion);
int pos(int posicion, int max, int min,int desplazamiento, int op);
void Codificar(char mensaje[MAX_CADENA], int desplazamiento);
void Decodificar(char mensaje[MAX_CADENA], int desplazamiento);
void Historial(char mensaje[MAX_CADENA], char codigo[MAX_CADENA]);

char historial[100][2][MAX_CADENA] = {};
int consulta = 0;

int main(){
	int indice = 5, opcion, desplazamiento;
	char mensaje[MAX_CADENA] = {};

while(indice != 0){
		system("cls");
		indice = 5; opcion = 2; desplazamiento = 3;
				
		printf("\nElija una opcion:");
		printf("\n0) Salir.");
		printf("\n1) Codificar.");
		printf("\n2) Decodificar.");
		printf("\n3) Recuperar texto original.\n");
		scanf("%d",&indice);	fflush(stdin);
		
		switch(indice){
			case 1: //CODIFICAR
				printf("Ingresa tu mensaje:\n");
				scanf("%s",&mensaje);	fflush(stdin);
				printf("Quiere ingresar desplazamiento?\n1)Si.\n2)No.\n");
				scanf("%d",&opcion);	fflush(stdin);
				if(opcion == 1){
					printf("Introduzca el desplazamiento:");
					scanf("%d",&desplazamiento);	fflush(stdin);
				}
				(desplazamiento < 0) ? Decodificar(mensaje,-desplazamiento) : Codificar(mensaje,desplazamiento);
				break;
			
			case 2: //DECODIFICAR
				printf("Ingresa tu mensaje:\n");
				scanf("%s",&mensaje);	fflush(stdin);
				printf("Quiere ingresar desplazamiento?\n1)Si.\n2)No.\n");
				scanf("%d",&opcion);	fflush(stdin);
				if(opcion == 1){
					printf("Introduzca el desplazamiento:");
					scanf("%d",&desplazamiento);	fflush(stdin);
				}
				(desplazamiento < 0) ? Codificar(mensaje,-desplazamiento) : Decodificar(mensaje,desplazamiento);
				break;
						
			case 3: //RECUPERAR TEXTO ORIGINAL
				printf("\nTEXTO ORIGINAL: %s\n",mensaje);
				printf("\n\npresiona ENTER para continuar...");
				getch();
				break;
		}
}
//IMPRESIÓN DE HISTORIAL
	printf("\n\n...HISTORIAL DE CONSULTAS...\n\n");
	for(int i=0; i<consulta; i++){
		for(int j=0; j<2; j++){
			printf("%s   ",historial[i][j]);
		}
		printf("\n");
	}
return 0;
}

int caracterespecial(int posicion){
	if(posicion >= 79 && posicion < 92){
		posicion = (posicion == 79) ? 165 : posicion-1;
	}
	if(posicion >= 111 && posicion < 124){
		posicion = (posicion == 111) ? 164 : posicion-1;
	}
	return posicion;	
}

int pos(int posicion, int max, int min, int desplazamiento,int op){
	if(op == 1){
		posicion = max - posicion;
		posicion = min + desplazamiento - posicion;
		posicion = caracterespecial(posicion);
	}
	else{
		posicion = posicion - min;
		posicion = max - desplazamiento + posicion;
	}
return posicion;	
}


void Codificar(char mensaje[MAX_CADENA], int desplazamiento){
	int posicion = 0, longitud = strlen(mensaje);
	char codigo[250] = {};	
	
	while(desplazamiento > 27){
		desplazamiento = desplazamiento - 27;
	}

	for(int i=0; i<longitud; i++){
		if((mensaje[i] > 64 && mensaje[i] < 91) || (mensaje[i] > 96 && mensaje[i] < 123)||
		(mensaje[i]=='\244')||(mensaje[i]=='\245')){
			
			posicion = (mensaje[i]=='\245') ? 79 : (mensaje[i]=='\244') ? 111 :
			(mensaje[i] < 79) ? mensaje[i] : (mensaje[i] < 111 && mensaje[i] > 96) ? mensaje[i] : mensaje[i]+1;

			if(posicion > 91 - desplazamiento && posicion < 92)
				codigo[i] = pos(posicion,91,64,desplazamiento,1);	
			else{
				if(posicion > 123 - desplazamiento)
					codigo[i] = pos(posicion,123,96,desplazamiento,1);
				else{
					posicion = posicion + desplazamiento;
					posicion = caracterespecial(posicion);
					codigo[i] = posicion;
				}
			}
		}
		else
			codigo[i] = mensaje[i];
	}
	
	Historial(mensaje,codigo);
	printf("\t%s\n\n\npresiona ENTER para continuar...",codigo);
	getch();
}

void Decodificar(char mensaje[MAX_CADENA], int desplazamiento){
	int posicion = 0, longitud = strlen(mensaje);
	char codigo[250] = {};	
	
	while(desplazamiento > 27){
		desplazamiento = desplazamiento - 27;
	}

	for(int i=0; i<longitud; i++){
		if((mensaje[i] > 64 && mensaje[i] < 91) || (mensaje[i] > 96 && mensaje[i] < 123)||
		(mensaje[i]=='\244')||(mensaje[i]=='\245')){	
			
			posicion = (mensaje[i]=='\245') ? 79 : (mensaje[i]=='\244') ? 111 :
			(mensaje[i] < 79) ? mensaje[i] : (mensaje[i] < 111 && mensaje[i] > 96) ? mensaje[i] : mensaje[i]+1;
			
			if(posicion < 65 + desplazamiento)
				codigo[i] = pos(posicion,91,65,desplazamiento,2);	
			else{
				if(posicion < 97 + desplazamiento && posicion > 96)
					codigo[i] = pos(posicion,123,97,desplazamiento,2);
				else{
					posicion = posicion - desplazamiento;
					posicion = caracterespecial(posicion);
					codigo[i] = posicion;
				}
			}
		}
		else
			codigo[i] = mensaje[i];
	}
	
	Historial(mensaje,codigo);
	printf("\t%s\n\n\npresiona ENTER para continuar...",codigo);
	getch();
}

void Historial(char mensaje[MAX_CADENA], char codigo[MAX_CADENA]){
	strcpy(historial[consulta][0],mensaje);
	strcpy(historial[consulta][1],codigo);
	consulta++;
}
