char incomingByte; // for incoming serial data
//String incomingByte; // for incoming serial data
//int incomingByte = 0; // for incoming serial data
//float incomingByte = 0; // for incoming serial data
int lamp1 = 2; //porta digital 2
int lamp2 = 3; //porta digital 2
int lamp3 = 4; //porta digital 2

void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
  pinMode(lamp1, OUTPUT); // porta digital SAIDA
   pinMode(lamp2, OUTPUT); // porta digital SAIDA
    pinMode(lamp3, OUTPUT); // porta digital SAIDA
}
void loop() {
  // reply only when you receive data:
  if (Serial.available() > 0) 
  {
    // read the incoming byte:
    incomingByte = Serial.read(); // leitura de caracter
    //incomingByte = Serial.parseInt(); // leitura de inteiro
    //incomingByte = Serial.parseFloat(); // leitura de float
    //incomingByte = Serial.readString(); // leitura de String

    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte);

    // Controle da lampada
    if(incomingByte == 'l')
    {
      Serial.print("Luz LIGADA");
      digitalWrite(lamp1, HIGH);
      digitalWrite(lamp2, HIGH);
      digitalWrite(lamp3, HIGH);
    }
    else if(incomingByte == 'd')
    {
      Serial.print("Luz DESLIGADA");
      digitalWrite(lamp1, LOW);
    }
    else 
    {
      Serial.print("Caracter Invalido");
    }

  } // if do serial avaliable

  //Serial.println("dentro do loop");
}   // if do loop