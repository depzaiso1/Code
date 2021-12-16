void setup(){
    for (int i = 0; i < 14; i++) {
       pinMode(i, OUTPUT);
	}
}

void displayNumber(int i){
   if (i == 0){
   digitalWrite(0, HIGH);
    
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    
  }else if(i == 1){
  	 digitalWrite(0, HIGH);
    
  
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
  }else if(i == 2){
  	digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
  }else if(i == 3){
  	digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }else if(i == 4){
  	digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
  }else if(i == 5){
  	digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
   }
}


void loop(){
  for (int i = 4; i >= 0 ; i--){
    digitalWrite(9,LOW);
    digitalWrite(11,LOW);
    digitalWrite(8,HIGH);
    if(i>=2){
       digitalWrite(13,HIGH);//green 3 seconds
      	digitalWrite(12,LOW);
    }
    else{
      	digitalWrite(13,LOW);
      	digitalWrite(12,HIGH);
    }
    displayNumber(i);
    delay(1000);
  }
  for (int j = 4; j >= 0; j--){
    digitalWrite(12,LOW);
    digitalWrite(8,LOW);
    digitalWrite(11,HIGH);
    if(j>=2){
       digitalWrite(10,HIGH);//green
      	digitalWrite(9,LOW);
    }
    else{
      	digitalWrite(10,LOW);
      	digitalWrite(9,HIGH);
    }
 
  	displayNumber(j);
    delay(1000);
  }
}