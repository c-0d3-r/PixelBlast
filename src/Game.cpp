#include "Game.h"
#include <iostream>

/***
 *  Scope resolution
 *  Game is an owner (namespace, scope), Game() is a constructor
 ***/
Game::Game()
{
  std::cout << "Game constructor called" << std::endl;
}
Game::~Game()
{
  std::cout << "Game desctructor called" << std::endl;
}

void Game::Destroy()
{
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
}
void Game::Initialize()
{
  int result = SDL_Init(SDL_INIT_EVERYTHING);

  if (result != 0)
  {
    std::cerr << "Error initializing SDL: " << SDL_GetError() << std::endl;
    return;
  }

  window = SDL_CreateWindow(
      NULL,
      SDL_WINDOWPOS_CENTERED,
      SDL_WINDOWPOS_CENTERED,
      800,
      600,
      SDL_WINDOW_BORDERLESS);

  if (!window)
  {
    std::cerr << "Error creating window" << std::endl;
    return;
  }

  // Renderer inside window
  renderer = SDL_CreateRenderer(window, -1, 0);

  if (!renderer)
  {
    std::cerr << "Error creating renderer" << std::endl;
  }

  return;
}
void Game::Render() {}
void Game::Run() {}
void Game::Update() {}
void Game::ProcessInput() {}
