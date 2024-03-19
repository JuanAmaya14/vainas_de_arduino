
int led = 2;

void setup() {
  
  pinMode(led, OUTPUT);

}

void loop() {

  if(digitalRead(3)){

      digitalWrite(led, HIGH);

  } else {

      digitalWrite(led, LOW);

  }

}
