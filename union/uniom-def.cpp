#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 
// definição da union 
union dados_aluno   {  
     char nome [40];   
     float nota;  
     int faltas; 
} ; 
main ( ) {   
     // declaração de uma variável da union    
     union dados_aluno aluno_uninove; 
 
     printf ("\n Digite o nome do aluno="); 
     gets (aluno_uninove.nome);  
     printf ("\n Nome do aluno="); 
     puts (aluno_uninove.nome); 
     printf ("\n Digite a nota do aluno=");   
     scanf ("%f", &aluno_uninove.nota); 
     printf ("\n Nota do aluno=%f", aluno_uninove.nota); 
     printf ("\n Digite as faltas do aluno=");  
     scanf ("%d", &aluno_uninove.faltas); 
     printf ("\n Faltas do aluno=%d", aluno_uninove.faltas);  
     system ("PAUSE");
 }