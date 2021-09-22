#include <stdio.h> 
#include <stdlib.h> 
// definicao da estrutura 
struct Campos { 
    int campo1, campo2; 
}; 
// definição da função que recebe por referencia a estrutura Inteiros 
void trocar (struct Campos *c) { 
    // troca os valores dos campos 
    int aux = c->campo1; 
    c->campo1 = c->campo2; 
    c->campo2 = aux; 
} 
main () { 
    struct Campos c; 
    // leitura dos dados 
    printf ("Campo 1: "); 
    scanf ("%d", &c.campo1); 
    printf ("Campo 2: "); 
    scanf ("%d", &c.campo2); 
    // chama a funçao passando o parametro por referencia 
    trocar (&c); 
    printf ("\nCampo 1 = %d ", c.campo1); 
    printf ("Campo 2 = %d\n\n", c.campo2); 
    system ("PAUSE"); 
} 