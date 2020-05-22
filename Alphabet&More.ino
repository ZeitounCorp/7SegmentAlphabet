/**
 * author: Lenny Zeitoun @zcorp
 * date: 05/21/20
 * description: Simple Seven Segment displaying some characters
 */

// We define first the pins that are going to emit signals from the arduino UNO R3
int pin_dp=4;
int pin_a=9;
int pin_b=8;
int pin_c=5;
int pin_d=6;
int pin_e=7;
int pin_f=10;
int pin_g=11;
 
void setup() {
 // .. doStuff()
}

void loop() {
 // .. doThings()
}
 
void playPause() {
  digitalWrite(pin_a,LOW);
  digitalWrite(pin_b,LOW);
  digitalWrite(pin_c,LOW);
  digitalWrite(pin_d,LOW);
  digitalWrite(pin_e,LOW);
  digitalWrite(pin_f,LOW);
  digitalWrite(pin_g,LOW);
  digitalWrite(pin_dp,LOW);
  delay(500);
}

void playA() {
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,LOW);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
  digitalWrite(pin_dp,LOW);
}

void playB() {
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
  digitalWrite(pin_dp,LOW);
}

void playC() {
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,LOW);
  digitalWrite(pin_c,LOW);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,LOW);
  digitalWrite(pin_dp,LOW);
}

void playD() {
  digitalWrite(pin_a,LOW);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,LOW);
  digitalWrite(pin_g,HIGH);
  digitalWrite(pin_dp,LOW);
}

void playE() {
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,LOW);
  digitalWrite(pin_c,LOW);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
  digitalWrite(pin_dp,LOW);
}

void playF() {
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,LOW);
  digitalWrite(pin_c,LOW);
  digitalWrite(pin_d,LOW);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
  digitalWrite(pin_dp,LOW);
}

void playG() {
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,LOW);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
  digitalWrite(pin_dp,LOW);
}

void playH() {
  digitalWrite(pin_a,LOW);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,LOW);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
  digitalWrite(pin_dp,LOW);
}

void playI() {
  digitalWrite(pin_a,LOW);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,LOW);
  digitalWrite(pin_e,LOW);
  digitalWrite(pin_f,LOW);
  digitalWrite(pin_g,LOW);
  digitalWrite(pin_dp,LOW);
}

void playJ() {
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,LOW);
  digitalWrite(pin_g,LOW);
  digitalWrite(pin_dp,LOW);
}

void playL() {
  digitalWrite(pin_a,LOW);
  digitalWrite(pin_b,LOW);
  digitalWrite(pin_c,LOW);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,LOW);
  digitalWrite(pin_dp,LOW);
}

void playN() {
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,LOW);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,LOW);
  digitalWrite(pin_dp,HIGH);
}

void playO() {
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,LOW);
  digitalWrite(pin_dp,LOW);
}

void playP() {
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,LOW);
  digitalWrite(pin_d,LOW);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
  digitalWrite(pin_dp,LOW);
}

void playQ() {
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,LOW);
  digitalWrite(pin_dp,HIGH);
}

void playR() {
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,LOW);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
  digitalWrite(pin_dp,HIGH);
}

void playS() {
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,LOW);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,LOW);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
  digitalWrite(pin_dp,LOW);
}

void playU() {
  digitalWrite(pin_a,LOW);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,LOW);
  digitalWrite(pin_dp,LOW);
}

void playV() {
  digitalWrite(pin_a,LOW);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,LOW);
  digitalWrite(pin_dp,HIGH);
}

void playY() {
  digitalWrite(pin_a,LOW);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,HIGH);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,LOW);
  digitalWrite(pin_f,HIGH);
  digitalWrite(pin_g,HIGH);
  digitalWrite(pin_dp,LOW);
}

void playZ() {
  digitalWrite(pin_a,HIGH);
  digitalWrite(pin_b,HIGH);
  digitalWrite(pin_c,LOW);
  digitalWrite(pin_d,HIGH);
  digitalWrite(pin_e,HIGH);
  digitalWrite(pin_f,LOW);
  digitalWrite(pin_g,HIGH);
  digitalWrite(pin_dp,LOW);
}
