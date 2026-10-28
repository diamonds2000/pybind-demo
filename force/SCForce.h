#pragma once
#include "Force.h"

class SCForce : public Force
{
public:
    SCForce(const std::string& name);

    void setMagnitude(double magnitude);

    double magnitude() const;

private:
    double m_magnitude;
};