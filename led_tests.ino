void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // potentiometer-activated LED on pin 10
  int sensorValue = analogRead(A0);
  float x = sensorValue * (255.0 / 1023.0);
  float voltage = sensorValue * (5.0 / 1023.0);
  Serial.println(voltage); // for testing
  analogWrite(10, x);

  // button-activated LED on pin 13
  if (digitalRead(5)==1 and digitalRead(10)==LOW)
  {
    digitalWrite(10, HIGH); // turn the LED on
  }
  else if (digitalRead(5)==1 and digitalRead(10)==HIGH)
  {
    digitalWrite(10, LOW);    // turn the LED off
  }
}
