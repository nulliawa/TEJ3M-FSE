// Assigning buttons to variables
const int c = 13;
const int c_sharp = 12;
const int d = 11;
const int d_sharp = 10;
const int e = 9;
const int f = 8;
const int f_sharp = 7;
const int g = 6;
const int g_sharp = 5;
const int a = 4;
const int a_sharp = 3;
const int b = 2;
const int piezo = 1;

const int song = 14;
const int song2 = 15;
const int song3 = 16;

const float cn = 261.6256; 
const float csn = 277.1826;
const float dn = 293.6648;
const float dsn = 311.1270;

void setup()
{
  // Set the pinMode for button inputs and piezo output
  pinMode(c, INPUT_PULLUP);
  pinMode(c_sharp, INPUT_PULLUP);
  pinMode(d, INPUT_PULLUP);
  pinMode(d_sharp, INPUT_PULLUP);
  pinMode(e, INPUT_PULLUP);
  pinMode(f, INPUT_PULLUP);
  pinMode(f_sharp, INPUT_PULLUP);
  pinMode(g, INPUT_PULLUP);
  pinMode(g_sharp, INPUT_PULLUP);
  pinMode(a, INPUT_PULLUP);
  pinMode(a_sharp, INPUT_PULLUP);
  pinMode(b, INPUT_PULLUP);
  pinMode(piezo, OUTPUT);
}

void loop()
{
  // Check the status of each button and play the corresponding tone
  if (digitalRead(c) == 0){
    tone(piezo, cn);
  }
  else if (digitalRead(c_sharp) == 0){
    tone(piezo, csn);
  }
  else if (digitalRead(d) == 0){
    tone(piezo, dn);
  }
  else if (digitalRead(d_sharp) == 0){
    tone(piezo, 311.1270);  // You can replace this fixed frequency with dsn
  }
  else if (digitalRead(e) == 0){
    tone(piezo, 329.6276);
  }
  else if (digitalRead(f) == 0){
    tone(piezo, 311.1270);
  }
  else if (digitalRead(f_sharp) == 0){
    tone(piezo, 311.1270);
  }
  else if (digitalRead(g) == 0){
    tone(piezo, 311.1270);
  }
  else if (digitalRead(g_sharp) == 0){
    tone(piezo, 311.1270);
  }
  else if (digitalRead(a) == 0){
    tone(piezo, 311.1270);
  }
  else if (digitalRead(a_sharp) == 0){
    tone(piezo, 311.1270);
  }
  else if (digitalRead(b) == 0){
    tone(piezo, 311.1270);
  }
  else {
    noTone(piezo);  // If no button is pressed, stop playing the tone
  }
}