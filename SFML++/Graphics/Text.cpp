#include "Text.hpp"

Text::Text()
{
    font_.loadFromFile("Assets/fonts/arial.ttf");
    this->setFont(font_);
    this->setCharacterSize(30);
    this->setString("String");
}

Text::Text(std::string string)
{
    font_.loadFromFile("Assets/fonts/arial.ttf");
    this->setFont(font_);
    this->setCharacterSize(30);
    this->setString(string);
}
Text::Text(std::string string, sf::Font &font)
{
    this->setFont(font);
    this->setCharacterSize(30);
    this->setString(string);
}
Text::Text(std::string string, sf::Font &font, int size)
{
    this->setFont(font);
    this->setCharacterSize(size);
    this->setString(string);
}
Text::Text(std::string string, sf::Font &font, int size, sf::Color color)
{
    this->setFont(font);
    this->setCharacterSize(size);
    this->setString(string);
    this->setFillColor(color);
}

void Text::drawText(sf::RenderWindow &window)
{
    window.draw(*this);
}

Text Text::operator=(std::string text)
{
    this->setString(text);
    return *this;
}

Text Text::operator=(int text)
{
    this->setString(std::to_string(text));
    return *this;
}

Text Text::operator=(float text)
{
    this->setString(std::to_string(text));
    return *this;
}

Text Text::operator=(double text)
{
    this->setString(std::to_string(text));
    return *this;
}
