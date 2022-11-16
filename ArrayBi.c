#include <stdio.h>
int main()
{
    const int Personas = 4,a_day = 0,a_month=1,a_year=2,a_yearsold=3;
    int persona,Valores[10][4];
    int day,month,year;
    printf("Persona #%d ¿Fecha Actual? [DD-MM-YYYY]: ");
    scanf("%d-%d-%d",&day,&month,&year);
    for(persona=0; persona<Personas; persona++)
    {
        printf("Persona #%d ¿Fecha de Nacimiento? [DD-MM-YYYY]: ",persona+1);

        scanf("%d-%d-%d",
        &Valores[persona][a_day],
        &Valores[persona][a_month],
        &Valores[persona][a_year]);

        Valores[persona][a_yearsold] = year-Valores[persona][a_year];
        if(!(
            Valores[persona][a_month] < month || 
            (
                Valores[persona][a_month]== month && 
                Valores[persona][a_day]<=day))){
                    Valores[persona][a_yearsold]--;
                } 
    }
    for(persona=0; persona<Personas; persona++)
    {
        printf("Persona #%d su edad es: %d",persona+1,Valores[persona][a_yearsold]);
    }
}