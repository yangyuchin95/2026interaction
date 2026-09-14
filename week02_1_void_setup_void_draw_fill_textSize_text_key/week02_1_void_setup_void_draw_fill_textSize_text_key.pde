//week02_1_void_setup_void_draw_fill_textSize_text_key
void setup(){
  size(500, 500);
}
void draw(){
  if (mousePressed) background(#C5CBEA);
  else background(#DBD5ED); //用color selector
  fill(0, 0, 255);
  textSize(80);
  text("key: "+key, 200, 300); //注音輸入法關掉就能收到key
}
