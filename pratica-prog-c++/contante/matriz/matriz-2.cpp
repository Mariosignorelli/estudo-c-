 #include <stdio.h>
 #include <stdlib.h> 
 
 main(){
      int a, b;
      int *p, *q;
      a = 5;
      b = 15;      
      p = &a;
      q = p;
     *q = 25;
      printf ("Conteudo da variavel a = %d", a);
      system ("PAUSE");
  }   