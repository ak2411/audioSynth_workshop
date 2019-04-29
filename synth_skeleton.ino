// DEFINE PIN CONSTANTS
const byte buttons[] = { 5, 7, 11, 8, 10};     // the number of the pushbutton pin
const byte LED1 =  2;      // the LED pins
const byte LED2 =  4; 
const byte OUT = 3;

// NUMBER OF BUTTONS
#define NUMBUTTONS sizeof(buttons)  // length of buttons

// PREDEFINE NOTE PITCHES
const byte notes[] = {10, 200, 400, 600, 800};
byte isOn[] = {0,0,0,0,0};

void setup() {
  // set LED pins and audio OUT pin as output
  pinMode(LED1, OUTPUT);  
  /* INSERT CODE HERE */

  // set button pins as input, initialize each button pin to HIGH
  for (byte i=0; i< NUMBUTTONS; i++) { 
    pinMode(buttons[i], INPUT);
    digitalWrite(buttons[i], HIGH);
  }
}

void loop() {
  // Check if each button is triggered
  if(digitalRead(buttons[0]) == LOW) {
    // send analog signal out with set note
    /* INSERT CODE HERE */
    digitalWrite(LED2, HIGH); // for debugging
  } else {
     // turn off output signal
     /* INSERT CODE HERE */
     digitalWrite(LED2, LOW);
  }
  // Do the same for other buttons
  /* INSERT CODE HERE */
}
