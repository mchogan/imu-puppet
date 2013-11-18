/*
  Print "Hello" to serial monitor
 
 The circuit:
 
 Just plug the Arduino in with USB
  
 This example code is in the public domain.
 
 */

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
}

void loop() {
  // print hello to the serial monitor
  Serial.println("Hello" );                       

  // wait before the next loop (milliseconds)
  delay(1000);                     
}
