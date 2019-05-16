

typedef struct
{
int id;
char nombre[50];
int edad;
char profesion[30];


}Employee;

int newEmployeeList(ArrayList * list);
int parserEmployee(FILE *pFile, ArrayList * list);
Employee* employee_new(int , char* , int , char*);
void employeePrint(void*);
int funcionQueFiltra(void*);

