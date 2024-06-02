#ifndef CLASSUNIT_CPLUS_H
#define CLASSUNIT_CPLUS_H
#include "classunit.h"

class ClassUnit_CPlus: public ClassUnit
{
public:
    explicit ClassUnit_CPlus(const std::string& name);

    void add(const std::shared_ptr<Unit>& unit, Flags flags) override;
    std::string compile(unsigned int level) const override;
private:
    static const std::vector<std::string> ACCESS_MODIFIERS;
};

#endif // CLASSUNIT_CPLUS_H
