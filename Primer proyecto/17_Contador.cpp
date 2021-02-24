

#include <stdio.h>
#include <string.h>

int main(){
    FILE *archivo;
    int letra, contador= 0;
    archivo= fopen("Archivo.txt","r");
    while(letra!=EOF)
    {
        letra = getc(archivo);
		if(letra!=' ' && letra!='\n'){
			contador++;
		}		

    fclose(archivo);
    printf("Cantidad de caracteres: %d",contador);
    return 0;
}


