//
//  drawer.cpp
//  visualSorter
//
//  Created by Benjamin Lewis-Jones on 26/10/2021.
//

#include "../headers/drawer.hpp"
///*
#include <iostream>
using namespace std;
//*/

Drawer::Drawer() : square(sf::Vector2f(20.0f, 20.0f))
{
    square.setFillColor(sf::Color::Red);
    
    square.setPosition(-20.0f, 20.0f);
}

void Drawer::display(sf::RenderWindow* window)
{
    window->draw(square);
}

void Drawer::updatePosition(sf::RenderWindow* window)
{
    // allows the user to move the position of the square
    
    sf::Vector2i mousePosition = sf::Mouse::getPosition(*window);
    
    cout << mousePosition.x << ' ' << mousePosition.y << endl;
    
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        square.setPosition(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y));
}
