#include "Game.h"
#include <iostream>

/***
 *  Scope resolution
 *  Game is an owner (namespace, scope), Game() is a constructor
 ***/
Game::Game()
{
  std::cout << "Game constructor called" << std::endl;
  isRunning = false;
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

  isRunning = true;

  return;
}
void Game::Render()
{
  // main color
  SDL_SetRenderDrawColor(renderer, 100, 100, 100, 255);
  // clrer screen
  SDL_RenderClear(renderer);
  // TODO: Render all game objects
  // present renderer in the display
  SDL_RenderPresent(renderer);
}
void Game::Run()
{
  while (isRunning)
  {
    ProcessInput();
    Update();
    Render();
  }
}
void Game::Update() {}
void Game::ProcessInput()
{
  SDL_Event event;

  while (SDL_PollEvent(&event))
  {
    switch (event.type)
    {
    case SDL_QUIT:
      isRunning = false;
      break;
    case SDL_KEYDOWN:
      if (event.key.keysym.sym == SDLK_ESCAPE)
      {
        isRunning = false;
      }
      break;
    }
  }
}
