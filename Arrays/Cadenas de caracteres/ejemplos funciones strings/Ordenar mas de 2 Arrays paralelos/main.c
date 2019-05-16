#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
int main(void){

/**ACA LE DOY VALORES A LOS ARRAY YO ASI ES MAS FACIL CAMBIARLOS Y VER SI ANDA
, PERO ABAJO COMENTADO ESTA PARA PEDIR AL USUARIO**/

int legajo[MAX]={1,5,3,4,2}, legajoAux , i, j;
float salario[MAX]={100,400,300,400,200} , salarioAux;
char nombre[MAX][31]={"Aa","bb","Ccc","ddd","ee"}, nombreAux[31];


/*
for(i=0; i<MAX; i++)
{
system("cls");
printf("Ingrese el legajo del empleado: ");
scanf("%d", &legajo[i]);
printf("Ingrese el nombre del empleado: ");
fflush(stdin);
gets(nombre[i]);
printf("Ingrese el salario del empleado: ");
scanf("%f", &salario[i]);
}*/

/**EN ESTE CASO VOY A ORDENAR POR SALARIO DE MAYOR A MENOR.
(ADEMAS DE MOVER LOS SALARIOS, TENGO QUE MOVER
LOS LEGAJOS Y LOS NOMBRES DE LAS PERSONAS A QUIEN
PERTENECEN LOS SALARIOS. SINO ESTARIA MAL)*/

/**ESTOS FOR RECORREN LOS ARRAY**/
/**i= El indice 0 del array , el primer numero ,
j=indice 1 del array , osea el segundo numero
Aux = el lugar intermedio donde guardo valores para cambiarlos de lugar**/

for(i=0; i<MAX-1; i++)
{
for(j=i+1; j<MAX; j++)
{

if(salario[i] < salario[j])
{
strcpy(nombreAux, nombre[i]);
strcpy(nombre[i], nombre[j]);
strcpy(nombre[j], nombreAux);

legajoAux = legajo[i];
legajo[i] = legajo[j];
legajo[j] = legajoAux;

salarioAux = salario[i];
salario[i] = salario[j];
salario[j] = salarioAux;
}

/**SI HAY 2 PERSONAS CON EL MISMO SALARIO ,
ORDENO EN BASE A SU NOMBRE (ALFABETICAMENTE) CON UN STRCMP .
YA NO MUEVO EL SALARIO DE LUGAR (PARTE COMENTADA) PORQUE SE QUE TIENEN EL MISMO Y NO ES NECESARIO **/

if(salario[i] == salario[j]){

if(strcmp(nombre[i],nombre[j])>0){

strcpy(nombreAux, nombre[i]);
strcpy(nombre[i], nombre[j]);
strcpy(nombre[j], nombreAux);

legajoAux = legajo[i];
legajo[i] = legajo[j];
legajo[j] = legajoAux;

/*salarioAux = salario[i];
salario[i] = salario[j];
salario[j] = salarioAux;*/
}
}
}
}

system("cls");

printf("\nLegajo\tNombre\t\t\tSalario ");

for(i=0; i<MAX; i++)

{
printf("\n%d\t%s\t\t\t%.2f", legajo[i], nombre[i], salario[i]);
}

return 0;
}

