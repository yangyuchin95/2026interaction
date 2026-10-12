//week06_1_arduino_pin_2_button_INPUT_PULLUP
void setup() {
  pinMode(2, INPUT_PULLUP); //預設pin2是button
  pinMode(8, OUTPUT); //預設pin8是Buzzer
  tone(8, 523, 100); //啟動聲
}

void loop() {
  if ( digitalRead(2) == LOW ){
     tone(8, 523, 100); //0.1秒
     delay(100);
  }
}
