/***
 * Protection guard
 * This makes preprocessor only include this header once
 ***/
#ifndef GAME_H
#define GAME_H

class Game
{
private:
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