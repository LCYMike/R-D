float pi = 3.14159265359;
float diameter = 0;
float h = 0;
float answer;

int led1 = 8;
int led2 = 9;
int led3 = 10;

int stage = 0;

bool hasEnd = false;

String myName;
String dia;
String myHeight = "";

void setup()
{
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  
  Serial.begin(9600);
//  bootAnim();
  initText(1);
}

void loop(){

}



void blink(int led, int onTime, int offTime){
  digitalWrite(led,HIGH);
  delay(onTime);
    digitalWrite(led,LOW);
  delay(offTime);
    digitalWrite(led,HIGH);
  delay(onTime);
    digitalWrite(led,LOW);
  delay(offTime);
    digitalWrite(led,HIGH);
  delay(onTime);
    digitalWrite(led,LOW);
  delay(offTime);
}
