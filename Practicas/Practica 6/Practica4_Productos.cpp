#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define tam 10

struct producto{
	float precio_costo;
	float precio_venta;
	int codigo;
	int cantidad_vendida;
};

void DatosIniciales();
void ImprimirDatos();
void Ganancia();
void EditarDatos(producto *Editable);

struct producto *inventario = (producto*)malloc(sizeof(producto)*tam);

int main(){
	DatosIniciales();
	int menu,codigo;
	
	do{
		system("cls");
		printf("1) Listar informacion de productos.\n");
		printf("2) Editar datos.\n");
		printf("3) Calcular ganancia.\n");
		printf("0) Salir.");
		scanf("%d",&menu);
		fflush(stdin);
		
		switch(menu){
			case 1:
				ImprimirDatos();
				getch();
				break;
			
			case 2:
				producto *Prod;
				int contador;
				contador = 0;
				do{			
					printf("\n\nIntroduzca codigo del producto a editar (del 0 al 9):\n");
					scanf("%d",&codigo);
					fflush(stdin);
					for(int i=0; i<10; i++){
						if((inventario+i)->codigo == codigo){
							Prod = (inventario+i);
							contador = 1;
						}
					}
					if(contador == 0)
						printf("El codigo es incorrecto!");
				}while(contador == 0);
				EditarDatos(Prod);
				getch();
				break;
	
			case 3:
				Ganancia();
				getch();
				break;
		}
	}while(menu != 0);
	free(inventario);
	
	return 0;
}

void DatosIniciales(){
	for(int i=0; i<10; i++){
		(inventario+i)->codigo = i;
		(inventario+i)->precio_costo = 2;
		(inventario+i)->precio_venta = 5;
		(inventario+i)->cantidad_vendida = 2;
	}
}

void ImprimirDatos(){
	for(int i=0; i<10; i++){
		printf("\n\nProducto %d:\n",(inventario+i)->codigo);
		printf("Precio de costo: $%.2f\n",(inventario+i)->precio_costo);
		printf("Precio de venta: $%.2f\n",(inventario+i)->precio_venta);
		printf("Cantidad vendida: %d\n",(inventario+i)->cantidad_vendida);
	}
}

void Ganancia(){
	float gasto_costo = 0;
	float ganancia = 0;
	for(int i=0; i<10; i++){
		gasto_costo += (inventario+i)->precio_costo*(inventario+i)->cantidad_vendida;
		ganancia += (inventario+i)->precio_venta*(inventario+i)->cantidad_vendida;
	}
	printf("\nCosto total: %.2f\nVentas total: %.2f\n",gasto_costo,ganancia);
	ganancia -= gasto_costo;
	printf("Ganancia: %.2f",ganancia);
}

void EditarDatos(producto *Editable){
	int menu;
	printf("\n\n1) Editar precio de costo.\n");
	printf("2) Editar precio de venta.\n");
	printf("3) Editar cantidad vendida.\n");
	scanf("%d",&menu);
	fflush(stdin);
	switch(menu){
		case 1:
			printf("Precio anterior: $%.2f\nPrecio nuevo: $",Editable->precio_costo);
			scanf("%f",&Editable->precio_costo);
			break;
		case 2:
			printf("Precio anterior: $%.2f\nPrecio nuevo: $",Editable->precio_venta);
			scanf("%f",&Editable->precio_venta);
			break;
		case 3:
			printf("Cantidad anterior: %d\nCantidad nueva: ",Editable->cantidad_vendida);
			scanf("%d",&Editable->cantidad_vendida);
			break;
	}
}
