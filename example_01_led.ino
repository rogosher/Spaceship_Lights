int switchState = 0; 

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT); // pin 2 is the switch
}

void loop() {
  switchState = digitalRead(2); 
  // check pin 2 to read it
  
  // check for button state
  // If buttonState is LOW, then button is not pressed,
  // Any signal but LOW is the button being pressed
  if (switchState == LOW){
    digitalWrite(3, HIGH); //Green LED on
    digitalWrite(4, LOW);  //Red LED off
    digitalWrite(5, LOW);  //Red LED off
  }
  else { 
    // the button is pressed
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    
    // wait for a quarter second
    delay(250);
    
    // toggle the LEDS
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250); //wait for a quarter second
 }

} // auto go back to begining of loop
