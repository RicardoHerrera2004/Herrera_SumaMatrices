#include <stdio.h>  //Se agrega la biblioteca con la que vamos a trabajar
#include <stdlib.h> //Biblioteca para numeros random
#include <time.h>   //Bibliote para la generacion de numeros random

int main()
{ // Se crea la funcion principal donde se planteara el codigo

    int fila, columna; // Se define las filas y columnas que tendra la matriz
    srand(time(NULL)); // Se crea la funcion para crear numeros random
    printf ("Ingrese la dimension de la matriz (Misma cantidad para la filas y columnas): "); //Se pide al usuario ingresar la dimensiones de la matriz
    scanf ("%d", &fila); //Se escanea la dimension de la matriz, en este caso solo la fila
    columna=fila; //Aqui se iguala la filas con columnas para lograr operaraciones con matrices
    int matrizA[fila][columna];
    int maitrzB[fila][columna];

    return 0;
}