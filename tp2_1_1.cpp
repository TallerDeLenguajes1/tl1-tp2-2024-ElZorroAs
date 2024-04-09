/*#include <stdio.h>
#include <stdlib.h> // Necesario para la función rand()
#include <time.h>

#define N 20

int main() {
    int i;
    double vt[N];

    // Inicialización del generador de números aleatorios
    srand(time(NULL));

    for (i = 0; i < N; i++) {
        vt[i] = 1 + rand() % 100;
        printf("%f ", vt[i]);
    }
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main() {
    double vt[N];    // Declaración de un array de tamaño N
    double *ptr = vt; // Declaración de un puntero que apunta al comienzo del array

    // Inicialización del generador de números aleatorios
    srand(time(NULL));

    // Llenar el array con valores aleatorios y al mismo tiempo imprimirlos
    for (int i = 0; i < N; i++) {
        *(ptr + i) = 1 + rand() % 100; // Equivalente a vt[i] = 1 + rand() % 100;
        printf("%f ", *(ptr + i));     // Equivalente a printf("%f ", vt[i]);
    }

    return 0;
}