#include <stdio.h>
#include <stdlib.h>
main()
{
    int i, j, menor, n[100];
    printf("\n\n Entre com alguns numeros. Digite (0) para sair");
    i = 0;

    while (1)
    {
        printf("\n  Numero %d:", i + 1);
        scanf("%d", &n[i]);
        if (n[i] == 0)
            
        
            break;
             i++;
    }
        menor = n[0];
        j = 1;
        while (j < i)
        {
            if (n[j] < menor)
            
                menor = n[j];
                j++;
                printf("\n\n O menor numero = %.d \n\n", menor);
                system("pause");
            
            
        }
    
}