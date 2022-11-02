#include <stdio.h>
void main()
{
    int Edades[5],i,MA=0,ME=0;
    for (i = 0; i < 5; i++)
    {
        printf("\n¿Cual es tu edad?: ");
        scanf("%d",&Edades[i]);
    }
    for (i = 0; i < 5; i++)
        if(Edades[i]>17) MA++;
        else ME++;
    printf("MA: %d ME:%d",MA,ME);
}