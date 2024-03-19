# define ledVerde 2
# define ledAmarillo 3
# define ledRojo 4

void setup() {

  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledRojo, OUTPUT);

}

void loop() {
  
  prenderLedVerde();
  
  prenderLedAmarillo();
  
  prenderLedRojo();

}

void prenderLedVerde(){

 digitalWrite(ledVerde, HIGH);
 delay(4000);
 digitalWrite(ledVerde, LOW);
 delay(100);

}

void prenderLedAmarillo(){

 digitalWrite(ledAmarillo, HIGH);
 delay(1000);
 digitalWrite(ledAmarillo, LOW);
}

void prenderLedRojo(){

 digitalWrite(ledRojo, HIGH);
 delay(4000);
 digitalWrite(ledRojo, LOW);
 delay(100);

}