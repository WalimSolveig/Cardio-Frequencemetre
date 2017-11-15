#include <stdio.h>
int main()
{
    int choice;

	printf("################################################\n");
	printf("#           Faites votre choix                 #\n");
	printf("################################################\n");
	printf("#1#            1 LED sur 2                     #\n");
	printf("################################################\n");
	printf("#2#            1 LED sur 3                     #\n");
	printf("################################################\n");
	printf("#3#            Mode Chenille                   #\n");
	printf("################################################\n");


	scanf("%d", &choice);

    if(choice == 1)
    {
       	FILE* fichier = NULL;
	    fichier = fopen("chenille.ino", "w");
	    if(fichier != NULL)
	    {
     fputs("int timer=300;\nvoidsetup(){\npinMode(3, OUTPUT);\npinMode(4, OUTPUT);\npinMode(5, OUTPUT);\npinMode(6, OUTPUT);\npinMode(7, OUTPUT);\npinMode(8, OUTPUT);\npinMode(9, OUTPUT);\npinMode(10, OUTPUT);\npinMode(11, OUTPUT);\npinMode(12, OUTPUT);\n}\nvoid loop() {\ndigitalWrite(3, HIGH);\ndelay(timer);\ndigitalWrite(3, LOW);\ndelay(timer);\ndigitalWrite(4, HIGH);\ndelay(timer);\ndigitalWrite(4, LOW);\ndelay(timer);\ndigitalWrite(5, HIGH);\ndelay(timer);\ndigitalWrite(5, LOW);\ndelay(timer);\ndigitalWrite(6, HIGH);\ndelay(timer);\ndigitalWrite(6, LOW);\ndelay(timer);\ndigitalWrite(7, HIGH);\ndelay(timer);\ndigitalWrite(7, LOW);\ndelay(timer);\ndigitalWrite(8, HIGH);\ndelay(timer);\ndigitalWrite(8, LOW);\ndelay(timer);\ndigitalWrite(9, HIGH);\ndelay(timer);\ndigitalWrite(9, LOW);\ndelay(timer);\ndigitalWrite(10, HIGH);\ndelay(timer);\ndigitalWrite(10, LOW);\ndelay(timer);\ndigitalWrite(11, HIGH);\ndelay(timer);\ndigitalWrite(11, LOW);\ndelay(timer);\ndigitalWrite(12, HIGH);\ndelay(timer);\ndigitalWrite(12, LOW);\ndelay(timer);\n", fichier);
     fclose(fichier);
        }
   return 0;
    }

    if(choice == 2)
    {
     FILE* fichier = NULL;
    fichier = fopen("unsurtrois.ino", "w");
    if (fichier != NULL)
    {
     fputs("/*Allumage une sur trois*/\nint timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(3, OUTPUT);\npinMode(4, OUTPUT);\npinMode(5, OUTPUT);\npinMode(6, OUTPUT);\npinMode(7, OUTPUT);\npinMode(8, OUTPUT);\npinMode(9, OUTPUT);\npinMode(10, OUTPUT);\npinMode(11, OUTPUT);\npinMode(12, OUTPUT);\n}\nvoid loop{\ndigitalWrite(3, HIGH);\ndelay(timer);\ndigitalWrite(3, LOW);\ndelay(timer);\ndigitalWrite(6, HIGH);\ndelay(timer);\ndigitalWrite(6, LOW);\ndelay(timer);\ndigitalWrite(9, HIGH);\ndelay(timer);\ndigitalWrite(9, LOW);\ndelay(timer);\ndigitalWrite(12, HIGH);\ndelay(timer);\ndigitalWrite(12, LOW);\ndelay(timer);\ndigitalWrite(4, HIGH);\ndelay(timer);\ndigitalWrite(4, LOW);\ndelay(timer);\ndigitalWrite(7, HIGH);\ndelay(timer);\ndigitalWrite(7, LOW);\ndelay(timer);\ndigitalWrite(10, HIGH);\ndelay(timer);\ndigitalWrite(10, LOW);\ndelay(timer);\ndigitalWrite(5, HIGH);\ndelay(timer);\ndigitalWrite(5, LOW);\ndelay(timer);\ndigitalWrite(8, HIGH);\ndelay(timer);\ndigitalWrite(8, LOW);\ndelay(timer);\ndigitalWrite(11, HIGH);\ndelay(timer);\ndigitalWrite(11, LOW);\ndelay(timer);\n}\n", fichier);
     fclose(fichier);
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
    }
    }
}
