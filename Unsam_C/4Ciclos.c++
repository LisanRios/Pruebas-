#include <stdio.h>
#include <math.h>
#include <time.h>
#define pi 3.1416
int main(){
/*7
    Utilizando el programa de la práctica de switch, que convierte Kg a otra unidad de medida, construye un programa que permita ingresar medidas hasta que decida no ingresar más.
 
        float decimal,peso,opcion,res,contador;
        decimal=1;
        contador=0;
        printf("Introduzca peso en kilogramos:");
        scanf("%f",&peso);
        printf("Seleccione opción:\n");
        printf("1 - Hectogramos\n");
        printf("2 - Decagramos\n");
        printf("3 - Gramos\n");
        printf("4 - Decigramos\n");
        printf("5 - Centigramos\n");
        printf("6 - Miligramos\n");
        scanf("%f",&opcion);
        while (contador<opcion){
            decimal=decimal*10;
            res=peso*decimal;
            printf("Son:%f\n", res);
            contador++;
        } 
        */ 


       /* Cadena de caracteres */

/* 7
    Escribe un programa en el que se pida al usuario que ingrese más de una oracion,
    las oraciones separadas por un '.'(maximo 200 caracteres) y que verifique que la letra inicial de
    la primera palabra de cada oracion este en mayuscola. De no ser asi imprimir un mensaje por pantalla y cambiar la letra a mayuscula.
*/
        char texto[200];
        int indice_cadena = 0;
        printf("Escriba un texto: \n");
        gets(texto);
     //   void funcion(); 
        while (texto[indice_cadena] != '\0')
        {
            if (texto[indice_cadena]>=97 && texto[indice_cadena]<=122)
                {   
                    texto[indice_cadena]= indice_cadena - 32;
                    printf("Respuesta: %c\n", texto[200]);
                    indice_cadena++;
                } else
                {
                    printf("Respuesta: %c\n", texto[200]);
                    indice_cadena++;

                }
        }    
    return 0;


}
