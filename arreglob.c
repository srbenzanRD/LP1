#include <stdio.h>
void main() {
    //Declarar mis variables
    int MAX,MIN,PP=0,SP=1,PR=2,EF=3,CF=4;
    int C[10][5],f,c;
    for(f=0;f<10;f++) {
        printf("\nEstudiante #%d : [PP,SP,PR,EF]: ",f+1);
        scanf("%d,%d,%d,%d",&C[f][PP],&C[f][SP],&C[f][PR],&C[f][EF]);
        C[f][CF] = C[f][PP]+C[f][SP]+C[f][PR]+C[f][EF];
        printf(" = [%d]: ",C[f][CF]);
        if(f==0) MAX = MIN = C[f][CF];
        if(MAX<C[f][CF]) MAX = C[f][CF];
        if(MIN>C[f][CF]) MIN = C[f][CF];
    } 
    printf("\nCalificacion maxima: %d \nCalificacion minima: %d",MAX,MIN);
    printf("CALIFICACIONES DETALLADAS:");
}