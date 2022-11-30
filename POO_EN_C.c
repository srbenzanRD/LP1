#include <stdio.h>
/*Programacion Orientada a Objetos - Estructuras (STRUCT)
La POO es una tecnica de programar.
Donde tratamos de definir la estructura y 
el comportamiento de un Objeto.

Un objeto puede ser cualquier cosa que exista en el 
plano real.
*/
struct Asignatura{
	char clave[20];
	char nombre[70];
	int creditos;
};
void MostrarAsignatura(struct Asignatura x){
	printf("\n%s - %s (%d)",x.clave,x.nombre,x.creditos);
}
int main(int argc, char *argv[]) {
	struct Asignatura asig[4];
	for(int i = 0; i <=4; i++){
		printf("\nCual es la clave:");		scanf("%s",&asig[i].clave);
		printf("\nCual es el nombre:");		scanf("%s",&asig[i].nombre);
		printf("\nCuantos creditos posee:");	scanf("%d",&asig[i].creditos);
	}
	for(int i = 0; i<=4; i++){
		MostrarAsignatura(asig[i]);
	}
	return 0;
}

