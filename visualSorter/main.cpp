#include "headers/drawer.hpp"

int main()
{
    // creating window
    static const unsigned int height{1000}, width{1500};
    
    sf::RenderWindow window( sf::VideoMode(width, height), "Visual Sorter", sf::Style::Close | !sf::Style::Resize);
    
    // instantiating drawer
    Drawer squ;
    
    
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
        
        // render
        squ.display(&window);
        window.display();
    }
    
    return 0;
}
