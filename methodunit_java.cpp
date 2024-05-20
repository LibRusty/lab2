#include "methodunit_java.h"

void MethodUnit_Java::add(const std::shared_ptr<Unit>& unit, Flags /* flags */ = 0)
{
    m_body.push_back(unit);
}

std::string MethodUnit_Java::compile(unsigned int level = 0) const
{
    std::string result = generateShift(level);
    if(m_flags & STATIC) {
        result += "static ";
    } else if(m_flags & FINAL) {
        result += "final ";
    }
    else if (m_flags & ABSTRACT)
    {
        result += "abstract ";
    }
    result += m_returnType + " ";
    result += m_name + "()";
    result += " {\n";
    for(const auto& b : m_body) {
        result += b->compile(level + 1);
    }
    result += generateShift(level) + "}\n";
    return result;
}
