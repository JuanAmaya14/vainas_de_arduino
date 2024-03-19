
#define ledCiclo 2
#define boton 3
#define ledFinalCiclo 4

void setup() {
  
  pinMode(ledCiclo, OUTPUT);
  pinMode(boton, INPUT);
  pinMode(ledFinalCiclo, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  
  if(digitalRead(boton) == HIGH){

    ledFinal(true);
    cicloLed();

  } else { 

    ledFinal(false);

  }

}

void cicloLed(){

  int contador = 0;

  while(contador <= 10000){

    digitalWrite(ledCiclo, HIGH);
    delay(100);
    digitalWrite(ledCiclo, LOW);
    delay(100);

    Serial.print(contador);
    Serial.print("\n");
    contador++;

  }

}

void ledFinal(bool senhal){

  if(senhal == false){

    digitalWrite(ledFinalCiclo, HIGH);

  } else {

    digitalWrite(ledFinalCiclo, LOW);

  }

}
