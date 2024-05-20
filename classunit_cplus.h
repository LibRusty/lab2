#ifndef CLASSUNIT_CPLUS_H
#define CLASSUNIT_CPLUS_H
#include "classunit.h"

class ClassUnit_CPlus: public ClassUnit
{
    explicit ClassUnit_CPlus(const std::string& name): ClassUnit(name){}

    virtual void add(const std::shared_ptr<Unit>& unit, Flags flags) override;
    virtual std::string compile(unsigned int level) const override;
};
const std::vector<std::string> ClassUnit_CPlus::ACCESS_MODIFIERS = { "public", "protected", "private" };

#endif // CLASSUNIT_CPLUS_H
