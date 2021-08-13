#include<stdio.h>
#include<stdlib.h>
main(){
   int a, b,temp;
   printf("\nEntre com o valor de A;"); 
   scanf("%d",&a);

    printf("\nEntre com o valor de B;"); 
   scanf("%d",&b);
   //tracando
   temp=a;
   a=b;
   b=temp;
   printf("\nAgora A=%d e B=%d\n",a,b);

system("pause>>null");
}