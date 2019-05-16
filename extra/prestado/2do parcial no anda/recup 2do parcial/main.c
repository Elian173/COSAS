#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "funciones.h"


int main()
{


    ArrayList * lista= al_newArrayList();

    FILE * pFile;

    pFile=fopen("empleados.csv", "r");
    int i;

    printf("LISTA COMPLETA");
    if(parserEmployee(pFile, lista)==0)
    {

        for(i=0; i<al_len(lista); i++)

        {

            Employee * e=al_get(lista, i);
            employeePrint(e);

        }

    }


    printf("LISTA FILTRADA");

    ArrayList * filteredList=al_filter(lista, funcionQueFiltra);

    for(i=0; i<al_len(filteredList); i++)

    {
        Employee * e=al_get(filteredList, i);
        employeePrint(e);

    }


    newEmployeeList(filteredList);
    printf("Archivo guardado correctamente");

    return 0;
}


