#include "Force.h"
#include "ForceList.h"
#include <iostream>


Force::Force(const std::string& name)
    : m_name(name), m_type(Unknown)
{
    std::cout << "Force created with name: " << m_name << std::endl;
}

Force::~Force()
{
    std::cout << "Force destroyed with name: " << m_name << std::endl;
}

std::string Force::name() const
{
    return m_name;
}

void Force::setName(const std::string& name)
{
    m_name = name;
}

ForceType Force::type() const
{
    return m_type;
}
