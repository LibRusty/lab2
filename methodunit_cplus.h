#ifndef METHODUNIT_CPLUS_H
#define METHODUNIT_CPLUS_H

#include "methodunit.h"

class MethodUnit_CPlus : public MethodUnit
{
public:
    MethodUnit_CPlus(const std::string& name, const std::string& returnType, Flags flags);

    void add(const std::shared_ptr<Unit>& unit, Flags /* flags */ = 0) override;

    std::string compile(unsigned int level = 0) const override;
};
#endif // METHODUNIT_CPLUS_H
