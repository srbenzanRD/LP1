#include <stdio.h>
//www.github.com/srbenzanRD/LP1
int P = 3;
int N[5][10],c,e;     const int PP = 0, SP = 1, PR = 2, EF = 3, C = 4;
int Max(){
    int M = N[C][0];
    for(e=0; e<P;e++) if(M<N[C][e]) M = N[C][e];
    return M;
}
int Min(){
    int M = N[C][0];
    for(e=0; e<P;e++) if(M>N[C][e]) M = N[C][e];
    return M;
}
void main() {
    for(e=0; e<P;e++) for(c=0; c<4; c++) { switch(c) {
                case 0: { printf("\nEstudiante #%d PP: ",e+1); } break;
                case 1: { printf("\nEstudiante #%d SP: ",e+1);} break;
                case 2: { printf("\nEstudiante #%d PR: ",e+1);} break;
                case 3: { printf("\nEstudiante #%d EF: ",e+1);} break;
                case 4: {
                    N[C][e] = N[PP][e] + N[SP][e] + N[PR][e] + N[EF][e];
                } break;
           }
           if(c!=C) scanf("%d",N[c][e]);
        }
    printf("\nMas alta: %d",Max());
    printf("\nMas baja: %d",Min());
}