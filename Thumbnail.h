//
// Created by jessw on 5/18/2020.
//

#ifndef SFML_PROJECT_THUMBNAIL_H
#define SFML_PROJECT_THUMBNAIL_H

#include <SFML/Graphics.hpp>
#include <string>
#include "GameText.h"

namespace Won {
    class Thumbnail : public sf::Transformable, public sf::Drawable {
    private:
        bool loaded;
        sf::RectangleShape *sprite;
        sf::Texture *texture = nullptr;
        void setThumbnail();
        bool isThumbnailLoaded();
        static float x;
        static float y;
        float padding = 50.f;
        static bool firstThumbnail;
        std::string image_path;
        void setPosition();
        void setFrame();
        sf::Vector2f windowSize;
        sf::Rect<float> leftMargin;
        bool selected = false;
        GameText title;
        sf::Vector2f titlePosition;
    public:
        sf::RectangleShape *getThumbnail();
        Thumbnail();
        void initialize();
        std::string getImagePath();
        //~Thumbnail();
        void setSelected(bool choice);
        bool getSelected();
        void setWindowSize(sf::Vector2<unsigned int> windowSize);
        void setLeftMargin(sf::Rect<float> &margin);
        Thumbnail(std::string basicString, std::string title, sf::Rect<float> rect, const sf::Vector2u vector2);
        GameText getTitle();
        void highlightThumbnail();
        void unhighlightThumbnail();
        sf::Texture *getTexture();
        virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;
    };
}

#endif //SFML_PROJECT_THUMBNAIL_H
