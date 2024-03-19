#define led 2
#define boton 3

int contador = 0;

void setup() {
  
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT);

  Serial.begin(9600);

}

void loop() {
  
  if(digitalRead(boton) == HIGH){

    Serial.print(contador);
    Serial.print("\n");

    digitalWrite(led, HIGH);

    contador ++;
    delay(500);

  } else {

    digitalWrite(led, LOW);

  }


}
