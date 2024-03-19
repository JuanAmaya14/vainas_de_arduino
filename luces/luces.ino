# define led2 2
# define led3 3
# define led4 4
# define led5 5
# define led6 6
# define led7 7

const int tiempo = 200;

void setup() {

  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);

}

void loop() {
  
  prenderLed2();

  prenderLed3();

  prenderLed4();

  prenderLed5();

  prenderLed6();
  
  prenderLed7();
  

}

void prenderLed2(){

 digitalWrite(led2, HIGH);
 delay(tiempo);
 digitalWrite(led2, LOW);
//  delay(tiempo);

}

void prenderLed3(){

 digitalWrite(led3, HIGH);
 delay(tiempo);
 digitalWrite(led3, LOW);
//  delay(tiempo);
}

void prenderLed4(){

 digitalWrite(led4, HIGH);
 delay(tiempo);
 digitalWrite(led4, LOW);
//  delay(tiempo);

}

void prenderLed5(){

 digitalWrite(led5, HIGH);
 delay(tiempo);
 digitalWrite(led5, LOW);
//  delay(tiempo);

}

void prenderLed6(){

 digitalWrite(led6, HIGH);
 delay(tiempo);
 digitalWrite(led6, LOW);
//  delay(tiempo);

}

void prenderLed7(){

 digitalWrite(led7, HIGH);
 delay(tiempo);
 digitalWrite(led7, LOW);
//  delay(tiempo);

}