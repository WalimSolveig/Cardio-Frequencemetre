#include <stdio.h>
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
	printf("#4#            1 LED au choix                  #\n");
	printf("################################################\n");


	scanf("%d", &choice);

    printf("Tu as choisi : %d \n", choice);

    if((choice<1) || (choice>4)) {
        printf("Le menu indique 4 choix, or vous n'avez pas suivi les indications menu je vous prie de redemarrer le programme");
    }

    if(choice == 1)
    {
       	FILE* fichier = NULL;
	    fichier = fopen("chenille.ino", "w");
	    if(fichier != NULL)
	      {
          fputs("int timer=300;\nvoidsetup(){\npinMode(3, OUTPUT);\npinMode(4, OUTPUT);\npinMode(5, OUTPUT);\npinMode(6, OUTPUT);\npinMode(7, OUTPUT);\npinMode(8, OUTPUT);\npinMode(9, OUTPUT);\npinMode(10, OUTPUT);\npinMode(11, OUTPUT);\npinMode(12, OUTPUT);\n}\nvoid loop() {\ndigitalWrite(3, HIGH);\ndelay(timer);\ndigitalWrite(3, LOW);\ndelay(timer);\ndigitalWrite(4, HIGH);\ndelay(timer);\ndigitalWrite(4, LOW);\ndelay(timer);\ndigitalWrite(5, HIGH);\ndelay(timer);\ndigitalWrite(5, LOW);\ndelay(timer);\ndigitalWrite(6, HIGH);\ndelay(timer);\ndigitalWrite(6, LOW);\ndelay(timer);\ndigitalWrite(7, HIGH);\ndelay(timer);\ndigitalWrite(7, LOW);\ndelay(timer);\ndigitalWrite(8, HIGH);\ndelay(timer);\ndigitalWrite(8, LOW);\ndelay(timer);\ndigitalWrite(9, HIGH);\ndelay(timer);\ndigitalWrite(9, LOW);\ndelay(timer);\ndigitalWrite(10, HIGH);\ndelay(timer);\ndigitalWrite(10, LOW);\ndelay(timer);\ndigitalWrite(11, HIGH);\ndelay(timer);\ndigitalWrite(11, LOW);\ndelay(timer);\ndigitalWrite(12, HIGH);\ndelay(timer);\ndigitalWrite(12, LOW);\ndelay(timer);\n", fichier);
          fclose(fichier);
          }
         printf("Votre code a ete genere");
    }

    if(choice == 2)
    {
     FILE* fichier = NULL;
    fichier = fopen("unsurtrois.ino", "w");
       if (fichier != NULL)
       {
        fputs("/*Allumage une sur trois*/\nint timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(3, OUTPUT);\npinMode(4, OUTPUT);\npinMode(5, OUTPUT);\npinMode(6, OUTPUT);\npinMode(7, OUTPUT);\npinMode(8, OUTPUT);\npinMode(9, OUTPUT);\npinMode(10, OUTPUT);\npinMode(11, OUTPUT);\npinMode(12, OUTPUT);\n}\nvoid loop{\ndigitalWrite(3, HIGH);\ndelay(timer);\ndigitalWrite(3, LOW);\ndelay(timer);\ndigitalWrite(6, HIGH);\ndelay(timer);\ndigitalWrite(6, LOW);\ndelay(timer);\ndigitalWrite(9, HIGH);\ndelay(timer);\ndigitalWrite(9, LOW);\ndelay(timer);\ndigitalWrite(12, HIGH);\ndelay(timer);\ndigitalWrite(12, LOW);\ndelay(timer);\ndigitalWrite(4, HIGH);\ndelay(timer);\ndigitalWrite(4, LOW);\ndelay(timer);\ndigitalWrite(7, HIGH);\ndelay(timer);\ndigitalWrite(7, LOW);\ndelay(timer);\ndigitalWrite(10, HIGH);\ndelay(timer);\ndigitalWrite(10, LOW);\ndelay(timer);\ndigitalWrite(5, HIGH);\ndelay(timer);\ndigitalWrite(5, LOW);\ndelay(timer);\ndigitalWrite(8, HIGH);\ndelay(timer);\ndigitalWrite(8, LOW);\ndelay(timer);\ndigitalWrite(11, HIGH);\ndelay(timer);\ndigitalWrite(11, LOW);\ndelay(timer);\n}\n", fichier);
        fclose(fichier);
        printf("Votre code a ete genere");
        }
    }

    if(choice == 3)
    {
     FILE* fichier = NULL;
    fichier = fopen("unsurdeux.ino", "w");
    if (fichier != NULL)
    {
    fputs("/*Allumage une sur deux*/\nint timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(3, OUTPUT);\npinMode(4, OUTPUT);\npinMode(5, OUTPUT);\npinMode(6, OUTPUT);\npinMode(7, OUTPUT);\npinMode(8, OUTPUT);\npinMode(9, OUTPUT);\npinMode(10, OUTPUT);\npinMode(11, OUTPUT);\npinMode(12, OUTPUT);\n}\nvoid loop\n{\ndigitalWrite(4, HIGH);\ndelay(timer);\ndigitalWrite(4, LOW);\ndelay(timer);\ndigitalWrite(6, HIGH);\ndelay(timer);\ndigitalWrite(6, LOW);\ndelay(timer);\ndigitalWrite(8, HIGH);\ndelay(timer);\ndigitalWrite(8, LOW);\ndelay(timer);\ndigitalWrite(10, HIGH);\ndelay(timer);\ndigitalWrite(10, LOW);\ndelay(timer);\ndigitalWrite(12, HIGH);\ndelay(timer);\ndigitalWrite(12, LOW);\ndelay(timer);\ndigitalWrite(3, HIGH);\ndelay(timer);\ndigitalWrite(3, LOW);\ndelay(timer);\ndigitalWrite(5, HIGH);\ndelay(timer);\ndigitalWrite(5, LOW);\ndelay(timer);\ndigitalWrite(7, HIGH);\ndelay(timer);\ndigitalWrite(7, LOW);\ndelay(timer);\ndigitalWrite(9, HIGH);\ndelay(timer);\ndigitalWrite(9, LOW);\ndelay(timer);\ndigitalWrite(11, HIGH);\ndelay(timer);\ndigitalWrite(11, LOW);\ndelay(timer);\n}\n", fichier);
	fclose(fichier);
	printf("Votre code a ete genere");
    }
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

	    printf("Tu as choisi : %d \n", numled);

        if((numled<2) || (numled>11)){
            printf("Erreur, vous n'avez pas suivi les indications");
        }
	    if(numled == 1)
	    {
	    	FILE* fichier = NULL;
            fichier = fopen("allumled2.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(3, OUTPUT);\n}\nvoid loop{\ndigitalWrite(3, HIGH);\n}\n", fichier);
            fclose(fichier);
            printf("Votre code a ete genere");
	        }
	    }

        if(numled == 2)
	    {
	    	FILE* fichier = NULL;
            fichier = fopen("allumled3.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(4, OUTPUT);\n}\nvoid loop{\ndigitalWrite(4, HIGH);\n}\n", fichier);
            fclose(fichier);
            printf("Votre code a ete genere");
	        }
	    }

	    if(numled == 3)
	    {
	    	FILE* fichier = NULL;
            fichier = fopen("allumled4.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(5, OUTPUT);\n}\nvoid loop{\ndigitalWrite(5, HIGH);\n}\n", fichier);
            fclose(fichier);
            printf("Votre code a ete genere");
	        }
        }

        if(numled == 4)
	    {
	    	FILE* fichier = NULL;
            fichier = fopen("allumled5.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(6, OUTPUT);\n}\nvoid loop{\ndigitalWrite(6, HIGH);\n}\n", fichier);
            fclose(fichier);
            printf("Votre code a ete genere");
	        }
        }

        if(numled == 5)
	    {
	    	FILE* fichier = NULL;
            fichier = fopen("allumled6.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(7, OUTPUT);\n}\nvoid loop{\ndigitalWrite(7, HIGH);\n}\n", fichier);
            fclose(fichier);
            printf("Votre code a ete genere");
	        }
        }

        if(numled == 6)
	    {
	    	FILE* fichier = NULL;
            fichier = fopen("allumled7.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(8, OUTPUT);\n}\nvoid loop{\ndigitalWrite(8, HIGH);\n}\n", fichier);
            fclose(fichier);
            printf("Votre code a ete genere");
	        }
        }

        if(numled == 7)
	    {
	    	FILE* fichier = NULL;
            fichier = fopen("allumled8.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(9, OUTPUT);\n}\nvoid loop{\ndigitalWrite(9, HIGH);\n}\n", fichier);
            fclose(fichier);
            printf("Votre code a ete genere");
	        }
        }

        if(numled == 8)
	    {
	    	FILE* fichier = NULL;
            fichier = fopen("allumled9.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(10, OUTPUT);\n}\nvoid loop{\ndigitalWrite(10, HIGH);\n}\n", fichier);
            fclose(fichier);
            printf("Votre code a ete genere");
	        }
        }

        if(numled == 9)
	    {
	    	FILE* fichier = NULL;
            fichier = fopen("allumled10.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(11, OUTPUT);\n}\nvoid loop{\ndigitalWrite(11, HIGH);\n}\n", fichier);
            fclose(fichier);
            printf("Votre code a ete genere");
	        }
        }

        if(numled == 10)
	    {
	    	FILE* fichier = NULL;
            fichier = fopen("allumled11.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(11, OUTPUT);\n}\nvoid loop{\ndigitalWrite(11, HIGH);\n}\n", fichier);
            fclose(fichier);
            printf("Votre code a ete genere");
	        }
        }
        }
    }
