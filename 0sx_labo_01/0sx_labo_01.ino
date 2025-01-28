int led = 13;
int brightness = 0; // Valeur de luminosité
int fadeAmount = 5; // Valeur de variation de luminosité

void delAllume() {
  digitalWrite(led, HIGH);
  Serial.println("Allume - 2370489");
  delay(2000);
}

void delBlink() {
  Serial.println("Clignotement - 2370489");
  for (int i = 0; i < 5; i++) { // 8/2+1 = 5
    digitalWrite(led, HIGH);
    delay(250);
    digitalWrite(led, LOW);
    delay(250);
  } 
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delAllume();
  delBlink();
  analogWrite(13, 63);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}