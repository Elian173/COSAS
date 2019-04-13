#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "ctype.h"
#define ELEMENTOS 5


int main()
{
int i,j;

char nombre[ELEMENTOS][50] = {"Pedro","Carlos","Juan","Ernesto","Mario"};
char apellido[ELEMENTOS][50]= {"Gomez","Zibolli","Paz","Perez","Lopez"};
char auxiliar[50];


/**paso todos a minuscula**/

for(i=0;i< ELEMENTOS;i++){
strlwr(nombre[i]);
strlwr(apellido[i]);
};


/**Ordeno alfabeticamente con el strcmp , por apellido**/
/**Se mueven el nombre y apellido al mismo tiempo , a los mismos indices, porque no los podemos mezclar*/
for(i=0;i< ELEMENTOS-1;i++)
{
for(j=i+1;j<ELEMENTOS;j++)
{

if(strcmp(apellido[i],apellido[j])>0)
{

strcpy(auxiliar,apellido[i]);
strcpy(apellido[i],apellido[j]);
strcpy(apellido[j], auxiliar);


strcpy(auxiliar,nombre[i]);
strcpy(nombre[i],nombre[j]);
strcpy(nombre[j], auxiliar);
}
}
}


/**Muestro los nombres ordenados (antes paso la primer letra a mayuscula)**/

printf("\n\nLista ordenada por apellido");

for(i=0;i<ELEMENTOS;i++)
{
nombre[i][0] = toupper(nombre[i][0]);
apellido[i][0] = toupper(apellido[i][0]);

printf("\nApellido: %s - Nombre: %s",apellido[i],nombre[i]);
}
return 0;
};
