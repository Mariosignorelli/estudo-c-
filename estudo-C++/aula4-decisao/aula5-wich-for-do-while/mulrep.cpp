#include <stdio.h>
main()
{
    int op;
    printf("\n\n\n \t\t\t Menu racas \n\n\n");
    printf("\t\t 1. Mongoloide\n");
    printf("\t\t 2. Caucasoide\n");
    printf("\t\t 3. Negroide\n");
    printf("\t\t 4. Australoide\n");
    printf("\t\t 5. Capoide\n");

    printf("\n Entre com a opcao para ver seu significado:");
    scanf("%d", &op);

    switch (op)
    {

    case 1:
        printf("\n (raça amarela): povos do leste e sudeste asiatico,\ Oceania (malaios e polinesios) e continente americano (esquimos e \ amerindios).\n\n\n\n");

        break;
    case 2:
        printf("\n (raca branca): povos de todo o continente europeu,\ norte da Africa e parte do continente asiatico (Oriente Medio e norte do \ Subcontinente Indiano).\n\n\n\n ");
        break;
    case 3:
        printf("\n (raca negra): povos da Africa Subsaariana \n\n\n\n");
        break;
    case 4:
        printf("\n sul da India (dravidas), negritos das Ilhas Andaman \
      (Oceano Indico), negritos das Filipinas, aborigenes de Papua-Nova Guine, \
      aborigenes da Australia e povos melanesios da Oceania. \n\n\n\n");
        break;

    case 5:
        printf("\n tribos Khoisan (extremo sul do continente\ africano).\n\n\n\n");
        break;

    default:
        printf("\n Digitou a opcao errada.\n\n");
    }
    system("pause");
}
