#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "ArrayEmployeesRecursado.h"
#include "funciones.h"

#define SIZE 1001
#define REPS 5


/*int findEmpty(eEmployee lock[],int lenght)
{
    int ind = -1;
    for(int i=0; i< lenght ; i++)
    {
        if( lock[i].isEmpty == 1)
        {
            ind = i ;
            break;
        }
    }
    return ind ;
}
*/
int findEmpty(eEmployee lista[],int len)
{
    int ind = -1;
    for(int i=0; i< len ; i++)
    {
        if( lista[i].isEmpty == 1)
        {
            ind = i ;
            break;
        }
    }
    return ind ;
}
/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
void viewEmployee(eEmployee list)
{
    printf("\n\t%2d\t\t%3s\t\t%3s\t\t%8.2f\t\t%5d\n",list.id,list.name,list.lastName,list.salary,list.sector);
}

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int initEmployees(eEmployee lock[], int lenght)
{
    int back = 0;

    if(lenght< 0 || lock == NULL)
    {
       back = -1;
    }
    else
    {
            for(int i=0; i < lenght; i++)
        {

            lock[i].isEmpty = 1;
        }
    }

    return back;
}


/** \brief add in a existing list of employees the values received as parameters
 * in the first empty position
 * \param list employee*
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or without
 free space] - (0) if Ok
 */
int addEmployee(eEmployee lock[], int lenght)
{
    eEmployee newEmployee ;
    int back;
    int index;
    //char auxiliarId[12];
    char auxiliarNombre[30];
    char auxiliarApellido[30];
    char auxiliarSalario[20] ;
    char auxiliarSector[20] ;
    int flag1 = 0;


    if(lock != NULL && lenght > 0)
    {
        system("cls");
        fflush(stdin);
        index = findEmpty(lock,lenght);
        printf("\n------- Alta empleado -------\n\n");



        if(index == -1)
        {
            printf("No hay lugar para cargar un empleado nuevo \n");
            back= -1 ;
            system("pause");

        }
        else
        {
            index = getNumeroAleatorio(0,100,1);
            newEmployee.id = index;

            printf("\n Nuevo empleado, ID numero %d \n",index);

            if(!getStringLetras("\nIngrese nombre: ",auxiliarNombre))
            {
                printf("Error, reingrese nombre") ;
                system("pause");

            }
            else if(!getStringLetras("\nIngrese apellido: ",auxiliarApellido))
            {
                printf("Error, reingrese apellido") ;
                system("pause");
            }
            else if(!getStringNumeros("\nIngrese el salario: ",auxiliarSalario))
            {
                printf("Error,reingrese salario");
                system("pause");
            }
            else if(!getStringNumeros("\nIngrese el sector: ",auxiliarSector))
            {
                printf("Error, reingrese sector");
                system("pause");
            }
            else
            {
                //Asignamos los valores
                strcpy(newEmployee.name,auxiliarNombre);
                strcpy(newEmployee.lastName,auxiliarApellido);
                newEmployee.salary = atoi(auxiliarSalario);
                newEmployee.sector = atoi(auxiliarSector);
                newEmployee.isEmpty = 0;
                flag1 = 1;
                lock[index] = newEmployee;
                system("pause");
                back = 0 ;
            }
        }

    }
    else
    {
        back = -1 ;
    }
    return back;
}

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
int modifyEmployee(eEmployee list[], int len)
{
    int id;
    int index;
    char auxiliarId[5];
    char seguir;
    char auxiliarSalary[10];
    char auxiliarSector[3];
    char auxiliarName[31];
    char auxiliarLastName[31];
    //int flag1=0;

    system("cls");
    printf("  *** Modificar  empleado ***\n\n");
    viewEmployees(list,SIZE);

   if(!getStringNumeros("Ingrese id del empleado a modificar: ",auxiliarId))
    {
        printf("*** ERROR *** El id debe contener solo numeros.") ;
    }

    id = atoi(auxiliarId) ;
    index = findEmployee(list, len, id);


    if( index == -1)
    {
        printf("No hay ningun empleado con id %d.\n\n", id);
        system("pause");
    }
    else
    {


        viewEmployee(list[index]) ;
       //modificar nombre
        printf("\nModificar nombre? s/n: ");
        scanf("%c",&seguir);
        if(seguir== 'n'|| seguir == 'N')
        {
            printf("Modificacion cancelada");
            system("cls") ;

        }
        else if(!getStringLetras("Ingrese nuevo nombre: ",auxiliarName))
            {
                printf("Error,reingrese nombre");
            }else
            {
            strcpy(list[index].name,auxiliarName);
            printf("\n\n    Modificacion realizada con exito\n\n");
            }

        viewEmployee(list[index]) ;
        printf("Ingrese el nuevo apellido");
        scanf("%c",&seguir);

        if(seguir == 'n'|| seguir == 'N')
        {
            printf("\n\n*** NO modifica el apellido ***\n\n");

        }
        else if(!getStringLetras("Ingrese nuevo apellido: ",auxiliarLastName))
            {
                printf("*** Error, reingrese apellido\n\n");
            }else{

            strcpy(list[index].lastName,auxiliarLastName);
            printf("\n\n  Se modifico correctamente\n\n");
            }

        viewEmployee(list[index]) ;
        printf("Ingrese el nuevo sueldo");
        scanf("%f",&auxiliarSalary);

        if(seguir == 'n' || seguir == 'N')
        {
            printf("\n\n  *** NO modifica sueldo ***\n\n");

        }
        else if(!getStringNumeros("Ingrese nuevo sueldo: ",auxiliarSalary))
            {
                printf("*** ERROR *** El salario debe contener solo numeros.") ;
            }else{

            list[index].salary = atoi(auxiliarSalary);
            printf("\n\n  Modificacion lista\n\n");
            }

        viewEmployee(list[index]) ;
        printf("Ingrese el nuevo sector");
        scanf("%i",&auxiliarSector);
        if(seguir == 'n' || seguir == 'N')
        {
            printf("Modificacion cancelada");
            system("pause");

        }
        else
        {
            if(!getStringNumeros("Ingrese nuevo sector: ",auxiliarSector))
            {
                printf("Error, reingrese sector") ;
            }

            list[index].sector = atoi(auxiliarSector);

            printf("\nModificacion lista\n");
            system("pause");
            system("cls") ;
        }
    }

}

/** \brief find an Employee by Id en returns the index position in array.
 *
 * \param list Employee*
 * \param len int
 * \param id int
 * \return Return employee index position or (-1) if [Invalid length or NULL
pointer received or employee not found]
 *
 */

/*int findEmployeeById(eEmployee lock[], int lenght, int id)
{

    for(int i=0; i < lenght; i++)
    {

        if( lock[i].id == id && lock[i].isEmpty == 0)
        {
            return i;
            break;
        }
    }
    return -1;

}
*/
int findEmployee(eEmployee list[],int len, int id)
{
    int index = -1;

    for(int i=0; i < len; i++)
    {
        if( list[i].id == id && list[i].isEmpty == 0)
        {
            index = i;
            break;
        }
    }
    return index;

}

/** \brief Remove a Employee by Id (put isEmpty Flag in 1)
 *
 * \param list Employee*
 * \param len int
 * \param id int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
find a employee] - (0) if Ok
 *
 */
int removeEmployee(eEmployee list[], int lenght)
{
    int indice;
    int id;
    int ret ;
    char auxID[10] ;
    char seguir[1];

    if(list != NULL && lenght > 0)
    {
        system("cls");


        if(!getStringNumeros("Ingrese el numero de id: ",auxID))
        {
            printf(" Error, reingrese id");
            system("pause") ;
            system("cls");
        }
        else
        {
            id = atoi(auxID) ;

            indice = findEmployee(list,lenght,id) ;


            if(indice == -1)
            {
                printf("No hay ningun empleado con id %d",id) ;
            }
            else
            {
                ret = 0;
                //showEmployee(lock[index]) ;
                printf("\nDesea borrar? s/n: ");
                if(seguir[0] == 'n' || seguir[0] == 'N')
                {
                    printf("Baja cancelada\n\n");
                }
                else
                {

                    list[indice].isEmpty = 1;
                    printf("Se borro correctamente");
                }
                system("pause");
            }
        }
    }
    return ret ;
}

/** \brief Sort the elements in the array of employees, the argument order
indicate UP or DOWN order
 *
 * \param list Employee*
 * \param len int
 * \param order int [1] indicate UP - [0] indicate DOWN
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int sortEmployees(eEmployee list[], int lenght)
{
    eEmployee auxEmployee;
    for(int i=0; i<SIZE-1; i++){
        for(int j= i+1; j < SIZE; j++){

            if( list[j].id > list[j].id){
                auxEmployee = list[i];
                list[i] = list[j];
                list[j] = auxEmployee;

            }
        }
    }
}


/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
 void viewEmployees(eEmployee list[], int len)
{

    system("cls");
    printf("        ID             NAME         LASTNAME             SALARY                SECTOR    \n\n");

    for(int i=0; i < len; i++)
    {

        if( list[i].isEmpty == 0)
        {
            viewEmployee(list[i]);
        }
    }
    //system("pause");
}
