#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ELEMENTOS 5


int main()
{
int i,j;

/**Le doy valores yo a los array para hacer mas rapido*/

char nombre[ELEMENTOS][50] = {"aaa","e","ddd","cc","bbbbbb"};
char apellido[ELEMENTOS][50]= {"fff","HHH","ggg","III","JJJ"};
char auxiliar[50];

//paso todo a minuscula
strlwr(nombre);
strlwr(apellido);

//Metodo de burbujeo comparando letra por letra

for(i=0; i<ELEMENTOS-1; i++)
{
for(j=i+1; j<ELEMENTOS; j++)
{

if(strcmp(nombre[i],nombre[j])>0)
{
strcpy(auxiliar, nombre[i]);
strcpy(nombre[i], nombre[j]);
strcpy(nombre[j], auxiliar);
}

}
}

printf("\n\nLista ordenada por nombres");

for(i=0;i<ELEMENTOS;i++)
{
printf("\nNombre: %s - Apellido: %s",nombre[i],apellido[i]);
}


return 0;
}

