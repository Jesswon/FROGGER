//
// Created by jessw on 5/10/2020.
//
#ifndef SFML_PROJECT_LOG_H
#define SFML_PROJECT_LOG_H

#include <SFML/Graphics.hpp>
static const int NUM_OF_LOG_TEXTURE = 2;
static const int NUM_OF_LOG = 16;
static const int NUM_OF_WATER = 6;

namespace Won {
    class Log {
    public:
        Log();
        void draw(sf::RenderTarget &window, sf::RenderStates states) const;
        void move();
        sf::Sprite getLog(); //long-sized logs
        sf::Sprite getLog_1();
        sf::Sprite getLog_2();
        sf::Sprite getLog_3();
        sf::Sprite getLog_4();
        sf::Sprite getMlog(); //medium-sized logs
        sf::Sprite getMlog_1();
        sf::Sprite getMlog_2();
        sf::Sprite getMlog_3();
        sf::Sprite getMlog_4();
        sf::Sprite getMlog_5();
        sf::Sprite getMlog_6();
        sf::Sprite getMlog_7();
        sf::Sprite getSlog(); //small-sized logs
        sf::Sprite getSlog_1();
        sf::Sprite getSlog_2();
        sf::Sprite getWater1();
        sf::Sprite getWater2();
        sf::Sprite getWater3();
        sf::Sprite getWater4();
        sf::Sprite getWater5();
        sf::Sprite getWater6();

    private:
        sf::Texture texture[NUM_OF_LOG_TEXTURE];
        sf::Sprite log[NUM_OF_LOG],
        /*
        log[0], log[1], log[2], log[11], log[12], //long-sized logs
        log[3], log[4], log[5], log[6], log[7], log[8], log[9], log[10], //medium-sized logs
        log[13], log[14], slog[15], //small-sized log
        */
        water[NUM_OF_WATER];
    };
}


#endif //SFML_PROJECT_LOG_H
