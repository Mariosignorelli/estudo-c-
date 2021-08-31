#include <stdio.h>
#include <stdlib.h> 
 
 main(){
     int x = 15;
     int *px;
     px = &x;
     printf ("Endereco de memoria de x = %p", &x);
     printf ("Conteudo da variavel x por meio do ponteiro px = %d", *px);
     printf ("Conteudo da variavel px = %p", px);
     printf ("Endereco de memoria de px = %p", &px);
     system ("PAUSE");
 }   