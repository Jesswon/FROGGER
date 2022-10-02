//
// Created by jessw on 5/10/2020.
//

#ifndef SFML_PROJECT_VEHICLE_H
#define SFML_PROJECT_VEHICLE_H

#include <SFML/Graphics.hpp>
static const int NUM_OF_VEHICLE = 28;

namespace Won {
    class Vehicle {
    public:
        Vehicle();
        void draw(sf::RenderTarget &window, sf::RenderStates states) const;
        void move();
        sf::Sprite getRed(); //vehicles in first lane
        sf::Sprite getBrown();
        sf::Sprite getYellow();
        sf::Sprite getGreen();
        sf::Sprite getBrown_1();
        sf::Sprite getRed_1();
        sf::Sprite getYellow_1();
        sf::Sprite getGreen_1();
        sf::Sprite getYellow_2();
        sf::Sprite getRed_2(); //vehicles in second lane
        sf::Sprite getBlue();
        sf::Sprite getRed_3();
        sf::Sprite getRed_4();
        sf::Sprite getBlue_1();
        sf::Sprite getYellow_3();
        sf::Sprite getBlue_2();
        sf::Sprite getBlue_3();
        sf::Sprite getBrown_2(); //vehicles in third lane
        sf::Sprite getBrown_3();
        sf::Sprite getBlue_4();
        sf::Sprite getGreen_2();
        sf::Sprite getRed_5(); //vehicles in fourth lane
        sf::Sprite getYellow_4();
        sf::Sprite getBlue_5();
        sf::Sprite getBlue_6();
        sf::Sprite getBrown_4();
        sf::Sprite getRed_6();
        sf::Sprite getYellow_5();

    private:
        sf::Texture texture;
        sf::Sprite vehicle[NUM_OF_VEHICLE];
        /*
        red, brown, yellow, green, brown_1, red_1, yellow_1, green_1, yellow_2 (vehicle[0]-[8]) //vehicles in first lane
        red_2, blue, red_3, red_4, blue_1, yellow_3, blue_2, blue_3 (vehicle[9]-[16]) //vehicles in second lane
        brown_2, brown_3, blue_4, green_2 (vehicle[17]-[20]) //vehicles in third lane
        red_5, yellow_4, blue_5, blue_6, brown_4, red_6, yellow_5 (vehicle[21]-[27]); //vehicles in fourth lane
        */
    };
}

#endif //SFML_PROJECT_VEHICLE_H
