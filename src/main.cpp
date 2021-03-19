
#include <stdio.h>

#include <SFML/Graphics.hpp>

#include "framework/entity.h"

#include "framework/component_factory.h"
#include "framework/component.h"

#include "game/TransformComponent.h"

int main() 
{
    TransformComponent* trans = new TransformComponent();

    ComponentFactory fac;
    fac.Register(trans);

    Component* newComp = fac.Create(1);

    // ComponentFactory fac;
    // fac.Register(trans);

    // fac.Create(1);

    // sf::RenderWindow window(sf::VideoMode(800, 600), "ECS");

    // while (window.isOpen()) 
    // {
    //     sf::Event event;
    //     while (window.pollEvent(event)) 
    //     {
    //         if (event.type == sf::Event::Closed) 
    //         {
    //             window.close();
    //         }
    //     }

    //     window.clear();

    //     window.display();
    // }

    return 0;
}