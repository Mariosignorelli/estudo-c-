#include <stdio.h>
#include <stdlib.h>

// especificação simbolica para o valor de PI
#define PI 3, 1415
main()
{
    float raio;
    printf("raio:");
    scanf("%f,&raio");
    // calcula a área aqui usamos a contante simbolica
    float area = PI * (raio * raio);
    // apresenta o vaor da area
    printf("Area = %2f", area);
    system("pause");
}