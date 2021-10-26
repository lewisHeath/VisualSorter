//#include <SFML/Graphics.hpp>
#include "headers/drawer.hpp"


int main()
{
    // creating window
    static const unsigned int height{1000}, width{1500};
    
    sf::RenderWindow window( sf::VideoMode(width, height), "Visual Sorter", sf::Style::Close | !sf::Style::Resize);
    
    // creating drawer
    Drawer squ;
    
    /*
    sf::RectangleShape square(sf::Vector2f(200.0f, 200.0f));
    
    square.setFillColor(sf::Color::Red);
    
    square.setPosition(20.0f, 20.0f);
    */
    
    // program loop
    while (window.isOpen()) {
        sf::Event evnt;
        
        // events
        while (window.pollEvent(evnt)) {
            switch (evnt.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
                    
                default:
                    break;
            }
        }
        
        
        //window.draw(squ.square);
        squ.display(&window);
        window.display();
    }
    
    return 0;
}
