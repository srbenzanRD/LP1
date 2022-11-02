#include <stdio.h>
void main() {
    int i,MAX,MIN;
    int NUMEROS[5] = {23,4,18,16,25};
    MAX = MIN = NUMEROS[0];
    for (i = 0; i < 5; i++){
        if(NUMEROS[i]>MAX) MAX = NUMEROS[i];
        if(NUMEROS[i]<MIN) MIN = NUMEROS[i];
    } 
    printf("MAX: %d MIN:%d",MAX,MIN);
}