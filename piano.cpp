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

const int led = 17;
const int led2 = 18;
const int led3 = 19;

const float cn = 261.6256; 
const float csn = 277.1826;
const float dn = 293.6648;
const float dsn = 311.1270;
const float en = 329.6276;
const float fn = 349.2282;
const float fsn = 369.9944;
const float gn = 391.9954;
const float gsn = 415.3047;
const float an = 440.0000;
const float asn = 466.1638;
const float bn = 493.8833;

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
  pinMode(song, INPUT_PULLUP);
  pinMode(song2, INPUT_PULLUP);
  pinMode(song3, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
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
    tone(piezo, dsn);
  }
  else if (digitalRead(e) == 0){
    tone(piezo, en);
  }
  else if (digitalRead(f) == 0){
    tone(piezo, fn);
  }
  else if (digitalRead(f_sharp) == 0){
    tone(piezo, fsn);
  }
  else if (digitalRead(g) == 0){
    tone(piezo, gn);
  }
  else if (digitalRead(g_sharp) == 0){
    tone(piezo, gsn);
  }
  else if (digitalRead(a) == 0){
    tone(piezo, an);
  }
  else if (digitalRead(a_sharp) == 0){
    tone(piezo, asn);
  }
  else if (digitalRead(b) == 0){
    tone(piezo, bn);
  }
  else if (digitalRead(song) == 0){
    digitalWrite(led, HIGH);
    //song here
    digitalWrite(led, LOW);
  }
  else if (digitalRead(song2) == 0){
    digitalWrite(led2, HIGH);
    //song here
    digitalWrite(led2, LOW);
  }
  else if (digitalRead(song3) == 0){
    digitalWrite(led3, HIGH);
    //song here
    digitalWrite(led3, LOW);
  }
  else {
    noTone(piezo);  // If no button is pressed, stop playing the tone
  }
}