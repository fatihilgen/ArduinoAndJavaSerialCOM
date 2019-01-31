
 

//////////////pinler//////////
////////Portlar//////////////////
int ileri = 2;
int geri  = 3;
int sag   = 4;
int sol   = 5;




int bt1 = 2;
int bt0 = 3;
////////////////////////////////////////////
int bt0Value = 0;
int bt1Value = 1;
int sayi = 0;

void setup() {
  pinMode(ileri, OUTPUT);
  pinMode(geri, OUTPUT);
  pinMode(sag, OUTPUT);
  pinMode(sol, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  bt0Value = digitalRead(bt0);
  bt1Value = digitalRead(bt1);
    
  if (Serial.available() > 0) {
    sayi = Serial.read();
  
    if(sayi==1){
      digitalWrite(ileri, HIGH);
    }
     if(sayi==2){
      digitalWrite(ileri, LOW);
    }

    
     if(sayi==3){
      digitalWrite(geri, HIGH);
    }
     if(sayi==4){
      digitalWrite(geri,LOW);
    }


    
     if(sayi==5){
      digitalWrite(sag, HIGH);
    }
     if(sayi==6){
      digitalWrite(sag, LOW);
    }

    
     if(sayi==7){
      digitalWrite(sol, HIGH);
    }
     if(sayi==8){
      digitalWrite(sol, LOW);
    }
    
    
  
  }
 
  Serial.write(bt0Value);            //write as byte, to USB
  Serial.write(bt1Value);            //write as byte, to USB
  delay(100);
 }
