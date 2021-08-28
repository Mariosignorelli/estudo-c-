#include <stdio.h>
#include <stdlib.h>
//contante simblica que representa o tanho  do vetor
#define TAM 10
main()
{
    int vetor[TAM];
    int i;
    for (i = 0; i < TAM; i++)
    {
        printf("Valor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("\n*** Dados do vertor***\n");
    for (i = 0; i < TAM; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
    system("pause");
}