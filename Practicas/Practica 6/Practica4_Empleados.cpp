#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void GuardarDatos(int tamano);
void ImprimirDatos(int tamano);
void menor_yMayor(int tamano);

struct empleado{
	char nombre[50];
	char sexo;
	float sueldo;
};

struct empleado *Empleados;

int main(){
	int tamano, menu;
	
do{
	system("cls");
	printf("Ingresa cantidad de empleados:");
	scanf("%d",&tamano);
	fflush(stdin);
	Empleados = (empleado*)malloc(sizeof(empleado)*tamano);
	GuardarDatos(tamano);
	
	do{
		system("cls");
		printf("1) Listar todos los empleados.\n");
		printf("2) Mostrar al empleado con menor y mayor sueldo.\n");
		printf("3) Reingresar datos de empleados.\n");
		printf("0) Salir.");
		scanf("%d",&menu);
		fflush(stdin);
		
		switch(menu){
			case 1:
				ImprimirDatos(tamano);
				getch();
				break;
			
			case 2:
				menor_yMayor(tamano);
				getch();
				break;
		}
	}while(menu != 0 && menu != 3);
}while(menu!=0);
	
	free(Empleados);
	return 0;
}

void GuardarDatos(int tamano){
	for(int i=0; i<tamano; i++){
		printf("\n\nEmpleado %d:\n",i);
		printf("Ingrese nombre del empleado: ");
		scanf("%[^\n]",&*(Empleados+i)->nombre);
		fflush(stdin);
		printf("Ingrese sexo del empleado: ");
		scanf("%c",&(Empleados+i)->sexo);
		fflush(stdin);
		printf("Ingrese sueldo del empleado: ");
		scanf("%f",&(Empleados+i)->sueldo);
		fflush(stdin);
	}
}

void ImprimirDatos(int tamano){
	for(int i=0; i<tamano; i++){
		printf("\n\nEmpleado %d:\n",i);
		printf("Nombre: %s\n",(Empleados+i)->nombre);
		printf("Sexo: %c\n",(Empleados+i)->sexo);
		printf("Sueldo: %.2f\n",(Empleados+i)->sueldo);
	}
}

void menor_yMayor(int tamano){
	empleado *Menor = Empleados, *Mayor = Empleados;
	for(int i=0; i<tamano; i++){
		if((Empleados+i)->sueldo < Menor->sueldo)
			Menor = (Empleados+i);
		if((Empleados+i)->sueldo > Mayor->sueldo)
			Mayor = (Empleados+i);
	}
	printf("\n\nEmpleado de menor sueldo:\n");
	printf("Nombre: %s\n",Menor->nombre);
	printf("Sexo: %c\n",Menor->sexo);
	printf("Sueldo: %.2f\n",Menor->sueldo);
	
	printf("\n\nEmpleado de mayor sueldo:\n");
	printf("Nombre: %s\n",Mayor->nombre);
	printf("Sexo: %c\n",Mayor->sexo);
	printf("Sueldo: %.2f\n",Mayor->sueldo);	

}
