#define ledVerdeVehiculo 2
#define ledAmarilloVehiculo 3
#define ledRojoVehiculo 4

#define boton 5

#define ledVerdePeaton 6
#define ledRojoPeaton 7

unsigned long tiempoAnterior = 0;

void setup() {

  pinMode(ledAmarilloVehiculo, OUTPUT);
  pinMode(ledVerdeVehiculo, OUTPUT);
  pinMode(ledRojoVehiculo, OUTPUT);

  pinMode(ledVerdePeaton, OUTPUT);
  pinMode(ledRojoPeaton, OUTPUT);

  pinMode(boton, INPUT);
}

void loop() {

  unsigned long tiempoActual = millis();

  if (digitalRead(boton) == HIGH) {

    if (tiempoActual - tiempoAnterior >= 4000) {

      tiempoAnterior = tiempoActual;

      PrenderApagarLedVerdeVehiculo(true);

      prenderLedAmarilloVehiculo();

      PrenderApagarLedRojoVehiculo(true);
    }

  } else {

    PrenderApagarLedsPeaton(false);

    PrenderApagarLedRojoVehiculo(false);

    PrenderApagarLedVerdeVehiculo(false);
  }
}

void PrenderApagarLedsPeaton(bool senhal) {

  if (senhal) {

    delay(1000);
    digitalWrite(ledRojoPeaton, LOW);
    digitalWrite(ledVerdePeaton, HIGH);

  } else {

    digitalWrite(ledRojoPeaton, HIGH);
    digitalWrite(ledVerdePeaton, LOW);
  }
}

void PrenderApagarLedVerdeVehiculo(bool senhal) {

  if (senhal) {

    digitalWrite(ledVerdeVehiculo, LOW);

  } else {

    digitalWrite(ledVerdeVehiculo, HIGH);
  }
}

void prenderLedAmarilloVehiculo() {

  digitalWrite(ledAmarilloVehiculo, HIGH);
  delay(2500);
  digitalWrite(ledAmarilloVehiculo, LOW);
}

void PrenderApagarLedRojoVehiculo(bool senhal) {

  if (senhal) {

    digitalWrite(ledRojoVehiculo, HIGH);
    PrenderApagarLedsPeaton(true);
    delay(10000);
    parpadearLedVerdePeaton();

  } else {

    delay(2000);
    digitalWrite(ledRojoVehiculo, LOW);
  }
}

void parpadearLedVerdePeaton() {

  int parpadeos = 0;

  while (parpadeos <= 10) {

    digitalWrite(ledVerdePeaton, HIGH);
    delay(200);
    digitalWrite(ledVerdePeaton, LOW);
    delay(200);

    parpadeos++;
  }
}