/***
 * Protection guard
 * This makes preprocessor only include this header once
 ***/
#ifndef GAME_H
#define GAME_H
#include <SDL2/SDL.h>

class Game
{
private:
  SDL_Window *window;
  SDL_Renderer *renderer;

public:
  Game();
  ~Game();
  void Initialize();
  void Destroy();
  void Run();
  void ProcessInput();
  void Update();
  void Render();
};

#endif