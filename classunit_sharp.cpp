#include "classunit_sharp.h"

static const std::vector<std::string> ACCESS_MODIFIERS = { "public", "protected", "private", "private proteted",
                                                          "file", "internal", "protected internal" };

ClassUnit_Sharp::ClassUnit_Sharp(const std::string& name): ClassUnit(name){}

void ClassUnit_Sharp::add(const std::shared_ptr<Unit> &unit, Flags flags)
{
    int accessModifier = PRIVATE;
    if(flags < ACCESS_MODIFIERS.size())
    {
        accessModifier = flags;
    }
    m_fields[accessModifier].push_back(unit);
}

std::string ClassUnit_Sharp::compile(unsigned int level = 0) const
{
    std::string result = generateShift(level) + "class " + m_name + " {\n";
    for(size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i)
    {
        if(m_fields[i].empty()) {
            continue;
        }
        result += ACCESS_MODIFIERS[i] + ":\n";
        for(const auto& f : m_fields[i])
        {
            result += f->compile(level + 1);
        }
        result += "\n";
    }
    result += generateShift(level) + "};\n";
    return result;
}
