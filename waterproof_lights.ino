
void setup() {
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
 digitalWrite(11, LOW);
 digitalWrite(10, LOW);
}
void loop() {
  for (int i = 0; i<256; i++) {
    analogWrite(10, i);
    analogWrite(11,255-i);
    delay(3);
  }
  delay(1000);
  for (int i = 0; i<256; i++) {
    analogWrite(11, i);
    analogWrite(10,255-i);
    delay(3);
  }
  delay (1000);
  //  digitalWrite(10, HIGH);
//  delay(3000);
//  digitalWrite(10, LOW);
//  digitalWrite(11, HIGH);
//  delay(3000);
//  digitalWrite(11, LOW);
  // put your main code here, to run repeatedly:

}
