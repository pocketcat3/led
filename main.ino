unsigned long tmr;
unsigned long tmr2;
unsigned long tmr3;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  if (millis() - tmr >= 1000) {
    digitalWrite(13, !digitalRead(13));
    tmr = millis();
  }
  if (millis() - tmr2 >= 2000) {
    digitalWrite(12, !digitalRead(12));
    tmr2 = millis();
  }
  if (millis() - tmr3 >= 5000) {
    digitalWrite(11, !digitalRead(11));
    tmr3 = millis();
  }
}
