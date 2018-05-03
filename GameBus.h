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
  // The config struct.
  struct {
    int spriteW = 16;
    int spriteH = 16;
  } config;

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
   * @param index The sprite rect index.
   * @return The texture.
   */
  sf::Sprite* loadSprite(std::string filename, int index);

  /**
   * Get the rect of a sprite. each rect is 16 * 16.
   * @param index The index of the sprite.
   * @return The rect of the sprite.
   */
  sf::IntRect spriteRect(int index);
};


#endif //WALKAR_GAMEBUS_H
