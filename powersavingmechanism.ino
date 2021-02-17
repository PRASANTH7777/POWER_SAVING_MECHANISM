
void setup() {
  /*Initializing pin number 13 as output.
   *The switch is closed as value is low, 
   *when the data is recieved switch opens and circuit breaks.
   */
pinMode(12,OUTPUT);

Serial.begin(9600);
}

void loop() {
  // Bluetooth send data to the board.
int data=0;
if(Serial.available() >0)//Sets serial data 0.

  data=Serial.read();
  Serial.print(data);
  Serial.print("\n");
if(data == '1')//If data =1 sends  value to bluetooth this is received by arduino and turns off the relay.
 {digitalWrite(12,HIGH);
 }
}
