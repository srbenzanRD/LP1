#include <stdio.h>
//www.github.com/srbenzanRD/LP1
int P = 2;
int N[10][5],c,e;     const int PP = 0, SP = 1, PR = 2, EF = 3, C = 4;
int Max(){
    int M = N[0][C];
    for(e=0; e<P;e++) if(M<N[e][C]) M = N[e][C];
    return M;
}
int Min(){
    int M = N[0][C];
    for(e=0; e<P;e++) if(M>N[e][C]) M = N[e][C];
    return M;
}
void main() {
    for(e=0; e<P;e++) for(c=0; c<4; c++) { switch(c) {
                case 0: { printf("\nEstudiante #%d PP: ",e+1); } break;
                case 1: { printf("\nEstudiante #%d SP: ",e+1);} break;
                case 2: { printf("\nEstudiante #%d PR: ",e+1);} break;
                case 3: { printf("\nEstudiante #%d EF: ",e+1);} break;
                case 4: {
                    N[e][C] = N[e][PP] + N[e][SP] + N[e][PR] + N[e][EF];
                } break;
           }
           if(c!=C) scanf("%d",N[e][c]);
        }
    printf("\nMas alta: %d",Max());
    printf("\nMas baja: %d",Min());
}