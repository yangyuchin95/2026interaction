//week09_1_arduino_makeruno_PCM_D8
//Q1:Maker UNO本身可以用pin 8的buzzer利用tone()來發出單調的聲音
//Q2:請幫我找PCM相關的libraries我想試試看
//Q3:如何修改PCM Library讓他利用pin 8的軟體PWM或其他輸出技術撥放PCM?
// Maker UNO: turn ON the onboard BUZZER slide switch.
// Board selection: Arduino Uno / ATmega328P / 16 MHz.
// This sketch uses the local modified PCM.cpp, NOT the original D11 library.
#include "PCM.h"
#include "sounddata.h"

void setup() {
  startPlayback(sounddata_data, sounddata_length);
}

void loop() {
  // One-shot sample plays for 1 second. Press RESET to play again.
}
