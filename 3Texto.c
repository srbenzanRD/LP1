#include <stdio.h>
void main() {
    printf("PALABRAS\n");
    char Nombre[50];
    printf("Cual es tu nombre: ");
    //scanf("%s",&Nombre);
    fgets(Nombre, sizeof(Nombre), stdin);

    printf("¡HOLA! '%c' ",Nombre[0]);
    puts(Nombre);
}