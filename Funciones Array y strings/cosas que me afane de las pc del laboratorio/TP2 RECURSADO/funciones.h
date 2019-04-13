#include <stdio.h>
#include <stdlib.h>

float funcion_Suma(float a,float b);
float funcion_Resta(float a,float b);
float funcion_Multiplicacion(float a,float b);
float funcion_Division(float a,float b);
int funcion_Factorial(int a);

int getInt(char mensaje[]);
float getFloat(char mensaje[]);
char getChar(char mensaje[]);
void funcion_getString(char mensaje[],char input[]);

char getNumeroAleatorio(int desde, int hasta, int iniciar);

int esNumerico(char str[]);
int esTelefono(char str[]);
int esAlfaNumerico(char str[]);
int esSoloLetras(char str[]);
int validarNumeroFlotante(char str[]);

int getStringLetras(char mensaje[],char input[]);
int getStringNumeros(char mensaje[],char input[]);
int getStringNumerosFlotantes(char mensaje[],char input[]);
