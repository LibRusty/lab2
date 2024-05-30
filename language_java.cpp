#include "language_java.h"

std::shared_ptr<ClassUnit> Language_Java::get_class_unit(const std::string& name)
{
    return std::make_shared<ClassUnit_Java>(name);
}

std::shared_ptr<MethodUnit> Language_Java::get_method_unit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<MethodUnit_Java>(name, returnType, flags);
}
std::shared_ptr<PrintOperatorUnit> Language_Java::get_print_operator_unit(const std::string& text)
{
    return std::make_shared<PrintOperatorUnit_Java>(text);
}
