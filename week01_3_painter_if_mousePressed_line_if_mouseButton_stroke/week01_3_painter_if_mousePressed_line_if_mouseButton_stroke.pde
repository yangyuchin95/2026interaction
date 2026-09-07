// week01_3_painter_if_mousePressed_line_if_mouseButton_stroke
void setup() {
  size(500,500);
}

void draw() {
  if (mouseButton==LEFT) stroke(255, 0, 0);
  if (mouseButton==CENTER) stroke(0, 255, 0);
  if (mouseButton==RIGHT) stroke(0, 0, 255);
  if (mousePressed) line(mouseX, mouseY, pmouseX, pmouseY);
  // 按下去時(用剛剛的色彩)畫線mouse座標、之前mouse座標
}
// 不懂的字可選Find in References
