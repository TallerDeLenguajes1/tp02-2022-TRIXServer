#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 200

int main(int argc, char const *argv[])
{
    int vector[N];
    system("cls || clear");
    srand(time(NULL));

    for(int i = 0; i < N; i++)
    {
        vector[i] = 1 + rand() % 100;
        printf("%d\t", vector[i]);
    }
    return 0;
}
