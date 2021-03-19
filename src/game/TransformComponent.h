
#pragma once

#include <SFML/Graphics.hpp>

#include "../framework/component.h"

class TransformComponent : public Component
{

public:

    TransformComponent()
    {
        typeId = 1;
    }

    Component* Clone() override
    {
        TransformComponent* clone = new TransformComponent();
        clone->pos = this->pos;
        clone->rot = this->rot;
        clone->scale = this->scale;
        return clone;
    }

    sf::Vector2f gtPos() { return pos; }
    void setPos(sf::Vector2f value) { pos = value; }

    float getRot() { return rot; }
    void setRot(float value) { rot = value; }

    float getScale() { return scale; }
    void setScale(float value) { scale = value; }

private:

    float rot;
    float scale;
    sf::Vector2f pos;
        
};