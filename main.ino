//*********************************0MeGa EleCtR0nIcs***********
//Author= Abhinav Etwa oraon
int count=0;
int data;
int phone=8;
int relay=7;
int led=6;
void setup() {
Serial.begin(9600);
pinMode(phone,INPUT);//phone vibrator as input data
pinMode(relay,OUTPUT);
pinMode(led,OUTPUT);
}

void loop() {
 data=digitalRead(phone);//read the digital Signals 
 if (data==1){//if data is 1 then assign count to count +1
  count=count+1;
 Serial.println(count);}
 switch(count){//switchcase controll statement is used!
  case 1://if value in count is 1
    digitalWrite(relay,1);
    digitalWrite(led,1);
  break;
  case 2://if value in count is 2
    digitalWrite(relay,0);
    digitalWrite(led,0);
    case 3://if value in count is 3
    digitalWrite(relay,0);
    digitalWrite(led,0);
    count=0;
    break;
  default:
  digitalWrite(relay,0);
  digitalWrite(led,0);
  count=0;}
  delay(60000); //as silence and snooze time is 1 minute 1minute=60000 miliseconds accoding to settings done in alarm setting
  }
 
