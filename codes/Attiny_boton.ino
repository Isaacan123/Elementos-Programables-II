int led = 3;     
int boton = 1;
int status_boton; 

void setup() {
  pinMode(led, OUTPUT);  
  pinMode(boton, INPUT); 
}

void loop() {
  status_boton = digitalRead(boton);  
  digitalWrite(led, status_boton);    
}
