
#include "songs.h"

#define BUZZER_PIN 3
#define LED_PIN 13

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(13, OUTPUT);

  //Sing mothafucka sing!
  sing(sizeof(urss)/sizeof(urss[0]),urss);
  
}

void loop() {}

void sing(size_t size, const int song[][2]) {
  
  for (int sound = 0; sound < size; sound++) {
    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int note = song[sound][0];
    int noteDuration = 1000 / song[sound][1];
  
    buzz(note, noteDuration);
  
    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
  
    // stop the tone playing:
    buzz(0, noteDuration);
    
  }

} 

void buzz(long frequency, long length) {
  
  digitalWrite(LED_PIN, HIGH);

  // Calculate the delay value between transitions
  long delayValue = 1000000 / frequency / 2; 
  /*1 second's worth of microseconds, divided by the frequency, then split in half since
  there are two phases to each cycle */

  // Calculate the number of cycles for proper timing
  long numCycles = frequency * length / 1000; 
  /* Multiply frequency, which is really cycles per second, by the number of seconds to
  get the total number of cycles to produce */

  for (long i = 0; i < numCycles; i++) {
    digitalWrite(BUZZER_PIN, HIGH);
    delayMicroseconds(delayValue);
    digitalWrite(BUZZER_PIN, LOW);
    delayMicroseconds(delayValue);
  }
  
  digitalWrite(LED_PIN, LOW);

}
