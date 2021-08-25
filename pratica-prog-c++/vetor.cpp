#include <stdio.h>
#include <stdlib.h>
main()
{
    float nota[5];
    int i;
    i = 0;
    while (i < 5)
    {
        printf("Digite %d nota", i + 1);
        scanf("%f", &nota[i]);
        i++;
    }
    printf("\n\nas notas digitadas no vetor foram\n\n");
    i = 0;
    while (i < 5)
    {
        printf("%f", &nota[i]);
        i++;
    }
    system("pause");
}
