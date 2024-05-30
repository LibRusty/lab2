#include "methodunit_sharp.h"

MethodUnit_Sharp::MethodUnit_Sharp(const std::string& name, const std::string& returnType, Flags flags):
    MethodUnit(name, returnType, flags){}

void MethodUnit_Sharp::add(const std::shared_ptr<Unit>& unit, Flags /* flags */)
{
    m_body.push_back(unit);
}

std::string MethodUnit_Sharp::compile(unsigned int level) const
{
    std::string result = generateShift(level);
    if(m_flags & STATIC) {
        result += "static ";
    } else if(m_flags & VIRTUAL) {
        result += "virtual ";
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
