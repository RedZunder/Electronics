#include <SoftwareSerial.h>

// Try different baud rates here (9600, 38400, 57600, 115200)
SoftwareSerial BTSerial(10, 11); // RX, TX
#define R 3
#define G 6
#define B 5

void setup() {
  Serial.begin(9600);      // Monitor
  BTSerial.begin(9600);    // Test baud
  Serial.println("Echo test started. Type below:");
}
String x="";
int i=0;
void loop() {
  if (Serial.available()) {
    x[i] = Serial.read();
    BTSerial.print(x);
  }

  if (BTSerial.available()) {
    x=BTSerial.readString();
    Serial.print(x);
    decode(x);
    i++;
  }

}

void decode(String ss)
{
    analogWrite(R,(ss[1]-'0') *25);
    analogWrite(G,(ss[3]-'0') *25);
    analogWrite(B,(ss[5]-'0') *25);
}
