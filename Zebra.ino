#include "Rhythm.h"
#include "View.h"
#include "Controller.h"

using namespace Zebra;

Rhythm rhythm;
View view(rhythm);
Player player(rhythm, view);
Controller controller(rhythm, view, player);

void setup() {
  view.initialize();
  player.initialize();
  controller.initialize();
}

void loop() {
  controller.checkKeyboardStatus();
  view.update();
}

ISR(TIMER1_COMPA_vect) {
  if (player.getPlayActive()) {
    if (rhythm.getPlayTime() < rhythm.getSongTime()) {
      rhythm.incrementPlayTime();
    } else {
      rhythm.restartPlayTime();
      view.restartPlayBar();
    }
  }
}
