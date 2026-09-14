//week02_2_arduino_void_setup_void_loop
void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
}
//勾勾(ctrl+R編譯程式)箭頭往右(ctrl+U上船電路板)
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  delay(1000); //等一秒
}
