#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ArrayEmployeesRecursado.h"
#include "funciones.h"

#define SIZE 1001

int menu();

int main()
{
    char seguir='s';
    eEmployee employee[SIZE];
    initEmployees(employee,SIZE);
    int flag1 = 0;

    do
    {
        switch(menu())
        {
        case 1:
            addEmployee(employee, SIZE);
            flag1 = 1;
            break;
        case 2:
            if(flag1 == 1)
            {
                modifyEmployee(employee, SIZE);
                system("pause");
            }
            else
            {
                printf("Error debe dar de alta un empleado primero\n");
                system("pause");
            }
            break;
        case 3:
            if(flag1 == 1)
            {
                removeEmployee(employee,SIZE); //eEmployee lock[], int lenght, int id
                system("pause");
            }
            else
            {
                printf("Error debe dar de alta un empleado primero\n");
                system("pause");
            }
            break;
        case 4:
            if(flag1 == 1)
            {
                sortEmployees(employee, SIZE);
                system("pause");
            }
            else
            {
                printf("Error debe dar de alta un empleado primero\n");
                system("pause");
            }
            //viewEmployees(employee, SIZE);
            break;
        case 5:
            seguir = 'n';
            system("pause");
            break;
        }

    }
    while ( seguir == 's');



    return 0;
}

int menu()
{
    int option;
    system("cls");

    printf("\n******* MENU DE OPCIONES ******* \n\n");
    printf(" 1- ALTAS\n");
    printf(" 2- MODIFICAR\n");
    printf(" 3- BAJA\n");
    printf(" 4- INFORMAR\n");
    printf(" 5- SALIR\n ");
    printf("Ingrese una opcion: ");
    scanf("%d",&option);

    return option;
}
