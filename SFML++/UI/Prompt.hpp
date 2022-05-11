#pragma once
#include <SFML++/Graphics/Graphics.hpp>
#include <SFML/Graphics.hpp>
using namespace Brabbadon::SFML::Graphics;
namespace Brabbadon::SFML::UI
{
    class Prompt
    {
    public:

        bool active;
        sf::RectangleShape background;
        Text title;
        Text desc;
        Button submit;
        Prompt();

    };

    class SystemMessage : public Prompt
    {
    public:
        SystemMessage();
        SystemMessage(std::string titleText, std::string descText, std::string buttonText);
    };
}
using namespace Brabbadon::SFML::UI;

