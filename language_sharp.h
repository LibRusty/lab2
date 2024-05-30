#ifndef LANGUAGE_SHARP_H
#define LANGUAGE_SHARP_H

#include "ilanguage.h"
#include "classunit_sharp.h"
#include "methodunit_sharp.h"
#include "printoperatorunit_sharp.h"

class Language_Sharp: public ILanguage
{
public:
    Language_Sharp() = default;
    virtual ~Language_Sharp() = default;

    std::shared_ptr<ClassUnit> get_class_unit(const std::string& name) override;
    std::shared_ptr<MethodUnit> get_method_unit(const std::string& name, const std::string& returnType, Flags flags) override;
    std::shared_ptr<PrintOperatorUnit> get_print_operator_unit(const std::string& text) override;
};

#endif // LANGUAGE_SHARP_H
