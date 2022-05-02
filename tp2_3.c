#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int main(int argc, char const *argv[])
{
    int i, j;
    int matriz[N][M];
    int * pMatriz;

    pMatriz = matriz;

    system("cls || clear");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            * (pMatriz + (i * M + j)) = 1 + rand() % 100;
            printf("%d\t", * (pMatriz + (i * M + j)));

        }

        printf("\n");

    }
    return 0;
}