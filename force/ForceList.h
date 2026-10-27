#pragma once
#include "Force.h"
#include <vector>

class ForceList
{
public:
    ForceList() = default;
    void addForce(Force* force);
    void removeForce(Force* force);
    const std::vector<Force*>& forces() const;

private:
    std::vector<Force*> m_forces;
};