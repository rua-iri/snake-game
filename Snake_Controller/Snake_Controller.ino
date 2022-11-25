
//declare the pins to which each button is connected
int upButton = 7;
int downButton = 3;
int leftButton = 4;
int rightButton = 11;
int enterButton = 12;


void setup(){
 pinMode(upButton, INPUT);
 pinMode(downButton, INPUT);
 pinMode(leftButton, INPUT);
 pinMode(rightButton, INPUT);
 pinMode(enterButton, INPUT);
 
 Serial.begin(9600);        
}


void loop(){
    if (digitalRead(upButton) == HIGH) {
      Serial.println("w");
    }

    if (digitalRead(downButton) == HIGH) {
      Serial.println("s");
    }

    if (digitalRead(leftButton) == HIGH) {
      Serial.println("a");
    }

    if (digitalRead(rightButton) == HIGH) {
      Serial.println("d");
    }

    if (digitalRead(enterButton) == HIGH) {
      Serial.println("e");
    }

    

    delay(50);
}
