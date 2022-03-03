//the void setup() part contains all codes that are EXECUTED WHENEVER YOUR START YOUR MICROCONTROLLER
//all the codes must be within the curly braces {}
void setup() {
  Serial.begin(9600); //always start your code with this in order to use the serial monitor
  pinMode(7, OUTPUT); //the pinMode function INITIALIZES your pins (since the pins are inactive upon a fresh start).
                      //moreover, the pinMode function follows the syntax: pinMode(PIN NUMBER, INPUT/OUTPUT)
                      //If your pins are set to input, they act as receivers of signals or voltages from sensors.
                      //Otherwise if output, they act as power sources to other things.
}
//the void loop() part contains all codes that are EXECUTED REPEATEDLY AS LONG AS THE MICROCONTROLLER IS ACTIVE
void loop() {
  digitalWrite(7, HIGH); //always end your commands with a semicolon (although not all do)
                         //the digitalWrite function commands an OUTPUT pin to either release or inhibit voltage.
                         //to release voltage, we write digitalWrite([Pin number], HIGH)
                         //otherwise, we write digitalWrite([Pin number], LOW)
                         //HIGH and LOW correspond to values 1 and 0 respectively
                         
  delay(500); //the delay function instructs the microcontroller to "take a break" for a set amount of time before executing further
  
  digitalWrite(7, LOW); //sets digital 7 to output NO VOLTAGE
  
  delay(500); 

}

