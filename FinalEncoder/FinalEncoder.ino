//get the outputs
int inPin0=13;
int inPin1=12;
int inPin2=11;
int inPin3=10;
int inPin4=9;
int d0 = 0;
int d1 = 0;
int d2 = 0;
int d3 = 0;
int d4=0;
int buttonpress=0;
////////////////////////////
void setup()
{
//setting pins as inputs
pinMode(inPin0, INPUT);
pinMode(inPin1, INPUT);
pinMode(inPin2, INPUT);
pinMode(inPin3, INPUT);
pinMode(inPin4, INPUT);

Serial.begin(9600);
}

void loop()

{
//waiting for a button be pressed
 buttonpress = LOW;
 buttonpress = digitalRead(inPin4);
 if(buttonpress == HIGH){  
  //once button is pressed read in values from pins
   d0 = digitalRead(inPin0);  
   d1 = digitalRead(inPin1);
   d2 = digitalRead(inPin2);
   d3 = digitalRead(inPin3);
   //convert binary decimal
   d4=(d3*2*2*2)+(d2*2*2)+(d1*2)+d0;
   Serial.print("Binary Output:");
   Serial.print(d3);
   Serial.print(d2);
   Serial.print(d1);
   Serial.print(d0);
   Serial.print("\tButton pressed:"); //output what button was pressed
   Serial.print(d4);    
   Serial.print("\n");
   delay(4000);
 }

}
