#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(int argc, char const *argv[])
{
    int vt[N];

    for(int i = 0; i < N; i++)
    {
        *(vt + i) = 1 + rand() % 100;
        printf("%d\t", *(vt + i));
    }
    return 0;
    
}
