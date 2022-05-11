#pragma once
#include <SFML++/Graphics/Graphics.hpp>
#include <SFML/Graphics.hpp>

namespace Brabbadon::SFML::Graphics
{
    class Textbox
    {
    public:
        sf::Font font;
        sf::RectangleShape rectangle, errorBox;
        sf::Text text;
        std::string textString;
        bool active = false;
        bool correct = true;
        bool cryptic = false;

        Textbox(bool password);
        Textbox();
        void setPosition(int x, int y);
        void draw(sf::RenderWindow &window);
        std::string stars(std::string password);
        void typing(char letter);
        bool mouseHover(sf::RenderWindow &window);
        bool mouseClick(sf::RenderWindow &window);
        void clear();
    };
}

using namespace Brabbadon::SFML::Graphics;
