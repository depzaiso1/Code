int pinled [] = {0,1,2,3,4,5,6};
  
void setup(){
    for (int i = 0; i < 7; i++) {
       pinMode(pinled [i], OUTPUT);
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
  	//YOUR CODE HERE
    digitalWrite(0, LOW);
    
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }else if(i == 2){
  	//YOUR CODE HERE
  }else if(i == 3){
  	//YOUR CODE HERE
  }else if(i == 4){
  	//YOUR CODE HERE
  }else if(i == 5){
  	//YOUR CODE HERE
  }else if(i == 6){
  	//YOUR CODE HERE
  }else if(i == 7){
  	//YOUR CODE HERE
  }else if(i == 8){
  	//YOUR CODE HERE
  }else if(i == 9){
  	//YOUR CODE HERE
  }
}

void loop(){
  displayNumber(0);
  delay(2000);
  for (int i = 0; i < 10; i++) {
    displayNumber(i);
    delay(1000);
  }
}