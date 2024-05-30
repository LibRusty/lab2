#ifndef LANGUAGE_CPLUS_H
#define LANGUAGE_CPLUS_H

#include "ilanguage.h"
#include "classunit_cplus.h"
#include "methodunit_cplus.h"
#include "printoperatorunit_cplus.h"

class Language_CPlus: public ILanguage
{
public:
    Language_CPlus() = default;
    virtual ~Language_CPlus() = default;

    std::shared_ptr<ClassUnit> get_class_unit(const std::string& name) override;
    std::shared_ptr<MethodUnit> get_method_unit(const std::string& name, const std::string& returnType, Flags flags) override;
    std::shared_ptr<PrintOperatorUnit> get_print_operator_unit(const std::string& text) override;
};

#endif // LANGUAGE_CPLUS_H
