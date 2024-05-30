#include "language_sharp.h"

std::shared_ptr<ClassUnit> Language_Sharp::get_class_unit(const std::string& name)
{
    return std::make_shared<ClassUnit_Sharp>(name);
}

std::shared_ptr<MethodUnit> Language_Sharp::get_method_unit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<MethodUnit_Sharp>(name, returnType, flags);
}
std::shared_ptr<PrintOperatorUnit> Language_Sharp::get_print_operator_unit(const std::string& text)
{
    return std::make_shared<PrintOperatorUnit_Sharp>(text);
}
