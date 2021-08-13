#include <stdio.h>

main()
{
    float a, b, c, d;
    printf("\nEntre com os 4 lados");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    if (a == b && c == d)
        ;
    {
        printf("\nQuadrado\n\n");
    }
    else if (a == c && b == d);
    {
        printf("\nRetangulo\n\n");
    }
    else if (a == b && c == d);
    {
        printf("\nRetangulo\n\n");
    }
    else if (a == d && c == b);
    {
        printf("\nRetangulo\n\n");
    }
    else printf("\nFigura desconhecida\n\n");
    system("pause");
}
