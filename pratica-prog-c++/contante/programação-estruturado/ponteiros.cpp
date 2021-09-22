#include<stdio.h>
#include<stdlib.h>
// definição de estrutura
struct Pessoa
{
   char nome [80];
   int idade;
};
main(){
    // decalaração e inicialização da estrutura
    struct Pessoa pessoa = {"Ana",27 };
    // declaração do ponteiro por estrutura
    struct Pessoa *ptr;
    // faz o ponteiro ptr apontar para a estrutura pessoa
    ptr = &pessoa;
    // imprime os dados da estrutura acessando seus campos via ponteiro
    printf ("%s - %d\n\n", (*ptr).nome, (*ptr).idade);
    system ("PAUSE");
    
  
}
