//
//  drawer.cpp
//  visualSorter
//
//  Created by Benjamin Lewis-Jones on 26/10/2021.
//

#include "../headers/drawer.hpp"
#include <iostream>

Drawer::Drawer() : square(sf::Vector2f(200.0f, 200.0f))
{
    square.setFillColor(sf::Color::Red);
    
    square.setPosition(20.0f, 20.0f);
}

void Drawer::display(sf::RenderWindow* window)
{
    window->draw(square);
}
