#include <stdio.h>
#include <stdlib.h>
main()
{
    float nota[5];
    int i;
    float soma, media;
    i = 0;
    soma = 0;
    while (i < 5)
    {
        printf("Digite %d nota", i + 1);
        scanf("%f", &nota[i]);
        soma = soma+nota[i];
        i++;
    }
    media = soma/5;
    printf("\n\n media e:%f\n\n", media);
   
    system("pause");
}