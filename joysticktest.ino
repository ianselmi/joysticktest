
#include <ESP8266WiFi.h>

// digital
#define UP D11 
#define DOWN D10 
  static const unsigned long REFRESH_INTERVAL = 1000; // ms
  static unsigned long lastRefreshTime = 0;
  
void setup()
{
  Serial.begin(9600);
  delay(10);

  pinMode(UP, INPUT);
  pinMode(DOWN, INPUT);

  Serial.println("Initialized");
}

void loop()
{     
  if(millis() - lastRefreshTime >= REFRESH_INTERVAL)
  {    
    Serial.print("UP Status:"); Serial.println(digitalRead(UP));
    Serial.print("DOWN Status:"); Serial.println(digitalRead(DOWN));
    lastRefreshTime += REFRESH_INTERVAL;
  } 
    
}
