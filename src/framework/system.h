#pragma once

#include <unordered_map>
#include <unordered_set>

class System
{

public:

    const int getTypeId() { return _typeId; }

    void Update(float time) {}

protected:

    int _typeId;

    virtual void OnUpdate(float time) {}

private:
    
    std::unordered_set<int> _targetComponents;  

};