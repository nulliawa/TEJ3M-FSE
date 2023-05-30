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
const int p = 1;

const int song = 14;
const int song2 = 15;
const int song3 = 16;

const int led = 17;
const int led2 = 18;
const int led3 = 19;

//Note frequencies
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
  piano();
  musicplayer();
}

void piano() {
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
  else {
    noTone(piezo);  // If no button is pressed, stop playing the tone
  }
}

void musicplayer(){
  if (digitalRead(song) == 0){
    digitalWrite(led, HIGH);
    songfn();
    digitalWrite(led, LOW);
  }
  else if (digitalRead(song2) == 0){
    digitalWrite(led2, HIGH);
    //song here function?
    digitalWrite(led2, LOW);
  }
  else if (digitalRead(song3) == 0){
    digitalWrite(led3, HIGH);
    //song here function?
    digitalWrite(led3, LOW);
  }
}

void songfn() { // Creates a function that plays the first song
  tone(p, fn); //F4
  delay(526+263); //dotted quarter
  noTone(p);
  
  tone(p, gn); //G4
  delay(526+263); //dotted quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p);
  
  //M2 
  tone(p, gn); //G4
  delay(526+263); //dotted quarter
  noTone(p);
  
  tone(p, an); //A4
  delay(526+263); //dotted quarter
  noTone(p);
  
  tone(p, 523.2511); //C5
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, asn); //Bb4 
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, an); //A4 
  delay(263); //eighth 
  noTone(p);
  
  //M3 
  tone(p, fn); //F4
  delay(526+263); //dotted quarter
  noTone(p);
  
  tone(p, gn); //G4
  delay(526+263); //dotted quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(526+526+263); //quarter+dotted quarter (tied) 
  noTone(p);
  
  //M4 (E1)
  delay(526); //two eighth (quarter) rest
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, fn); //F4
  delay(132); //sixteenth
  noTone(p); 
  
  //M1'
  tone(p, fn); //F4
  delay(526+263); //dotted quarter
  noTone(p);
  
  tone(p, gn); //G4
  delay(526+263); //dotted quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p);
  
  //M2'
  tone(p, gn); //G4
  delay(526+263); //dotted quarter
  noTone(p);
  
  tone(p, an); //A4
  delay(526+263); //dotted quarter
  noTone(p);
  
  tone(p, 523.2511); //C5
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, asn); //Bb4 
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, an); //A4 
  delay(263); //eighth 
  noTone(p);
  
  //M3'
  tone(p, fn); //F4
  delay(526+263); //dotted quarter
  noTone(p);
  
  tone(p, gn); //G4
  delay(526+263); //dotted quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p);
  
  //M5 (E2)
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(526); //quarter
  noTone(p);
  
  delay(526); //quarter rest
  
  tone(p, fn); //F4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth
  noTone(p);
  
  //M6
  delay(526); //quarter rest
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263+132); //eighth + sixteenth
  noTone(p);
  
  //M7
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, cn); //C4
  delay(263+526+526); //eighth + half
  noTone(p);
  
  delay(526); 
  
  //M8
  delay(263); //eighth rest
  
  tone(p, dn); //D4
  delay(263); //eighth 
  noTone(p); 
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(526); //quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(263); //eighth
  noTone(p);
  
  //M9 (E1)
  tone(p, 523.2511); //C5
  delay(263); //eighth 
  noTone(p);
  
  delay(263); //eighth rest
  
  tone(p, 523.2511); //C5
  delay(263); //eighth 
  noTone(p);
  
  tone(p, gn); //G4
  delay(526+526); //half
  noTone(p);
  
  delay(263); //eighth
  
  
  //M11 
  delay(263); //eighth
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  //M12
  delay(263); 
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(263+526); //eighth+quarter
  noTone(p); 
  
  delay(526);
  
  //M13 
  delay(263); 
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p); 
  
  //M14
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p);
  
  delay(526); //quarter
  
  //M15
  tone(p, fn); //F4
  delay(526+526+263); //half+eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  //M16
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p); 
  
  //M17
  delay(526+526); //half rest
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  //M18
  delay(263); 
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, gn); //G4
  delay(263+526); //eighth+quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M19 
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+526); //eighth + quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M20 
  tone(p, gn); //G4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263+132); //eighth+sixteenth tie
  noTone(p);
  
  tone(p, en); //E4
  delay(132); 
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M21
  tone(p, fn); //F4
  delay(526); //quarter
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263+132); //eighth+sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p); 
  
  //M22
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p);
  
  tone(p, fn); //F4
  delay(526+526); //half
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M23
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+526); //eighth + quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M24
  tone(p, 523.2511); //C5
  delay(526); //quarter
  noTone(p);
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263+132); //eighth+sixteenth 
  noTone(p);
  
  tone(p, en); //E4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M25
  
  tone(p, fn); //F4
  delay(526); //quarter
  noTone(p); 
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, en); //E4
  delay(263+132); //eighth+sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(263); //eighth
  noTone(p);
  
  //M26 (E1)
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p); 
  
  tone(p, fn); //F4
  delay(526+526); //half
  noTone(p); 
  
  delay(526); //quarter rest
  
  //M6'
  delay(526); //quarter rest
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263+132); //eighth + sixteenth
  noTone(p);
  
  //M7'
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, cn); //C4
  delay(263+526+526); //eighth + half
  noTone(p);
  
  delay(526); 
  
  //M8'
  delay(263); //eighth rest
  
  tone(p, dn); //D4
  delay(263); //eighth 
  noTone(p); 
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(526); //quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(263); //eighth
  noTone(p);
  
  //M10 (E2)
  
  tone(p, 523.2511); //C5
  delay(263); //eighth
  noTone(p);
  
  delay(263); //eighth
  
  tone(p, 523.2511); //C5
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+263); //eighth ties
  noTone(p); 
  
  tone(p, an); //A4
  delay(263);
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  //M11' 
  delay(263); //eighth
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  //M12'
  delay(263); 
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(263+526); //eighth+quarter
  noTone(p); 
  
  delay(526);
  
  //M13'
  delay(263); 
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p); 
  
  //M14'
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p);
  
  delay(526); //quarter
  
  //M15'
  tone(p, fn); //F4
  delay(526+526+263); //half+eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  //M16'
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p); 
  
  //M17'
  delay(526+526); //half rest
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  //M18'
  delay(263); 
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, gn); //G4
  delay(263+526); //eighth+quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M19' 
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+526); //eighth + quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M20'
  tone(p, gn); //G4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263+132); //eighth+sixteenth tie
  noTone(p);
  
  tone(p, en); //E4
  delay(132); 
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M21'
  tone(p, fn); //F4 +
  delay(526); //quarter
  noTone(p);
  
  tone(p, gn); //G4 +
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4 + 
  delay(263+132); //eighth+sixteenth
  noTone(p);
  
  tone(p, dn); //D4 + 
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, cn); //C4 +
  delay(526); //quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(263); //eighth
  noTone(p); 
  
  //M22'
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p);
  
  tone(p, fn); //F4
  delay(526+526); //half
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M23'
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+526); //eighth + quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M24'
  tone(p, 523.2511); //C5
  delay(526); //quarter
  noTone(p);
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263+132); //eighth+sixteenth 
  noTone(p);
  
  tone(p, en); //E4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M25'
  
  tone(p, fn); //F4
  delay(526); //quarter
  noTone(p); 
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, en); //E4
  delay(263+132); //eighth+sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(263); //eighth
  noTone(p);
  
  //M27 (E2)
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p); 
  
  tone(p, fn); //F4
  delay(526+526); //half
  noTone(p); 
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M28
  
  tone(p, an); //A4
  delay(263+132); //eighth+sixteenth
  noTone(p);
  
  tone(p, an); //A4
  delay(263+132); //eighth+sixteenth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+526); //eighth+quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M29
  
  tone(p, gn); //G4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263+132); //eighth+sixteenth tie
  noTone(p);
  
  tone(p, en); //E4
  delay(132); 
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M30
  tone(p, fn); //F4
  delay(526); //quarter
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263+132); //eighth+sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p); 
  
  //M31
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p);
  
  tone(p, fn); //F4
  delay(526+526); //half
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M32
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+526); //eighth + quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M33
  tone(p, 523.2511); //C5
  delay(526); //quarter
  noTone(p);
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263+132); //eighth+sixteenth 
  noTone(p);
  
  tone(p, en); //E4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M34
  
  tone(p, fn); //F4
  delay(526); //quarter
  noTone(p); 
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, en); //E4
  delay(263+132); //eighth+sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(263); //eighth
  noTone(p);
  
  //M35
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p); 
  
  tone(p, fn); //F4
  delay(526+526); //half
  noTone(p); 
  
  delay(526);
  
  //M36 (BRIDGE)
  
  tone(p, cn); //C4
  delay(526+526+526+526); //whole 
  noTone(p);
  
  //M37 (E1)
  
  tone(p, fn); //F4
  delay(263+132); //dotted eighth
  noTone(p); 
  
  tone(p, fn); //F4
  delay(132); //sixteenth
  noTone(p); 
  
  delay(263); //eighth
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  delay(526+526); //half
  
  //M36' (BRIDGE')
  
  tone(p, cn); //C4
  delay(526+526+526+526); //whole 
  noTone(p);
  
  //M38 (E2)
  
  tone(p, fn); //F4
  delay(263+132); //dotted eighth
  noTone(p); 
  
  tone(p, fn); //F4
  delay(132); //sixteenth
  noTone(p); 
  
  delay(263); //eighth
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  delay(526+526);
  
  //M6''
  delay(526); //quarter rest
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263+132); //eighth + sixteenth
  noTone(p);
  
  //M7''
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, cn); //C4
  delay(263+526+526); //eighth + half
  noTone(p);
  
  delay(526); 
  
  //M8''
  delay(263); //eighth rest
  
  tone(p, dn); //D4
  delay(263); //eighth 
  noTone(p); 
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(526); //quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(263); //eighth
  noTone(p);
  
  //M10 (E3)
  
  tone(p, 523.2511); //C5
  delay(263); //eighth
  noTone(p);
  
  delay(263); //eighth
  
  tone(p, 523.2511); //C5
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+263); //eighth ties
  noTone(p); 
  
  tone(p, an); //A4
  delay(263);
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  //M11''
  delay(263); //eighth
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  //M12''
  delay(263); 
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(263+526); //eighth+quarter
  noTone(p); 
  
  delay(526);
  
  //M13''
  delay(263); 
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p); 
  
  //M14''
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p);
  
  delay(526); //quarter
  
  //M15''
  tone(p, fn); //F4
  delay(526+526+263); //half+eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  //M16''
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p); 
  
  //M17''
  delay(526+526); //half rest
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263); //eighth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  //M18''
  delay(263); 
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, gn); //G4
  delay(263+526); //eighth+quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M19''
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+526); //eighth + quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M20''
  tone(p, gn); //G4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263+132); //eighth+sixteenth tie
  noTone(p);
  
  tone(p, en); //E4
  delay(132); 
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M21''
  tone(p, fn); //F4
  delay(526); //quarter 
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
 
  tone(p, en); //E4
  delay(263+132); //eighth+sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, cn); //C4 
  delay(526); //quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(263); //eighth
  noTone(p); 
  
  //M22''
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p);
  
  tone(p, fn); //F4
  delay(526+526); //half
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M23''
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+526); //eighth + quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M24''
  tone(p, 523.2511); //C5
  delay(526); //quarter
  noTone(p);
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263+132); //eighth+sixteenth 
  noTone(p);
  
  tone(p, en); //E4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M25''
  
  tone(p, fn); //F4
  delay(526); //quarter
  noTone(p); 
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, en); //E4
  delay(263+132); //eighth+sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(263); //eighth
  noTone(p);
  
  //M27 (E3)
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p); 
  
  tone(p, fn); //F4
  delay(526+526); //half
  noTone(p); 
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M39
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+526); //eighth + quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M40
  tone(p, gn); //G4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263+132); //eighth+sixteenth tie
  noTone(p);
  
  tone(p, en); //E4
  delay(132); 
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M41
  tone(p, fn); //F4
  delay(526); //quarter
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263+132); //eighth+sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(263); //eighth
  noTone(p); 
  
  //M42
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p);
  
  tone(p, fn); //F4
  delay(526+526); //half
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M43
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+526); //eighth + quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M44
  tone(p, 523.2511); //C5
  delay(526); //quarter
  noTone(p);
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263+132); //eighth+sixteenth 
  noTone(p);
  
  tone(p, en); //E4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M45
  
  tone(p, fn); //F4
  delay(526); //quarter
  noTone(p); 
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, en); //E4
  delay(263+132); //eighth+sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(263); //eighth
  noTone(p);
  
  //M46
  
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p);
  
  tone(p, fn); //F4
  delay(526+526); //half
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M47
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+526); //eighth + quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M48
  tone(p, gn); //G4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263+132); //eighth+sixteenth tie
  noTone(p);
  
  tone(p, en); //E4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M49
  tone(p, fn); //F4
  delay(526); //quarter
  noTone(p);
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p);
  
  tone(p, en); //E4
  delay(263+132); //eighth+sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p); 
  
  //M50
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p);
  
  tone(p, fn); //F4
  delay(526+526); //half
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M51
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, an); //A4
  delay(263+132); //dotted eighth
  noTone(p);
  
  tone(p, gn); //G4
  delay(263+526); //eighth + quarter
  noTone(p); 
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M52
  
  tone(p, 523.2511); //C5
  delay(526); //quarter
  noTone(p);
  
  tone(p, en); //E4
  delay(263); //eighth
  noTone(p);
  
  tone(p, fn); //F4
  delay(263+132); //eighth+sixteenth 
  noTone(p);
  
  tone(p, en); //E4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(263); //eighth
  noTone(p);
  
  tone(p, cn); //C4
  delay(132); //sixteenth
  noTone(p); 
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, fn); //F4
  delay(132); //sixteenth 
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  //M53
  tone(p, fn); //F4
  delay(526); //quarter
  noTone(p); 
  
  tone(p, gn); //G4
  delay(263); //eighth
  noTone(p); 
  
  tone(p, en); //E4
  delay(263+132); //eighth+sixteenth
  noTone(p);
  
  tone(p, dn); //D4
  delay(132); //sixteenth
  noTone(p);
  
  tone(p, cn); //C4
  delay(526); //quarter
  noTone(p);
  
  tone(p, cn); //C4
  delay(263); //eighth
  noTone(p);
  
  //M54
  tone(p, gn); //G4
  delay(526); //quarter
  noTone(p);
  
  tone(p, fn); //F4
  delay(526+526); //half
  noTone(p);
  
  delay(526);  
}