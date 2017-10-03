int aantalLeds = 3;
void loop(){
  for(int i = 1; i <= aantalLeds; i++){
    digitalWrite(i-1,false);
    digitalWrite(i,true);
    delay(400);
  }
  for(int i = aantalLeds; i > 0; i--){
    digitalWrite(i+1,false);
    digitalWrite(i,true);
    delay(400);
  }
}
