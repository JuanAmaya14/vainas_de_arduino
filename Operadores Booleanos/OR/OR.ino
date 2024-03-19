
int led = 2;

void setup() {
  
  pinMode(led, OUTPUT);

}

void loop() {

  if(digitalRead(3) == HIGH || digitalRead(4) == HIGH){

      digitalWrite(led, HIGH);

  } else {

      digitalWrite(led, LOW);

  }

}
