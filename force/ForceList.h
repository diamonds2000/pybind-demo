#pragma once
#include "predefined.h"
#include "Force.h"
#include <vector>

class FORCE_API ForceList
{
public:
    ForceList() = default;
    void addForce(Force* force);
    void removeForce(const Force* force);
    const std::vector<Force*>& forces() const;

private:
    std::vector<Force*> m_forces;
};