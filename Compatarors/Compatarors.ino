//this is the code used for the comparatos.

int Pin1=9;
int Pin2=10;
int Pin3=11;
int Pin4=12;
int Pin5=13;

int Pincorrect = 8;
int input;
int d1, d2, d3, d4;
int divided,right;
////////////////////////////
void setup(){

  pinMode(Pin1, OUTPUT);
  pinMode(Pin2, OUTPUT);
  pinMode(Pin3, OUTPUT);
  pinMode(Pin4, OUTPUT);
  pinMode(Pin5, OUTPUT);
  pinMode(Pincorrect, INPUT);
  Serial.begin(9600);
}

void loop(){
//setting all inputs to low. 
    digitalWrite(Pin5, LOW);
    divided = 0;
    d1 = 0;
    d2 = 0;
    d3 = 0;
    d4 = 0;
    input = -10;
    digitalWrite(Pin4, LOW);
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin1, LOW);
//reading in input from serial input
    input = Serial.read() - 48;
    if (input >= 0){
      digitalWrite(Pin5, HIGH);
      d1 = input % 2;
      Serial.print(input);
      //Serial.print(" ");
      //Serial.print(d1);
      divided = (input - d1) / 2;
      d2 = divided % 2;
      divided = (divided - d2) / 2;
      d3 = divided % 2;
      divided = (divided - d3) / 2;
      d4 = divided % 2;
      Serial.print(" (");
      Serial.print(d4);
      Serial.print(d3);
      Serial.print(d2);
      Serial.print(d1);
      Serial.print(")\t");
      //converting number into binary and  now sending to pins as binary
      if(d1 == 1)
        digitalWrite(Pin1, HIGH);
      else
        digitalWrite(Pin1, LOW);
      if(d2 == 1)
        digitalWrite(Pin2, HIGH);
      else
        digitalWrite(Pin2, LOW);
      if(d3 == 1)
        digitalWrite(Pin3, HIGH);
      else
        digitalWrite(Pin3, LOW);
      if(d4 == 1)
        digitalWrite(Pin4, HIGH);
      else
        digitalWrite(Pin4, LOW);

        right=digitalRead(Pincorrect);
        if(right ==1)
        // reading compaprtor output to see if number is correct or incorrect
          Serial.print("Correct!");
        else
          Serial.print("Incorrect!");

        Serial.print("\n");
    
    }
    delay(1000);
 }
