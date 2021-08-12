#include <stdio.h>
#include<stdlib.h>
int main(){
	int x=1, n, a, soma=0;
    printf("Digite quantos numeros deseja somar");
	scanf("%d", &n);
	while(x<=n){
		printf("Numero: %d ",x);
	scanf("%d", &a);
		soma = soma + a;
		x++;
	}
	printf("\n valor toal da soma = %d", soma);
	system("pause>>null");
}
