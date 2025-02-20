int led=11;
int boton=10;
 
int status_boton=0;
 
void setup(){
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT);
}
 
void loop(){
  status_boton=digitalRead(boton);
  digitalWrite(led, status_boton);
}
 