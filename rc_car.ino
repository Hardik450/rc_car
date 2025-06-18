int speed_left =  5;
int speed_right = 6;
void setup() 
{
  Serial.begin(9600);
pinMode(speed_left,OUTPUT);
pinMode(speed_right,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  char c;
  if (Serial.available())
  {
    c=Serial.read();
//For Rotating Right
    if (c=='R')
    {
      analogWrite(speed_left,255);
      analogWrite(speed_right,255);
digitalWrite(10,1);
digitalWrite(11,0);
digitalWrite(12,1);
digitalWrite(13,0);
    }
//For Rotating Left
    else if(c == 'L')
    {
      analogWrite(speed_left,255);
      analogWrite(speed_right,255);
digitalWrite(11,1);
digitalWrite(10,0);
digitalWrite(12,0);
digitalWrite(13,1);
    }
//For moving Backward 
    else if(c == 'B')
    {
      analogWrite(speed_left,255);
      analogWrite(speed_right,255);
      digitalWrite(11,1);
digitalWrite(10,0);
digitalWrite(12,1);
digitalWrite(13,0);
    }
//For moving Forward 
    else if(c == 'F')
    {
      analogWrite(speed_left,255);
      analogWrite(speed_right,255);
      digitalWrite(11,0);
digitalWrite(10,1);
digitalWrite(12,0);
digitalWrite(13,1);
    }
//For Forward Left
    else if(c == 'G')
    { 
      analogWrite(speed_left,127);
      analogWrite(speed_right,255);
      digitalWrite(10,1);
      digitalWrite(11,0);
      digitalWrite(12,0);
      digitalWrite(13,1);
    }
//For Forward Right
    else if(c=='I')
    {
      analogWrite(speed_left,255);
      analogWrite(speed_right,128);
      digitalWrite(10,1);
      digitalWrite(11,0);
      digitalWrite(12,0);
      digitalWrite(13,1);
    }
//For Backward Left
        else if(c == 'H')
    { 
      analogWrite(speed_left,127);
      analogWrite(speed_right,255);
      digitalWrite(10,0);
      digitalWrite(11,1);
      digitalWrite(12,1);
      digitalWrite(13,0);
    }
//For Backward Right 
    else if(c=='J')
    {
      analogWrite(speed_left,255);
      analogWrite(speed_right,128);
      digitalWrite(10,0);
      digitalWrite(11,1);
      digitalWrite(12,1);
      digitalWrite(13,0);
    }
    else{
      digitalWrite(10,0);
      digitalWrite(11,0);
      digitalWrite(12,0);
digitalWrite(13,0);
    }
  }
  // put your main code here, to run repeatedly:

}
