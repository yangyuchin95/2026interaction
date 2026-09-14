//week02_5_arduino_Serial_begin_available_read_if_tone
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //USB Serial 開始傳輸，速度9600 bps
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
      char c = Serial.read();
      if (c=='1') tone(8, 523, 1000);
      if (c=='2') tone(8, 587, 1000);
      if (c=='3') tone(8, 659, 1000);
    }
}
