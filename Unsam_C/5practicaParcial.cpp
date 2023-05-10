#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/*
int main() {
    float claseX = 0, claseY = 0, claseZ = 0, totalX=0, totalY=0,totalZ=0;
    int grupo, contX = 0, contY = 0, contZ = 0, personas=0 ,  i = 0;
    char clase = 0;

    printf("Ingrese la cantidad de grupos\n");
    scanf("%d", &grupo);

    hola = grupo;

    for (int i = 1; i <= grupo; i++) {

        printf("Ingrese el tipo de clase: X para radio, Y para televisión, Z para redes sociales\n");
        scanf(" %c", &clase);

        while (clase != 'F' && clase != 'f') {
            switch (clase) {
            case 'x':
            case 'X':
                printf("Ingrese el importe\n");
                scanf("%f", &claseX);
                claseX = claseX + claseX;
                contX = contX + 1;
                break;

            case 'y':
            case 'Y':
                printf("Ingrese el importe\n");
                scanf("%f", &claseY);
                claseY = claseY + claseY;
                contY = contY + 1;
                break;

            case 'z':
            case 'Z':
                printf("Ingrese el importe\n");
                scanf("%f", &claseZ);
                claseZ = claseZ + claseZ;
                contZ = contZ + 1;
                break;
            }

            printf("Ingrese el tipo de clase: X para radio, Y para televisión, Z para redes sociales (o F para finalizar)\n");
            scanf(" %c", &clase);
       
            printf("Grupo: %d\n", grupo);
            printf("Clase X (radio): %f - Clientes: %d\n", claseX, contX);
            printf("Clase Y (televisión): %f - Clientes: %d\n", claseY, contY);
            printf("Clase Z (redes sociales): %f - Clientes: %d\n", claseZ, contZ);

            totalX = totalX + contX;
            totalY = totalY + contY;
            totalZ = totalZ + contZ;

            personas = contY + contX + contZ;

        }

            printf("-------------------");
            printf("total X Clientes: %d\n", totalX);
            printf("total Y Clientes: %d\n", totalY);
            printf("total Z Clientes: %d\n", totalZ);    
    }
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int numero_generado, numero_usuario, flag=0;
    srand(time(NULL));
    numero_generado = rand() % 100 + 1;

    printf("Escriba un numero del 1 al 100: \n");
    scanf("%d", &numero_usuario);

    for (int i = 0; i < 2; i++)
    {
        switch (numero_usuario) 
        {
        case 'numero_generado':
            printf("Ganaste!!!! \n");
            flag = 1;
        break;

        default :
            if (numero_usuario > numero_generado)
            {
                printf(" Te equibocaste, el numero oculto es Menor al tuyo\n");
                printf("Escriba un numero del 1 al 100:\n");
                scanf("%d", &numero_usuario);

            } else
            {
                printf(" Te equibocaste, el numero oculto es Mayor al tuyo\n");
                printf("Escriba un numero del 1 al 100:\n");
                scanf("%d", &numero_usuario);

            }
        break;
        }
    } 
    if (flag != 1)
    {
        printf("Perdiste el numero era: %d\n", numero_generado);
    } else
    {
        printf("GANASTE el numero era: %d\n", numero_generado);

    }
    
    
    


    return 0;
}

