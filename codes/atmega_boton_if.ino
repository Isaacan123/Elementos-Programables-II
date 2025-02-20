int led = 11;
int boton = 10;

int status_boton = 0;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT);
}

void loop(){
  status_boton = digitalRead(boton);
  
  if (status_boton == HIGH) {
    digitalWrite(led, HIGH);  // Enciende el LED si el botón está presionado
  } else {
    digitalWrite(led, LOW);   // Apaga el LED si el botón no está presionado
  }
}