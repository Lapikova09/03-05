#pragma once 
#include <SFML/Graphics.hpp>
const float WINDOW_WIDTH{1100.f };
const float WINDOW_HEIGHT{600.f };
const std::string WINDOW_TITLE{ "SFML FISH" };
const unsigned int FPS{ 60 };
const std::string PLAYER_FILENAME = "player.png";
const std::string OCEAN_FILENAME = "okean.jpg";
const sf::Vector2f START_POS{ 75.f, WINDOW_HEIGHT / 2 -31.f};
const sf::Vector2f OCEAN_START_POS{ 0.f,0.f };
const float SPEED_Y = 5.f;
