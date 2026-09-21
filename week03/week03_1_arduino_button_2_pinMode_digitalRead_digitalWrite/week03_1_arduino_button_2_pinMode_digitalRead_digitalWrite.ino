//week03_1_arduino_button_2_pinMode_digitalRead_digitalWrite
//宿營
void setup() {
  pinMode(2, INPUT_PULLUP);
  for (int i=3; i<=13; i++) pinMode(i, OUTPUT);

}

void loop() {
  if (digitalRead(2)==HIGH){
    for (int i=3; i<=7; i++) digitalWrite(i, HIGH);
    for (int i=8; i<=13; i++) digitalWrite(i, LOW);
  }else{
    for (int i=3; i<=7; i++) digitalWrite(i, LOW);
    for (int i=8; i<=13; i++) digitalWrite(i, HIGH);
  }
}
