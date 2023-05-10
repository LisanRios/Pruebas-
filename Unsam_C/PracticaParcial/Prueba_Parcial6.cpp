/*
    Para cada empleado, el programa debe solicitar el nombre, el sexo, las horas de trabajo y el sueldo por hora. La primera parte de 
    la impresión debe dar el nombre de cada empleado, las horas de trabajo, el sueldo por hora y cuánto cobrará. La segunda parte deberá
    indicar el sueldo promedio de los hombres y el sueldo promedio de las mujeres.
*/
#include<stdio.h>
int main() {
    char nombre[25], sexo[10];
    int contadorH=0, contadorM=0, indice=0, i;
    float horas=0, sueldo=0, pagoH=0, pagoM=0, sueldoH=0, sueldoM=0;

    printf("Cuentas personas son?: \n");
    scanf("%d",&indice);

    for (i = 0; i < indice; i++)
    {
        printf("Nombre: \n");
        gets(nombre);
        printf("Sexo: \n");
        gets(sexo);
        printf("Sueldo por hora: \n");
        scanf("%f",&sueldo);
        printf("Horas: \n");
        scanf("%f",&horas);

        if (sexo[0] == 'h' or sexo[0] == 'H')
        {
            pagoH = horas * sueldo;
            printf("Pago a realizar: %f\n", pagoH);
            contadorH += 1;
        } else if (sexo[0] == 'M' or sexo[0] == 'm'){
            pagoM = horas * sueldo;
            printf("Pago a realizar: %f\n", pagoM);
            contadorM += 1;
        } 

    }    
    sueldoH = pagoH + contadorH;
    sueldoM = pagoM + contadorM;
    printf("Sueldo promedio de Hombres: %.2f\n", sueldoH);
    printf("Sueldo promedio de Hombres: %.2f\n", sueldoM);

    return 0;
}

