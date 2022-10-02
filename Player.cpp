//
// Created by jessw on 5/10/2020.
//

#include "Player.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

namespace Won {
    Player::Player() {
        texture[0].loadFromFile("Game/Frogger/images/frogPISKEL.png.png");
        frog.setTexture(texture[0]);
        frog.scale(0.3, 0.3);
        frog.setTextureRect(sf::IntRect(189, 209, 174, 152));
        frog.setPosition(950, 1080);
        frog.setOrigin(frog.getLocalBounds().height / 2, frog.getLocalBounds().width / 2);
        frog.setRotation(0);

        texture[1].loadFromFile("Game/Frogger/images/frogger_spritesheet2.png");
        lillypad[0].setTexture(texture[1]);
        lillypad[0].scale(1.5, 1.5);
        lillypad[0].setTextureRect(sf::IntRect(7, 170, 60, 55));
        lillypad[0].setPosition(300, 10);
        lillypad[0].setColor(sf::Color::Green);

        lillypad[1].setTexture(texture[1]);
        lillypad[1].scale(1.5, 1.5);
        lillypad[1].setTextureRect(sf::IntRect(7, 170, 60, 55));
        lillypad[1].setPosition(700, 10);
        lillypad[1].setColor(sf::Color::Green);

        lillypad[2].setTexture(texture[1]);
        lillypad[2].scale(1.5, 1.5);
        lillypad[2].setTextureRect(sf::IntRect(7, 170, 60, 55));
        lillypad[2].setPosition(1100, 10);
        lillypad[2].setColor(sf::Color::Green);

        lillypad[3].setTexture(texture[1]);
        lillypad[3].scale(1.5, 1.5);
        lillypad[3].setTextureRect(sf::IntRect(7, 170, 60, 55));
        lillypad[3].setPosition(1500, 10);
        lillypad[3].setColor(sf::Color::Green);

        texture[2].loadFromFile("Game/Frogger/images/FROG.png");
        anotherFrog[0].setTexture(texture[2]);
        anotherFrog[0].setScale(0.4,0.4);
        anotherFrog[0].setPosition(325,15);

        anotherFrog[1].setTexture(texture[2]);
        anotherFrog[1].setScale(0.4,0.4);
        anotherFrog[1].setPosition(725,15);

        anotherFrog[2].setTexture(texture[2]);
        anotherFrog[2].setScale(0.4,0.4);
        anotherFrog[2].setPosition(1125,10);

        anotherFrog[3].setTexture(texture[2]);
        anotherFrog[3].setScale(0.4,0.4);
        anotherFrog[3].setPosition(1525,10);

        scores = 0;
        lives = 5;

        //score text
        font[0].loadFromFile("Game/Frogger/myFont.ttf");
        text[0].setFont(font[0]);
        text[0].setString("Score:        Number of Frogs: 5");
        text[0].setPosition(10, 1020);
        text[0].setCharacterSize(45);
        text[0].setFillColor(sf::Color::Black);

        //game win text
        font[1].loadFromFile("Game/Frogger/OpenSans-Bold.ttf");
        text[1].setFont(font[1]);
        text[1].setFillColor(sf::Color::Green);
        text[1].setCharacterSize(80);
        text[1].setPosition(550, 510);

        //background for game win
        background.setSize(sf::Vector2f(1920, 1080));
        background.setFillColor(sf::Color::Black);

        /*
        //sound effect when frog reaches lillypads
        soundBuffer[0].loadFromFile("Game/Frogger/Audio/coin.wav");
        sound[0].setBuffer(soundBuffer[0]);

        //sound effect when frog hops
        soundBuffer[1].loadFromFile("Game/Frogger/Audio/hop.wav");
        sound[1].setBuffer(soundBuffer[1]);

        //sound effect when frog falls in the water
        soundBuffer[2].loadFromFile("Game/Frogger/Audio/plunk.wav");
        sound[2].setBuffer(soundBuffer[2]);

        //sound effect when frog is hit by a vehicle
        soundBuffer[3].loadFromFile("Game/Frogger/Audio/squash.wav");
        sound[3].setBuffer(soundBuffer[3]);
        */
    }

    void Player::draw(sf::RenderTarget &window, sf::RenderStates states) const {
        window.draw(lillypad[0], states);
        window.draw(lillypad[1], states);
        window.draw(lillypad[2], states);
        window.draw(lillypad[3], states);
        window.draw(frog, states);
        window.draw(text[0], states);

        //draw another frog when frog touches the lillypad
        if (lillypad[0].getColor() == sf::Color::Transparent)
        {
            window.draw(anotherFrog[0], states);
        }

        if (lillypad[1].getColor() == sf::Color::Transparent)
        {
            window.draw(anotherFrog[1], states);
        }

        if (lillypad[2].getColor() == sf::Color::Transparent)
        {
            window.draw(anotherFrog[2], states);
        }

        if (lillypad[3].getColor() == sf::Color::Transparent)
        {
            window.draw(anotherFrog[3], states);
        }

        //draw game win screen
        if (lillypad[0].getColor() == sf::Color::Transparent && lillypad[1].getColor() == sf::Color::Transparent &&
            lillypad[2].getColor() == sf::Color::Transparent && lillypad[3].getColor() == sf::Color::Transparent)
        {
            window.draw(background, states);
            window.draw(text[1], states);
        }
    }

    void Player::contain() {
        if (frog.getPosition().x <= 0) {
            frog.move(30.0f, 0.0f);
        }

        if (frog.getPosition().y <= 0) {
            frog.move(0.0f, 30.0f);
        }

        if (frog.getPosition().x >= 1920) {
            frog.move(-30.0f, 0.0f);
        }

        if (frog.getPosition().y >= 1080) {
            frog.move(0.0f, -30.0f);
        }
    }

    void Player::go(sf::Event event) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            frog.move(0.0f, -30.0f);
            frog.setRotation(360);
            text[0].setString("Score: " + std::to_string(scores++) + "       Number of Frogs: " + std::to_string(lives));
            //sound[1].play();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            frog.move(30.0f, 0.0f);
            frog.setRotation(90);
            //sound[1].play();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            frog.move(-30.0f, 0.0f);
            frog.setRotation(270);
            //sound[1].play();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            frog.move(0.0f, 30.0f);
            frog.setRotation(180);
            //sound[1].play();
        }
    }

    void Player::collision(Vehicle &v) {
        if (frog.getGlobalBounds().intersects(v.getRed().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getBrown().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getYellow().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getGreen().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getBrown_1().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getRed_1().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getYellow_1().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getGreen_1().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getYellow_2().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getRed_2().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getBlue().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getRed_3().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getRed_4().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getBlue_1().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getYellow_3().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getBlue_2().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getBlue_3().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getBrown_2().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getBrown_3().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getBlue_4().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getGreen_2().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getRed_5().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getYellow_4().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getBlue_5().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getBlue_6().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getBrown_4().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getRed_6().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (frog.getGlobalBounds().intersects(v.getYellow_5().getGlobalBounds())) {
            //sound[3].play();
            frog.setPosition(950, 1080);
            frog.setRotation(0);
            scores = scores - 3;
            text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
        }

        if (lives < 0) {
            text[0].setString("Game Over! Score: " + std::to_string(scores));
            lives = 5;
            scores = 0;
            lillypad[0].setColor(sf::Color::Green);
            lillypad[1].setColor(sf::Color::Green);
            lillypad[2].setColor(sf::Color::Green);
            lillypad[3].setColor(sf::Color::Green);
        }
    }

    void Player::flow(Log &l) {
        bool log = false;

        if (frog.getGlobalBounds().intersects(l.getWater6().getGlobalBounds())) {

            if (frog.getGlobalBounds().intersects(l.getLog().getGlobalBounds())) {
                frog.move(0.3f, 0.0f);
                log = true;
            }

            if (frog.getGlobalBounds().intersects(l.getLog_1().getGlobalBounds())) {
                frog.move(0.3f, 0.0f);
                log = true;
            }

            if (frog.getGlobalBounds().intersects(l.getLog_2().getGlobalBounds())) {
                frog.move(0.3f, 0.0f);
                log = true;
            }

            if (!log) {
                //sound[2].play();
                frog.setPosition(950, 1080);
                frog.setRotation(0);
                scores = scores - 6;
                text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
            }
        }

        if (frog.getGlobalBounds().intersects(l.getWater3().getGlobalBounds())) {

            if (frog.getGlobalBounds().intersects(l.getLog_3().getGlobalBounds())) {
                frog.move(-0.3f, 0.0f);
                log = true;
            }

            if (frog.getGlobalBounds().intersects(l.getLog_4().getGlobalBounds())) {
                frog.move(-0.3f, 0.0f);
                log = true;
            }

            if (!log) {
                //sound[2].play();
                frog.setPosition(950, 1080);
                frog.setRotation(0);
                scores = scores - 6;
                text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
            }
        }

        if (frog.getGlobalBounds().intersects(l.getWater5().getGlobalBounds())) {

            if (frog.getGlobalBounds().intersects(l.getMlog().getGlobalBounds())) {
                frog.move(-0.5f, 0.0f);
                log = true;
            }

            if (frog.getGlobalBounds().intersects(l.getMlog_1().getGlobalBounds())) {
                frog.move(-0.5f, 0.0f);
                log = true;
            }

            if (frog.getGlobalBounds().intersects(l.getMlog_2().getGlobalBounds())) {
                frog.move(-0.5f, 0.0f);
                log = true;
            }

            if (frog.getGlobalBounds().intersects(l.getMlog_3().getGlobalBounds())) {
                frog.move(-0.5f, 0.0f);
                log = true;
            }

            if (!log) {
                //sound[2].play();
                frog.setPosition(950, 1080);
                frog.setRotation(0);
                scores = scores - 6;
                text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
            }
        }

        if (frog.getGlobalBounds().intersects(l.getWater4().getGlobalBounds())) {

            if (frog.getGlobalBounds().intersects(l.getMlog_4().getGlobalBounds())) {
                frog.move(0.5f, 0.0f);
                log = true;
            }

            if (frog.getGlobalBounds().intersects(l.getMlog_5().getGlobalBounds())) {
                frog.move(0.5f, 0.0f);
                log = true;
            }

            if (frog.getGlobalBounds().intersects(l.getMlog_6().getGlobalBounds())) {
                frog.move(0.5f, 0.0f);
                log = true;
            }

            if (frog.getGlobalBounds().intersects(l.getMlog_7().getGlobalBounds())) {
                frog.move(0.5f, 0.0f);
                log = true;
            }

            if (!log) {
                //sound[2].play();
                frog.setPosition(950, 1080);
                frog.setRotation(0);
                scores = scores - 6;
                text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
            }
        }

        if (frog.getGlobalBounds().intersects(l.getWater2().getGlobalBounds())) {

            if (frog.getGlobalBounds().intersects(l.getSlog().getGlobalBounds())) {
                frog.move(0.6f, 0.0f);
                log = true;
            }

            if (frog.getGlobalBounds().intersects(l.getSlog_1().getGlobalBounds())) {
                frog.move(0.6f, 0.0f);
                log = true;
            }

            if (frog.getGlobalBounds().intersects(l.getSlog_2().getGlobalBounds())) {
                frog.move(0.6f, 0.0f);
                log = true;
            }

            if (!log) {
                //sound[2].play();
                frog.setPosition(950, 1080);
                frog.setRotation(0);
                scores = scores - 6;
                text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
            }
        }


        if (frog.getGlobalBounds().intersects(l.getWater1().getGlobalBounds())) {

            if (frog.getGlobalBounds().intersects(lillypad[0].getGlobalBounds())) {
                //sound[0].play();
                lillypad[0].setColor(sf::Color::Transparent);
                frog.setPosition(950, 1080);
                frog.setRotation(0);
                scores = scores + 12;
                text[0].setString("Score: " + std::to_string(scores++) + "       Number of Frogs: " + std::to_string(lives));
                log = true;
            }

            if (frog.getGlobalBounds().intersects(lillypad[1].getGlobalBounds())) {
                //sound[0].play();
                lillypad[1].setColor(sf::Color::Transparent);
                frog.setPosition(950, 1080);
                frog.setRotation(0);
                scores = scores + 12;
                text[0].setString("Score: " + std::to_string(scores++) + "       Number of Frogs: " + std::to_string(lives));
                log = true;
            }

            if (frog.getGlobalBounds().intersects(lillypad[2].getGlobalBounds())) {
                //sound[0].play();
                lillypad[2].setColor(sf::Color::Transparent);
                frog.setPosition(950, 1080);
                frog.setRotation(0);
                scores = scores + 12;
                text[0].setString("Score: " + std::to_string(scores++) + "       Number of Frogs: " + std::to_string(lives));
                log = true;
            }

            if (frog.getGlobalBounds().intersects(lillypad[3].getGlobalBounds())) {
                //sound[0].play();
                lillypad[3].setColor(sf::Color::Transparent);
                frog.setPosition(950, 1080);
                frog.setRotation(0);
                scores = scores + 12;
                text[0].setString("Score: " + std::to_string(scores++) + "       Number of Frogs: " + std::to_string(lives));
                log = true;
            }

            if (!log) {
                //sound[2].play();
                frog.setPosition(950, 1080);
                frog.setRotation(0);
                scores = scores - 6;
                text[0].setString("Score: " + std::to_string(scores--) + "       Number of Frogs: " + std::to_string(lives--));
            }

            if (lillypad[0].getColor() == sf::Color::Transparent && lillypad[1].getColor() == sf::Color::Transparent &&
                lillypad[2].getColor() == sf::Color::Transparent && lillypad[3].getColor() == sf::Color::Transparent)
            {
                text[1].setString("Game Win! Score: " + std::to_string(scores));
            }
        }
    }
}