
int pin_echo = 4;
int pin_trigger = 5; 
long echo = 0; // value returned from HC-SR04 [us]
float sos = 0.0343; //speed of sound in cm/us

void setup() {
  // put your setup code here, to run once:
  pinMode(pin_echo, INPUT);
  pinMode(pin_trigger, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  set_measurement();
  echo = pulseIn(pin_echo, HIGH);
  float distance = (echo/2)*sos;
  Serial.print("Distance is ");
  Serial.print(distance);
  Serial.println(" cm.");
  delay(250);
}

void set_measurement()
{
  digitalWrite(pin_trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(pin_trigger, HIGH);
  delayMicroseconds(5);
  digitalWrite(pin_trigger, LOW);
}
