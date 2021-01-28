

const int buttonPin = A0;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;
int Cyclecount = 0;
int i = 0;
int len = 0;
int num1 = 0;
int num2 = 0;
int num3 = 0;
int num4 = 0;
int lenght = 0;
int kierros = 0;
int arvo = 0;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(pinA, OUTPUT);     
  pinMode(pinB, OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG, OUTPUT);   
  pinMode(D1, OUTPUT);  
  pinMode(D2, OUTPUT);  
  pinMode(D3, OUTPUT);  
  pinMode(D4, OUTPUT);  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, LOW);   
 
}

void loop() {
  // Reading the state, and under it there are the numbers unoptimized to the display
  buttonState = digitalRead(buttonPin);
  
    num1 = kierros % 10;
    digitalWrite(D1, LOW);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, HIGH);
    switch (num1) {
    case 0: 
     digitalWrite(pinA, HIGH);   
     digitalWrite(pinB, HIGH);   
     digitalWrite(pinC, HIGH);   
     digitalWrite(pinD, HIGH);   
     digitalWrite(pinE, HIGH);   
     digitalWrite(pinF, HIGH);   
     digitalWrite(pinG, LOW);   
     delay(1);               // delay
     break;
    case 1:
     digitalWrite(pinA, LOW);   
     digitalWrite(pinB, HIGH);   
     digitalWrite(pinC, HIGH);   
     digitalWrite(pinD, LOW);   
     digitalWrite(pinE, LOW);   
     digitalWrite(pinF, LOW);   
     digitalWrite(pinG, LOW);   
     delay(1);               // delay
     break;
     case 2:
     digitalWrite(pinA, HIGH);   
     digitalWrite(pinB, HIGH);   
     digitalWrite(pinC, LOW);   
     digitalWrite(pinD, HIGH);   
     digitalWrite(pinE, HIGH);   
     digitalWrite(pinF, LOW);   
     digitalWrite(pinG, HIGH);   
     delay(1);               // delay
     break;
     case 3:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 4:
      digitalWrite(pinA, LOW);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 5:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, LOW);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 6:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, LOW);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 7:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, LOW);   
      delay(1);               // delay
      break;
     case 8:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 9:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
    }
    num2 = (kierros / 10) % 10;
    digitalWrite(D1, HIGH);
    digitalWrite(D2, LOW);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, HIGH);
    switch (num2) {
    case 0: 
     digitalWrite(pinA, HIGH);   
     digitalWrite(pinB, HIGH);   
     digitalWrite(pinC, HIGH);   
     digitalWrite(pinD, HIGH);   
     digitalWrite(pinE, HIGH);   
     digitalWrite(pinF, HIGH);   
     digitalWrite(pinG, LOW);   
     delay(1);               // delay
     break;
    case 1:
     digitalWrite(pinA, LOW);   
     digitalWrite(pinB, HIGH);   
     digitalWrite(pinC, HIGH);   
     digitalWrite(pinD, LOW);   
     digitalWrite(pinE, LOW);   
     digitalWrite(pinF, LOW);   
     digitalWrite(pinG, LOW);   
     delay(1);               // delay
     break;
     case 2:
     digitalWrite(pinA, HIGH);   
     digitalWrite(pinB, HIGH);   
     digitalWrite(pinC, LOW);   
     digitalWrite(pinD, HIGH);   
     digitalWrite(pinE, HIGH);   
     digitalWrite(pinF, LOW);   
     digitalWrite(pinG, HIGH);   
     delay(1);               // delay
     break;
     case 3:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 4:
      digitalWrite(pinA, LOW);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 5:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, LOW);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 6:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, LOW);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 7:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, LOW);   
      delay(1);               // delay
      break;
     case 8:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 9:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
    }
    num3 = (kierros / 100) % 10;
    digitalWrite(D1, HIGH);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, LOW);
    digitalWrite(D4, HIGH);
    switch (num3) {
    case 0: 
     digitalWrite(pinA, HIGH);   
     digitalWrite(pinB, HIGH);   
     digitalWrite(pinC, HIGH);   
     digitalWrite(pinD, HIGH);   
     digitalWrite(pinE, HIGH);   
     digitalWrite(pinF, HIGH);   
     digitalWrite(pinG, LOW);   
     delay(1);               // delay
     break;
    case 1:
     digitalWrite(pinA, LOW);   
     digitalWrite(pinB, HIGH);   
     digitalWrite(pinC, HIGH);   
     digitalWrite(pinD, LOW);   
     digitalWrite(pinE, LOW);   
     digitalWrite(pinF, LOW);   
     digitalWrite(pinG, LOW);   
     delay(1);               // delay
     break;
     case 2:
     digitalWrite(pinA, HIGH);   
     digitalWrite(pinB, HIGH);   
     digitalWrite(pinC, LOW);   
     digitalWrite(pinD, HIGH);   
     digitalWrite(pinE, HIGH);   
     digitalWrite(pinF, LOW);   
     digitalWrite(pinG, HIGH);   
     delay(1);               // delay
     break;
     case 3:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 4:
      digitalWrite(pinA, LOW);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 5:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, LOW);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 6:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, LOW);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 7:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, LOW);   
      delay(1);               // delay
      break;
     case 8:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 9:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
    }
    num4 = (kierros / 1000) % 10;
    digitalWrite(D1, HIGH);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, LOW);
    switch (num4) {
    case 0: 
     digitalWrite(pinA, HIGH);   
     digitalWrite(pinB, HIGH);   
     digitalWrite(pinC, HIGH);   
     digitalWrite(pinD, HIGH);   
     digitalWrite(pinE, HIGH);   
     digitalWrite(pinF, HIGH);   
     digitalWrite(pinG, LOW);   
     delay(1);               // delay
     break;
    case 1:
     digitalWrite(pinA, LOW);   
     digitalWrite(pinB, HIGH);   
     digitalWrite(pinC, HIGH);   
     digitalWrite(pinD, LOW);   
     digitalWrite(pinE, LOW);   
     digitalWrite(pinF, LOW);   
     digitalWrite(pinG, LOW);   
     delay(1);               // delay
     break;
     case 2:
     digitalWrite(pinA, HIGH);   
     digitalWrite(pinB, HIGH);   
     digitalWrite(pinC, LOW);   
     digitalWrite(pinD, HIGH);   
     digitalWrite(pinE, HIGH);   
     digitalWrite(pinF, LOW);   
     digitalWrite(pinG, HIGH);   
     delay(1);               // delay
     break;
     case 3:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 4:
      digitalWrite(pinA, LOW);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 5:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, LOW);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 6:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, LOW);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 7:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, LOW);   
      delay(1);               // delay
      break;
     case 8:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
     case 9:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      delay(1);               // delay
      break;
    }
    delay(1);



  // Buttonstate check
  if (buttonState == HIGH) {
    if (arvo == 0){
      kierros = kierros + 1;
      arvo = 1;
    }
    digitalWrite(ledPin, HIGH);
    Cyclecount = Cyclecount + 1;
    Serial.print(" ");
    while (Cyclecount >= 100) {
     kierros = kierros + 1;
     Cyclecount = 0;
    }
    
  }
    else {
    digitalWrite(ledPin, LOW);
    arvo = 0;
    Cyclecount = 0;
  }
}
