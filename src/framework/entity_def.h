
#pragma once

#include <vector>
#include <string>

class EntityDef
{

public:

    // used to instantiate via code, 
    // this will be configured by JSON later
    void Add(int component)
    {
        this->components.push_back(component);
    }

    bool operator==(const EntityDef& rhs) const { return this->name == rhs.name; }

    std::vector<int> getComponents()
    {
        return this->components;
    }

    std::string getName() { return name; }
    void setName(std::string value) { name = value; }
    
private:

    std::string name;
    std::vector<int> components;

};