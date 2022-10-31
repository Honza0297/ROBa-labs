void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

int a_in = 0;
int d_in = 0;
void loop() {

	a_in = analogRead(A0);
	d_in = digitalRead(A0);

	Serial.print("a_in, d_in: ");
	Serial.print(a_in);
	Serial.print(", ");
	Serial.println(d_in);

	delay(50);

  // put your main code here, to run repeatedly:

}
