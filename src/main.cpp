#include <iostream>
// first part before slash is the folder in which SDL2 is located
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include <glm/glm.hpp>
#include <imgui/imgui.h>
#include <sol/sol.hpp>

int main(int argc, char *argv[])
{
  sol::state lua;
  // lua.open_libraries(sol::lib::base);
  // Component to initialize
  SDL_Init(SDL_INIT_EVERYTHING);
  glm::vec2 velocity = glm::vec2(1.0f, 1.0f);
  std::cout << "text" << std::endl;

  return 0;
}