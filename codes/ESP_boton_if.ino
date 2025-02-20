int LED=25;
int Boton=26;
bool status_boton=LOW;

void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(Boton,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
status_boton=digitalRead(Boton);

if (status_boton==HIGH){
  digitalWrite(LED, HIGH);
}
else{
  digitalWrite(LED, LOW);
}
}