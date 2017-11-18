#include <stdio.h>
#include "coeur.h"


/*
 ########################################################################
 #                   Partie des fonctions Arduino                       #
 ########################################################################
*/


void AllumageChenille()
{
	FILE* fichier = NULL;
	fichier = fopen("chenille.ino", "w");
	if(fichier != NULL)
	{
     fputs("int timer=300;\nvoidsetup(){\npinMode(3, OUTPUT);\npinMode(4, OUTPUT);\npinMode(5, OUTPUT);\npinMode(6, OUTPUT);\npinMode(7, OUTPUT);\npinMode(8, OUTPUT);\npinMode(9, OUTPUT);\npinMode(10, OUTPUT);\npinMode(11, OUTPUT);\npinMode(2, OUTPUT);\n}\nvoid loop() {\ndigitalWrite(2, HIGH);\ndelay(timer);\ndigitalWrite(3, HIGH);\ndelay(timer);\ndigitalWrite(3, LOW);\ndelay(timer);\ndigitalWrite(4, HIGH);\ndelay(timer);\ndigitalWrite(4, LOW);\ndelay(timer);\ndigitalWrite(5, HIGH);\ndelay(timer);\ndigitalWrite(5, LOW);\ndelay(timer);\ndigitalWrite(6, HIGH);\ndelay(timer);\ndigitalWrite(6, LOW);\ndelay(timer);\ndigitalWrite(7, HIGH);\ndelay(timer);\ndigitalWrite(7, LOW);\ndelay(timer);\ndigitalWrite(8, HIGH);\ndelay(timer);\ndigitalWrite(8, LOW);\ndelay(timer);\ndigitalWrite(9, HIGH);\ndelay(timer);\ndigitalWrite(9, LOW);\ndelay(timer);\ndigitalWrite(10, HIGH);\ndelay(timer);\ndigitalWrite(10, LOW);\ndelay(timer);\ndigitalWrite(11, HIGH);\ndelay(timer);\ndigitalWrite(11, LOW);\ndelay(timer);\ndigitalWrite(12, HIGH);\ndelay(timer);\ndigitalWrite(12, LOW);\ndelay(timer);\n", fichier);
     fclose(fichier);
    }
}

void AllumageUneSurTrois()
{
    FILE* fichier = NULL;
    fichier = fopen("unsurtrois.ino", "w");
    if (fichier != NULL)
    {
    fputs("/*Allumage une sur trois*/\nint timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(3, OUTPUT);\npinMode(4, OUTPUT);\npinMode(5, OUTPUT);\npinMode(6, OUTPUT);\npinMode(7, OUTPUT);\npinMode(8, OUTPUT);\npinMode(9, OUTPUT);\npinMode(10, OUTPUT);\npinMode(11, OUTPUT);\npinMode(2, OUTPUT);\n}\nvoid loop{\ndigitalWrite(3, HIGH);\ndelay(timer);\ndigitalWrite(3, LOW);\ndelay(timer);\ndigitalWrite(6, HIGH);\ndelay(timer);\ndigitalWrite(6, LOW);\ndelay(timer);\ndigitalWrite(9, HIGH);\ndelay(timer);\ndigitalWrite(9, LOW);\ndelay(timer);\ndigitalWrite(2, HIGH);\ndelay(timer);\ndigitalWrite(2, LOW);\ndelay(timer);\ndigitalWrite(4, HIGH);\ndelay(timer);\ndigitalWrite(4, LOW);\ndelay(timer);\ndigitalWrite(7, HIGH);\ndelay(timer);\ndigitalWrite(7, LOW);\ndelay(timer);\ndigitalWrite(10, HIGH);\ndelay(timer);\ndigitalWrite(10, LOW);\ndelay(timer);\ndigitalWrite(5, HIGH);\ndelay(timer);\ndigitalWrite(5, LOW);\ndelay(timer);\ndigitalWrite(8, HIGH);\ndelay(timer);\ndigitalWrite(8, LOW);\ndelay(timer);\ndigitalWrite(11, HIGH);\ndelay(timer);\ndigitalWrite(11, LOW);\ndelay(timer);\n}\n", fichier);
    fclose(fichier);
    }
    return AllumageUneSurTrois();
}

void AllumageUneSurDeux(){
	FILE* fichier = NULL;
    fichier = fopen("unsurdeux.ino", "w");
    if (fichier != NULL)
    {
    fputs("/*Allumage une sur deux*/\nint timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(3, OUTPUT);\npinMode(4, OUTPUT);\npinMode(5, OUTPUT);\npinMode(6, OUTPUT);\npinMode(7, OUTPUT);\npinMode(8, OUTPUT);\npinMode(9, OUTPUT);\npinMode(10, OUTPUT);\npinMode(11, OUTPUT);\npinMode(2, OUTPUT);\n}\nvoid loop\n{\ndigitalWrite(2, HIGH);\ndelay(timer);\ndigitalWrite(2, LOW);\ndelay(timer);\ndigitalWrite(4, HIGH);\ndelay(timer);\ndigitalWrite(4, LOW);\ndelay(timer);\ndigitalWrite(6, HIGH);\ndelay(timer);\ndigitalWrite(6, LOW);\ndelay(timer);\ndigitalWrite(8, HIGH);\ndelay(timer);\ndigitalWrite(8, LOW);\ndelay(timer);\ndigitalWrite(10, HIGH);\ndelay(timer);\ndigitalWrite(10, LOW);\ndelay(timer);\ndigitalWrite(3, HIGH);\ndelay(timer);\ndigitalWrite(3, LOW);\ndelay(timer);\ndigitalWrite(5, HIGH);\ndelay(timer);\ndigitalWrite(5, LOW);\ndelay(timer);\ndigitalWrite(7, HIGH);\ndelay(timer);\ndigitalWrite(7, LOW);\ndelay(timer);\ndigitalWrite(9, HIGH);\ndelay(timer);\ndigitalWrite(9, LOW);\ndelay(timer);\ndigitalWrite(11, HIGH);\ndelay(timer);\ndigitalWrite(11, LOW);\ndelay(timer);\n}\n", fichier);
	fclose(fichier);
    }
    return AllumageUneSurDeux();
}

void AllumageLEDDeux(){
	FILE* fichier = NULL;
            fichier = fopen("led2.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(2, OUTPUT);\n}\nvoid loop{\ndigitalWrite(2, HIGH);\n}\n", fichier);
            fclose(fichier);
	        }
	return AllumageLEDDeux();
}

void AllumageLEDTrois(){
	FILE* fichier = NULL;
            fichier = fopen("led3.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(3, OUTPUT);\n}\nvoid loop{\ndigitalWrite(3, HIGH);\n}\n", fichier);
            fclose(fichier);
        }

}

void AllumageLEDQuatre(){
	FILE* fichier = NULL;
            fichier = fopen("led3.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(4, OUTPUT);\n}\nvoid loop{\ndigitalWrite(4, HIGH);\n}\n", fichier);
            fclose(fichier);
	        }

}

void AllumageLEDCinq(){
	FILE* fichier = NULL;
            fichier = fopen("led4.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(5, OUTPUT);\n}\nvoid loop{\ndigitalWrite(5, HIGH);\n}\n", fichier);
            fclose(fichier);
	        }

}

void AllumageLEDSix(){

	FILE* fichier = NULL;
            fichier = fopen("led5.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(6, OUTPUT);\n}\nvoid loop{\ndigitalWrite(6, HIGH);\n}\n", fichier);
            fclose(fichier);
	        }

}

void AllumageLEDSept(){
	FILE* fichier = NULL;
            fichier = fopen("led6.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(7, OUTPUT);\n}\nvoid loop{\ndigitalWrite(7, HIGH);\n}\n", fichier);
            fclose(fichier);
	        }

}

void AllumageLEDHuit(){
	FILE* fichier = NULL;
            fichier = fopen("led7.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(8, OUTPUT);\n}\nvoid loop{\ndigitalWrite(8, HIGH);\n}\n", fichier);
            fclose(fichier);
	        }

}

void AllumageLEDNeuf(){
	FILE* fichier = NULL;
            fichier = fopen("led8.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(9, OUTPUT);\n}\nvoid loop{\ndigitalWrite(9, HIGH);\n}\n", fichier);
            fclose(fichier);
	        }

}

void AllumageLEDDix(){
	FILE* fichier = NULL;
            fichier = fopen("led9.ino", "w");
            if (fichier != NULL)
            {
            fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(10, OUTPUT);\n}\nvoid loop{\ndigitalWrite(10, HIGH);\n}\n", fichier);
            fclose(fichier);
	        }

}

void AllumageLEDOnze(){
	FILE* fichier = NULL;
    fichier = fopen("led10.ino", "w");
    if (fichier != NULL)
     {
     fputs("int timer=300;\nvoid setup() {\n/*Définir les OUTPOUT utilisés*/\npinMode(11, OUTPUT);\n}\nvoid loop{\ndigitalWrite(11, HIGH);\n}\n", fichier);
     fclose(fichier);
     }


}
