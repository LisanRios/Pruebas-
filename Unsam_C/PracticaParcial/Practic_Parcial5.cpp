/*
    Crear a un patoba que tenga las siguientes funciones:
    1- Cuando alguien quiera pasar al boliche: preguntar la hora.
        (si son antes de las 11:00PM y despues de las 4:00AM: no te tine que dejar pasar.)
    2- Preguntar la edad.
        (si son menores no pasan.)
    3- Preguntar: cuantos son para entrar al boliche?
        (si son mas de 4 hay descuento del 25%)
    4- Vender entadas:
        (Precio 1"normal":7000 / precio 2"VIP":15000 / precio 3"EL SEÑOR DE LA NOCHE":35000)
        (SI PAGAS DE MAS TE TIENE QUE DAR VUELTO!!!)
*/
#include<stdio.h>
int main() {
    float costo = 0, descuento = 0, pago=0, vuelto=0;
    int edad=0, hora=0, entrada=0, gente=0;
    printf("Cuantos años tenes?\n");
    scanf("%d",&edad);
    if (edad >= 18) {
        printf("Que hora es (Ej: 11)?\n");
        scanf("%d",&hora);        
        switch (hora) {
        case 11:
        case 12:
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Que tipo de entrada queres? (Seleccione la que quieras)\n");
            printf("(1)Normal:7000 / (2)VIP:15000 / (3)EL SEÑOR DE LA NOCHE:35000\n");
            scanf("%d",&entrada);
            if (entrada == 1) {
                costo = costo + 7000;
            } else if (entrada == 2) {
                    costo = costo + 15000;
                } else {
                    costo = costo + 35000;
                }    
            
            printf("Cuantos son para entrar al boliche? (si son mas de 4 hay descuento del 25%)\n");
            scanf("%d",&gente);
            if (gente >= 4) {
                descuento = costo * 0.25;
                costo = costo - descuento;
            }
            printf("El precio es: %.2f\n", costo);
            scanf("%f",&pago);
            vuelto = pago - costo;
            printf("Bienvenido al establecimiento bailable: \n");
            printf("Tu vuelto es de: %.2f\n", vuelto);
            break;
        default : 
            printf("Ta cerrado nene\n");
            break;
        }  
    } else {
        printf("Anda a dormir mejor\n");

    }
    
    return 0;
}
