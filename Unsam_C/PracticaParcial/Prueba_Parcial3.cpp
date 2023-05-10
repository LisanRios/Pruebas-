#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main (){
char cadena[1000000], morse[1000000];
int indice=0, m=0;
printf("Ingrese una cadena: ");
gets(cadena);
while(cadena[indice]!='\0'){
    switch (cadena[indice]){
    case ' ':
        morse[m]=cadena[indice];
        morse[m]='/';
        m++;
    break;
    case 'A':
    case 'a':
        morse[m]=cadena[indice];
        morse[m]='.';
        m++;
        morse[m]='-';
        m++;
    break;
    case 'B':
    case 'b':
        morse[m]=cadena[indice];
        morse[m]='-';
        m++;
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
    break;
    case 'C':
    case 'c':
        morse[m]=cadena[indice];
        morse[m]='-';
        m++;
        morse[m]='.';
        m++;
        morse[m]='-';
        m++;
        morse[m]='.';
        m++;
    break;
    case 'D':
    case 'd':
        morse[m]=cadena[indice];
        morse[m]='-';
        m++;
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
    break;
    case 'E':
    case 'e':
        morse[m]=cadena[indice];
        morse[m]='.';
        m++;
    break;
    case 'F':
    case 'f':
        morse[m]=cadena[indice];
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
        morse[m]='-';
        m++;
        morse[m]='.';
        m++;
    break;
    case 'G':
    case 'g':
        morse[m]=cadena[indice];
        morse[m]='-';
        m++;
        morse[m]='-';
        m++;
        morse[m]='.';
        m++;
    break;
    case 'H':
    case 'h':
        morse[m]=cadena[indice];
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
    break;
    case 'I':
    case 'i':
        morse[m]=cadena[indice];
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
    break;
    case 'J':
    case 'j':
        morse[m]=cadena[indice];
        morse[m]='.';
        m++;
        morse[m]='-';
        m++;
        morse[m]='-';
        m++;
        morse[m]='-';
        m++;
    break;
    case 'K':
    case 'k':
        morse[m]=cadena[indice];
        morse[m]='-';
        m++;
        morse[m]='.';
        m++;
        morse[m]='-';
        m++;
    break;
    case 'L':
    case 'l':
        morse[m]=cadena[indice];
        morse[m]='.';
        m++;
        morse[m]='-';
        m++;
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
    break;
    case 'M':
    case 'm':
        morse[m]=cadena[indice];
        morse[m]='-';
        m++;
        morse[m]='-';
        m++;
    break;
    case 'N':
    case 'n':
        morse[m]=cadena[indice];
        morse[m]='-';
        m++;
        morse[m]='.';
        m++;
    break;
    case 'O':
    case 'o':
        morse[m]=cadena[indice];
        morse[m]='-';
        m++;
        morse[m]='-';
        m++;
        morse[m]='-';
        m++;
    break;
    case 'P':
    case 'p':
        morse[m]=cadena[indice];
        morse[m]='.';
        m++;
        morse[m]='-';
        m++;
        morse[m]='-';
        m++;
        morse[m]='.';
        m++;
    break;
    case 'Q':
    case 'q':
        morse[m]=cadena[indice];
        morse[m]='-';
        m++;
        morse[m]='-';
        m++;
        morse[m]='.';
        m++;
        morse[m]='-';
        m++;
    break;
    case 'R':
    case 'r':
        morse[m]=cadena[indice];
        morse[m]='.';
        m++;
        morse[m]='-';
        m++;
        morse[m]='.';
        m++;
    break;
    case 'S':
    case 's':
        morse[m]=cadena[indice];
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
    break;
    case 'T':
    case 't':
        morse[m]=cadena[indice];
        morse[m]='-';
        m++;
    break;
    case 'U':
    case 'u':
        morse[m]=cadena[indice];
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
        morse[m]='-';
        m++;
    break;
    case 'V':
    case 'v':
        morse[m]=cadena[indice];
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
        morse[m]='-';
        m++;
    break;
    case 'W':
    case 'w':
        morse[m]=cadena[indice];
        morse[m]='.';
        m++;
        morse[m]='-';
        m++;
        morse[m]='-';
        m++;
    break;
    case 'X':
    case 'x':
        morse[m]=cadena[indice];
        morse[m]='-';
        m++;
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
        morse[m]='-';
        m++;
    break;
    case 'Y':
    case 'y':
        morse[m]=cadena[indice];
        morse[m]='-';
        m++;
        morse[m]='.';
        m++;
        morse[m]='-';
        m++;
        morse[m]='-';
        m++;
    break;
    case 'Z':
    case 'z':
        morse[m]=cadena[indice];
        morse[m]='-';
        m++;
        morse[m]='-';
        m++;
        morse[m]='.';
        m++;
        morse[m]='.';
        m++;
    break;
    }
    indice++;
}
printf("%s", morse);
}