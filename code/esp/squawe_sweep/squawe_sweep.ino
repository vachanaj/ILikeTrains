const int PWM_PIN = 9;

void setup() {
  pinMode(PWM_PIN, OUTPUT);
  analogWriteFrequency(PWM_PIN, 18700);  // 20 kHz
  analogWrite(PWM_PIN, 128);             // ~50% duty (0-255)
}

void loop() {
  
}