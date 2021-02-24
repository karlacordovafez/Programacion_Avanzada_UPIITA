//ALGORITMO CÉSAR

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#define MAX_CADENA 250

void Codificar(char mensaje[MAX_CADENA], int desplazamiento);
void Decodificar(char mensaje[MAX_CADENA], int desplazamiento);
void Historial(char mensaje[MAX_CADENA], char codigo[MAX_CADENA]);

char abecedario[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','Ñ','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char abecedario_min[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','x','y','z'};

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
				Codificar(mensaje,desplazamiento);
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
				Decodificar(mensaje,desplazamiento);
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
	if(posicion >= 79){
		posicion = (posicion == 79) ? 165 : posicion-1;
	}
	if(posicion >= 110){
		posicion = (posicion == 110) ? 164 : posicion-1;
	}
	return posicion;	
}


void Codificar(char mensaje[MAX_CADENA], int desplazamiento){
	int posicion = 0, longitud = strlen(mensaje);
	char codigo[250] = {};	
	
	while(desplazamiento > 26){
		desplazamiento = desplazamiento - 26;
	}

	for(int i=0; i<longitud; i++){
	if((mensaje[i] > 64 && mensaje[i] < 91) || (mensaje[i] > 96 && mensaje[i] < 123)||(mensaje[i]==164)||mensaje[i]==165){		
		
		posicion = (mensaje[i] < 79) ? posicion : (mensaje[i]==165) ? 79 : posicion+1;
		if(posicion > 91 - desplazamiento){
			posicion = 91 - posicion;
			posicion = 64 + desplazamiento - posicion;
			posicion = caracterespecial(posicion);
			codigo[i] = posicion;
		}
		
	}
	}
		
/*		
		
		if(posicion > 91 - desplazamiento && posicion < 91 || mensaje[i]==165){			
			posicion = 91 - mensaje[i];
			codigo[i] = 64 + desplazamiento - posicion;
		}
		else{
			if( mensaje[i] > 122 - desplazamiento){
				posicion = 122 - mensaje[i];			
				codigo[i] = 96 + desplazamiento - posicion;
			}
			else
				codigo[i] = mensaje[i]+desplazamiento;
		}
	}
	else
		codigo[i] = mensaje[i];
	}*/
	
	Historial(mensaje,codigo);
	printf("\t%s\n\n\npresiona ENTER para continuar...",codigo);
	getch();
}






void Decodificar(char mensaje[MAX_CADENA], int desplazamiento){
	int posicion = 0, longitud = strlen(mensaje);
	char codigo[250] = {};

	while(desplazamiento > 26){
		desplazamiento = desplazamiento - 26;
	}
	
	for(int i=0; i<longitud; i++){
	if((mensaje[i] > 64 && mensaje[i] < 91) || (mensaje[i] > 96 && mensaje[i] < 123)){
		if( mensaje[i] < 65 + desplazamiento){
			posicion = mensaje[i] - 65;
			codigo[i] = 91 - desplazamiento + posicion;
		}
		else{
			if( mensaje[i] < 97 + desplazamiento && mensaje[i] > 96){
				posicion = mensaje[i] - 97;
				codigo[i] = 123 - desplazamiento + posicion;
			}
			else
				codigo[i] = mensaje[i]-desplazamiento;
		}
	}
	else
		codigo[i] = mensaje[i];	
	}
	
	for(int i=0;i<longitud;i++){//AFHF-5-> VACA
		for(int j=0;j<strlen(abecedario);j++){
			if(mensaje[i] == abecedario[j]){ //mensaje[i] = h y abecedario_decifrado = h
				if(j-desplazamiento<0){
					posicion = j-desplazamiento+26;
					codigo[i] = abecedario[posicion];
				} else{
					codigo[i] = abecedario[j-desplazamiento];
				}
			}
			if(mensaje[i] == abecedario_min[j]){ //mensaje[i] = h y abecedario_decifrado = h
				if(j-desplazamiento<0){
					posicion = j-desplazamiento+26;
					codigo[i] = abecedario_min[posicion];
				} else{
					codigo[i] = abecedario_min[j-desplazamiento];
				}
			}
		}
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


