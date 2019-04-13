#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include <time.h>

/** \brief Solicita dos numeros y los suma
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la suma de las dos variables.
 *
 */

float funcion_Suma(float a,float b)
{
    float suma;
    suma = a+b;
    return suma;
}


/** \brief Solicita dos numeros y los resta
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la resta de las dos variables.
 *
 */

float funcion_Resta(float a,float b)
{
    float resta;
    resta = a-b;
    return resta;
}


/** \brief Solicita dos numeros y los multiplica
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la multiplicacion de las dos variables.
 *
 */

float funcion_Multiplicacion(float a,float b)
{
    float multiplicacion;
    multiplicacion = a*b;
    return multiplicacion;
}

/** \brief Solicita dos numeros y los divide
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la division de las dos variables.
 *
 */

float funcion_Division(float a,float b)
{

    if(b==0)
    {
        printf("Error.");
        return -1;
    }
    else
    {
        float division;
        division = a/b;
        return division;
    }
}
/** \brief Solicita un numero y saca el factorial
 *
 * \param a
 * \param
 * \return
 *
 */

int funcion_Factorial(int a)
{
    int resp;
    if(a==1)
        return 1;
    resp=a* funcion_Factorial(a-1);
    return (resp);

}

/** \brief Solicita un numero al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El numero ingresado por el usuario
 *
 */
float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}

/** \brief Solicita un numero al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El numero ingresado por el usuario
 *
 */
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

/** \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return void
 */
void funcion_getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    gets(input);
}

/** \brief Genera un numero aleatorio
 * \param desde Numero aleatorio minimo
 * \param hasta Numero aleatorio maximo
 * \param iniciar Indica si se trata del primer numero solicitado
 * \return retorna el numero aleatorio generado
 *
 */
char getNumeroAleatorio(int desde, int hasta, int iniciar)
{
    if(iniciar)
        srand(time(NULL));
        return desde + (rand() % (hasta + 1 - desde));
}


/** \brief Verifica si el valor ingresado es numerico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es numerico y 0 si no lo es
 *
 */
int esNumerico(char str[])
{
    int i=0;

    while(str[i]!= '\0')
    {
        if(str[i]<'0' || str[i]> '9')
            return 0;
        i++;
    }
    return 1;
}

/** \brief Verifica si el recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char str[])
{
     int i=0;
     while(str[i] != '\0')
     {
        if((str[i]!= ' ') && (str[i]<'a' || str[i] > 'z') && (str[i]<'A' || str[i] > 'Z'))
           return 0;
        i++;
     }
     return 1;
 }

/** \brief Verifica si el recibido contiene solo letras y numeros
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio y letras o numeros y 0 si no lo es
 *
 */
int esAlfaNumerico(char str[])
{
    int i=0;

    while(str[i] != '\0')
    {
        if((str[i]!= ' ') && (str[i]<'a' || str[i] > 'z') && (str[i]<'A' || str[i] > 'Z') && (str[i]<'0' || str[i]> '9'))
            return 0;
        i++;
    }
    return 1;
}

/** \brief Verifica si el valor recibido contiene solo numeros, + y -
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio y letras o numeros y 0 si no lo es
 *
 */
int esTelefono(char str[])
{
    int i=0;
    int contadorGuiones = 0;
    while(str[i]!='\0')
    {
        if((str[i] != ' ') && (str[i] != '-') && (str[i]<'0' || str[i]>'9'))
        {
            return 0;
        }

        if(str[i]=='-')
        {
            contadorGuiones++;
        }
        i++;
    }
    if(contadorGuiones==1)
    {
        return 1;
    }
    return 0;
}

/**
 * \brief Verifica si el valor recibido es numérico aceptando flotantes
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int validarNumeroFlotante(char str[])
{
   int i=0;
   int cantidadPuntos=0;
   while(str[i] != '\0')
   {
       if (str[i] == '.' && cantidadPuntos == 0)
       {
           cantidadPuntos++;
           i++;
           continue;

       }
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}


/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    funcion_getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}


/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumeros(char mensaje[],char input[])
{
    char aux[256];
    funcion_getString(mensaje,aux);
    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}


/**
 * \brief Solicita un texto numérico al usuario y lo devuelve (acepta flotantes)
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumerosFlotantes(char mensaje[],char input[])
{
    char aux[256];
    funcion_getString(mensaje,aux);
    if(validarNumeroFlotante(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

