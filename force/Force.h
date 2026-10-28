#pragma once
#include <string>

enum ForceType
{
    Unknown = 0,
    SCForceType,
    MCForceType
};


class Force
{
public:
    Force(const std::string& name);
    virtual ~Force();

    virtual std::string name() const;

    void setName(const std::string& name);

    ForceType type() const;

protected:
    std::string m_name;
    ForceType m_type;
};
