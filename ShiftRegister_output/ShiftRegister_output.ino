//this progam will monitor the output data coming from the shift registers

int Pin1 = 9;
int Pin2 = 10;
int Pin3 = 11;
int Pin4 = 12;
int Pin5 = 13;

int Pout1 = 4;
int Pout2 = 5;
int Pout3 = 6;
int Pout4 = 7;
//int Pout1=4;

int input, output;
int d1, d2, d3, d4;
int a, a1, a2, a3, a4;
int divided;
////////////////////////////
void setup() {

//  pinMode(Pin1, OUTPUT);
//  pinMode(Pin2, OUTPUT);
//  pinMode(Pin3, OUTPUT);
//  pinMode(Pin4, OUTPUT);
//  pinMode(Pin5, OUTPUT);

  pinMode(Pout1, INPUT);
  pinMode(Pout2, INPUT);
  pinMode(Pout3, INPUT);
  pinMode(Pout4, INPUT);
//    pinMode(Pout5, INPUT);
  Serial.begin(9600);
}

void loop() {

  digitalWrite(Pin5, LOW);
  divided = 0;
  d1 = 0;
  d2 = 0;
  d3 = 0;
  d4 = 0;
  input = -10;
  digitalWrite(Pin5, LOW);
  digitalWrite(Pin4, LOW);
  digitalWrite(Pin3, LOW);
  digitalWrite(Pin2, LOW);
  digitalWrite(Pin1, LOW);

  input = Serial.read() - 48;
    a1 = digitalRead(Pout1);
    a2 = digitalRead(Pout2);
    a3 = digitalRead(Pout3);
    a4 = digitalRead(Pout4);
    a = (a4 * 2 * 2 * 2) + (a3 * 2 * 2) + (a2 * 2) + a1;
    Serial.print("Shift Register Output: ");
    Serial.print(a);
    Serial.print(" (");
    Serial.print(a4);
    Serial.print(a3);
    Serial.print(a2);
    Serial.print(a1);
    Serial.print(")\n\n");

  


  delay(1000);
}
