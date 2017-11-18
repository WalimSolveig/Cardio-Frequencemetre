#include <stdio.h>
#include "coeur.h"


int main()
{
    system("COLOR 2");
    int choice;
    int numled;
	printf("################################################\n");
	printf("#           Faites votre choix                 #\n");
	printf("################################################\n");
	printf("#1#            Mode Chenille                   #\n");
	printf("################################################\n");
	printf("#2#            1 LED sur 3                     #\n");
	printf("################################################\n");
	printf("#3#            1 LED sur 2                     #\n");
	printf("################################################\n");
	printf("#4#           1 LED au choix                  #\n");
	printf("################################################\n");
	printf("#0#          Quitter le programme              #\n");
	printf("################################################\n");


	scanf("%d", &choice);
	printf("Vous avez choisi : %d \n", choice);

    if((choice<0) || (choice>4))
    {
        printf("Vous avez choisi %d or, ce chiffre n'est pas pris en charge par le menu, je vous prie de refaire l'operation.\n", choice);
    }

    if(choice == 1)
    {
       	AllumageChenille();
       	printf("Votre code a bien ete genere, merci de le verifier dans le fichier de base.\n");
    }

    if(choice == 2)
    {
    	AllumageUneSurTrois();
    	printf("Votre code a bien ete genere, merci de le verifier dans le fichier de base.\n");
    }

    if(choice == 3)
    {
    	AllumageUneSurDeux();
    	printf("Votre code a bien ete genere, merci de le verifier dans le fichier de base.\n");
    }

    if(choice == 4){
    	printf("################################################\n");
    	printf("#     Quelle LED voulez vous allumer ?         #\n");
    	printf("################################################\n");
    	printf("#1#                 LED 2                      #\n");
	    printf("################################################\n");
	    printf("#2#                 LED 3                      #\n");
	    printf("################################################\n");
	    printf("#3#                 LED 4                      #\n");
	    printf("################################################\n");
	    printf("#4#                 LED 5                      #\n");
	    printf("################################################\n");
	    printf("#5#                 LED 6                      #\n");
	    printf("################################################\n");
	    printf("#6#                 LED 7                      #\n");
	    printf("################################################\n");
	    printf("#7#                 LED 8                      #\n");
	    printf("################################################\n");
	    printf("#8#                 LED 9                      #\n");
	    printf("################################################\n");
	    printf("#9#                 LED 10                     #\n");
	    printf("################################################\n");
	    printf("#10#                LED 11                     #\n");
	    printf("################################################\n");

	    scanf("%d", &numled);
	    printf("Vous avez choisi : %d \n", numled);


        if((numled<1) || (numled>10)){
            printf("Vous avez choisi %d or, ce chiffre n'est pas pris en charge par le menu, je vous prie de refaire l'operation.\n", numled);
        }
	    if(numled == 1)
	    {
	    	AllumageLEDDeux();
	    	printf("Votre code a bien ete genere, merci de le verifier dans le fichier de base.\n");
	    }

        if(numled == 2)
	    {
	    	AllumageLEDTrois();
	    	printf("Votre code a bien ete genere, merci de le verifier dans le fichier de base.\n");
	    }

	    if(numled == 3)
	    {
	    	AllumageLEDQuatre();
	    	printf("Votre code a bien ete genere, merci de le verifier dans le fichier de base.\n");
        }

        if(numled == 4)
	    {
	    	AllumageLEDCinq();
	    	printf("Votre code a bien ete genere, merci de le verifier dans le fichier de base.\n");
        }

        if(numled == 5)
	    {
	    	AllumageLEDSix();
	    	printf("Votre code a bien ete genere, merci de le verifier dans le fichier de base.\n");
        }

        if(numled == 6)
	    {
	    	AllumageLEDSept();
	    	printf("Votre code a bien ete genere, merci de le verifier dans le fichier de base.\n");
        }

        if(numled == 7)
	    {
	    	AllumageLEDHuit();
	    	printf("Votre code a bien ete genere, merci de le verifier dans le fichier de base.\n");
        }

        if(numled == 8)
	    {
	    	AllumageLEDNeuf();
	    	printf("Votre code a bien ete genere, merci de le verifier dans le fichier de base.\n");
        }

        if(numled == 9)
	    {
	    	AllumageLEDDix();
	    	printf("Votre code a bien ete genere, merci de le verifier dans le fichier de base.\n");
        }

        if(numled == 10)
	    {
	    	AllumageLEDOnze();
	    	printf("Votre code a bien ete genere, merci de le verifier dans le fichier de base.\n");
        }
}
}
