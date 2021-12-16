int pinled [] = {1,2,3,4,5,6,7,8};
int noPins = 8;
  
void setup(){
    for (int i = 0; i < noPins; i++) {
       pinMode(pinled [i], OUTPUT);
	}
}

void state1(){
	digitalWrite(1, HIGH);
  	digitalWrite(3, HIGH);
  	digitalWrite(5, HIGH);
  	digitalWrite(7, HIGH);
  
  	digitalWrite(2, LOW);
  	digitalWrite(4, LOW);
  	digitalWrite(6, LOW);
  	digitalWrite(8, LOW);
}

void state2(){
	digitalWrite(1, LOW);
  	digitalWrite(3, LOW);
  	digitalWrite(5, LOW);
  	digitalWrite(7, LOW);
  
  	digitalWrite(2, HIGH);
  	digitalWrite(4, HIGH);
  	digitalWrite(6, HIGH);
  	digitalWrite(8, HIGH);
}

void state3(){
  	digitalWrite(1,HIGH);delay(1000);
  	digitalWrite(2,LOW);
  	digitalWrite(3,LOW);
	digitalWrite(4,LOW);
	digitalWrite(5,LOW);
	digitalWrite(6,LOW);
  	digitalWrite(7,LOW);
  	digitalWrite(8,LOW);
  	digitalWrite(9,LOW);
  for(int i = 1; i <= noPins; i++){
    digitalWrite(pinled[i], HIGH);
    digitalWrite(pinled[i-1], LOW);
    delay(1000);
  }
}


void loop()
{
 
	state3();
  	//delay(1000);
  	//state2();
  	//delay(1000);
}