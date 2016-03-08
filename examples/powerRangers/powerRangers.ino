/*
  FILENAME:   LetItGo.ino
  AUTHOR:     Orlando S. Hoilett
  EMAIL:      orlandohoilett@gmail.com
  WEBSITE:    http://www.instructables.com/member/ohoilett/
  VERSION:    0.1
  
  AFFILIATIONS:
  Calvary Engineering Family Group, USA
    A group of electronics and science enthusiasts who enjoy building things

  UPDATES:
  Version 0.0
  2015/01/06:2100>
             Started code initialization.
  2015/01/07:2216>
             Included MusicPlayer.h library.
  
  MATERIALS LIST
  1 x Arduino
  1 x Speaker
  2 x Jumper wires/alligator clips
                            
  DESCRIPTION
  Plays chorus of Disney's "Let It Go" from the movie FROZEN. I
  put together the notes from reading the music sheet shown in
  this YouTube video https://www.youtube.com/watch?v=wuYhQnst_Ks
  by YouTube user:sunnyydelight18 published on June 5, 2014. I am
  not great at reading music, so my little sister helped me. Some
  of the notes may not be completely accurate and some of the note
  durations may be a little off. I am pretty sure I made up some
  of the note durations. I chose "Let It Go" because I am making
  my sister an Arduino alarm clock and this song will be the alarm
  tone.
      
  DISCLAIMER
  This code is in the public domain. Please feel free to modify,
  use, etc however you see fit. But, please give reference to
  original authors as a courtesy to Open Source developers.
  
  If you find any bugs, have any questions, or any comments,
  please feel free to contact me.

*/


#include "MusicPlayer.h"

//chorus from "Let It Go" from the movie FROZEN
//int melody[] = { E6,E6,D6,E6,G6,E6  };
int melody[] = { E7,E7,D7,E7,G7,E7 };

//unsigned int duration[] = { E, E, E, E, E, E  };
unsigned int duration[] = { E, E, S, E, E, E  };
//unsigned int duration[] = { S, S, S, S, S, S };

int melodyPin = 9;
int melodyLength = 6;

MusicPlayer myPlayer = MusicPlayer(melodyPin);

void setup()
{
  myPlayer.playMelody(melody, duration, melodyLength);
}

void loop()
{
}
