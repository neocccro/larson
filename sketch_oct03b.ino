int aantalLeds = 8;
int offSet = 1;
void setup(){
  for(int i = offSet + 1; i < aantalLeds + offSet + 1; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop(){
  for(int i = 2; i <= aantalLeds; i++){
    digitalWrite(i-1+offSet,false);
    digitalWrite(i+offSet,true);
    delay(200);
  }
  for(int i = aantalLeds-1; i > 0; i--){
    digitalWrite(i+1+offSet,false);
    digitalWrite(i+offSet,true);
    delay(200);
  }
}
