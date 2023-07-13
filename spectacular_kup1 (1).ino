// C++ code
int red=9;
int yellow=10;
int green=11;
int button=12;
int reading=0;
int counter=0;

void setup()
{
  Serial.begin(96000);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);

}
void loop()
{
reading=digitalRead(button);
  if(reading==1&&counter==0){
  counter++;
    if(counter==1){
    digitalWrite(red,HIGH);
     delay(250); 
     
   
    }
  }
   
    
   reading=digitalRead(button);
 if(reading==1&&counter==1){
  counter++;
    if(counter==2){
    digitalWrite(yellow,HIGH);
      delay(250);}
    
   
    }
  
    
    
 reading=digitalRead(button);
  if(reading==1&&counter==2){
  counter++;
    if(counter==3){
    digitalWrite(green,HIGH);
     delay(250); 
    }
  }
    
    reading=digitalRead(button);
    if(reading==1&&counter==3){
    counter++;
      if(counter==4){
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(green,LOW);
      delay(250);
       counter=0;
     } 
      
    }
    
  }
    
    
  
  
  
  
  
  
