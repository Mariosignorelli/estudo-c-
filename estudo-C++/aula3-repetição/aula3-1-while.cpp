#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x= 1, n;
    printf("Digite o valor final de repeteção");
    scanf("%d", &n);
    while (x <= n)
    {
        printf("Numero: %d \n", x);
        x++;
        system("pause>>null");
    }
}