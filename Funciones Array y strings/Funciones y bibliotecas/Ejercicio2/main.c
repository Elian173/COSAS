/**EJERCICIO2
Consigna:
Crear una funcion que permita al usuario ingresar 2 numeros, y que los compare.
si los numeros son iguales que devuelva 0,
si el primero es mas grande , 1
si el primero es mas chico , 2;
(no hace falta guardar los valores de los numeros)
*/


#include <stdio.h>
#include <stdlib.h>
#include "ejercicio2.h"

int main()
{

    switch(){

    case 0:printf("Son iguales");break;
    case 1:printf("El primero es mas grande");break;
    case 2:printf("El primero es mas chico");break;
    default:printf("error");
    };

    return 0;
}
