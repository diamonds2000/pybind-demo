#include "SCForce.h"

SCForce::SCForce(const std::string& name) : Force(name), m_magnitude(0.0)
{
    m_type = SCForceType;
}

std::string SCForce::name() const
{
    return "SingleComponent-" + Force::name();
}

void SCForce::setMagnitude(double magnitude)
{
    m_magnitude = magnitude;
}

double SCForce::magnitude() const
{
    return m_magnitude;
}