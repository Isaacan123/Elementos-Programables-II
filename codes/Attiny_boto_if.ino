int led = 3;     
int boton = 1;
int status_boton=LOW; 

void setup() {
  pinMode(led, OUTPUT);  
  pinMode(boton, INPUT); 
}

void loop() {
  status_boton = digitalRead(boton);  

  if (status_boton==HIGH){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, status_boton);

  }
      
}