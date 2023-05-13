
 int red5Pin = 2;
 int green5Pin = 3;
 int orange5Pin = 4;
 
 int red3Pin = 7;
 int green3Pin = 5;
 int orange3Pin = 6;
  
 int red1Pin = 8;
 int green1Pin = 9;
 int orange1Pin = 10;


 int rail1_Pin = 14;
 int rail2_Pin = 15;
 int rail3_Pin = 16;

 int rail1 = 0;
 int rail2 = 0;
 int rail3 = 0;
void setup() {

pinMode(rail1_Pin,INPUT_PULLUP);
pinMode(rail2_Pin,INPUT_PULLUP);
pinMode(rail3_Pin,INPUT_PULLUP); 

pinMode(red5Pin,OUTPUT);
pinMode(green5Pin,OUTPUT);
pinMode(orange5Pin,OUTPUT);
 
pinMode(red3Pin,OUTPUT);
pinMode(green3Pin,OUTPUT);
pinMode(orange3Pin,OUTPUT);

pinMode(red1Pin,OUTPUT); 
pinMode(green1Pin,OUTPUT);
pinMode(orange1Pin,OUTPUT);
 
 
Serial.begin(9600);
}

void loop() { //başlanğıc
//blok sahələrin oxunması
int rail1 = !digitalRead(rail1_Pin);  
int rail2 = !digitalRead(rail2_Pin);  
int rail3 = !digitalRead(rail3_Pin);
//alqoritmlərin yazılması
if(rail1 == 0 && rail2 == 0 && rail3 == 0) { 
    
  digitalWrite(green1Pin,HIGH);
  digitalWrite(orange1Pin,LOW);
  digitalWrite(red1Pin,LOW);

  digitalWrite(green3Pin,HIGH);
  digitalWrite(orange3Pin,LOW);
  digitalWrite(red3Pin,LOW); 

  digitalWrite(red5Pin,LOW);
  digitalWrite(green5Pin,HIGH);
  digitalWrite(orange5Pin,LOW);
  
}else if(rail1 == 1 && rail2 == 0 && rail3 == 0) { 
    
  digitalWrite(green1Pin,LOW);
  digitalWrite(orange1Pin,LOW);
  digitalWrite(red1Pin,HIGH);

  digitalWrite(green3Pin,HIGH);
  digitalWrite(orange3Pin,LOW);
  digitalWrite(red3Pin,LOW); 

  digitalWrite(red5Pin,LOW);
  digitalWrite(green5Pin,HIGH);
  digitalWrite(orange5Pin,LOW);
  
}else if(rail1 == 0 && rail2 == 1 && rail3 == 0) { 
    
  digitalWrite(green1Pin,LOW);
  digitalWrite(orange1Pin,HIGH);
  digitalWrite(red1Pin,LOW);

  digitalWrite(green3Pin,LOW);
  digitalWrite(orange3Pin,LOW);
  digitalWrite(red3Pin,HIGH); 

  digitalWrite(red5Pin,LOW);
  digitalWrite(green5Pin,HIGH);
  digitalWrite(orange5Pin,LOW);
  
}else if(rail1 == 0 && rail2 == 0 && rail3 == 1) { 
    
  digitalWrite(green1Pin,HIGH);
  digitalWrite(orange1Pin,LOW);
  digitalWrite(red1Pin,LOW);

  digitalWrite(green3Pin,LOW);
  digitalWrite(orange3Pin,HIGH);
  digitalWrite(red3Pin,LOW); 

  digitalWrite(red5Pin,HIGH);
  digitalWrite(green5Pin,LOW);
  digitalWrite(orange5Pin,LOW);
  
}else if(rail1 == 1 && rail2 == 1 && rail3 == 0) { 
    
  digitalWrite(green1Pin,LOW);
  digitalWrite(orange1Pin,LOW);
  digitalWrite(red1Pin,HIGH);

  digitalWrite(green3Pin,LOW);
  digitalWrite(orange3Pin,LOW);
  digitalWrite(red3Pin,HIGH); 

  digitalWrite(red5Pin,LOW);
  digitalWrite(green5Pin,HIGH);
  digitalWrite(orange5Pin,LOW);
  
}else if(rail1 == 1 && rail2 == 0 && rail3 == 1) { 
    
  digitalWrite(green1Pin,LOW);
  digitalWrite(orange1Pin,LOW);
  digitalWrite(red1Pin,HIGH);

  digitalWrite(green3Pin,LOW);
  digitalWrite(orange3Pin,HIGH);
  digitalWrite(red3Pin,LOW); 

  digitalWrite(red5Pin,HIGH);
  digitalWrite(green5Pin,LOW);
  digitalWrite(orange5Pin,LOW);
  
}else if(rail1 == 0 && rail2 == 1 && rail3 == 1) { 
    
  digitalWrite(green1Pin,LOW);
  digitalWrite(orange1Pin,HIGH);
  digitalWrite(red1Pin,LOW);

  digitalWrite(green3Pin,LOW);
  digitalWrite(orange3Pin,LOW);
  digitalWrite(red3Pin,HIGH); 

  digitalWrite(red5Pin,HIGH);
  digitalWrite(green5Pin,LOW);
  digitalWrite(orange5Pin,LOW);
  
}else if(rail1 == 1 && rail2 == 1 && rail3 == 1) { 
    
  digitalWrite(green1Pin,LOW);
  digitalWrite(orange1Pin,LOW);
  digitalWrite(red1Pin,HIGH);

  digitalWrite(green3Pin,LOW);
  digitalWrite(orange3Pin,LOW);
  digitalWrite(red3Pin,HIGH); 

  digitalWrite(red5Pin,HIGH);
  digitalWrite(green5Pin,LOW);
  digitalWrite(orange5Pin,LOW);
}
delay(100);
}
