#pragma once
#include <SFML++/Graphics/Graphics.hpp>

using namespace Brabbadon::SFML::Graphics;

namespace Brabbadon::SFML::UI
{

    class Screen
    {
    public:
        Text title;
        bool active;
        Screen();
        Screen(std::string titleText);
        Screen(std::string titleText, bool isActive);
        void drawScreen(sf::RenderWindow &window);

    };

}
using namespace Brabbadon::SFML::UI;
