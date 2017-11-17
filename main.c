#include <stdio.h>
#include "coeur.h"

int main()
{
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
	printf("#4#            1 LED au choix                  #\n");
	printf("################################################\n");


	scanf("%d", &choice);

    if(choice == 1)
    {
       	AllumageChenille();
    }

    if(choice == 2)
    {
    	AllumageUneSurTrois();
    }

    if(choice == 3)
    {
    	AllumageUneSurDeux();
    }

    if(choice == 4){
    	printf("################################################\n");
    	printf("#     Quelle LED voulez vous allumer ?         #\n");
    	printf("################################################\n");
    	printf("#1#                 LED 3                      #\n");
	    printf("################################################\n");
	    printf("#2#                 LED 4                      #\n");
	    printf("################################################\n");
	    printf("#3#                 LED 5                      #\n");
	    printf("################################################\n");
	    printf("#4#                 LED 6                      #\n");
	    printf("################################################\n");
	    printf("#5#                 LED 7                      #\n");
	    printf("################################################\n");
	    printf("#6#                 LED 8                      #\n");
	    printf("################################################\n");
	    printf("#7#                 LED 9                      #\n");
	    printf("################################################\n");
	    printf("#8#                 LED 10                     #\n");
	    printf("################################################\n");
	    printf("#9#                 LED 11                     #\n");
	    printf("################################################\n");
	    printf("#10#                LED 12                     #\n");
	    printf("################################################\n");

	    scanf("%d", &numled);

	    if(numled == 1);
	    {
	    	AllumageLEDDeux();
	    }

        if(numled == 2);
	    {
	    	AllumageLEDTrois();
	    }

	    if(numled == 3);
	    {
	    	AllumageLEDQuatre();
        }

        if(numled == 4);
	    {
	    	AllumageLEDCinq();
        }

        if(numled == 5);
	    {
	    	AllumageLEDSix();
        }

        if(numled == 6);
	    {
	    	AllumageLEDSept();
        }

        if(numled == 7);
	    {
	    	AllumageLEDHuit();
        }

        if(numled == 8);
	    {
	    	AllumageLEDNeuf();
        }

        if(numled == 9);
	    {
	    	AllumageLEDDix();
        }

        if(numled == 10);
	    {
	    	AllumageLEDOnze();
        }
}
}
