/*
        Title: Buzzer control music
        Description: The buzzer will play happy birthday song when the SW1 button is pressed. 
        Revision Date: March 13, 2018
        Requirements:  Arduino with 321Maker Shield
*/
#include "pitches.h"; 
int buzzerPin  = 5 ;  //BuzzerPin is connected to pin 5.
int button1Pin = 2;   //Button is connect to pin 2.

void setup() { //The Setup function runs once.
  pinMode(buzzerPin, OUTPUT);  //Setup red LED pin as an output pin.
  pinMode(button1Pin, INPUT);  //Setup button1 pin as an input pin.
}

void loop() { 
  if (digitalRead(button1Pin) == LOW) { //Check to see if button1 is pressed.
    //Repeat the code twice(play music two times)
    for(int i=1; i<3; i++){
    //Happy birthday song notes
    tone(buzzerPin, NOTE_C4,408);
    delay(408);
    tone(buzzerPin, NOTE_C4,408);
    delay(408); 
    tone(buzzerPin, NOTE_D4,408);
    delay(408);     
    tone(buzzerPin, NOTE_C4,408);     
    delay(408);
    tone(buzzerPin, NOTE_F4,408);     
    delay(408);   
    tone(buzzerPin, NOTE_F4,408);     
    delay(408);        
    tone(buzzerPin, NOTE_C4,408);     
    delay(408);
    tone(buzzerPin, NOTE_C4,408);     
    delay(408);
    tone(buzzerPin, NOTE_D4,408);     
    delay(408);
    tone(buzzerPin, NOTE_C4,408);     
    delay(408);
    tone(buzzerPin, NOTE_G4,408);     
    delay(408);
    tone(buzzerPin, NOTE_F4,408);     
    delay(408);     
    tone(buzzerPin, NOTE_C4,408);     
    delay(408);     
    tone(buzzerPin, NOTE_C4,408);
    delay(408);  
    tone(buzzerPin, NOTE_C5,408);     
    delay(408);
    tone(buzzerPin, NOTE_A4,408);     
    delay(408);     
    tone(buzzerPin, NOTE_DS4,408);
    delay(408);  
    tone(buzzerPin, NOTE_F4,408);     
    delay(408);
    tone(buzzerPin, NOTE_F4,408);
    delay(408);
    tone(buzzerPin, NOTE_E4,408);
    delay(408); 
    tone(buzzerPin, NOTE_D4,408);
    delay(408);
    tone(buzzerPin, NOTE_AS4,408);     
    delay(408);     
    tone(buzzerPin, NOTE_AS4,408);
    delay(408);  
    tone(buzzerPin, NOTE_A4,408);     
    delay(408);
    tone(buzzerPin, NOTE_F4,408);
    delay(408);
    tone(buzzerPin, NOTE_G4,408);
    delay(408); 
    tone(buzzerPin, NOTE_F4,408);
    }     

     } 
}
