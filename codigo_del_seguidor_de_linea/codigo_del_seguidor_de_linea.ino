//void setup() {
  // put your setup code here, to run once:

//}

//void loop() {
  // put your main code here, to run repeatedly:

//}
int avance1 = 9;
int retroceso1 = 6;
int avance2 = 5;
int retroceso2 = 3;

int derecha = 13;
int izquierda = 12;

void setup() {
pinMode(avance1,OUTPUT);
pinMode(retroceso1,OUTPUT);
pinMode(avance2,OUTPUT);
pinMode(retroceso2,OUTPUT);

pinMode(derecha,INPUT);
pinMode(izquierda,INPUT);

}

void loop() {
  if(digitalRead(derecha)== 0 && (digitalRead(izquierda)==0)){
    digitalWrite(avance1,HIGH);
    digitalWrite(retroceso1,LOW);
    digitalWrite(avance2,HIGH);
    digitalWrite(retroceso2,LOW);
    }

    if(digitalRead(derecha)==1 && (digitalRead(izquierda)==1)){
      digitalWrite(avance1,HIGH);
      digitalWrite(retroceso1,LOW);
      digitalWrite(avance2,HIGH);
      digitalWrite(retroceso2,LOW);
    }
    if(digitalRead(derecha)==1 && (digitalRead(izquierda)==0)){
      digitalWrite(avance1,LOW);
      digitalWrite(retroceso1,HIGH);
      digitalWrite(avance2,HIGH);
      digitalWrite(retroceso2,LOW);
      }
    if(digitalRead(derecha)==0 && (digitalRead(izquierda)==1)){
      digitalWrite(avance1,HIGH);
      digitalWrite(retroceso1,LOW);
      digitalWrite(avance2,LOW);
      digitalWrite(retroceso2,HIGH);
      }

}
