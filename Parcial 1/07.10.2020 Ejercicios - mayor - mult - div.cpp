#include <stdio.h>
#include <stdlib.h>

int NumMayor();
void DivisionRestas();
void MultiplicacionSumas();


int main(){
	int r = 0, indice = 0;
	
	printf("Elija una opcion:\n1) Calcular numero  mayor.\n2)Multiplicacion con sumas.\n");
	printf("3)Division con restas.\n");
	scanf("%i",&indice);
	
	switch(indice){
		case 1:
			r=NumMayor();
			printf("Num Mayor:%i ",r);
			break;
			
		case 2:
			MultiplicacionSumas();
			break;
			
		case 3:
			DivisionRestas();
			break;
			
		
		
	}
	
		
	
return 0;	
}

int NumMayor(){
	int dato1,dato2,dato3;
		printf("Introduce 3 numeros:");
		scanf("%i %i %i",&dato1,&dato2,&dato3);	
	
	if(dato1 > dato2)
	return dato1 > dato3 ? dato1 : dato3;
	else
	return dato1 > dato3 ? dato2 : dato3;
}

void MultiplicacionSumas(){
	int dato1,dato2,resultado=0;
	printf("Introduce 2 numeros:");
	scanf("%i %i",&dato1,&dato2);
		
	for(int i=0; i<dato2; i++){
		resultado+=dato1;
	}

	printf("resultado %i",resultado);
}

void DivisionRestas(){
	int dato1,dato2,resta=0,resultado=0;
	printf("Introduce 2 numeros:");
	scanf("%i %i",&dato1,&dato2);
	resta=dato1;
		
		while(resta>=dato2){
			resta=resta-dato2;
			
			if(resta<0)
			break;
			
			resultado++;
		}

	printf("resultado %i",resultado);
}
