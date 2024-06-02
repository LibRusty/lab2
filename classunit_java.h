#ifndef CLASSUNIT_JAVA_H
#define CLASSUNIT_JAVA_H

#include "classunit.h"

class ClassUnit_Java: public ClassUnit
{
public:
    explicit ClassUnit_Java(const std::string& name);

    void add(const std::shared_ptr<Unit>& unit, Flags flags) override;
    std::string compile(unsigned int level) const override;
private:
    static const std::vector<std::string> ACCESS_MODIFIERS;
};

#endif // CLASSUNIT_JAVA_H
