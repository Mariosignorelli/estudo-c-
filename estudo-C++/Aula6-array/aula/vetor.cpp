#include <stdio.h>
#include <stdlib.h>
main()
{
    int d, i, j, n, resto[64];
    printf("\n\nentre com o numero decimal:");
    scanf("%d", &n);
    d = n;
    i = 0;
    while (d >= 2)
    {
        resto[i] = d % 2;
        d = d / 2;
        i++;
    }
    resto[i] = d;
    printf("\n\n % d decimal em binario =", n);
    for (j = i; j >= 0; j--)
    {
        printf("%d", resto[j]);

        printf("\n\nfim\n\n");
        system("pause");
    }
}