#include <stdio.h>
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
}
