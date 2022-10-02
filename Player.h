//
// Created by jessw on 5/10/2020.
//

#ifndef SFML_PROJECT_PLAYER_H
#define SFML_PROJECT_PLAYER_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Vehicle.h"
#include <SFML/Audio.hpp>
#include "Log.h"
static const int NUM_OF_PLAYER_TEXTURE = 3;
static const int NUM_OF_PLAYER_FONT = 2;
static const int NUM_OF_PLAYER_TEXT = 2;
static const int NUM_OF_LILLYPAD = 4;
static const int NUM_Of_FROG = 4;
//static const int NUM_OF_PLAYER_SB = 4;
//static const int NUM_OF_PLAYER_SOUND = 4;

namespace Won {
    class Player {
    public:
        Player();
        void draw(sf::RenderTarget &window, sf::RenderStates states) const;
        void contain();
        void go(sf::Event event);
        void collision(Vehicle &v);
        void flow(Log &l);
    private:
        sf::Texture texture[NUM_OF_PLAYER_TEXTURE];
        sf::Sprite frog, lillypad[NUM_OF_LILLYPAD], anotherFrog[NUM_Of_FROG];
        sf::Font font[NUM_OF_PLAYER_FONT];
        sf::Text text[NUM_OF_PLAYER_TEXT];
        int scores;
        int lives;
        sf::RectangleShape background;
        //sf::SoundBuffer soundBuffer[NUM_OF_PLAYER_SB];
        //sf::Sound sound[NUM_OF_PLAYER_SOUND];
    };
}

#endif //SFML_PROJECT_PLAYER_H
