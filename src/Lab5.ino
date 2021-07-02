SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(A5, INPUT);
  pinMode(D8, OUTPUT);

}

int maxValue;
int minValue;

void loop() {
  
  int value = analogRead(A5);

  maxValue = max(maxValue, value);
  minValue = min(minValue, value);
  map(value, minValue, maxValue, 0, 255);

  analogWrite(D8, value);

}