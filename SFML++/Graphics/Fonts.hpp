#pragma once
#include <SFML++/Graphics/Graphics.hpp>
#include <SFML/Graphics.hpp>

namespace Brabbadon::SFML::Graphics::Fonts
{
    static sf::Font makeFont(std::string str)
    {
        sf::Font Font;
        Font.loadFromFile(str);
        return Font;
    }
    static sf::Font Arial = makeFont("Assets/Fonts/arial.ttf");
    static sf::Font AtoZ = makeFont("Assets/Fonts/arial.ttf");
    static sf::Font Optificio = makeFont("Assets/Fonts/Opificio_regular.ttf");
    static sf::Font Algerian = makeFont("Assets/Fonts/ALGER.ttf");
    static sf::Font Bauhas = makeFont("Assets/Fonts/BAUHS93.ttf");
    static sf::Font BerlinSans = makeFont("Assets/Fonts/BERNHC.ttf");
    static sf::Font BookmanOld = makeFont("Assets/Fonts/BOOKOS.ttf");
    static sf::Font Calibri = makeFont("Assets/Fonts/calibri.ttf");
    static sf::Font Calisto = makeFont("Assets/Fonts/CALIST.ttf");
    static sf::Font Curlz = makeFont("Assets/Fonts/CURLZ___.ttf");
    static sf::Font Hatten = makeFont("Assets/Fonts/HATTEN.ttf");
    static sf::Font Imprint = makeFont("Assets/Fonts/IMPRISHA.ttf");
    static sf::Font Jokerman = makeFont("Assets/Fonts/JOKERMAN.ttf");
    static sf::Font OldEnglish = makeFont("Assets/Fonts/OLDENGL.ttf");
    static sf::Font BradleyHound = makeFont("Assets/Fonts/BRADHITC.ttf");
    static sf::Font Broadway = makeFont("Assets/Fonts/BROADW.ttf");

}






