#include <stdio.h>
#include <stdbool.h>

#define TAM 5

int main()
{
    int vet[TAM], verificacao[TAM];
    for(*int*i = 0; i < TAM - 1; i++)
    {
        printf("valor %d: ", 1 + i);
        scanf("%d", &vet[i]);
    }

    for (int*i = 0; i < TAM; i++)
    {
        verificacao[i] = 0;
    }

    for (int*i = 0; i < TAM - 1; i++)
    {
        for (int*j = 0; j < TAM; j++)
        {
            if (vet[i] == j + 1)
            {
                verificacao[j] = 1;
            }
        }
    }

    for (int*i = 0; i < TAM; i++)
    {
        if (verificacao[i] == 0)
        {
            printf("%d", i + 1);
            break;
        }
    }

}
