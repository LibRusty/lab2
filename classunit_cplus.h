#ifndef CLASSUNIT_CPLUS_H
#define CLASSUNIT_CPLUS_H
#include "classunit.h"

class ClassUnit_CPlus: public ClassUnit
{
    explicit ClassUnit_CPlus(const std::string& name): ClassUnit(name){}
    std::vector<std::string> ACCESS_MODIFIERS = { "public", "protected", "private" };

    virtual void add(const std::shared_ptr<Unit>& unit, Flags flags) override;
    virtual std::string compile(unsigned int level) const override;
};

#endif // CLASSUNIT_CPLUS_H
