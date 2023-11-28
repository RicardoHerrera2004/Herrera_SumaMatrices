#include <stdio.h>  //Biblioteca principal
#include <stdlib.h> //Biblioteca para los numeros random
#include <time.h>   //Biblioteca para la generacion de numeros random

int main()
{ // Funcion principal

    int a, b; // Definir como enteros las variables para las filas y columnas de la matriz
    printf("Ingrese el valor de la fila de la matriz: ");
    scanf("%d", &a); // Se pide y se escanea al usuario el numero de las filas
    printf("Ingrese el valor de la columna de la matriz: ");
    scanf("%d", &b);   // Se pide y se escanea al usuario el numero de las columnas
    int matrizA[a][b]; // Se define las matrices A, B y matriz resultado
    int matrizB[a][b];
    int matrizR[a][b];
    srand(time(NULL)); // Se crea la funcion para crear numeros randoms
    printf("Matriz A");
    for (int i = 0; i < a; i++)
    {
        printf("\n"); // Se crea para separar a la siguiente linea las filas
        for (int j = 0; j < b; j++)
        {
            matrizA[i][j] = rand() % 100 + 1; // Se define que en la matriz A se agreguen numeros random en cada pocision de la matriz

            printf("%d \t", matrizA[i][j]); // Se imprime la matriz A
        }
    }
    printf("\n");
    printf("Matriz B");
    for (int i = 0; i < a; i++)
    {
        printf("\n");
        for (int j = 0; j < b; j++)
        {
            matrizB[i][j] = rand() % 100 + 1; // De igual forma que en la matriz A, se crea la matriz B con numeros aleatorios dentro de la matriz
            printf("%d \t", matrizB[i][j]);   // Se imprime la matriz B
        }
    }

    printf("\n");
    printf("Suma de las matrices A y B");
    for (int i = 0; i < a; i++)
    {
        printf("\n");
        for (int j = 0; j < b; j++) // Se crea la matriz resultante
        {
            matrizR[i][j] = matrizA[i][j] + matrizB[i][j]; // Se suma la matriz A y matriz B en la matriz resultante
            printf("%d \t", matrizR[i][j]);                // Se imprime la matriz resultante
        }
    }

    return 0;
}