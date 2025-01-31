//MON DA: 2370489

int led = 13;

const int delayQuarterSec = 250;
const int delayTwoSec = 2000;

void delAllume() {
  Serial.println("Allume - 2370489");
  digitalWrite(led, HIGH);
  delay(delayTwoSec);
}

void delBlink(int blinkTime) {
  Serial.println("Clignotement - 2370489");
  digitalWrite(led, LOW);
  delay(delayQuarterSec);
  for (int i = 0; i < blinkTime; i++) { 
    digitalWrite(led, HIGH);
    delay(delayQuarterSec);
    digitalWrite(led, LOW);
    delay(delayQuarterSec);
  } 
}

void delFade() {
  static int brightness = 255; // Valeur de luminosité
  static int delayFade = 30;
  brightness = 255;
  Serial.println("Variation - 2370489");
  while (brightness > 0) {
      analogWrite(led, brightness); // Change la luminosité de la LED
      brightness = brightness - fadeAmount; // Change la valeur de luminosité

  // Inverse la variation de luminosité quand la valeur de luminosité atteint 0 ou 255
  // Attend 30 millisecondes avant de recommencer
  delay(delayFade);
  }
}

void delOff() {
    Serial.println("Off - 2370489");
  digitalWrite(led, LOW);
  delay(delayTwoSec);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delAllume();
  delBlink(5); // 8/2+1 = 5
  delFade();
  delOff();

}