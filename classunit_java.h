#ifndef CLASSUNIT_JAVA_H
#define CLASSUNIT_JAVA_H

#include "classunit.h"

class ClassUnit_Java: public ClassUnit
{
    explicit ClassUnit_Java(const std::string& name): ClassUnit(name){}

    virtual void add(const std::shared_ptr<Unit>& unit, Flags flags) override;
    virtual std::string compile(unsigned int level) const override;
};
const std::vector<std::string> ClassUnit_Java::ACCESS_MODIFIERS = { "public", "protected", "private" };

#endif // CLASSUNIT_JAVA_H
