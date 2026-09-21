//week03_2_arduino_delay_blink
void setup() {
  pinMode(2, INPUT_PULLUP);
  for (int i=3; i<=13; i++) pinMode(i, OUTPUT);
}

void loop() {
  for (int i=3; i<=7; i++) digitalWrite(i, HIGH);
  for (int i=8; i<=13; i++) digitalWrite(i, LOW);
  delay(500);
  for (int i=3; i<=7; i++) digitalWrite(i, LOW);
  for (int i=8; i<=13; i++) digitalWrite(i, HIGH);
  delay(500);
}
