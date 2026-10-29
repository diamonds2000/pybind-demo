#include "ForceList.h"
#include <iostream>
#include <algorithm>

void ForceList::addForce(Force* force)
{
    m_forces.push_back(force);
    std::cout << "Force added to ForceList: " << force->name() << std::endl;
}

void ForceList::removeForce(const Force* force)
{
    auto it = std::find(m_forces.begin(), m_forces.end(), force);
    if (it != m_forces.end())
    {
        m_forces.erase(it);
        std::cout << "Force removed from ForceList: " << force->name() << std::endl;
    }
}

const std::vector<Force*>& ForceList::forces() const
{
    return m_forces;
}