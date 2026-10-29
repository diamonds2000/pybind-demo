#pragma once
#include "predefined.h"
#include "Force.h"

class FORCE_API MCForce : public Force
{
public:
    MCForce(const std::string& name);

    virtual std::string name() const;

    virtual double magnitude() const;

    void setComponentX(double value);
    void setComponentY(double value);
    void setComponentZ(double value);

private:
    double m_componentX;
    double m_componentY;
    double m_componentZ;
};