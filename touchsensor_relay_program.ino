int touch=7;
int relay=0;
void setup() {
 pinMode(touch , INPUT);
 pinMode(relay , OUTPUT);
 }

void loop() {
  int tin=digitalRead(touch);

  if(tin==1){
   digitalWrite(relay,HIGH);
  }
  else{
    digitalWrite(relay,LOW);
  }


}
