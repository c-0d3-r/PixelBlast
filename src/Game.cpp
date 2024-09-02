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

void Game::Destroy() {}
void Game::Initialize() {}
void Game::Render() {}
void Game::Run() {}
void Game::Update() {}
void Game::ProcessInput() {}
