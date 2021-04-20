/*
 * Modified by Ese
 * 20th April, 2021
 * 3.09 am
 * I will use this as my wrapper for Imgui
 */

#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works for Ese!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Red);//Green

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
