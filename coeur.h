#ifndef __include_coeur_h__
#define __include_coeur_h__

/*
 ########################################################################
 #                      écrire sur un fichier                           #
 ########################################################################
*/

void WriteOn();

/*
 ########################################################################
 #                   Fonctions d'allumage des LEDs                      #
 ########################################################################
*/

int AllumageChenille(); // Allumage des LEDs en chenille.
int AllumageUnSurTrois(); // Allumage d'une LED sur trois.
int AllumageUnSurDeux(); // Allumage d'une LED sur deux.

#endif