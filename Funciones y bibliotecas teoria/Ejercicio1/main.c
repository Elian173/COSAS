/** EJERCICIO 1
CONSIGNA :
Crear los archivos "saludos.h" y "saludos.c" y mover todas la funciones y declaraciones ahi.
El codigo tiene que funcionar IGUAL sin warnings ni errores/

*/
#include <stdio.h>
#include <stdlib.h>

void buenDia(void);

void buenasTardes(void);

void buenasNoches (void);

int pedirInt(void);




int main()
{

    printf("Que momento del dia es?\n"
           "1 - Si es de dia\n"
           "2 - Si es de tarde\n"
           "3- Si es de noche\n");


    switch(     pedirInt()   )
    {
    case 1:buenDia();
    break;
    case 2:buenasTardes();
    break;
    case 3:buenasNoches();
    break;
    default:printf("invalido");
    break;
    }

    return 0;
}



/////
void buenDia(void){
    printf("Buenos dias");
    };
/////
void buenasTardes(void){
    printf("Buenas tardes");
    };
//////
void buenasNoches(void){
    printf("Buenos noches");
    };
//////
int pedirInt(void){

int elNumeroIngresado;

printf("Ingrese un numero:\n");

scanf("%d",&elNumeroIngresado);

return elNumeroIngresado;
}
/////
