#include <stdio.h>
#include <stdlib.h>
#include <time.h> // para la función time

#define N 5
#define M 7

int main() {
    int mt[N][M];
    int *ptr = &mt[0][0];
    
    // Inicializar la semilla del generador de números aleatorios
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            *(ptr + i * M + j) = 1 + rand() % 100;
            printf("%d ", *(ptr + i * M + j));
        }
        printf("\n");
    }

    return 0;
}
