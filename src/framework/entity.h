#pragma once

#include <vector>

#include "component.h"
#include "entity_def.h"

#include "../logger.h"

class Entity 
{

public:

    Entity()
    {
        this->id = ++counter;
        LogDebug("Entity created " + std::to_string(this->id));
    }

    Entity(bool noop) : Entity()
    {
        noop = true;
    }

    void Attach(Component component);
    void Detach(Component component);
    void DetachAll();

    const int getId() { return this->id; }
    const std::vector<Component> getComponents() { return this->components; }

    const bool isNoop() { return this->noop; }

    static Entity Create(EntityDef def);

private:

    static int counter;

    int id;    
    std::vector<Component> components;

    bool noop;

};
