#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    const MIN = 1, MAX = 100;
    srand(time(NULL));
    int nbSai;
    int choix;
    do{
        int nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        do{
            printf("Entrez un nombre compris entre 1 et 100 : ");
            scanf("%d", &nbSai);
            if(nombreMystere < nbSai)
                printf("C'est moins !\n");
            else if(nombreMystere > nbSai)
                printf("C'est plus !\n");
        }while(nbSai != nombreMystere);
        printf("\nBravo vous avez trouver le nombre mystere !");

        printf("\n\nVoulez-vous rejouer ?\n1 : Rejouer \n2 : Quitter\n");
        scanf("%d", &choix);
        printf("\n\n");
    }while(choix == 1);

    return 0;
}
