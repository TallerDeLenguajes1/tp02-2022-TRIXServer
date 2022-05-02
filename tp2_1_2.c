#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(int argc, char const *argv[])
{
    int vector[N];
    system("cls || clear");
    for(int i = 0; i < N; i++)
    {
        * (vector + i) = 1 + rand() % 100;
        printf("%d\t", * (vector + i));
    }
    return 0;
    
}
