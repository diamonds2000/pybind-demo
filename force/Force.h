#pragma once

#include "predefined.h"
#include <string>

enum ForceType
{
    Unknown = 0,
    SCForceType,
    MCForceType
};


class FORCE_API Force
{
public:
    Force(const std::string& name);
    virtual ~Force();

    virtual std::string name() const;

    virtual double magnitude() const { return 0.0; };

    void setName(const std::string& name);

    ForceType type() const;

protected:
    std::string m_name;
    ForceType m_type;
};
