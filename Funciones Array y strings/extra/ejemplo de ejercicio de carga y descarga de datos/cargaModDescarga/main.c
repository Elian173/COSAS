#include <stdio.h>
#include <stdlib.h>

int i=0;
int H[50];
int nmaterias[3][3];

void carga();
void habilitacion();
void modificar();
void listado();
void materias();
void notasmaterias();

struct alumno
{
int legajo;
char nombre[20];
char apellido[20];
int edad;
int sexo;
char direccion[30];
char localidad[40];
} A[50];

int main(int argc, char *argv[])
{
int entrada;

	printf("|__ MENU __|\n");
	printf("Ingrese 1 para cargar un alumno\n");
	printf("Ingrese 2 para habilitar o deshabilitar un alumno\n");
	printf("Ingrese 3 para modificar datos de un alumno\n");
	printf("Ingrese 4 para ver los datos de un alumno\n");
	printf("Ingrese 5 para cargar nota de las materias\n");
	printf("Ingrese 6 para ver las notas de las materias por alumno\n");
	scanf("%d",&entrada);

	while (entrada != 0)
		{
		if (entrada == 1)
			{
			system("cls");
			carga();
			i = i + 1;


			system("cls");
			printf("|__ MENU __|\n");
			printf("Ingrese 1 para cargar un alumno\n");
			printf("Ingrese 2 para habilitar o deshabilitar un alumno\n");
			printf("Ingrese 3 para modificar datos de un alumno\n");
			printf("Ingrese 4 para ver los datos de un alumno\n");
			printf("Ingrese 5 para cargar nota de las materias\n");
			printf("Ingrese 6 para ver las notas de las materias por alumno\n");
			scanf("%d",&entrada);
			}
		else if (entrada == 2)
			{
			habilitacion();
			system("cls");
			printf("|__ MENU __|\n");
			printf("Ingrese 1 para cargar un alumno\n");
			printf("Ingrese 2 para habilitar o deshabilitar un alumno\n");
			printf("Ingrese 3 para modificar datos de un alumno\n");
			printf("Ingrese 4 para ver los datos de un alumno\n");
			printf("Ingrese 5 para cargar nota de las materias\n");
			printf("Ingrese 6 para ver las notas de las materias por alumno\n");
			scanf("%d",&entrada);
			}
		else if (entrada == 3)
			{
			modificar();
			system("cls");
			printf("|__ MENU __|\n");
			printf("Ingrese 1 para cargar un alumno\n");
			printf("Ingrese 2 para habilitar o deshabilitar un alumno\n");
			printf("Ingrese 3 para modificar datos de un alumno\n");
			printf("Ingrese 4 para ver los datos de un alumno\n");
			printf("Ingrese 5 para cargar nota de las materias\n");
			printf("Ingrese 6 para ver las notas de las materias por alumno\n");
			scanf("%d",&entrada);
			}
		else if (entrada == 4)
			{
			system("cls");
			listado();
			system("pause");

			system("cls");
			printf("|__ MENU __|\n");
			printf("Ingrese 1 para cargar un alumno\n");
			printf("Ingrese 2 para habilitar o deshabilitar un alumno\n");
			printf("Ingrese 3 para modificar datos de un alumno\n");
			printf("Ingrese 4 para ver los datos de un alumno\n");
			printf("Ingrese 5 para cargar nota de las materias\n");
			printf("Ingrese 6 para ver las notas de las materias por alumno\n");
			scanf("%d",&entrada);
			}
		else if (entrada == 5)
			{
			system("cls");
			materias();
			system("pause");
			system("cls");
			printf("|__ MENU __|\n");
			printf("Ingrese 1 para cargar un alumno\n");
			printf("Ingrese 2 para habilitar o deshabilitar un alumno\n");
			printf("Ingrese 3 para modificar datos de un alumno\n");
			printf("Ingrese 4 para ver los datos de un alumno\n");
			printf("Ingrese 5 para cargar nota de las materias\n");
			printf("Ingrese 6 para ver las notas de las materias por alumno\n");
			scanf("%d",&entrada);
			}
		else if (entrada == 6)
			{
			system("cls");
			notasmaterias();
			system("pause");
			system("cls");
			printf("|__ MENU __|\n");
			printf("Ingrese 1 para cargar un alumno\n");
			printf("Ingrese 2 para habilitar o deshabilitar un alumno\n");
			printf("Ingrese 3 para modificar datos de un alumno\n");
			printf("Ingrese 4 para ver los datos de un alumno\n");
			printf("Ingrese 5 para cargar nota de las materias\n");
			printf("Ingrese 6 para ver las notas de las materias por alumno\n");
			scanf("%d",&entrada);
			}
		else if (entrada > 6)
			{
			system("cls");
			printf("|__ MENU __|\n");
			printf("Ingrese 1 para cargar un alumno\n");
			printf("Ingrese 2 para habilitar o deshabilitar un alumno\n");
			printf("Ingrese 3 para modificar datos de un alumno\n");
			printf("Ingrese 4 para ver los datos de un alumno\n");
			printf("Ingrese 5 para cargar nota de las materias\n");
			printf("Ingrese 6 para ver las notas de las materias por alumno\n");
			scanf("%d",&entrada);
			}
		else if (entrada < 0)
			{
			system("cls");
			printf("|__ MENU __|\n");
			printf("Ingrese 1 para cargar un alumno\n");
			printf("Ingrese 2 para habilitar o deshabilitar un alumno\n");
			printf("Ingrese 3 para modificar datos de un alumno\n");
			printf("Ingrese 4 para ver los datos de un alumno\n");
			printf("Ingrese 5 para cargar nota de las materias\n");
			printf("Ingrese 6 para ver las notas de las materias por alumno\n");
			scanf("%d",&entrada);
			}
		}






	return 0;
}

void carga()
{

	printf("Ingrese el numero de legajo del alumno [%i]: ",i);
	scanf("%d",&A[i].legajo);
	printf("Ingrese el nombre del alumno [%i]: ",i);
	scanf("%s",&A[i].nombre);
	printf("Ingrese el apellido del alumno [%i]: ",i);
	scanf("%s",&A[i].apellido);
	printf("Ingrese la edad del alumno [%i]: ",i);
	scanf("%d",&A[i].edad);
	printf("Ingrese el sexo (1 masculino, 2 femenino) del alumno [%i]: ",i);
	scanf("%d",&A[i].sexo);
	printf("Ingrese la direccion del alumno [%i]: ",i);
	scanf("%s",&A[i].direccion);
	printf("Ingrese la localidad del alumno [%i]: ",i);
	scanf("%s",&A[i].localidad);
	H[i] = 1;

}

void habilitacion()
{
int alumno;
int a;

	printf("Ingrese el alumno: ");
	scanf("%d",&alumno);

	printf("Eligio el alumno [%d] %s %s\n",alumno,A[alumno].nombre,A[alumno].apellido);

	printf("Si desea deshabilitar un alumno ingrese 0, si desea habilitarlo ingrese 1: ");
	scanf("%d",&a);

	if (a == 0)
		{
		H[alumno] = 0;
		}
	else if (a == 1)
		{
		H[alumno] = 1;
		}
}

void modificar()
{
int n;

	printf("Ingrese el alumno que desea modificar: ");
	scanf("%d",&n);

	printf("Eligio el alumno %s %s\n",A[n].nombre,A[n].apellido);
	system("pause");

	system("cls");
	printf("Ingrese la edad del alumno [%i]: ",n);
	scanf("%d",&A[n].edad);
	printf("Ingrese el sexo (1 masculino, 2 femenino) del alumno [%i]: ",n);
	scanf("%d",&A[n].sexo);
	printf("Ingrese la direccion del alumno [%i]: ",n);
	scanf("%s",&A[n].direccion);
	printf("Ingrese la localidad del alumno [%i]: ",n);
	scanf("%s",&A[n].localidad);
}

void listado()
{
int i;

	for (i=0;i<=50;i++)
		{
		printf("Alumno [%i] %s %s: numero de legajo: %d - Edad: %d - Habilitado: %d\n",i,A[i].nombre,A[i].apellido,A[i].legajo,A[i].edad,H[i]);
		}

}

void materias()
{
int alumno;
int a;

	printf("Ingrese el alumno: ");
	scanf("%d",&alumno);

	printf("Eligio el alumno [%d] %s %s\n",alumno,A[alumno].nombre,A[alumno].apellido);

	if (H[alumno] == 0)
		{
		system("cls");
		printf("El alumno que eligio esta deshabilitado\n");
		system("pause");
		}
	else
		{
		printf("Si desea continuar ingrese 1, caso contrario ingrese 0: ");
		scanf("%d",&a);
		}

	if (a == 1)
		{
		int mat=0,his=0,len=0;
		printf("Ingrese la nota de matematica: ");
		scanf("%d",&mat);
		if (mat < 11 || mat < 0)
			{
			nmaterias[alumno][1] = mat;
			}
		else
			{
			printf("La nota tiene que ser menor a 10\n");
			system("pause");
			}

		printf("Ingrese la nota de historia: ");
		scanf("%d",&his);
		if (his < 11 || mat < 0)
			{
			nmaterias[alumno][2] = his;
			}
		else
			{
			printf("La nota tiene que ser menor a 10\n");
			system("pause");
			}
		printf("Ingrese la nota de lengua: ");
		scanf("%d",&len);
		if (len < 11 || len < 0)
			{
			nmaterias[alumno][3] = len;
			}
		else
			{
			printf("La nota tiene que ser menor a 10\n");
			system("pause");
			}
		}

}
void notasmaterias()
{
int i;

	for (i=0;i<=50;i++)
		{
		printf("Alumno [%i] %s %s - Matematica: %d, Historia: %d, Lengua: %d\n",i,A[i].nombre,A[i].apellido,nmaterias[i][1],nmaterias[i][2],nmaterias[i][3]);
		}

}

