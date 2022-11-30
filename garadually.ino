// 徐々に明るく光らせる
// 一秒ごとにリセット

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 100; j++) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(i);
      digitalWrite(LED_BUILTIN, LOW);
      delay(10 - i);
    }
  }
  delay(1000);

}
