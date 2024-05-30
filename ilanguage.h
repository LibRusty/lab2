#ifndef ILANGUAGE_H
#define ILANGUAGE_H

#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"

class ILanguage
{
public:
    using Flags = unsigned int;
    ILanguage() = default;
    virtual ~ILanguage() = default;

    virtual std::shared_ptr<ClassUnit> get_class_unit(const std::string& name) = 0;
    virtual std::shared_ptr<MethodUnit> get_method_unit(const std::string& name, const std::string& returnType, Flags flags) = 0;
    virtual std::shared_ptr<PrintOperatorUnit> get_print_operator_unit(const std::string& text) = 0;
};

#endif // ILANGUAGE_H
