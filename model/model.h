#pragma once

#include <string>
#include "predefined.h"
#include "../force/Force.h"
#include "../force/ForceList.h"

class MODEL_API Model
{
public:
    Model(const std::string& name);
    ~Model();

    void addForce(Force* force);

    const ForceList& getForces() const;

protected:
    std::string m_name;
    ForceList forces;
};