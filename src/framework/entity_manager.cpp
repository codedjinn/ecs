
#include "entity_manager.h"


void EntityManager::Register(EntityDef def)
{
    auto it = std::find(definitions.begin(), definitions.end(), def);
    if (it == definitions.end())
    {
        definitions.push_back(def);
    }

    // assert ?
}

Entity EntityManager::Create(std::string name)
{
    EntityDef def;
    for (auto& cur : definitions)
    {
        if (name.compare(cur.getName()))
        {
            def = cur;
            break;
        }
    }

    

    Entity noop(true);
    return noop;
}
