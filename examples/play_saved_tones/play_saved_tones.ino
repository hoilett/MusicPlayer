#include <MusicPlayer.h>

int melodyPin = 6;

MusicPlayer myPlayer = MusicPlayer(melodyPin);

void setup()
{
  //play the three saved tones
  myPlayer.playMelody(MELODY_LET_IT_GO, DURATION_LET_IT_GO, LENGTH_LET_IT_GO);
  delay(100);
  myPlayer.playMelody(MELODY_POWER_RANGERS, DURATION_POWER_RANGERS, LENGTH_POWER_RANGERS);
  delay(100);
  myPlayer.playMelody(MELODY_ACT_A_FOOL, DURATION_ACT_A_FOOL, LENGTH_ACT_A_FOOL);
}

void loop()
{
}
