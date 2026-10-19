//week07_2_processing_audio_two_SoundFile
import processing.sound.*;
SoundFile sound;
SoundFile sound2;
void setup(){
  size(300, 300);
  sound = new SoundFile(this, "music.mp3");
  sound2 = new SoundFile(this, "mi.wav");
  sound.play(); //準備音檔
}
void draw(){
  
}
void mousePressed(){
  sound2.play();
}
