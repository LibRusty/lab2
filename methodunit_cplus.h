#ifndef METHODUNIT_CPLUS_H
#define METHODUNIT_CPLUS_H

#include "methodunit.h"

class MethodUnit_CPlus : public MethodUnit
{
public:
    MethodUnit_CPlus(const std::string& name, const std::string& returnType, Flags flags): MethodUnit(name, returnType, flags){}

    void add(const std::shared_ptr<Unit>& unit, Flags /* flags */ = 0);

    std::string compile(unsigned int level = 0) const;

#endif // METHODUNIT_CPLUS_H
