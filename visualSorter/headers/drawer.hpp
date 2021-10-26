//
//  drawer.hpp
//  visualSorter
//
//  Created by Benjamin Lewis-Jones on 26/10/2021.
//

#ifndef drawer_hpp
#define drawer_hpp

#include <SFML/Graphics.hpp>

class Drawer
{
    // Attributes
    sf::RectangleShape square;
    
    // Methods
public:
    Drawer();
    void display(sf::RenderWindow* window);
    void updatePosition(sf::RenderWindow* window);
};

#endif /* drawer_hpp */


