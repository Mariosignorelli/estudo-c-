#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char alunos[5][30];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\n\nDigite o nome do aluno:");
        gets(alunos[i]);
    }
    printf("\n\n Alunos da turma:\n\n");
    for (i = 0; i < 10; i++)
    {
        puts(alunos[i]);
    }
    system("PAUSE");
}