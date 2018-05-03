//
// Created by potio on 2018/5/3.
//

#include "GameBus.h"

GameBus* GameBus::instance_ = nullptr;

GameBus *GameBus::instance()
{
  if (!instance_) instance_ = new GameBus();
  return instance_;
}

sf::Sprite* GameBus::loadSprite(std::string filename)
{
  sf::Texture* texture = new sf::Texture();
  bool success;

  success = texture->loadFromFile(filename);
  if (!success) {
    std::cerr << "ERR! Failed to load picture: " << filename << std::endl;
  }
  return new sf::Sprite(*texture);
}
