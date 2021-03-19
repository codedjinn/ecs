
#include "component_factory.h"

void ComponentFactory::Register(Component *component)
{
    bool found = false;
    for (auto &cur : components)
    {
        if (cur->getTypeId() == component->getTypeId())
        {
            found = true;
            break;
        }
    }

    if (!found)
    {
        components.push_back(component);
    }
}

Component* ComponentFactory::Create(int typeId)
{
    Component *result = nullptr;
    for (auto &cur : components)
    {
        if (cur->getTypeId() == typeId)
        {
            result = cur->Clone();
            break;
        }
    }
    return result;
}