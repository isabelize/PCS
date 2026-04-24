int red = 2;
int yellow = 3;
int green = 4;


void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
   digitalWrite(red, HIGH);
   digitalWrite(yellow, LOW);
   digitalWrite(green, LOW);
   delay(5000);

   digitalWrite(red, LOW);
   digitalWrite(yellow, HIGH);
   digitalWrite(green, LOW);
   delay(2000);

   digitalWrite(red, LOW);
   digitalWrite(yellow, LOW);
   digitalWrite(green, HIGH);
   delay(5000);
}
