#pragma once
#include <string>


class Force
{
public:
    Force(const std::string& name);
    virtual ~Force();

    virtual std::string name() const;

    void setName(const std::string& name);

protected:
    std::string m_name;
};
