#include <stdio.h>
#include <stdlib.h>
main()
{
    int d, i, j, n, restos[64];
    printf("\n\nentre com o numero decimal:");
    scanf("%d", &n);
    d = n;
    i = 0;
    while (d >= 2)
    {
        restos[i] = d % 2;
        d = d / 2;
        i++;
    }
    restos[i] = d;
    printf("\n\n % d decimal em binario =", n);
    for (j = i; j >= 0; j--)
    {
        printf("%d", restos[j]);

        printf("\n\nfim\n\n");
        system("pause");
    }
}