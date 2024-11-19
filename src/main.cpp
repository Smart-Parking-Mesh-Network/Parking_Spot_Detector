#include <Arduino.h>

// SRF04-05 Module
const int trigPin = 9;
const int echoPin = 8;
const int spacePin = 12;
long duration; 
int distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(spacePin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void loop()
{
  // Distance measurement 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.println(distance);
  delay(1);
}