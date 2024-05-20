#ifndef CLASSUNIT_SHARP_H
#define CLASSUNIT_SHARP_H

#include "classunit.h"

class ClassUnit_Sharp: public ClassUnit
{
    explicit ClassUnit_Sharp(const std::string& name): ClassUnit(name){}

    virtual void add(const std::shared_ptr<Unit>& unit, Flags flags) override;
    virtual std::string compile(unsigned int level) const override;
};
const std::vector<std::string> ClassUnit_Sharp::ACCESS_MODIFIERS = { "public", "protected", "private", "private proteted", "file", "internal", "protected internal" };

#endif // CLASSUNIT_SHARP_H
