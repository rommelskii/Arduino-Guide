/*
This code presents the use of variables as placeholder names for certain pin numbers, and it also presents the first use
of IF commands/statements.

Moreover, the context of this code is that the arduino takes in a signal from digital pin 7, and then executes a print function 
to the serial monitor.
*/


void setup() {
 Serial.begin(9600);
 pinMode(7, INPUT); 
}

void loop() {
  int pin7Signal = digitalRead(7);
    /*
    The line prior has many parts for discussion. 
    
    Firstly, we discuss the formation of what we call a variable. A variable is any placeholder name for a certain 
    piece of information. For our case, we assign the name pin7Signal to the signal read from digital pin 7.
    
    The signal read from pin number 7 is represented by the function digitalRead. It follows the syntax digitalRead([PIN NUMBER]),
    and it returns the signal that it gathers from your sensors. 
    */
  if (pin7Signal == HIGH) {
   Serial.println("Digital pin number 7 has received a signal."); 
  } 
    /*
    What was presented prior this comment is what we call the IF command. This is a form of a conditional statement that executes
    a particular set of codes given that a condition is met (in our case, whenever pin number 7 receives a signal).
   
    The IF command here is programmed to print a statement on the serial monitor whenever pin number 7 receives a signal, i.e.,
    it reads a value of HIGH. 
    */
  delay(500);
  
}
 
