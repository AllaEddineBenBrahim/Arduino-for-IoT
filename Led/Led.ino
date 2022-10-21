#define LED_VERTE 16
void setup() {
// put your setup code here, to run once:
  pinMode(LED_ROUGE, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_VERTE,LOW);
  delay(1000);
  digitalWrite(LED_VERTE,HIGH);
  delay(1000);
}