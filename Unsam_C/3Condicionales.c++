#include <stdio.h>
#include <math.h>
#include <time.h>
#define pi 3.1416
int main(){
/*1
    Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir en la pantalla si dicho número es Positivo, Negativo o 0 (cero).
  
        int num;
        printf("Ingrese un número entero\n");
        scanf("%d", &num);
        if ( num > 0 ){
            printf("El número ingresado es positivo\n");

        } else if ( num < 0 ){
            printf("El número ingresado es negativo\n");

        } else {
            printf("El número ingresado es cero\n");

        }
*/      
/*2
    Desarrolla un algoritmo que le permita leer dos valores (A y B) y que escriba cuál de los dos valores leídos es el mayor. Análisis: primero se deben leer los dos valores y almacenar cada uno de ellos en una variable. Para el caso del desarrollo se almacenará un valor en la variable A y el otro en la variable B. Para poder saber cuál de los dos valores es mayor simplemente se comparan las dos variables y se escribirá cuál de las dos es la mayor. Se supone que los dos valores leídos son diferentes.

        int a,b;
        printf("Ingrese los numeros que desea comparar\n");
        scanf("%d",&a);
        scanf("%d",&b);
        if (a > b) {
            printf("El numero mas grandre es a\n");
        } else {
            printf("El numero mas grandre es b\n");
        }
*/  
/*3
    Ingresa dos números enteros, la computadora indica si el mayor es divisible por el menor.
      
        int a,b,res;
        printf("Ingresa dos números enteros, la computadora indica si el mayor es divisible por el menor.\n");
        scanf("%d",&a);
        scanf("%d",&b);
        res=a%b;
        if (res == 0) {
            printf("Es divicible\n");
        } else {
            printf("No es divicible\n");
        }
*/
/*4
    Desarrolla un algoritmo que le permita leer 2 valores A y B e indicar si uno de los dos divide al otro exactamente. Análisis: Para dar solución al anterior ejercicio, primero se deben leer los dos valores y almacenar cada uno de ellos en una variable. Para el caso del desarrollo se almacenará un valor en la variable A y el otro en la variable B. Para saber si uno de los dos divide exactamente al otro se examina primero el caso en que B divida exactamente a A; se compara el residuo, si es cero se escribirá que divide exactamente a A de lo contrario se examina el caso en que A divida exactamente a B. Se compara nuevamente el residuo, si es cero se escribirá "A divide exactamente a B" sino "ninguno de los dos divide exactamente al otro". Se supone que los dos valores leídos son diferentes.

        int a,b,res1,res2;
        printf("Ingresa dos números enteros, la computadora indica si el mayor es divisible por el menor.\n");
        scanf("%d",&a);
        scanf("%d",&b);
        res1=a/b;
        res2=b/a;
        if (res1 == 0) {
            printf("a Es divicible\n");
        } else {
            printf("a No es divicible\n");
        }
        if (res2 == 0) {
            printf("b Es divicible\n");
        } else {
            printf("b No es divicible\n");
        }
*/        
/*5
    Construir un programa que convierta Kg a otra unidad de medida de masa, mostrar en pantalla un menú con las opciones posibles. Ejemplo de menú:
*/
        int opcion,peso,res;
        printf("Introduzca peso en kilogramos:");
        scanf("%d",&peso);
        printf("Seleccione opción:\n");
        printf("1 - Hectogramos\n");
        printf("2 - Decagramos\n");
        printf("3 - Gramos\n");
        printf("4 - Decigramos\n");
        printf("5 - Centigramos\n");
        printf("6 - Miligramos\n");
        scanf("%d",&opcion);
        switch (opcion)
        {
        case 1 :
            res = peso*10;
            printf("Son:%d\n", res); 
            break;
        case 2 :
            res = peso*100;
            printf("Son:%d\n", res);
            break;
        case 3 :
            res = peso*1000;
            printf("Son:%d\n", res);
            break;
        case 4 :
            res = peso*10000;
            printf("Son:%d\n", res);
            break;
        case 5 :
            res = peso*100000;
            printf("Son:%d\n", res);
            break;
        case 6 :
            res = peso*1000000;
            printf("Son:%d\n", res);
            break;
        
        default:
            printf("En kilogramas son:\n");
            printf("Son:%d\n", peso);
            break;
        }
    return 0;
}