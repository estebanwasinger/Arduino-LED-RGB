int REDPin = 3;    // RED pin of the LED to PWM pin 3
int GREENPin = 6;  // GREEN pin of the LED to PWM pin 6
int BLUEPin = 5;   // BLUE pin of the LED to PWM pin 5
int brightness = 0; // LED brightness
int increment = 1;  // brightness increment

void setup()
{
  pinMode(REDPin, OUTPUT);
  pinMode(GREENPin, OUTPUT);
  pinMode(BLUEPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  brightness = brightness + increment;  // increment brightness for next loop iteration

  if (brightness <= 0 || brightness >= 100)    // reverse the direction of the fading
  {
    increment = -increment;
  }
  brightness = constrain(brightness, 0, 255);
  analogWrite(REDPin, 255 );
  analogWrite(GREENPin, 50 );
  analogWrite(BLUEPin, 0 );

  delay(20);  // wait for 20 milliseconds to see the dimming effect
}
