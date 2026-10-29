#pragma once
#include "Force.h"
#include "predefined.h"

class FORCE_API SCForce : public Force
{
public:
    SCForce(const std::string& name);

    virtual std::string name() const;

    virtual double magnitude() const;

    void setMagnitude(double magnitude);

private:
    double m_magnitude;
};