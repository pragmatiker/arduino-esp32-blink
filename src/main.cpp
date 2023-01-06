#include <Arduino.h>
#define GREENLED 2

void showLED(int, int, bool);

void setup() {
  Serial.begin(19200);
  pinMode(GREENLED, OUTPUT);
  Serial.println("Start");
}

void loop() {
  int count;
  count=4;
  for (size_t i = 0; i < count; i++)
  {
    showLED(GREENLED,2000, HIGH);
    showLED(GREENLED,200, LOW);
  }
  count=5;
  for (size_t i = 0; i < count; i++)
  {
    showLED(GREENLED,30, HIGH);
    showLED(GREENLED,30, LOW);
  }
  count=2;
  for (size_t i = 0; i < count; i++)
  {
    showLED(GREENLED,400, HIGH);
    showLED(GREENLED,200, LOW);
  }
  count=15;
  for (size_t i = 0; i < count; i++)
  {
    showLED(GREENLED,30, HIGH);
    showLED(GREENLED,30, LOW);
  }
  count=5;
  for (size_t i = 0; i < count; i++)
  {
    showLED(GREENLED,400, HIGH);
    showLED(GREENLED,200, LOW);
  }
  count=9;
  for (size_t i = 0; i < count; i++)
  {
    showLED(GREENLED,30, HIGH);
    showLED(GREENLED,30, LOW);
  }
}

void showLED(int pin, int delayPeriod, bool LedStatus)
{
  double delayPeriodDbl = delayPeriod / 1000.00;
  char delayPeriodStr[5];
  char buffer[40];
  dtostrf(delayPeriodDbl,2,2,delayPeriodStr);

  if (LedStatus)
  {
    sprintf(buffer,"The green light is on for %s seconds", delayPeriodStr);
    Serial.println(buffer);
    digitalWrite(GREENLED,HIGH);
  }
  else
  {
    sprintf(buffer,"The green light is off for %s seconds", delayPeriodStr);
    Serial.println(buffer);
    digitalWrite(GREENLED,LOW);
  }
  delay(delayPeriod);
}