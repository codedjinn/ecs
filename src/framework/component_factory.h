
#pragma once

#include <vector>

#include "component.h"

class ComponentFactory
{

public:

    void Register(Component* component);   

    Component* Create(int typeId);
    

private:

    std::vector<Component*> components;

    static ComponentFactory* instance;

};