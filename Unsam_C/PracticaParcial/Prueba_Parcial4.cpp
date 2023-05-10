/*
cajero automatico debe poder
1 depositar
2 extraer
3 cambiar contraceña ya esta establecida, pedir la que ya tiene y validarla y cambiarla (solo numeros)
4 la secion ya esta echa tiene que tener opcion de salida
*/
#include<stdio.h>
int main(){
float extraer=0;
float caja=0, caja2=0;
int contra=0,contra1=0, nueva=0;//en base y vieja
int menu=0;
printf("introduzca la contracena");
scanf("%d",&contra);
fflush(stdin);

printf("Menu\n 1 depositar\n2 extraer\n3 cambiar contraceña\n 4 SALIR\n");
scanf("%d",&menu);
fflush(stdin);

while(menu!=4){
    switch(menu){
    case 1:
    printf("Cuanto quiere depositar?\n");
    scanf("%f",&caja2);//guardo plata
    fflush(stdin);
        caja+=caja2;// aqui se guarda la caja
        printf("desea salir? precione 4 y precione 5 para volver al menu\n");
        scanf("%d",&menu);//guardo plata
        fflush(stdin);

    break;
    case 2:
    printf("cuanto tiene usted en la cuenta");
    scanf("%f",&caja);//guardo plata
    fflush(stdin);

    printf("Cuanto quiere extraer?\n");
    scanf("%f",&extraer);//guardo plata
    fflush(stdin);


    if(extraer>caja){
        printf("No fondos bro\n");
    }else{
        caja=caja-extraer;
    }
        printf("%.2f\n",caja);//
        printf("desea salir? precione 4 y 5 para volver al menu\n");
        scanf("%d",&menu);//guardo plata
        fflush(stdin);

    break;
    case 3:
        printf("confimer la contraceña\n");
        scanf("%i",&contra1);//verificacion
        fflush(stdin);
        if(contra==contra1){//verificacion
            printf("introduzca la nueva contraceña\n");
            scanf("%i",&nueva);//guardo plata
            fflush(stdin);
            while(contra==nueva){
                    printf("Su contraceña es la misma\n");
                    printf("introduzca la nueva contraceña:");
                    scanf("%d",&nueva);
                    fflush(stdin);
                    }
                    contra=nueva;
                    printf("\nSu nueva contraceña mi estimado y galante caballero de alta clase: %d\n",contra);
            }else {//si son diferentes
                printf("la pusiste mal gil\n");
                fflush(stdin);
            }
                printf("desea salir? precione 4 y 5 para volver al menu\n");
                scanf("%d",&menu);//guardo plata
                fflush(stdin);
                break;

    case 4:
        menu=4;
        break;
    default: printf("Menu\n 1 depositar\n2 extraer\n3 cambiar contraceña\n 4 SALIR\n");
        scanf("%d",&menu);
        fflush(stdin);
    }//fin swti
    }//fin while
}
//final del main
