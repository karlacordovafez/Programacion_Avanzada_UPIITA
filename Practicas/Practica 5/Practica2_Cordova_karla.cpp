#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "recursividad.h"

void rellenar(int *arreglo,int longitud);

int main(){
	int *arreglo;
	int decimal, error;
	int longitud = 0,menu = 1;
	char *binario;
	
while(menu!=0){	
	error = 0;
	system("cls");
	printf("MENU");
	printf("\n1) Ordenar de menor a mayor.");
	printf("\n2) De decimal a binario.");
	printf("\n3) De binario a decimal.");
	printf("\n4) Invertir arreglo de enteros.");
	printf("\n0) Salir.");
	scanf("%d",&menu);
	fflush(stdin);
	
	switch(menu){
		case 1:
			do{
				printf("Introduce longitud del arreglo: ");
				error = scanf("%d",&longitud);
				fflush(stdin);
				if(error == 0)
					printf("Dato incorrecto!\n");
			}while(error == 0);	
		
			arreglo = (int*)malloc(sizeof(int)*longitud);
			rellenar(arreglo,longitud);
			printf("\nArreglo original:\n");
			leerArreglo(arreglo,(arreglo+longitud-1));
			menor_aMayor(arreglo,(arreglo+longitud));
			printf("\nArreglo ordenado:\n");
			leerArreglo(arreglo,(arreglo+longitud-1));
			getch();
		break;
		
		case 2:
			binario = (char*)malloc(sizeof(char)*100);
			do{
				printf("Introduce el numero entero decimal: ");
				error = scanf("%d",&decimal);
				fflush(stdin);
				if(error == 0)
					printf("Dato incorrecto!\n");
			}while(error == 0);
			
			binario = decimal_aBinario(decimal,binario,strlen(binario));
			printf("\nEl numero en binario es: %s\n",binario);
			getch();
		break;
		
		case 3:
			binario = (char*)malloc(sizeof(char)*100);
			printf("Introduce el numero entero binario: ");
			scanf("%s",binario);
			fflush(stdin);
			for(int i=0 ; i<strlen(binario) ; i++){
				if(*(binario+i) != '0' && *(binario+i) != '1'){
					error = 1;
				}	
			}
			(error == 1) ? printf("El numero introducido no es valido!") :
			printf("\nEl numero en decimal es: %d\n",binario_aDecimal(binario));
			getch();
		break;
		
		case 4:
			do{
				printf("Introduce longitud del arreglo: ");
				error = scanf("%d",&longitud);
				fflush(stdin);
				if(error == 0)
					printf("Dato incorrecto!\n");
			}while(error == 0);	
		
			arreglo = (int*)malloc(sizeof(int)*longitud);
			rellenar(arreglo,longitud);
			printf("\nArreglo original:\n");
			leerArreglo(arreglo,(arreglo+longitud-1));
			invertirNum(arreglo,(arreglo+longitud-1));
			printf("\nArreglo invertido:\n");
			leerArreglo(arreglo,(arreglo+longitud-1));
			getch();
		break;
	}
}
	
	return 0;
}

void rellenar(int *arreglo,int longitud){
	int error = 0;
	for(int i=0; i<longitud; i++){
		do{
			printf("Arreglo[%d] = ",i);
			error = scanf("%d",(arreglo+i));
			fflush(stdin);
			if(error == 0)
				printf("Tipo de dato incorrecto, vuelva a escribirlo.\n");
		}while(error == 0);
	}
}

