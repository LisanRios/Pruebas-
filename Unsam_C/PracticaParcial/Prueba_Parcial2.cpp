#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    float sueldo=0, horas=0;
    char nombre[100], diaSemeana[10], feriado[2], turno[20];
    printf("Introdusca el nombre del trabajador: \n");
    gets(nombre);
    printf("Introdusca el horario a trabajar: \n");
    gets(turno);
    printf("Introdusca el dia de la semana: \n");
    gets(diaSemeana);
    printf("Es feriado? : \n");
    gets(feriado);
    printf("Introdusca la cantidad de horas: \n");
    scanf("%f", &horas);

    switch (turno[0])
    {
    case 'd':

        sueldo = horas*90;
        if (feriado[0] != 'no' or feriado[0] != 'NO')
        {
            sueldo = sueldo + (sueldo * 0.1);
        } else
        {
            sueldo = horas * 90;
        }
        break;

    case 'n':

        sueldo = horas*90;
        if (feriado[0] != 'no' or feriado[0] != 'NO')
        {
            sueldo = sueldo + (sueldo * 0.15);
        } else
        {
            sueldo = horas * 125;
        }
        break;
    }

    printf("Nombre del trabajador: %s\n", nombre);
    printf("Horario: %s\n", turno);
    printf("Dia: %s\n", diaSemeana);
    printf("Sueldo Total: %f\n", sueldo);
    return 0;
}