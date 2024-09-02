#include <iostream>
#include "Game.h"

int main(int argc, char *argv[])
{
  /**
   * Without using new this object will be
   * created on the stack and will be destroyed
   * at the end of the main method (when the scope ends RAII?)
   **/

  Game game;

  return 0;
}