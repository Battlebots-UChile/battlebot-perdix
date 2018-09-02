char nombre[10] = "Buldrini";
char password[10] = "1234";
char baud = '4';
char entrada;
//4,5,6,7 Motores DC Ruedas
//8,9 Motor Sierra

void motores(int l);

void setup() {
  //Definimos a que corresponde cada pin
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  //Primero comprueba si el dispositivo Bluetooth esta disponible
  if(Serial.available()>=1){
    //Una vez conectado, lee las letras enviadas por el dispositivo movil
    entrada = Serial.read();
    //Finalmente, ejecuta las instrucciones
    motores(entrada);
   }
}
//La siguiente funcion controla todos los motores DC dispuestos en Perdix
void motores(int l){
  //Hacia Adelante
  if (l=='F'){
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
  }
  //Hacia Atras
  else if (l=='B'){
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
  }
  //Hacia Arriba a la Derecha
  else if (l=='C'){
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
  }
  //Hacia Arriba a la Izquierda
  else if (l=='A'){
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
  }
  //Hacia Atras a la Derecha
  else if (l=='E'){
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
  }
  //Hacia Atras a la Izquierda
  else if (l=='D'){
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
  }
  //Parar
  else if (l=='S'){
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
  }
  //Giro Horario de la Sierra
  else if (l=='X'){
    digitalWrite(8, HIGH);
    digitalWrite(9,LOW);
  }
  //Giro Antihorario de la Sierra
  else if (l=='Z'){
    digitalWrite(8, LOW);
    digitalWrite(9,HIGH);
  }
  //Apagar Sierra
  else if (l=='Y'){
    digitalWrite(8, LOW);
    digitalWrite(9,LOW);
  }
}
