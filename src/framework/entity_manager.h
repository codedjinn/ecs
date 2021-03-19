
#pragma once

#include <algorithm>
#include <vector>

#include "entity.h"
#include "entity_def.h"

class EntityManager
{

public:

    void Register(EntityDef def);

    Entity Create(std::string name);

private:

    std::vector<EntityDef> definitions;

};