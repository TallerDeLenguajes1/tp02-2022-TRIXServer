#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int i, j;
int mt[N][M];

int main(int argc, char const *argv[])
{
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            mt[i][j] = 1 + rand() % 100;
            printf("%d\t", mt[i][j]);

        }

        printf("\n");

    }
    return 0;
}