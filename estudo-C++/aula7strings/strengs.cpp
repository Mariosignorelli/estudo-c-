#include <stdio.h>
#include <stdlib.h>
main()
{
    char x[80];
    int i, c;
    printf("\n\n Enter com seu nome:\n\n");
    i = 0;
    while ((c = getchar()) != '\n')
    {
        x[i] = c;
        i++;
    }
    x[i] = '\0';
    printf("\n\n Voce entrou com %s\n\n", x);
    system("pause");
}