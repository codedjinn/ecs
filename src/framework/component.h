#pragma once

class Component
{

public:

    const int getTypeId() { return typeId; }

    virtual Component* Clone() { return nullptr; }

protected:

    int typeId;
    
};
