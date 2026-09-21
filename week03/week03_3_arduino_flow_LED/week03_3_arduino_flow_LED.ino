//week03_3_arduino_flow_LED
//LED流動
void setup() {
  for (int i=2; i<=13; i++) pinMode(i, OUTPUT);
} //全部都會亮

void loop() {
  for (int i=2; i<=13; i++){
    for(int k=2; k<=13; k++) digitalWrite(k, LOW);
    digitalWrite(i, HIGH);
    delay(100);
  }

}
