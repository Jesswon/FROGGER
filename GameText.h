//
// Created by jessw on 5/18/2020.
//

#ifndef SFML_PROJECT_GAMETEXT_H
#define SFML_PROJECT_GAMETEXT_H

#include <SFML/Graphics.hpp>

namespace Won {
    class GameText : public sf::Transform, public sf::Drawable {
    private:
        sf::Text *text;
        sf::Font *font;
    public:
        GameText(std::string text, unsigned int charSize, sf::Vector2f position);
        //GameText(const GameText& gameText);
        GameText();
        sf::Text *getText();
        void setText();
        void setPosition(float x, float y);
        virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;
    };
}

#endif //SFML_PROJECT_GAMETEXT_H
