unsigned long time;
int valeurPrecedente = 0;
long tempsPrecedent = 0;

void setup()
{
  Serial.begin(9600);
  Serial.println("Patientez un instant");
  time = millis();

  while((millis()-time)<1000) {
    analogRead(0);
  }

  //afficher au moniteur série pendant 50s

  while((millis()-time)< 50000){
    Serial.println(analogRead(0));
  }
}

void loop() {
  int valeurActuelle, Seuil;
  long tempsDetection;

  valeurActuelle = analogRead(0);
  Seuil = 650;

  if (valeurActuelle > Seuil) {
    if(valeurPrecedente <= Seuil) {
      tempsDetection = millis();
      if (tempsDetection > (tempsPrecedent + 200)) {
        Serial.println( (100.0 * 60) / (tempsDetection - tempsPrecedent),0);
        tempsPrecedent = tempsDetection;
        
      }
    }
  }
  valeurPrecedente = valeurActuelle;
}

