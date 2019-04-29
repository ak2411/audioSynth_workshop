// PIN CONSTANTS
const byte buttons[] = { 5, 7, 11, 8, 10};     // the number of the pushbutton pin
const byte LED1 =  2;      // the LED pins
const byte LED2 =  4; 
const byte OUT = 3;

// NUMBER OF BUTTONS
#define NUMBUTTONS sizeof(buttons)  // length of buttons

// PREDEFINE NOTE PITCHES
const byte notes[] = {196, 220, 262, 349, 392};
byte isOn[] = {0,0,0,0,0};

void setup() {
  // set LED pins and audio OUT pin as output
  pinMode(LED1, OUTPUT);  
  pinMode(LED2, OUTPUT);
  pinMode(OUT, OUTPUT);

  // set button pins as input, initialize each button pin to HIGH
  for (byte i=0; i< NUMBUTTONS; i++) { 
    pinMode(buttons[i], INPUT);
    digitalWrite(buttons[i], HIGH);}
}

void loop() {
  // Check if each button is triggered
  if(digitalRead(buttons[0]) == LOW) {
    // send analog signal out with set note
    tone(OUT, notes[0]);
    isOn[0] = 1;
    digitalWrite(LED1, HIGH);
  } else {
    if(isOn[0]) {
      // turn off output signal
      noTone(OUT);
      isOn[0] = 0;
    }
    digitalWrite(LED1, LOW);
  }
  if(digitalRead(buttons[1]) == LOW) {
    tone(OUT, notes[1]);
     isOn[1] = 1;
     digitalWrite(LED2, HIGH);
  } else {
        if(isOn[1]) {
          noTone(OUT);
          isOn[1] = 0;
        }
    digitalWrite(LED2, LOW);
  }
  if(digitalRead(buttons[2]) == LOW) {
    tone(OUT, notes[2]);
     isOn[2] = 1;
     digitalWrite(LED2, HIGH);
  } else {
        if(isOn[2]) {
          noTone(OUT);
          isOn[2] = 0;
        }
    digitalWrite(LED2, LOW);
  }
  if(digitalRead(buttons[3]) == LOW) {
    tone(OUT, notes[3]);
     isOn[3] = 1;
     digitalWrite(LED2, HIGH);
  } else {
        if(isOn[3]) {
          noTone(OUT);
          isOn[3] = 0;
        }
    digitalWrite(LED2, LOW);
  }
  if(digitalRead(buttons[4]) == LOW) {
    tone(OUT, notes[4]);
     isOn[4] = 1;
     digitalWrite(LED2, HIGH);
  } else {
        if(isOn[4]) {
          noTone(OUT);
          isOn[4] = 0;
        }
    digitalWrite(LED2, LOW);
  }
}
