const int ledPins[] = {2, 3, 4, 5}; // LEDs: a, b, c, d
bool ledStates[] = {false, false, false, false}; // LED status

bool wasAllOn = false;
bool toggleFlag = false;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
}

void loop() {
  if (Serial.available() > 0) {
    char data = Serial.read();
    int ledIndex = -1;

    switch (data) {
      case 'a': ledIndex = 0; break;
      case 'b': ledIndex = 1; break;
      case 'c': ledIndex = 2; break;
      case 'd': ledIndex = 3; break;
    }

    if (ledIndex != -1) {
      ledStates[ledIndex] = !ledStates[ledIndex];
      digitalWrite(ledPins[ledIndex], ledStates[ledIndex] ? HIGH : LOW);
      Serial.println(data);
    }
  }

  bool allOn = true;
  for (int i = 0; i < 4; i++) {
    if (!ledStates[i]) {
      allOn = false;
      break;
    }
  }

  if (allOn && !wasAllOn) {
    Serial.println(toggleFlag ? 'f' : 'e');
    toggleFlag = !toggleFlag;
  }

  wasAllOn = allOn;
  delay(50);
}
