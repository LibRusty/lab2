#ifndef CLASSUNIT_SHARP_H
#define CLASSUNIT_SHARP_H

#include "classunit.h"

class ClassUnit_Sharp: public ClassUnit
{
public:
    explicit ClassUnit_Sharp(const std::string& name);

    void add(const std::shared_ptr<Unit>& unit, Flags flags) override;
    std::string compile(unsigned int level) const override;
private:
    static const std::vector<std::string> ACCESS_MODIFIERS;
};


#endif // CLASSUNIT_SHARP_H
