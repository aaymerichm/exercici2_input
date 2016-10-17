void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, INPUT_PULLUP);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int r = digitalRead(13);
  Serial.println(r);

  delay(100);



if(r==0){
  
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(500);   // wait for a second

} else {

  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second

  
}

}
