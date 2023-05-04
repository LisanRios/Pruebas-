#include <stdio.h>
#include <math.h>
#include <time.h>
int main(){
    int anho=1, nota =0 ,lega =1, cont=0;
    float prom;
    char curso;

    for ( anho=1 ; anho<8 ; anho++ ) {
        printf("Promedio general de ANHO %d\n", anho);


        printf("introdusca curso A o B \n");
        fflush(stdin);
        scanf("%c", &curso);

        printf("introdusca el legajo del alumno \n");
        scanf("%d", &lega);

            while ( lega!=0 ) {
                printf("introdusca la nota (1 a 10)//0 para cerrar \n");
                scanf("%d", &nota);
                cont= cont+1;
                nota= nota + nota;
                lega= nota;
                prom = nota/cont;
            }

        printf("Resultado: \n");
        printf("Anho: %d\n", anho );
        printf("Curso: %c\n", curso );
        printf("Legajos: %d\n", cont );
        printf("Promedio: %f\n", prom );
        printf("-------------------------- \n");


    }

    return 0;
    }
