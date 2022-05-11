#pragma once
#include <SFML++/Graphics/Graphics.hpp>
#include <SFML/Graphics.hpp>
namespace Brabbadon::SFML::Graphics
{
    class Button
    {
    public:
        sf::Image im;
        sf::Texture tex;
        sf::Text text;
        sf::Font font;
        sf::Sprite body;
        Button(int x, int y, std::string inputText);
        Button();
        Button(std::string imagePath, std::string fontPath);
        void draw(sf::RenderWindow &window);
        void setPosition(int x, int y);
        bool mouseHover(sf::RenderWindow &window);
        bool mouseClick(sf::RenderWindow &window);
        void string(std::string someString);
    };
}
using namespace Brabbadon::SFML::Graphics;
