//time the multivibrators

int Pin=13;
double input;
double counter;
////////////////////////////
void setup(){

  pinMode(Pin, INPUT);

  Serial.begin(9600);
}

void loop(){
  
    input = digitalRead(Pin);
    //Serial.print(input);
    while(input > 0.5){
      delay(100);//delaying every .1 seconds so counting every .1 second
      counter++;
      Serial.print(".");
      input = digitalRead(Pin);
    }
    if(counter != 0){
      Serial.print("\nThe timer ran for ");
      Serial.print(counter/10);
      Serial.print(" seconds\n");
      counter = 0;
      delay(4000);
    }
 }
