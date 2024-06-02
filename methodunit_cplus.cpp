#include "methodunit_cplus.h"

MethodUnit_CPlus::MethodUnit_CPlus(const std::string& name, const std::string& returnType, Flags flags):
    MethodUnit(name, returnType, flags){}

void MethodUnit_CPlus::add(const std::shared_ptr<Unit>& unit, Flags /* flags */)
{
    m_body.push_back(unit);
}

std::string MethodUnit_CPlus::compile(unsigned int level) const
{
    std::string result = generateShift(level);
    if(m_flags & STATIC) {
        result += "static ";
    } else if(m_flags & VIRTUAL) {
        result += "virtual ";
    }
    else
        qWarning("Unacceptable modifier for method in C++");
    result += m_returnType + " ";
    result += m_name + "()";
    if(m_flags & CONST) {
        result += " const";
    }
    result += " {\n";
    for(const auto& b : m_body) {
        result += b->compile(level + 1);
    }
    result += generateShift(level) + "}\n";
    return result;
}
