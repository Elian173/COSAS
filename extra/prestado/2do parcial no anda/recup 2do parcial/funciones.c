#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "funciones.h"

Employee* employee_new(int id, char* nombre, int edad, char* profesion)
{
    Employee* returnAux=NULL;

    Employee* pEmployee=malloc(sizeof(Employee));

    if(pEmployee!=NULL)
    {

        pEmployee->id=id;
        strcpy(pEmployee->nombre, nombre);
        pEmployee->edad=edad;
        strcpy(pEmployee->profesion, profesion);

        returnAux=pEmployee;


    }


    return returnAux;


}

void employeePrint(void* pEmployee)
{
    Employee * employee=(Employee*)pEmployee;

    printf("ID: %d, NOMBRE: %s, EDAD: %d, PROFESION: %s\n",employee_getId(employee), employee_getName(employee),employee_getAge(employee), employee_getProf(employee));

}


int funcionQueFiltra(void* item)
{
    int retorno=0;
    Employee* auxEmployee=(Employee*)item;

    if(auxEmployee->edad >30 && strcmpi(auxEmployee->profesion,"Programador")==0)

    {
        retorno=1;

    }


    return retorno;


}





int parserEmployee(FILE *pFile, ArrayList * pArraylistEmployee)
{
    Employee* pEmployee;

    char id[50], nombre[50], edad[50], profesion[50];

    if(pFile!=NULL)

    {

        while(!feof(pFile)){
        fscanf(pFile,"%[^,], %[^,], %[^,],%[^,]", id, nombre, edad, profesion);

        pEmployee=employee_new(id, nombre, edad, profesion);
        al_add(pArraylistEmployee, pEmployee);

        }

    }

    fclose(pFile);

    return 0;

}

int newEmployeeList(ArrayList * list)
{
    FILE * pFile;

    int i=0;

    Employee* employee;

    int retorno=-1;

    pFile=fopen("out.csv", "w");

    if(pFile!=NULL)

    {
        for(i=0; i<al_len(list); i++)
        {
            employee=al_get(list, i);
            fprintf(pFile, "%d, %s,%d, %s\n", employee_getId(employee), employee_getName(employee),employee_getAge(employee), employee_getProf(employee));
            retorno=0;
        }
    }

        fclose(pFile);


        return retorno;


}

int employee_getId(Employee *this)
{
return this->id;
}

int employee_getName(Employee *this)
{
return this->nombre;

}

int employee_getAge(Employee *this)
{
return this->edad;
}

int employee_getProf(Employee *this)
{
return this->profesion;
}

int employee_setId(Employee* this, int id)
{
    this->id=id;
    return 0;
}

int employee_setEdad(Employee* this, int edad)
{
     this->edad=edad;
    return 0;

}

int employee_setNombre(Employee* this, char * nombre)
{
    strcpy(this->nombre, nombre);
    return 0;
}

int employee_setProfesion(Employee* this, char * profesion)
{
    strcpy(this->profesion, profesion);
    return 0;
}
