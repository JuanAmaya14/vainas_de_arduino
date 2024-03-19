#define ledDerecha 2
#define botonDerecha 3
#define botonEstacionamiento 4
#define botonIzquierda 5
#define ledIzquierda 6


void setup() {

  pinMode(ledDerecha, OUTPUT);
  pinMode(botonDerecha, INPUT);
  pinMode(botonEstacionamiento, INPUT);
  pinMode(botonIzquierda, INPUT);
  pinMode(ledIzquierda, OUTPUT);
}

void loop() {

  if (digitalRead(botonDerecha) == HIGH) {

    EncenderApagarLedDerecha();
  } else if (digitalRead(botonIzquierda) == HIGH) {

    EncenderApagarLedIzquierda();
  } else if (digitalRead(botonEstacionamiento == HIGH)) {

    Estacionamiento();
  }
}

void EncenderApagarLedDerecha() {

    while (digitalRead(botonDerecha) == HIGH) {

    digitalWrite(ledDerecha, HIGH);

    delay(200);

    digitalWrite(ledDerecha, LOW);

    delay(200);
    }
}

void EncenderApagarLedIzquierda() {

    while (digitalRead(botonIzquierda) == HIGH) {

    digitalWrite(ledIzquierda, HIGH);

    delay(200);

    digitalWrite(ledIzquierda, LOW);

    delay(200);
    }
}

void Estacionamiento() {

  while (digitalRead(botonEstacionamiento) == HIGH) {

    digitalWrite(ledIzquierda, HIGH);
    digitalWrite(ledDerecha, HIGH);

    delay(200);

    digitalWrite(ledIzquierda, LOW);
    digitalWrite(ledDerecha, LOW);

    delay(200);
  }
}
