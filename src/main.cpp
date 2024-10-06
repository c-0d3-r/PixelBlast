#include <iostream>
#include "Game.h"
#include <SDL2/SDL.h>

int main(int argc, char *argv[])
{
  /**
   * Without using new this object will be
   * created on the stack and will be destroyed
   * at the end of the main method (when the scope ends RAII?)
   **/

  Game game;
  game.Initialize();
  game.Run();
  game.Destroy();

  return 0;
}