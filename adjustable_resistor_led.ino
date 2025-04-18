// 定義引腳
const int potPin = A0; // 電位器連接的模擬輸入引腳
const int ledPin = 9;  // LED連接的PWM輸出引腳

void setup() {
  // 初始化引腳
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // 讀取電位器的值（範圍：0-1023）
  int potValue = analogRead(potPin);

  // 將電位器的值映射到PWM輸出範圍（0-255）
  int brightness = map(potValue, 0, 1023, 0, 255);

  // 設置LED亮度
  analogWrite(ledPin, brightness);

  // 延遲以穩定輸出
  delay(10);
}
