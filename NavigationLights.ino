int Receiver = 2;  
int rearleft = 6;    
int frontright = 3;    
int frontleft = 4; 
int rearright = 5;  

void setup() {
  pinMode(Receiver, INPUT);
  pinMode(rearleft, OUTPUT);
  pinMode(frontright, OUTPUT);
  pinMode(frontleft, OUTPUT);
  pinMode(rearright, OUTPUT);
}

void loop() {
  int pwm = pulseIn(Receiver, HIGH, 25000); 
  if ( pwm > 1700){
    digitalWrite(frontleft,HIGH);
    digitalWrite(frontright,HIGH);
    for(int fading = 1 ; fading <= 5; fading+=1) { 
       analogWrite(rearleft, fading);
       delay(50);
       analogWrite(rearright, fading);
       delay(50); 
                                 
  } 
  
  analogWrite(rearleft, 255);
  analogWrite(rearright, 255);
  //delay(500);
     
  delay (50);

    for(int fading = 5 ; fading >=1;fading -=1) { 
   analogWrite(rearleft, fading);
   analogWrite(rearright, fading);
   delay(200);
             
    delay(100);
  }
  delay(100);
   
   
  }
  else{
    digitalWrite(frontleft, LOW);
    digitalWrite(frontright, LOW);
    digitalWrite(rearleft, LOW);
    digitalWrite(rearright, LOW); 
  }
  
  }