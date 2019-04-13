#include <stdio.h>
#include <stdlib.h>
#include "string.h"


int main()
{

system("color 4F");

  char nombre[64];
  char apellido[64];
  int cantidad;



    // pido nombre
    printf("Nombre: ");

    fgets(nombre,sizeof(nombre)-2,stdin);

    cantidad = strlen(nombre);

    nombre[cantidad-1] = '\0';

    // pido el apellido
    printf("Apellido: ");

    fgets(apellido,sizeof(apellido)-2,stdin);

    cantidad = strlen(apellido);

    apellido[cantidad-1] = '\0';

// mayusculas y minusculas

    strlwr(nombre);
    strlwr(apellido);

    nombre [0] = toupper(nombre[0]);

    apellido [0] = toupper(apellido[0]);

//
    printf("printf:\n\n");
    printf("%s %s \n\n", nombre, apellido);

// concatenados -
// hacer un strcopy o forzar un /0 al 1er elemento


    char nombreyApellido[160];

    strcpy(nombreyApellido,nombre);

    strcat(nombreyApellido," ");

    strcat(nombreyApellido,apellido);

    printf ("Concatenado:\n\n");

    printf("%s",nombreyApellido);

    printf("\n\n");

    return 0;
}
