#include "Screen.hpp"

Screen::Screen() : title("Title"), active(false) {}
Screen::Screen(std::string titleText) : title(titleText), active(false) {}
Screen::Screen(std::string titleText, bool isActive) : title(titleText), active(isActive) {}

void Screen::drawScreen(sf::RenderWindow &window)
{
    title.drawText(window);
}
