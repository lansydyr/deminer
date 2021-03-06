void pulseOut(int pin, int duration) {
  digitalWrite(pin, HIGH);
  delayMicroseconds(duration);
  digitalWrite(pin, LOW);
}

void p(const char *format, ...) {
  va_list args;
  va_start(args, format);
  vsnprintf(data, 100, format, args);
  Serial.print(data);
  va_end(args);
}
