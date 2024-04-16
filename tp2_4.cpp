#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu
{
    int velocidad;  // entre 1 y 3 GHz
    int anio;       // entre 2015 y 2023
    int cantidad;   // entre 1 y 8
    char *tipo_cpu; // valores del arreglo tipos
} typedef Pc;
// prototipos de funciones
// lista de PCs
void mostrarLista(Pc *pcs, char tipos[6][10]);
// la PC más vieja
void pcMasVieja(Pc *pcs);
// la PC con mayor velocidad
void pcMayorVelocidad(Pc *pcs);
int main()
{
    srand(time(NULL));
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    Pc pcs[5];
    for (int i = 0; i < 5; i++)
    {
        pcs[i].velocidad = rand() % 3 + 1;
        pcs[i].anio = rand()  % 9 + 2015;
        pcs[i].cantidad = rand() % 8 + 1;
        pcs[i].tipo_cpu = tipos[rand() % 6];
    }
    mostrarLista(pcs, tipos);
    pcMasVieja(pcs);
    pcMayorVelocidad(pcs);
    return 0;
}
void mostrarLista(Pc *pcs, char tipos[6][10])
{
    for (int i = 0; i < 5; i++)
    {
        printf("PC %d\n", i + 1);
        printf("Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("anio:%d\n", pcs[i].anio);
        printf("Cantidad de nucleos: %d\n", pcs[i].cantidad);
        printf("Tipo de CPU: %s\n\n", pcs[i].tipo_cpu);
    }
}
void pcMasVieja(Pc *pcs)
{
    int indice = 0;
    for (int i = 1; i < 5; i++)
    {
        if (pcs[i].anio < pcs[indice].anio)
        {
            indice = i;
        }
    }
    printf("La PC mas vieja es la PC %d, del anio %d.\n", indice + 1, pcs[indice].anio);
}
void pcMayorVelocidad(Pc *pcs)
{
    int indice = 0;
    for (int i = 1; i < 5; i++)
    {
        if (pcs[i].velocidad > pcs[indice].velocidad)
        {
            indice = i;
        }
    }
    printf("La PC con mayor velocidad es la PC %d, con una velocidad de %d GHz.\n", indice + 1, pcs[indice].velocidad);
}