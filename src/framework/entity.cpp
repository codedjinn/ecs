
#include "entity.h"

#include <assert.h>

#include "../logger.h"

void Entity::Attach(Component component)
{
    std::string str = std::to_string(component.getTypeId());
    LogInfo(str);

    // can't add same component twice
    for (auto& cur : components)
    {
        if (cur.getTypeId() == component.getTypeId())
        {
            std::string msg = "Tried to add same component twice! ";
            msg.append(std::to_string(cur.getTypeId()));
            LogError(msg);
            return;
        }
    }
    
    components.push_back(component);
}

void Entity::Detach(Component component)
{
    for (unsigned int i = 0; i < components.size(); ++i)
    {
        if (components[i].getTypeId() == component.getTypeId())
        {
            components.erase(components.begin() + i);
            break;
        }
    }
}

void Entity::DetachAll()
{
}

Entity Entity::Create(EntityDef def)
{
    Entity result;
    return result;
}


int Entity::counter = 0;