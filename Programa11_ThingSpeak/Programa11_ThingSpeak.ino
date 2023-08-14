#include "ThingSpeak.h"
#include "secrets.h"
#include <WiFi.h>

#include "DHT.h"

#define DHTPIN 32     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE);

char ssid[] = SECRET_SSID;   // SSID (name) da rede
char pass[] = SECRET_PASS;   // senha da rede
int keyIndex = 0;            // PIN caso a rede for WEP
WiFiClient  client;

unsigned long myChannelNumber = SECRET_CH_ID;
const char * myWriteAPIKey = SECRET_WRITE_APIKEY;


String myStatus = "";

void setup() {
  Serial.begin(115200);  //Inicializando monitor

  WiFi.mode(WIFI_STA);   
  ThingSpeak.begin(client);  //Inicializando thingspeak
  dht.begin();
}

void loop() {

  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();


  // Conectar ou reconectar no wifi
  if(WiFi.status() != WL_CONNECTED){
    Serial.print("Conectado na rede: ");
    Serial.println(SECRET_SSID);
    while(WiFi.status() != WL_CONNECTED){
      WiFi.begin(ssid, pass);  //Conectar com WPA/WPA2 wifi.
      Serial.print(".");
      delay(5000);     
    } 
    Serial.println("\nConectado.");
  }

  // set the fields with the values
  ThingSpeak.setField(1, t);
  ThingSpeak.setField(2, h);
    
  
  // status da thingspeak
  ThingSpeak.setStatus(myStatus);
  
  // Escreve no canal da thingspeak
  int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
  if(x == 200){
    Serial.println("Canal atualizado com sucesso.");
  }
  else{
    Serial.println("Problema ao atualizar o canal. HTTP erro " + String(x));
  }
  
  
  
  delay(20000); // Tempo para mandar pra nuvem
}
