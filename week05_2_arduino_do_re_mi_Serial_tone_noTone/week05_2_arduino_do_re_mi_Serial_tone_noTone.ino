//week05_2_arduino_do_re_mi_Serial_tone_noTone
void setup() {
  Serial.begin(9600); //USB Serial 開始傳輸，速度9600
  tone(8, 523, 100); delay(200);
  tone(8, 587, 100); delay(200);
  tone(8, 659, 100); delay(200);
  tone(8, 587, 100); delay(200);
  tone(8, 523, 100); delay(200);
}
char c = '0';
void loop() {
  if (Serial.available()) {
    c = Serial.read();
  }
  if (c == '0') noTone(8);
  if (c == '1') tone(8, 523, 100);
  if (c == '2') tone(8, 587, 100);
  if (c == '3') tone(8, 659, 100);
}
