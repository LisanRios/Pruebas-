#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    char remera[20];
    int anho=0, estampada=0, seguir=1;
    float precio=0, descuento=0, precio_total=0;
    while (seguir == 1 && seguir == 1)
    {
        printf("Escriba el nombre de su remera\n"); 
        gets(remera); 
        printf("Escriba el precio de su remera\n"); 
        scanf("%f", &precio); 
        descuento = precio * 0.20;
        printf("Escriba el anho de la remera\n"); 
        scanf("%d", &anho);  
        printf("Esta estampada la remera?(1 para decir que si)\n"); 
        scanf("%d", &estampada); 
        if (estampada == 1)
        {
            precio = precio + descuento;

        } 
        printf("Datos de la remera: \n");  
        printf("Nombre: %s\n", remera);  
        printf("Precio: %f\n", precio); 
        printf("Anho: %d\n", anho); 
        if (estampada == 1)
        {
            printf("Estampada: Si\n"); 
        } else {
            printf("Estampada: No\n"); 
        }
        precio_total = precio + precio_total;
        printf("Desea seguir? (1 para decir que si)\n"); 
        scanf("%d", &seguir); 
    }
    printf("Precio Total: %f\n", precio_total);  

    return 0;
}