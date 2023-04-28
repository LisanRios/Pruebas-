#include <stdio.h>
#include <math.h>
#include <time.h>
int main(){
    /*Del 1 al 11,  Son ejercicios logicos*/
/*12 
    Desarrolla un algoritmo que permita leer por teclado 2 valores y emitir por pantalla: la suma de los dos, la resta, producto, división, promedio y
    el doble producto del primero menos la mitad del segundo.
        float a , b = 0;
        float resulf;
        printf ("Ingrese el Primer digito\n"); 
        scanf ("%f", &a);
        fflush(stdin);
        printf ("Ingrese el Segundo digito\n");
        scanf ("%f", &b);
        fflush(stdin);
        resulf = a + b;
        printf ("Suma : %f\n", resulf);
        resulf = a - b;
        printf ("Resta : %f\n", resulf);
        resulf = a / b;
        printf ("Divicion : %f\n", resulf);
        resulf = a * b;
        printf ("Multiplicacion : %f\n", resulf);
    */
/*13 
    Encuentra el error en cada uno de los siguientes programas e indica de qué tipo es.

        #include <stdio.h>
        int main(){
        integer x;
        real y;
        scanf("%D", y);
        printf("%f",x);
        return 0;
        }
        (el error esta en el tipo de forma en la que se debuelven los datos al usuario)
        ----------------------------
        #include <stdio.h>
        int main(){
        int n,total;
        float promedio;
        n=0;
        promedio=total/n;
        printf("El promedio es: %f\n",promedio); return 0;
        (El error esta en el tipo de forma en la que se prosesan los datos, ya que se prosesan como int pero despues lo lee como float)
    */
/* 14
    Desarrolla un algoritmo que permita, dados ciertos centímetros como entrada de tipo flotante, emitir por pantalla su equivalencia en pies
    (enteros) y en pulgadas (flotante, con 1 decimal).

        float numero, respuesta2;
        int respuesta1;
        printf("Ingrese un numero.\n");
        scanf("%f", &numero);
        respuesta1=numero;
        respuesta2=numero;
        printf("Respuestas.\n");
        printf("Pies: %d\n", respuesta1);
        printf("Pulgadas: %f\n", respuesta2, floor(respuesta2));
        */
/* 15
    Construye un programa que pregunte los años que tienes y emita como respuesta el número de días (sólo en años).
 
        int anos, dias;
        printf("Ingrese un su edad.\n");
        scanf("%d", &anos);
        dias = (anos * 365);
        printf("Su edad en dias es: %d\n", dias);
        */

/* 16
    Construye un programa que dados el costo de 1 kg de determinado producto y la cantidad comprada, emita el valor del total a pagar.

        int peso, precio;
        printf("Intridusca cuantos kilos desea llevar: \n");
        scanf("%d", &peso);
        precio = peso * 300;
        printf("El precio final es de : %d\n", precio);
        */

/*17
    Construye un programa que permita ingresar los valores de 2 de los ángulos interiores de un triángulo, y se emita por pantalla el valor del restante.

        float angulo1, angulo2, resultado;
        printf("Intridusca el angulo 1: \n");
        scanf("%f", &angulo1);
        printf("Intridusca el angulo 2: \n");
        scanf("%f", &angulo2);        
        resultado = angulo1 - angulo2;
        printf("El resultado de la Resta de los angulos es : %.1f\n", resultado);
        */

/*18
    Construye un programa que permita ingresar las medidas de los lados de un rectángulo; el mismo debe emitir por pantalla su superficie y superímetro.
    
        float lado1, lado2, sup, pri;
        printf("Introdusca en el siguiente orden los angulos del rectangulo Largo, Ancho\n");
        scanf("%f", &lado1);
        scanf("%f", &lado2);
        sup = lado1 * lado2;
        pri = lado1 + lado1 + lado2 + lado2;
        printf("La superficie es :%.1f\n", sup);
        printf("El perimetro es :%.1f\n", pri);
        */   

/*19
    Construye un programa que permita ingresar la superficie de un cuadrado (en m2), el mismo debe emitir por pantalla su perímetro.      

        float alto, ancho, perimetro;
        printf("Introdusca en Alto del cuadroado\n");
        scanf("%f", &alto);
        printf("Introdusca en Ancho del cuadroado\n");
        scanf("%f", &ancho);
        perimetro = (alto*2) + (ancho*2);
        printf("El perimetro es :%.1f\n", perimetro);
        */

/*20
    Este programa utiliza la librería math.h y sus funciones incorporadas. Ejecuta, prueba y extrae conclusiones:

        printf( "sqrt(%.1f) = %.1f\n", 900.0, sqrt( 900.0 ) );
        printf( "sqrt(%.1f) = %.1f\n", 9.0, sqrt( 9.0 ) );
        printf( "exp(%.1f) = %f\n", 1.0, exp( 1.0 ) );
        printf( "exp(%.1f) = %f\n", 2.0, exp( 2.0 ) );
        printf( "log(%f) = %.1f\n", 2.718282, log( 2.718282 ) );
        printf( "log(%f) = %.1f\n", 7.389056, log( 7.389056 ) );
        printf( "log10(%.1f) = %.1f\n", 1.0, log10( 1.0 ) );
        printf( "log10(%.1f) = %.1f\n", 10.0, log10( 10.0 ) );
        printf( "log10(%.1f) = %.1f\n", 100.0, log10( 100.0 ) );
        printf( "fabs(%.1f) = %.1f\n", 13.5, fabs( 13.5 ) );
        printf( "fabs(%.1f) = %.1f\n", 0.0, fabs( 0.0 ) );
        printf( "fabs(%.1f) = %.1f\n", -13.5, fabs( -13.5 ) );
        printf( "ceil(%.1f) = %.1f\n", 9.2, ceil( 9.2 ) );
        printf( "ceil(%.1f) = %.1f\n", -9.8, ceil( -9.8 ) );
        printf( "floor(%.1f) = %.1f\n", 9.2, floor( 9.2 ) );
        printf( "floor(%.1f) = %.1f\n", -9.8, floor( -9.8 ) );
        printf( "pow(%.1f, %.1f) = %.1f\n", 2.0, 7.0, pow( 2.0,7.0 ) );
        printf( "pow(%.1f, %.1f) = %.1f\n", 9.0, 0.5, pow( 9.0,0.5 ) );
        printf( "fmod(%.3f/%.3f) = %.3f\n", 13.675, 2.333, fmod(13.675, 2.333 ) );
        printf( "sin(%.1f) = %.1f\n", 0.0, sin( 0.0 ) );
        printf( "cos(%.1f) = %.1f\n", 0.0, cos( 0.0 ) );
        printf( "tan(%.1f) = %.1f\n", 0.0, tan( 0.0 ) ); 
        system ("pause");
        */  

/*21
    Transcribe el siguiente programa y extrae conclusiones:
        #define CUAD(x) (x*x) 
        float a;
        printf("\nEscriba un número: ");
        scanf("%f",&a);
        printf("\nSu cuadrado es: %.2f\n",CUAD(a));
        getchar();
        (prsesa el numero al cuadrado ej: 5 =>> 25)
        */
       
/*22
    Construye un programa que permita ingresar 2 tiempos, expresados en horas, minutos y segundos, el mismo debe emitir por pantalla la suma
    de ambos(también en horas, minutos y segundos).
    
        float horario1,horario2,horayMinutos1,segundos1,horayMinutos2,segundos2,respuesta;
        printf("Introdusca el primer horario: hora.minutos)\n");
        scanf("%f",&horayMinutos1);     
        printf("Introdusca del primer horario los segundos)\n");
        scanf("%f",&segundos1);
        horario1 = horayMinutos1 +segundos1;
        printf("Introdusca el segundo horario: hora.minutos)\n");
        scanf("%f",&horayMinutos2);     
        printf("Introdusca del segundo horario los segundos)\n");
        scanf("%f",&segundos2);
        horario1 = horayMinutos2 + segundos2;
        respuesta = horario1+horario2;
        printf("La respuesta es : %f\n",ceil(respuesta));
    return 0;
    
    esta todo hecho!!!!!
    
    */  
}
