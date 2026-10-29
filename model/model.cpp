#include "model.h"
#include <iostream>

Model::Model(const std::string& name)
    : m_name(name)
{
    std::cout << "Model created: " << m_name << std::endl;
}

Model::~Model()
{
}

void Model::addForce(Force* force)
{
    forces.addForce(force);
}

const ForceList& Model::getForces() const
{
    return forces;
}
