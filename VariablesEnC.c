#include <stdio.h>
int i,P=7,CA[7] = {0,0,0,0,0};
int SALIR = 0;
void CapturarDatos(){
   for ( i = 0; i < P; i++)
   {
        printf("\nCalif. #%d: ",i+1);
        scanf("%d",&CA[i]);
   }
}
void MostrarDatos(){
   for ( i = 0; i < P; i++)
   {
        printf("\nCalif. #%d es: %d",i+1,CA[i]);
   }
}
float Promedio(){
    int S=0;
    for ( i = 0; i < P; i++) 
    S+= CA[i];
    return S/P;
}
void main(){
    do
    {
        int OP;
        printf("\nOPCIONES:");
        printf("\n[1] Capturar las (%d) calificaciones.",P);
        printf("\n[2] Mostrar las (%d) calificaciones.",P);
        printf("\n[3] Promedio de las (%d) calificaciones.",P);
        printf("\n[%d] Salir",SALIR);
        printf("\nResponder: ");
        scanf("%d",&OP);
        if(OP == SALIR) break;
        switch (OP)
        {
            case 1:
                CapturarDatos();
                break;
            case 2:
                MostrarDatos();
                break;
            case 3:
                printf("El promedio es: %.2f",Promedio());
                break;
            
            default:
                printf("Opción invalida!");
                break;
        }
    }while(1);
    printf("\nFin de la ejecucion");
}