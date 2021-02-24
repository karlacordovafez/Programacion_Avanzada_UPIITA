#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int *invertirNum(int *inicio,int *final){
	int aux;
	if(inicio < final){
		aux = *inicio;
		*inicio = *final;
		*final = aux;
		return invertirNum(inicio+1,final-1);
	}
	else
		return inicio;
}

void leerArreglo(int *inicio,int *final){
	if(inicio <= final){
		printf("[%d] ",*inicio);
		return leerArreglo((inicio+1),final);
	}
	else
		return;
}

void menor_aMayor(int *arreglo,int *final){
	int aux;
	if(arreglo < final){
		for(int *pos = (arreglo+1); pos < final; pos++){
			if(*arreglo > *pos){
				aux = *arreglo;
				*arreglo = *pos;
				*pos = aux;
			}
		}
		return menor_aMayor((arreglo+1),final);
	}
	else
		return;
}

char *decimal_aBinario(int numero,char *binario,int longitud){
	if(numero > 1){
		int residuo = numero % 2;
		numero = numero / 2;
		(residuo == 1) ? strcat(binario,"1") : strcat(binario,"0");
		return decimal_aBinario(numero,binario,longitud);
	}
	else{
		(numero == 1) ? strcat(binario,"1") : strcat(binario,"0");
		binario = binario+longitud;
		for(int i = 0; i<strlen(binario)/2; i++){
			char aux = *(binario+i);
			*(binario+i) = *(binario+strlen(binario)-1-i);
			*(binario+strlen(binario)-1-i)=aux;
		}
		return binario;
	}
}

int binario_aDecimal(char *binario){
	int aux;
	if(strlen(binario) > 0){
		aux = *binario-'0';
		return aux*pow(2,strlen(binario)-1) + binario_aDecimal(binario+1);
	}
	else return 0;
}


