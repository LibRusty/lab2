#ifndef ILANGUAGE_H
#define ILANGUAGE_H

#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"

class ILanguage
{
public:
    virtual ClassUnit* class_unit() = 0;
    virtual MethodUnit* method_unit() = 0;
    virtual PrintOperatorUnit print_operator_unit() = 0;
};

#endif // ILANGUAGE_H
