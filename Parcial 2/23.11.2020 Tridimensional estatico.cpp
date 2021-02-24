#include <stdio.h>
#include <stdlib.h>

#define profundidad 2
#define filas 2
#define columnas 2
int main(){
	
	int tri[profundidad][filas][columnas];
	
	for(int k=0; k<profundidad; k++){
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				printf("arr[%d][%d][%d] = ",k,i,j);
				scanf("%d",&tri[k][i][j]);
			}	
		}
	}	
	printf("\n\n");
	
	for(int k=0; k<profundidad; k++){
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				printf("arr[%d][%d][%d] = %d direccion: %d\n",k,i,j,tri[k][i][j],&tri[k][i][j]);
			}	
		}
	}	
	
return 0;	
}
