#include <stdio.h>
int P = 5;
double Fondos[5] = {0, 0, 0, 0, 0};
void Depositar(int i, double Fondo)
{
    i--;
    if (i < 0 || i >= P)
    {
        printf("Esta persona no es valida!");
        return;
    }
    Fondos[i] += Fondo;
    printf("\nPersona #%d : deposito de %.2f Balance: %.2f", i + 1,Fondo, Fondos[i]);
}
void Retirar(int i, double Fondo)
{
    i--;
    if (i < 0 || i >= P)
    {
        printf("Esta persona no es valida!");
        return;
    }
    if (Fondos[i] < Fondo)
    {
        printf("No hay balance suficiente!");
        return;
    }
    Fondos[i] -= Fondo;
    printf("\nPersona #%d retiro de %.2f: Balance: %.2f", i + 1,Fondo, Fondos[i]);
}

void main()
{
    int i, operacion, s = 0;
    double monto;

    do
    {
        printf("Hola! esto es un algoritmo para administrar fondos financieros");
        do
        {
            printf("\n¿Cual es tu identificador? [1-5]: ");
            scanf("%d", &i);
        } while (i < 1 || i >= 6);

        do
        {
            printf("\n¿Que operacion deseas realizar? \n1. Deposito.\n2. Retiro.\nOp:");
            scanf("%d", &operacion);
        } while (operacion < 0 || operacion > 3);
        switch (operacion)
        {
        case 1:
        {
            do
            {
                printf("\n¿Cuanto deseas depositar? :");
                scanf("%f", &monto);//500
                printf("%f",monto);
            } while (monto <= 0);
            Depositar(i, monto);
        }
        break;
        case 2:
        {
            do
            {
                printf("\n¿Cuanto deseas retirar? :");
                scanf("%f", &monto);
            } while (monto <= 0);
            Retirar(i, monto);
        }
        break;
        }
        printf("\n¿Deseas terminar? \n1. Si\n0. No \nOp:");
        scanf("%f", &monto);
    } while (s != 1);
}