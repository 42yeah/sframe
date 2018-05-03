//
// Created by potio on 2018/5/3.
//

#ifndef WALKAR_GAMEBUS_H
#define WALKAR_GAMEBUS_H


#include <SFML/Window.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <iostream>

class GameBus
{
private:
  // The singleton instance
  static GameBus* instance_;

public:
  // The RenderWindow instance
  sf::RenderWindow* window;

  // The smile pic
  sf::Sprite* smile;

  /**
   * Get the static singleton instance of GameBus.
   * @return
   */
  static GameBus* instance();

  /**
   * Loads a specific texture.
   * @param filename The file name.
   * @return The texture.
   */
  sf::Sprite* loadSprite(std::string filename);
};


#endif //WALKAR_GAMEBUS_H
