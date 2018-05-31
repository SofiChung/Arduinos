int PWM_DIR_P1 = 12; 
int in_1_P1 = 34;
int in_2_P1 = 35;

int PWM_DIR_P4 = 5;
int in_1_P4 = A4;
int in_2_P4 = A5;


void setup() {

  pinMode(PWM_DIR_P1,OUTPUT);
  pinMode(PWM_DIR_P4,OUTPUT);
  Serial.begin(9600);
}
void loop() {
    if(Serial.available())
    {
     char in;
     in=Serial.read();
     if(in=='1')
      {
      digitalWrite(in_1_P1,LOW);
      digitalWrite(in_2_P1,HIGH);
      analogWrite(PWM_DIR_P1, 127);

      digitalWrite(in_1_P4,HIGH);
      digitalWrite(in_2_P4,LOW);
      analogWrite(PWM_DIR_P4, 127);
    }

    if(in=='2')
    {
      digitalWrite(in_1_P1,LOW);
      digitalWrite(in_2_P1,HIGH);
      analogWrite(PWM_DIR_P1, 64);

      digitalWrite(in_1_P4,HIGH);
      digitalWrite(in_2_P4,LOW);
      analogWrite(PWM_DIR_P4, 64);
      
      }

      if(in =='3'){
        digitalWrite(in_1_P1,LOW);
      digitalWrite(in_2_P1,HIGH);
      analogWrite(PWM_DIR_P1, 153);

      digitalWrite(in_1_P4,HIGH);
      digitalWrite(in_2_P4,LOW);
      analogWrite(PWM_DIR_P4, 153);
        
        
        } 
   if(in=='4')
  {
          
      digitalWrite(in_1_P1,LOW);
      digitalWrite(in_2_P1,HIGH);
      analogWrite(PWM_DIR_P1, 30);

      digitalWrite(in_1_P4,HIGH);
      digitalWrite(in_2_P4,LOW);
      analogWrite(PWM_DIR_P4, 30);
  
  
  }  
}
}
 