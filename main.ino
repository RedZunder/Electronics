#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11); // RX, TX

//pins
#define R 3
#define G 6
#define B 5

void setup() 
{
    Serial.begin(9600);
    BTSerial.begin(9600);
    Serial.println("Echo test started. Type below:");
}

String x="";

void loop() 
{

  if (BTSerial.available()) 
  {
      x=BTSerial.readString();
      Serial.print(x);
      decode(x);
  }

}



/**
 * @brief   Turn on the right colors for the RGB LED
 *          by parsing char to int and scaling to 0-255.
 * @ss      The string received from Bluetooth, RxGxBx
 */
void decode(String ss)
{
    analogWrite(R,(ss[1]-'0') *25);    
    analogWrite(G,(ss[3]-'0') *25);
    analogWrite(B,(ss[5]-'0') *25);
}
