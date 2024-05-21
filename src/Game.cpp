#include <iostream>

#include "Game.h"

Game::Game(const std::string &config) { init(config); }

void Game::init(const std::string &path) {
  // TODO: Read in our config
  // Set up default window parameters.
  m_window.create(sf::VideoMode(1280, 720), "Shooty Shapes");
  m_window.setFramerateLimit(60);
}
