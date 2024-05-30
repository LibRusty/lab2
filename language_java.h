#ifndef LANGUAGE_JAVA_H
#define LANGUAGE_JAVA_H

#include "ilanguage.h"
#include "classunit_java.h"
#include "methodunit_java.h"
#include "printoperatorunit_java.h"

class Language_Java: public ILanguage
{
public:
    Language_Java() = default;
    virtual ~Language_Java() = default;

    std::shared_ptr<ClassUnit> get_class_unit(const std::string& name) override;
    std::shared_ptr<MethodUnit> get_method_unit(const std::string& name, const std::string& returnType, Flags flags) override;
    std::shared_ptr<PrintOperatorUnit> get_print_operator_unit(const std::string& text) override;
};

#endif // LANGUAGE_JAVA_H
