//week06_2_arduino_button_change_mode_LED_flow
int mode = 0; //0:小變大;1:大變小
void setup() {
  pinMode(2, INPUT_PULLUP);
  for (int i=3; i<=13; i++){
      pinMode(i, OUTPUT);
    }
    tone(8, 523, 100); delay(100);
    tone(8, 784, 100); delay(100);
}
int prev = HIGH,now = 3; //prev是按鈕(前一瞬間)的狀態，now是現在要發亮的
void loop() {
  if ( prev == HIGH && digitalRead(2) == LOW ){ //按下瞬間
      if (mode==0) mode = 1; //0變1
      else mode = 0;//1變0
      prev = LOW;
    } else if ( prev == LOW && digitalRead(2) == HIGH ){
      prev = HIGH;
    }
    if (mode == 0){
        now++;
        if (now>13) now = 3;
        digitalWrite(now, HIGH);
        delay(100);
        digitalWrite(now, LOW);
      } else {
        now--;
        if (now<3) now = 13;
        digitalWrite(now, HIGH);
        delay(100);
        digitalWrite(now, LOW);  
      }
}
