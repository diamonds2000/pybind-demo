#include "MCForce.h"
#include <cmath>

MCForce::MCForce(const std::string& name) : Force(name), m_componentX(0.0), m_componentY(0.0), m_componentZ(0.0)
{
    m_type = MCForceType;
}

std::string MCForce::name() const
{
    return "MultiComponent-" + Force::name();
}

void MCForce::setComponentX(double value)
{
    m_componentX = value;
}

void MCForce::setComponentY(double value)
{
    m_componentY = value;
}

void MCForce::setComponentZ(double value)
{
    m_componentZ = value;
}

double MCForce::magnitude() const
{
    return std::sqrt(m_componentX * m_componentX +
                     m_componentY * m_componentY +
                     m_componentZ * m_componentZ);
}