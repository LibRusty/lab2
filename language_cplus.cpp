#include "language_cplus.h"

std::shared_ptr<ClassUnit> Language_CPlus::get_class_unit(const std::string& name)
{
    return std::make_shared<ClassUnit_CPlus>(name);
}

std::shared_ptr<MethodUnit> Language_CPlus::get_method_unit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<MethodUnit_CPlus>(name, returnType, flags);
}
std::shared_ptr<PrintOperatorUnit> Language_CPlus::get_print_operator_unit(const std::string& text)
{
    return std::make_shared<PrintOperatorUnit_CPlus>(text);
}
