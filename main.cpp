#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "GameBus.h"

void update();

void render();

/**
 * The main application entry.
 * @return Error code
 */
int main()
{
  sf::RenderWindow window(sf::VideoMode(800, 600), "Hello world");
  GameBus* bus = GameBus::instance();

  bus->window = &window;
  bus->smile = bus->loadSprite("assets/smile.png");
  while (window.isOpen()) {
    sf::Event event{};

    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }
    window.clear();
    // Update entities
    update();
    // Render scene
    render();
    // Display window
    window.display();
  }

  return 0;
}

/**
 * Updates the game's info, entities, movements, etc.
 */
void update()
{

}

/**
 * Renders the scene.
 */
void render()
{
  GameBus* bus = GameBus::instance();

  bus->window->draw(*bus->smile);
}