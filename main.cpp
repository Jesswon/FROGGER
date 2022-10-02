#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.h"
#include <windows.h>
using namespace Won;

int main() {
    bool GAME_STARTED = true;
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "DaveStation");
    Frogger gameJessica;
    gameJessica.start(window);

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            gameJessica.addEvents(window, event);
        }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            GAME_STARTED = false;
            gameJessica.exit(window);
        }

        window.clear(sf::Color::Black);
        if(GAME_STARTED)
        {
            gameJessica.addEvents(window);
            window.draw(gameJessica);
            window.draw(gameJessica.getThumbnail());
            window.draw(gameJessica.getInfo(window));
        }
        window.display();
    }
    return 0;
}





