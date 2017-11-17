int choiceheartdisplay = 0;
int a=1000;
int b=1000;
int i=0;
int choose=0;
int z=0;
int timerms; // Notre timer en millisecondes
float timers; // Notre timer en secondes
volatile int sensorValue; // Variable de stockage de la sortie A0
volatile int btm; // Nos battements
volatile int seuil = 650; // Notre seuil fixé
                           

void setup()
{
  Serial.begin(9600);

}
void loop(){
  sensorValue = analogRead(A0);
  if(sensorValue < .9*1023) // Si nous enregistrons un signal plus faible que d'habitude nous enregistrons un battement.
  {
    btm+=1;

    timerms++;
    timers = timerms * 0,001; // Conversion millisecondes à secondes
 
    Serial.println("#####################MENU#######################");
    Serial.println("# 1# Allumer toutes les LEDs                   #");
    Serial.println("# 2# Allumer une LED sur deux                  #");
    Serial.println("# 3# Allumer une LED sur trois                 #");
    Serial.println("# 4# Allume une LED sur quatre                 #");
    Serial.println("# 5# Allume une LED sur cinq                   #");
    Serial.println("# 6# Allume une LED sur six                    #");
    Serial.println("# 7# Allumer une LED sur sept                  #");
    Serial.println("# 8# Allumer une LED sur huit                  #");
    Serial.println("# 9# Allumer une LED sur neuf                  #");
    Serial.println("#10# Allumer une LED sur dix                   #");
    Serial.println("#11# Allumer une LED au choix                  #");
    Serial.println("#12# Allumer les LED en mode chenille          #");
    Serial.println("################################################");

    for (int n = 2; n <= 11; n++)
    {
      pinMode(n, OUTPUT);
    }
    while (Serial.available() == 0);
     choiceheartdisplay = Serial.parseInt();
     Serial.print("Vous avez choisi l'affichage : ");
     Serial.println(choiceheartdisplay);
     }

     if (choiceheartdisplay == 1) {
   i = 1;
  }

  if (choiceheartdisplay == 2) {
   i = 2;
  }

  if (choiceheartdisplay == 3) {
   i = 3;
  }

  if (choiceheartdisplay == 4) {
   i = 4;
  }

  if (choiceheartdisplay == 5) {
   i = 5;
  }

  if (choiceheartdisplay == 6) {
   i = 6;
  }

  if (choiceheartdisplay == 7) {
   i = 7;
  }

  if (choiceheartdisplay == 8) {
   i = 8;
  }

  if (choiceheartdisplay == 9) {
   i = 9;
  }

  if (choiceheartdisplay == 10) {
   i = 10;
  }

  if (choiceheartdisplay == 11) {
   a = 100;
   while(z==0){
    Serial.println("Entrez le chiffre de la LED souhaitée");
    while (Serial.available() == 0);
    choose = Serial.parseInt();
    Serial.print("Vous avez choisi la LED: ");
    Serial.println(choose);

    if ((choose > 10) || (choose <1)){
      Serial.println("Erreur");
      Serial.println("Veuillez choisir une autre LED comprise entre 1 et 10");
    }
    else z=1;
   }
   digitalWrite(choose+1, HIGH);
   delay(a);
   digitalWrite(choose+1, LOW);
   delay(a);
  }
  if (choiceheartdisplay == 12){
    i = 1;
    a = 50;
    b = 10;
    for (int n = 2; n<=11 ;n=n+i)
    {
      digitalWrite(n, HIGH);
      delay(50);
      digitalWrite(n, LOW);
      delay(10);
      }
      }
   if ((choiceheartdisplay != 11) && (choiceheartdisplay !=12) &&(choiceheartdisplay <= 12)&&(choiceheartdisplay >=1)){
    for (int n=2; n<=11; n=n+i)
    {
      digitalWrite(n, HIGH);
    }
    }
    delay(a);
    for (int n=2; n<=11; n=n+i)
    {
      digitalWrite(n, LOW);
    }
    delay(b);
     
  
 if(sensorValue > .9*1023)
   { 
  // Sinon, nous n'enregistrons pas de battement.
    btm = 0;
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
   }
  
  Serial.println(btm);
  Serial.print(";");
  Serial.println(timers);
}
