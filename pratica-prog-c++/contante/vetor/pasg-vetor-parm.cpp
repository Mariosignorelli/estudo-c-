#include <stdio.h> 
#include <stdlib.h>
// constante simbolica que representa o tamanho do vetor 
#define TAM 10
// definição da função inicializaVetor
void inicializaVetor(int v[]) {         
        int i;      
        for (i = 0; i < TAM; i++) {      
             v[i] = 1;     
        }   
}
// definição da função imprimeVetor     
void imprimeVetor(int v[ ]) {   
        int i;      
        for (i = 0; i < TAM; i++) {    
             printf ("%d ", v[i]); 
        }   
}
main () {     
       int vetor[TAM];   
       // chama a funcao inicializaVetor    
       inicializaVetor(vetor); 
       // chama a função imprimeVetor   
       imprimeVetor(vetor);   
       printf ("\n\n"); 
       system("PAUSE");    
}