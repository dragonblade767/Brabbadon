#pragma once
#include <SFML++/Graphics/Graphics.hpp>
#include <SFML/Graphics.hpp>

namespace Brabbadon::SFML::Graphics
{
    class Text : public sf::Text
    {
    public:
        sf::Font font_;

        Text();
        Text(std::string string);
        Text(std::string string, sf::Font &font);
        Text(std::string string, sf::Font &font, int size);
        Text(std::string string, sf::Font &font, int size, sf::Color color);

        void drawText(sf::RenderWindow &window);
        Text operator=(std::string text);
        Text operator=(int text);
        Text operator=(float text);
        Text operator=(double text);
    };
}

using namespace Brabbadon::SFML::Graphics;
