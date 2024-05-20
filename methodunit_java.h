#ifndef METHODUNIT_JAVA_H
#define METHODUNIT_JAVA_H

#include "methodunit.h"

class MethodUnit_Java : public MethodUnit
{
public:
    MethodUnit_Java(const std::string& name, const std::string& returnType, Flags flags): MethodUnit(name, returnType, flags){}

    void add(const std::shared_ptr<Unit>& unit, Flags /* flags */ = 0) override;

    std::string compile(unsigned int level = 0) const override;
private:
    std::string m_name;
    std::string m_returnType;
    Flags m_flags;
    std::vector< std::shared_ptr<Unit>> m_body;

#endif // METHODUNIT_JAVA_H
