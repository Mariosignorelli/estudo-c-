#include <stdio.h>
#include <stdlib.h>
main () {
    // declaracao e inicializacao do vetor de cedulas
    int cedulas[3] = {50, 20, 10};
    // vetor que armazena a quantidade de cada cedula
    int quantidade[3];
    int i;
    // leitura da quantia
    int quantia;
    printf ("Quantia: ");
    scanf ("%d", &quantia);
    // verifica se o valor da quantia é multiplo de 10
    if (quantia % 10 != 0) {
        printf ("O valor deve ser multiplo de 10!\n");
    }
    else {
        // calcula a quantia de cada cedula		
        for (i = 0; i < 3; i++) {
            quantidade[i] = quantia / cedulas[i];
            quantia %= cedulas[i];
        }
        // apresenta a quantidade de cada cedula na tela
        for (i = 0; i < 3; i++) {
            printf ("R$ %d = %d\n", cedulas[i], quantidade[i]);
        }
    }
    system ("PAUSE");
}