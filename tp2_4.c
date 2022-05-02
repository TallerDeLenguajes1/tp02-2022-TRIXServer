#include <stdio.h>
#include <stdlib.h>

#define cantComputadoras 5

struct pc
{
    int velocidad;
    int anio;
    int procesador;
    int nucleos;
}typedef pc;

char procesadorTipos[6][10] = {"INTEL", "AMD", "CELERON", "ATHLON", "CORE", "PENTIUM"};

void listarComputadoras(pc *);
void listarCaracteristicas(pc *);
void mostrarMasVieja(pc *);
void mostrarMasVeloz(pc *);

int main(int argc, char const *argv[])
{
    pc computadoras[cantComputadoras];
    pc * pComputadora;
    pComputadora = computadoras;

    system("cls || clear");

    for (int i = 0; i < cantComputadoras; i++)
    {
        printf("Computadora \t%d: \n", i + 1);
        printf("--\n");

        printf("Ingrese la velocidad entre 1 y 3: ");
        scanf("%d", &(pComputadora->velocidad));
        printf("--\n");

        printf("Ingrese el anio de fabricacion entre 2015 y 2022: ");
        scanf("%d", &(pComputadora->anio));
        printf("--\n");

        printf("Ingrese la cantidad de nnucleos entre 1 y 8: ");
        scanf("%d", &(pComputadora->nucleos));
        printf("--\n");

        printf("Ingrese el tipo de procesador 1: INTEL - 2: AMD - 3: CELERON - 4: ATHLON - 5: CORE - 6: PENTIUM: ");
        scanf("%d", &(pComputadora->procesador));
        printf("--\n");

        pComputadora++;

    }
    pComputadora = computadoras;
    listarComputadoras(pComputadora);
    printf("--\n");

    pComputadora = computadoras;
    mostrarMasVieja(pComputadora);
    printf("--\n");

    pComputadora = computadoras;
    mostrarMasVeloz(pComputadora);
    printf("--\n");

    return 0;
}

void listarComputadoras(pc * pComputadoras)
{
    for (int i = 0; i < cantComputadoras; i++)
    {
        printf("Computadora \t%d: \n", i + 1);
        listarCaracteristicas(pComputadoras);
        pComputadoras++;
    }

}

void listarCaracteristicas(pc * pComputadora)
{
    printf("Velocidad \t\t%d Ghz\n", pComputadora->velocidad);
    printf("Anio de fabricacion: \t%d\n", pComputadora->anio);
    printf("Cantidad de nucleos: \t%d\n", pComputadora->nucleos);
    printf("Tipo de procesador: \t");
    switch (pComputadora->procesador)
    {
        case 1:
            printf("INTEL");
            break;
        case 2:
            printf("AMD");
            break;
        case 3:
            printf("CELERON");
            break;
        case 4:
            printf("ATHLON");
            break;
        case 5:
            printf("CORE");
            break;
        case 6:
            printf("PENTIUM");
            break;
        default:
            break;
    }
    printf("\n");
    printf("--\n");
}

void mostrarMasVieja(pc * pComputadora)
{
    int anio = 2022;
    pc * pAux;

    for (int i = 0; i < cantComputadoras; i++)
    {
        if (pComputadora->anio <= anio)
        {
            anio = pComputadora->anio;
            pAux = pComputadora;

        }
        pComputadora++;

    }
    printf("Computadora mas Vieja: \n");
    listarCaracteristicas(pAux);

}

void mostrarMasVeloz(pc * pComputadora)
{
    int velocidad = 1;
    pc * pAux;

    for (int i = 0; i < cantComputadoras; i++)
    {
        if (pComputadora->velocidad >= velocidad)
        {
            velocidad = pComputadora->velocidad;
            pAux = pComputadora;

        }
        pComputadora++;

    }
    printf("Computadora mas veloz: \n");
    listarCaracteristicas(pAux);

}