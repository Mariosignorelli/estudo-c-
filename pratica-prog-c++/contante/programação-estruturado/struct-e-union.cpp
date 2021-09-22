#include <stdio.h>  
#include <stdlib.h> 
#define SEGVIDA 1  
#define SEGAUTO 2
#define SEGCASA 3  
struct endereco{      
     char rua[50];  
     char cidade[10];    
     char estado[2];  
}; 
struct data{    
     int dia; 
     int mes;  
     int ano;  
};
struct apolice{    
     int apolnumero;     
     char nome[30];   
     struct endereco ender;    
     float valseguro;  
     float premio;  
     int tipo;    
union {   
struct {  
     char beneficiario[30];    
     struct data aniversario; 
} segvida;   
struct {  
     int valordedutivel;      
     char licenca[10];  
     char estado[2];     
     char modelo[15]; 
     int ano;   
} segauto;
struct {       
     int valordedutivel;  
     int anoconstrucao;        
} segcasa;  
}infoapolice;  
   };    
main()  {  
     struct apolice p[2];  
     scanf("%s",&p[0].infoapolice.segvida.beneficiario);   
     scanf("%d",&p[0].infoapolice.segvida.aniversario.dia);   
     scanf("%d",&p[0].infoapolice.segvida.aniversario.mes);   
     scanf("%d",&p[0].infoapolice.segvida.aniversario.ano);   
     p[0].tipo=1;   
     scanf("%d",&p[1].infoapolice.segauto.valordedutivel);    
     scanf("%s",&p[1].infoapolice.segauto.licenca); 
     scanf("%s",&p[1].infoapolice.segauto.estado);   
     scanf("%s",&p[1].infoapolice.segauto.modelo);   
     scanf("%d",&p[1].infoapolice.segauto.ano);   
     p[1].tipo=2; 
     int i;  
     for (i=0; i<=1; i++) {   
          if (p[i].tipo==SEGVIDA) {         
                 printf("\n Beneficiário= %s",p[i].infoapolice.segvida.beneficiario); 
                 printf("\n Dia de niver= %d",p[i].infoapolice.segvida.aniversario.dia);    
                 printf("\n Mes de niver= %d",p[i].infoapolice.segvida.aniversario.mes);    
                 printf("\n Ano de niver=%d",p[i].infoapolice.segvida.aniversario.ano);     
          }     
          else if (p[i].tipo==SEGAUTO) {    
                     printf("\n Valor = %d",p[i].infoapolice.segauto.valordedutivel);
                     printf("\n Licenca = %s",p[i].infoapolice.segauto.licenca);  
                     printf("\n Estado = %s",p[i].infoapolice.segauto.estado);   
                     printf("\n Modelo = %s",p[i].infoapolice.segauto.modelo);        
                     printf("\n Ano = %d",p[i].infoapolice.segauto.ano);             
           }     
     }    
     system ("PAUSE"); 
}