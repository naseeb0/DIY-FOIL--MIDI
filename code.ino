
#include <Wire.h>
#include <Keyboard.h>

#ifndef _BV
#define _BV(bit) (1 << (bit)) 
#endif



uint16_t lasttouched = 0;
uint16_t currtouched = 0;

void setup() {
  Keyboard.begin();
  Serial.begin(9600);

  while (!Serial) { 
    delay(10);
  }
  
  Serial.println("FOIL MIDI TEST"); 
  
  if (!cap.begin(0x5A)) {
    Serial.println("Wiring Prob");
    while (1);
  }
  Serial.println("Success FOIL MIDI DETECTION");
}

void loop() {
  currtouched = cap.touched();
  
  if ((currtouched & _BV(0)) && !(lasttouched & _BV(0)) ) {
      Serial.print(0); Serial.println(" touched");
      Keyboard.press(keys[0]);
    }
    if (!(currtouched & _BV(0)) && (lasttouched & _BV(0)) ) {
      Serial.print(0); Serial.println(" released");
      Keyboard.release(keys[0]);
    }


    if ((currtouched & _BV(1)) && !(lasttouched & _BV(1)) ) {
      Serial.print(1); Serial.println(" touched");
      Keyboard.press(keys[1]);
    }
    if (!(currtouched & _BV(1)) && (lasttouched & _BV(1)) ) {
      Serial.print(1); Serial.println(" released");
      Keyboard.release(keys[1]);
    }

    if ((currtouched & _BV(2)) && !(lasttouched & _BV(2)) ) {
      Serial.print(2); Serial.println(" touched");
      Keyboard.press(keys[2]);
    }
    if (!(currtouched & _BV(2)) && (lasttouched & _BV(2)) ) {
      Serial.print(2); Serial.println(" released");
      Keyboard.release(keys[2]);
    }



    if ((currtouched & _BV(3)) && !(lasttouched & _BV(3)) ) {
      Serial.print(3); Serial.println(" touched");
      Keyboard.press(keys[3]);
    }
    if (!(currtouched & _BV(3)) && (lasttouched & _BV(3)) ) {
      Serial.print(3); Serial.println(" released");
      Keyboard.release(keys[3]);
    }

    if ((currtouched & _BV(4)) && !(lasttouched & _BV(4)) ) {
      Serial.print(4); Serial.println(" touched");
      Keyboard.press(keys[4]);
    }
    // if it *was* touched and now *isnt*, alert!
    if (!(currtouched & _BV(4)) && (lasttouched & _BV(4)) ) {
      Serial.print(4); Serial.println(" released");
      Keyboard.release(keys[4]);
    }



    if ((currtouched & _BV(5)) && !(lasttouched & _BV(5)) ) {
      Serial.print(5); Serial.println(" touched");
      Keyboard.press(keys[5]);
    }
    if (!(currtouched & _BV(5)) && (lasttouched & _BV(5)) ) {
      Serial.print(5); Serial.println(" released");
      Keyboard.release(keys[5]);
    }


    if ((currtouched & _BV(6)) && !(lasttouched & _BV(6) )) {
      Serial.print(6); Serial.println(" touched");
      Keyboard.press(keys[6]);
    }
    if (!(currtouched & _BV(6)) && (lasttouched & _BV(6)) ) {
      Serial.print(6); Serial.println(" released");
      Keyboard.release(keys[6]);
    }


    if ((currtouched & _BV(7)) && !(lasttouched & _BV(7)) ) {
      Serial.print(7); Serial.println(" touched");
      Keyboard.press(keys[7]);
    }
    if (!(currtouched & _BV(7)) && (lasttouched & _BV(7)) ) {
      Serial.print(7); Serial.println(" released");
      Keyboard.release(keys[7]);
    }


    if ((currtouched & _BV(8)) && !(lasttouched & _BV(8)) ) {
      Serial.print(8); Serial.println(" touched");
      Keyboard.press(keys[8]);
    }
    if (!(currtouched & _BV(8)) && (lasttouched & _BV(8)) ) {
      Serial.print(8); Serial.println(" released");
      Keyboard.release(keys[8]);
    }


    if ((currtouched & _BV(9)) && !(lasttouched & _BV(9)) ) {
      Serial.print(9); Serial.println(" touched");
      Keyboard.press(keys[9]);
    }
    if (!(currtouched & _BV(9)) && (lasttouched & _BV(9)) ) {
      Serial.print(9); Serial.println(" released");
      Keyboard.release(keys[9]);
    }



    if ((currtouched & _BV(10)) && !(lasttouched & _BV(10)) ) {
      Serial.print(10); Serial.println(" touched");
      Keyboard.press(keys[10]);
    }
    if (!(currtouched & _BV(10)) && (lasttouched & _BV(10)) ) {
      Serial.print(10); Serial.println(" released");
      Keyboard.release(keys[10]);
    }







  lasttouched = currtouched;

}
