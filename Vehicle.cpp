//
// Created by jessw on 5/10/2020.
//

#include "Vehicle.h"
#include <SFML/Graphics.hpp>

namespace Won {
        Vehicle::Vehicle() {
        texture.loadFromFile("Game/Frogger/images/cars.png");

        vehicle[0].setTexture(texture);
        vehicle[0].scale(2, 2);
        vehicle[0].setTextureRect(sf::IntRect(15, 41, 28, 55));
        vehicle[0].setPosition(420, 907);
        vehicle[0].setRotation(90);

        vehicle[1].setTexture(texture);
        vehicle[1].scale(1.8, 1.8);
        vehicle[1].setTextureRect(sf::IntRect(152, 31, 32, 74));
        vehicle[1].setPosition(280, 905);
        vehicle[1].setRotation(90);

        vehicle[2].setTexture(texture);
        vehicle[2].scale(2, 2);
        vehicle[2].setTextureRect(sf::IntRect(44, 37, 48, 69));
        vehicle[2].setPosition(115, 865);
        vehicle[2].setRotation(90);

        vehicle[3].setTexture(texture);
        vehicle[3].scale(1.9, 1.9);
        vehicle[3].setTextureRect(sf::IntRect(204, 14, 32, 109));
        vehicle[3].setPosition(1160, 903);
        vehicle[3].setRotation(90);

        vehicle[4].setTexture(texture);
        vehicle[4].scale(1.8, 1.8);
        vehicle[4].setTextureRect(sf::IntRect(152, 31, 32, 74));
        vehicle[4].setPosition(920, 905);
        vehicle[4].setRotation(90);

        vehicle[5].setTexture(texture);
        vehicle[5].scale(2, 2);
        vehicle[5].setTextureRect(sf::IntRect(15, 41, 28, 55));
        vehicle[5].setPosition(755, 907);
        vehicle[5].setRotation(90);

        vehicle[6].setTexture(texture);
        vehicle[6].scale(1.9, 1.9);
        vehicle[6].setTextureRect(sf::IntRect(61, 37, 32, 69));
        vehicle[6].setPosition(1920, 902);
        vehicle[6].setRotation(90);

        vehicle[7].setTexture(texture);
        vehicle[7].scale(1.9, 1.9);
        vehicle[7].setTextureRect(sf::IntRect(204, 14, 32, 109));
        vehicle[7].setPosition(1755, 903);
        vehicle[7].setRotation(90);

        vehicle[8].setTexture(texture);
        vehicle[8].scale(1.9, 1.9);
        vehicle[8].setTextureRect(sf::IntRect(61, 37, 32, 69));
        vehicle[8].setPosition(1520, 902);
        vehicle[8].setRotation(90);


        vehicle[9].setTexture(texture);
        vehicle[9].scale(2, 2);
        vehicle[9].setTextureRect(sf::IntRect(15, 41, 28, 55));
        vehicle[9].setPosition(215, 868);
        vehicle[9].setRotation(270);

        vehicle[10].setTexture(texture);
        vehicle[10].scale(1.9, 1.9);
        vehicle[10].setTextureRect(sf::IntRect(110, 39, 28, 67));
        vehicle[10].setPosition(75, 866);
        vehicle[10].setRotation(270);

        vehicle[11].setTexture(texture);
        vehicle[11].scale(2, 2);
        vehicle[11].setTextureRect(sf::IntRect(15, 41, 28, 55));
        vehicle[11].setPosition(480, 868);
        vehicle[11].setRotation(270);

        vehicle[12].setTexture(texture);
        vehicle[12].scale(2, 2);
        vehicle[12].setTextureRect(sf::IntRect(15, 41, 28, 55));
        vehicle[12].setPosition(600, 868);
        vehicle[12].setRotation(270);

        vehicle[13].setTexture(texture);
        vehicle[13].scale(1.9, 1.9);
        vehicle[13].setTextureRect(sf::IntRect(110, 39, 28, 67));
        vehicle[13].setPosition(1150, 866);
        vehicle[13].setRotation(270);

        vehicle[14].setTexture(texture);
        vehicle[14].scale(1.9, 1.9);
        vehicle[14].setTextureRect(sf::IntRect(61, 37, 32, 69));
        vehicle[14].setPosition(999, 872);
        vehicle[14].setRotation(270);

        vehicle[15].setTexture(texture);
        vehicle[15].scale(1.9, 1.9);
        vehicle[15].setTextureRect(sf::IntRect(110, 39, 28, 67));
        vehicle[15].setPosition(1670, 866);
        vehicle[15].setRotation(270);

        vehicle[16].setTexture(texture);
        vehicle[16].scale(1.9, 1.9);
        vehicle[16].setTextureRect(sf::IntRect(110, 39, 28, 67));
        vehicle[16].setPosition(1530, 866);
        vehicle[16].setRotation(270);


        vehicle[17].setTexture(texture);
        vehicle[17].scale(1.8, 1.8);
        vehicle[17].setTextureRect(sf::IntRect(152, 31, 32, 74));
        vehicle[17].setPosition(100, 686);
        vehicle[17].setRotation(90);

        vehicle[18].setTexture(texture);
        vehicle[18].scale(1.8, 1.8);
        vehicle[18].setTextureRect(sf::IntRect(152, 31, 32, 74));
        vehicle[18].setPosition(600, 686);
        vehicle[18].setRotation(90);

        vehicle[19].setTexture(texture);
        vehicle[19].scale(1.8, 1.8);
        vehicle[19].setTextureRect(sf::IntRect(110, 39, 28, 67));
        vehicle[19].setPosition(1200, 687);
        vehicle[19].setRotation(90);

        vehicle[20].setTexture(texture);
        vehicle[20].scale(1.9, 1.9);
        vehicle[20].setTextureRect(sf::IntRect(204, 14, 32, 109));
        vehicle[20].setPosition(1800, 681);
        vehicle[20].setRotation(90);


        vehicle[21].setTexture(texture);
        vehicle[21].scale(2, 2);
        vehicle[21].setTextureRect(sf::IntRect(15, 41, 28, 55));
        vehicle[21].setPosition(1920, 649);
        vehicle[21].setRotation(270);

        vehicle[22].setTexture(texture);
        vehicle[22].scale(1.9, 1.9);
        vehicle[22].setTextureRect(sf::IntRect(61, 37, 32, 69));
        vehicle[22].setPosition(1500, 653);
        vehicle[22].setRotation(270);

        vehicle[23].setTexture(texture);
        vehicle[23].scale(1.8, 1.8);
        vehicle[23].setTextureRect(sf::IntRect(110, 39, 28, 67));
        vehicle[23].setPosition(1100, 646);
        vehicle[23].setRotation(270);

        vehicle[24].setTexture(texture);
        vehicle[24].scale(1.8, 1.8);
        vehicle[24].setTextureRect(sf::IntRect(110, 39, 28, 67));
        vehicle[24].setPosition(700, 646);
        vehicle[24].setRotation(270);

        vehicle[25].setTexture(texture);
        vehicle[25].scale(1.8, 1.8);
        vehicle[25].setTextureRect(sf::IntRect(152, 31, 32, 74));
        vehicle[25].setPosition(450, 650);
        vehicle[25].setRotation(270);

        vehicle[26].setTexture(texture);
        vehicle[26].scale(2, 2);
        vehicle[26].setTextureRect(sf::IntRect(15, 41, 28, 55));
        vehicle[26].setPosition(300, 649);
        vehicle[26].setRotation(270);

        vehicle[27].setTexture(texture);
        vehicle[27].scale(1.9, 1.9);
        vehicle[27].setTextureRect(sf::IntRect(61, 37, 32, 69));
        vehicle[27].setPosition(0, 653);
        vehicle[27].setRotation(270);
    }

    void Vehicle::draw(sf::RenderTarget &window, sf::RenderStates states) const {
        window.draw(vehicle[0], states);
        window.draw(vehicle[1], states);
        window.draw(vehicle[2], states);
        window.draw(vehicle[3], states);
        window.draw(vehicle[4], states);
        window.draw(vehicle[5], states);
        window.draw(vehicle[6], states);
        window.draw(vehicle[7], states);
        window.draw(vehicle[8], states);
        window.draw(vehicle[9], states);
        window.draw(vehicle[10], states);
        window.draw(vehicle[11], states);
        window.draw(vehicle[12], states);
        window.draw(vehicle[13], states);
        window.draw(vehicle[14], states);
        window.draw(vehicle[15], states);
        window.draw(vehicle[16], states);
        window.draw(vehicle[17], states);
        window.draw(vehicle[18], states);
        window.draw(vehicle[19], states);
        window.draw(vehicle[20], states);
        window.draw(vehicle[21], states);
        window.draw(vehicle[22], states);
        window.draw(vehicle[23], states);
        window.draw(vehicle[24], states);
        window.draw(vehicle[25], states);
        window.draw(vehicle[26], states);
        window.draw(vehicle[27], states);
    }

    void Vehicle::move() {
        vehicle[0].move(0.2f, 0.0f);
        vehicle[1].move(0.2f, 0.0f);
        vehicle[2].move(0.2f, 0.0f);
        vehicle[3].move(0.2f, 0.0f);
        vehicle[4].move(0.2f, 0.0f);
        vehicle[5].move(0.2f, 0.0f);
        vehicle[6].move(0.2f, 0.0f);
        vehicle[7].move(0.2f, 0.0f);
        vehicle[8].move(0.2f, 0.0f);
        vehicle[9].move(-0.4f, 0.0f);
        vehicle[10].move(-0.4f, 0.0f);
        vehicle[11].move(-0.4f, 0.0f);
        vehicle[12].move(-0.4f, 0.0f);
        vehicle[13].move(-0.4f, 0.0f);
        vehicle[14].move(-0.4f, 0.0f);
        vehicle[15].move(-0.4f, 0.0f);
        vehicle[16].move(-0.4f, 0.0f);
        vehicle[17].move(0.3f, 0.0f);
        vehicle[18].move(0.3f, 0.0f);
        vehicle[19].move(0.3f, 0.0f);
        vehicle[20].move(0.3f, 0.0f);
        vehicle[21].move(-0.5f, 0.0f);
        vehicle[22].move(-0.5f, 0.0f);
        vehicle[23].move(-0.5f, 0.0f);
        vehicle[24].move(-0.5f, 0.0f);
        vehicle[25].move(-0.5f, 0.0f);
        vehicle[26].move(-0.5f, 0.0f);
        vehicle[27].move(-0.5f, 0.0f);

        if (vehicle[0].getPosition().x > 2120)

            vehicle[0].setPosition(0, vehicle[0].getPosition().y);

        if (vehicle[1].getPosition().x > 2120)

            vehicle[1].setPosition(0, vehicle[1].getPosition().y);

        if (vehicle[2].getPosition().x > 2120)

            vehicle[2].setPosition(0, vehicle[2].getPosition().y);

        if (vehicle[3].getPosition().x > 2120)

            vehicle[3].setPosition(0, vehicle[3].getPosition().y);

        if (vehicle[4].getPosition().x > 2120)

            vehicle[4].setPosition(0, vehicle[4].getPosition().y);

        if (vehicle[5].getPosition().x > 2120)

            vehicle[5].setPosition(0, vehicle[5].getPosition().y);

        if (vehicle[6].getPosition().x > 2120)

            vehicle[6].setPosition(0, vehicle[6].getPosition().y);

        if (vehicle[7].getPosition().x > 2120)

            vehicle[7].setPosition(0, vehicle[7].getPosition().y);

        if (vehicle[8].getPosition().x > 2120)

            vehicle[8].setPosition(0, vehicle[8].getPosition().y);

        if (vehicle[9].getPosition().x < -200)

            vehicle[9].setPosition(1920, vehicle[9].getPosition().y);

        if (vehicle[10].getPosition().x < -200)

            vehicle[10].setPosition(1920, vehicle[10].getPosition().y);

        if (vehicle[11].getPosition().x < -200)

            vehicle[11].setPosition(1920, vehicle[11].getPosition().y);

        if (vehicle[12].getPosition().x < -200)

            vehicle[12].setPosition(1920, vehicle[12].getPosition().y);

        if (vehicle[13].getPosition().x < -200)

            vehicle[13].setPosition(1920, vehicle[13].getPosition().y);

        if (vehicle[14].getPosition().x < -200)

            vehicle[14].setPosition(1920, vehicle[14].getPosition().y);

        if (vehicle[15].getPosition().x < -200)

            vehicle[15].setPosition(1920, vehicle[15].getPosition().y);

        if (vehicle[16].getPosition().x < -200)

            vehicle[16].setPosition(1920, vehicle[16].getPosition().y);

        if (vehicle[17].getPosition().x > 2120)

            vehicle[17].setPosition(0, vehicle[17].getPosition().y);

        if (vehicle[18].getPosition().x > 2120)

            vehicle[18].setPosition(0, vehicle[18].getPosition().y);

        if (vehicle[19].getPosition().x > 2120)

            vehicle[19].setPosition(0, vehicle[19].getPosition().y);

        if (vehicle[20].getPosition().x > 2120)

            vehicle[20].setPosition(0, vehicle[20].getPosition().y);

        if (vehicle[21].getPosition().x < -200)

            vehicle[21].setPosition(1920, vehicle[21].getPosition().y);

        if (vehicle[22].getPosition().x < -200)

            vehicle[22].setPosition(1920, vehicle[22].getPosition().y);

        if (vehicle[23].getPosition().x < -200)

            vehicle[23].setPosition(1920, vehicle[23].getPosition().y);

        if (vehicle[24].getPosition().x < -200)

            vehicle[24].setPosition(1920, vehicle[24].getPosition().y);

        if (vehicle[25].getPosition().x < -200)

            vehicle[25].setPosition(1920, vehicle[25].getPosition().y);

        if (vehicle[26].getPosition().x < -200)

            vehicle[26].setPosition(1920, vehicle[26].getPosition().y);

        if (vehicle[27].getPosition().x < -200)

            vehicle[27].setPosition(1920, vehicle[27].getPosition().y);
    }

    sf::Sprite Vehicle::getRed() {
        return vehicle[0];
    }

    sf::Sprite Vehicle::getBrown() {
        return vehicle[1];
    }

    sf::Sprite Vehicle::getYellow() {
        return vehicle[2];
    }

    sf::Sprite Vehicle::getGreen() {
        return vehicle[3];
    }

    sf::Sprite Vehicle::getBrown_1() {
        return vehicle[4];
    }

    sf::Sprite Vehicle::getRed_1() {
        return vehicle[5];
    }

    sf::Sprite Vehicle::getYellow_1() {
        return vehicle[6];
    }

    sf::Sprite Vehicle::getGreen_1() {
        return vehicle[7];
    }

    sf::Sprite Vehicle::getYellow_2() {
        return vehicle[8];
    }

    sf::Sprite Vehicle::getRed_2() {
        return vehicle[9];
    }

    sf::Sprite Vehicle::getBlue() {
        return vehicle[10];
    }

    sf::Sprite Vehicle::getRed_3() {
        return vehicle[11];
    }

    sf::Sprite Vehicle::getRed_4() {
        return vehicle[12];
    }

    sf::Sprite Vehicle::getBlue_1() {
        return vehicle[13];
    }

    sf::Sprite Vehicle::getYellow_3() {
        return vehicle[14];
    }

    sf::Sprite Vehicle::getBlue_2() {
        return vehicle[15];
    }

    sf::Sprite Vehicle::getBlue_3() {
        return vehicle[16];
    }

    sf::Sprite Vehicle::getBrown_2() {
        return vehicle[17];
    }

    sf::Sprite Vehicle::getBrown_3() {
        return vehicle[18];
    }

    sf::Sprite Vehicle::getBlue_4() {
        return vehicle[19];
    }

    sf::Sprite Vehicle::getGreen_2() {
        return vehicle[20];
    }

    sf::Sprite Vehicle::getRed_5() {
        return vehicle[21];
    }

    sf::Sprite Vehicle::getYellow_4() {
        return vehicle[22];
    }

    sf::Sprite Vehicle::getBlue_5() {
        return vehicle[23];
    }

    sf::Sprite Vehicle::getBlue_6() {
        return vehicle[24];
    }

    sf::Sprite Vehicle::getBrown_4() {
        return vehicle[25];
    }

    sf::Sprite Vehicle::getRed_6() {
        return vehicle[26];
     }

    sf::Sprite Vehicle::getYellow_5() {
        return vehicle[27];
    }
}



