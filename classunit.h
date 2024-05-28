#ifndef CLASSUNIT_H
#define CLASSUNIT_H
#include "unit.h"

class ClassUnit : public Unit
{
public:
    enum AccessModifier {
        PUBLIC,
        PROTECTED,
        PRIVATE,
        PRIVATE_PROTECTED,
        FILE,
        INTERNAL,
        PROTECTED_INTERNAL
    };
    static const std::vector<std::string> ACCESS_MODIFIERS;
public:
    explicit ClassUnit(const std::string& name) : m_name(name) {
        m_fields.resize(ACCESS_MODIFIERS.size());
    }
    virtual void add(const std::shared_ptr<Unit>& unit, Flags flags);
    virtual std::string compile(unsigned int level) const;

protected:
    std::string m_name;
    using Fields = std::vector<std::shared_ptr<Unit>>;
    std::vector<Fields> m_fields;
};


#endif // CLASSUNIT_H
