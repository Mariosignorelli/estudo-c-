#include <stdio.h>
#include <stdlib.h>
// definição da estrutura funcionário
struct Funcionario {
    char nome[80];
    float salario;
};
// definição da função reajustarSalario
// note que temos que colocar o operador * antes
// do nome do parametro, indicando que a passagem
// é por referência
void reajustarSalario (struct Funcionario *func) {  
    if (func->salario < 500) {
        // reajusta o salario em 12%
        func->salario = func->salario * 1.12;
    } 
    else {
        // reajusta o salario em 7%
        func->salario = func->salario * 1.07;
    } 
}
main () {
    // declaração da variável do tipo funcionario
    struct Funcionario f;
    // leitura dos dados do funcionário
    printf ("Nome: ");
    gets (f.nome);
    printf ("Salario: ");
    scanf ("%f", &f.salario);
    // chamada a função de reajuste de salario
    // note que temos que colocar o operador & antes do 
    // nome da variavel de estrutura, pois a estamos 
    // passando por referencia
    reajustarSalario (&f);
    // imprime os dados do funcionario
    printf ("%s - %.2f\n\n", f.nome, f.salario);
    system ("PAUSE");
}