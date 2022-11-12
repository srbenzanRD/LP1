#include <stdio.h>
void main() {
    //Declarar mis variables
    int MAX,MIN;
    int e,E=2,PP,SP,PR,EF,NF[2];
    for(e=0;e<E;e++) {
        printf("\nEstudiante #%d : [PP,SP,PR,EF]: ",e+1);
        scanf("%d,%d,%d,%d",&PP,&SP,&PR,&EF);
        NF[e] = PP+SP+PR+EF;
        printf(" = [%d]: ",NF[e]);
        if(e==0) MAX = MIN = NF[0];
        if(MAX<NF[e]) MAX = NF[e];
        if(MIN>NF[e]) MIN = NF[e];
    } 
    printf("\nCalificacion maxima: %d \nCalificacion minima: %d",MAX,MIN);
}