//
// Created by jessw on 5/10/2020.
//

#include "Log.h"
#include <SFML/Graphics.hpp>

namespace Won {
        Log::Log() {
        texture[0].loadFromFile("Game/Frogger/images/frogger_spritesheet.png");
        texture[1].loadFromFile("Game/Frogger/images/water.jpg");

        log[0].setTexture(texture[0]);
        log[0].scale(3, 3);
        log[0].setTextureRect(sf::IntRect(8, 165, 177, 22));
        log[0].setPosition(0, 398);

        log[1].setTexture(texture[0]);
        log[1].scale(3, 3);
        log[1].setTextureRect(sf::IntRect(8, 165, 177, 22));
        log[1].setPosition(800, 398);

        log[2].setTexture(texture[0]);
        log[2].scale(3, 3);
        log[2].setTextureRect(sf::IntRect(8, 165, 177, 22));
        log[2].setPosition(1600, 398);

        log[3].setTexture(texture[0]);
        log[3].scale(3, 3);
        log[3].setTextureRect(sf::IntRect(8, 196, 116, 29));
        log[3].setPosition(0, 320);

        log[4].setTexture(texture[0]);
        log[4].scale(3, 3);
        log[4].setTextureRect(sf::IntRect(8, 196, 116, 29));
        log[4].setPosition(600, 320);

        log[5].setTexture(texture[0]);
        log[5].scale(3, 3);
        log[5].setTextureRect(sf::IntRect(8, 196, 116, 29));
        log[5].setPosition(1200, 320);

        log[6].setTexture(texture[0]);
        log[6].scale(3, 3);
        log[6].setTextureRect(sf::IntRect(8, 196, 116, 29));
        log[6].setPosition(1800, 320);

        log[7].setTexture(texture[0]);
        log[7].scale(3, 3);
        log[7].setTextureRect(sf::IntRect(8, 196, 116, 29));
        log[7].setPosition(0, 245);

        log[8].setTexture(texture[0]);
        log[8].scale(3, 3);
        log[8].setTextureRect(sf::IntRect(8, 196, 116, 29));
        log[8].setPosition(600, 245);

        log[9].setTexture(texture[0]);
        log[9].scale(3, 3);
        log[9].setTextureRect(sf::IntRect(8, 196, 116, 29));
        log[9].setPosition(1200, 245);

        log[10].setTexture(texture[0]);
        log[10].scale(3, 3);
        log[10].setTextureRect(sf::IntRect(8, 196, 116, 29));
        log[10].setPosition(1800, 245);

        log[11].setTexture(texture[0]);
        log[11].scale(3, 3);
        log[11].setTextureRect(sf::IntRect(8, 165, 177, 22));
        log[11].setPosition(0, 175);

        log[12].setTexture(texture[0]);
        log[12].scale(3, 3);
        log[12].setTextureRect(sf::IntRect(8, 165, 177, 22));
        log[12].setPosition(1200, 175);

        log[13].setTexture(texture[0]);
        log[13].scale(3, 3);
        log[13].setTextureRect(sf::IntRect(8, 229, 83, 22));
        log[13].setPosition(0, 100);

        log[14].setTexture(texture[0]);
        log[14].scale(3, 3);
        log[14].setTextureRect(sf::IntRect(8, 229, 83, 22));
        log[14].setPosition(900, 100);

        log[15].setTexture(texture[0]);
        log[15].scale(3, 3);
        log[15].setTextureRect(sf::IntRect(8, 229, 83, 22));
        log[15].setPosition(1800, 100);

        water[0].setTexture(texture[1]);
        water[0].scale(4,0.1);
        water[0].setPosition(0,30);

        water[1].setTexture(texture[1]);
        water[1].scale(4,0.1);
        water[1].setPosition(0,108);

        water[2].setTexture(texture[1]);
        water[2].scale(4,0.1);
        water[2].setPosition(0,183);

        water[3].setTexture(texture[1]);
        water[3].scale(4,0.1);
        water[3].setPosition(0,258);

        water[4].setTexture(texture[1]);
        water[4].scale(4,0.1);
        water[4].setPosition(0,332);

        water[5].setTexture(texture[1]);
        water[5].scale(4,0.1);
        water[5].setPosition(0,406);
    }

    void Log::draw(sf::RenderTarget &window, sf::RenderStates states) const {
        window.draw(water[0], states);
        window.draw(water[1], states);
        window.draw(water[2], states);
        window.draw(water[3], states);
        window.draw(water[4], states);
        window.draw(water[5], states);
        window.draw(log[0], states);
        window.draw(log[1], states);
        window.draw(log[2], states);
        window.draw(log[3], states);
        window.draw(log[4], states);
        window.draw(log[5], states);
        window.draw(log[6], states);
        window.draw(log[7], states);
        window.draw(log[8], states);
        window.draw(log[9], states);
        window.draw(log[10], states);
        window.draw(log[11], states);
        window.draw(log[12], states);
        window.draw(log[13], states);
        window.draw(log[14], states);
        window.draw(log[15], states);
    }

    void Log::move() {
        log[0].move(0.3f, 0.0f);
        log[1].move(0.3f, 0.0f);
        log[2].move(0.3f, 0.0f);
        log[3].move(-0.5f, 0.0f);
        log[4].move(-0.5f, 0.0f);
        log[5].move(-0.5f, 0.0f);
        log[6].move(-0.5f, 0.0f);
        log[7].move(0.5f, 0.0f);
        log[8].move(0.5f, 0.0f);
        log[9].move(0.5f, 0.0f);
        log[10].move(0.5f, 0.0f);
        log[11].move(-0.3f, 0.0f);
        log[12].move(-0.3f, 0.0f);
        log[13].move(0.6f, 0.0f);
        log[14].move(0.6f, 0.0f);
        log[15].move(0.6f, 0.0f);

        if (log[0].getPosition().x > 1920) //log

            log[0].setPosition(-600, log[0].getPosition().y);

        if (log[1].getPosition().x > 1920)

            log[1].setPosition(-600, log[1].getPosition().y);

        if (log[2].getPosition().x > 1920)

            log[2].setPosition(-600, log[2].getPosition().y);

        if (log[3].getPosition().x < -400)

            log[3].setPosition(1920, log[3].getPosition().y);

        if (log[4].getPosition().x < -400)

            log[4].setPosition(1920, log[4].getPosition().y);

        if (log[5].getPosition().x < -400)

            log[5].setPosition(1920, log[5].getPosition().y);

        if (log[6].getPosition().x < -400)

            log[6].setPosition(1920, log[6].getPosition().y);

        if (log[7].getPosition().x > 1920)

            log[7].setPosition(-600, log[7].getPosition().y);

        if (log[8].getPosition().x > 1920)

            log[8].setPosition(-600, log[8].getPosition().y);

        if (log[9].getPosition().x > 1920)

            log[9].setPosition(-600, log[9].getPosition().y);

        if (log[10].getPosition().x > 1920)

            log[10].setPosition(-600, log[10].getPosition().y);

        if (log[11].getPosition().x < -600)

            log[11].setPosition(1920, log[11].getPosition().y);

        if (log[12].getPosition().x < -600)

            log[12].setPosition(1920, log[12].getPosition().y);

        if (log[13].getPosition().x > 1920)

            log[13].setPosition(-600, log[13].getPosition().y);

        if (log[14].getPosition().x > 1920)

            log[14].setPosition(-600, log[14].getPosition().y);

        if (log[15].getPosition().x > 1920)

            log[15].setPosition(-600, log[15].getPosition().y);
    }

    sf::Sprite Log::getLog() {
        return log[0];
    }

    sf::Sprite Log::getLog_1() {
        return log[1];
    }

    sf::Sprite Log::getLog_2() {
        return log[2];
    }

    sf::Sprite Log::getLog_3() {
        return log[11];
    }

    sf::Sprite Log::getLog_4() {
        return log[12];
    }

    sf::Sprite Log::getMlog() {
        return log[3];
    }

    sf::Sprite Log::getMlog_1() {
        return log[4];
    }

    sf::Sprite Log::getMlog_2() {
        return log[5];
    }

    sf::Sprite Log::getMlog_3() {
        return log[6];
    }

    sf::Sprite Log::getMlog_4() {
        return log[7];
    }

    sf::Sprite Log::getMlog_5() {
        return log[8];
    }

    sf::Sprite Log::getMlog_6() {
        return log[9];
    }

    sf::Sprite Log::getMlog_7() {
        return log[10];
    }

    sf::Sprite Log::getSlog() {
        return log[13];
    }

    sf::Sprite Log::getSlog_1() {
        return log[14];
   }

    sf::Sprite Log::getSlog_2() {
        return log[15];
   }

    sf::Sprite Log::getWater1() {
        return water[0];
    }

    sf::Sprite Log::getWater2() {
        return water[1];
    }

    sf::Sprite Log::getWater3() {
        return water[2];
    }

    sf::Sprite Log::getWater4() {
        return water[3];
    }

   sf::Sprite Log::getWater5() {
        return water[4];
   }

   sf::Sprite Log::getWater6() {
        return water[5];
   }
}