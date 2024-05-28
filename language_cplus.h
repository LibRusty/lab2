#ifndef LANGUAGE_CPLUS_H
#define LANGUAGE_CPLUS_H

#include "ilanguage.h"
#include "classunit_cplus.h"
#include "methodunit_cplus.h"
#include "printoperatorunit_cplus.h"

class Language_CPlus: public ILanguage
{
public:
    ClassUnit* class_unit() {
        return new ClassUnit_CPlus();
    }
    MethodUnit* method_unit() {
        return new MethodUnit_CPlus();
    }
    PrintOperatorUnit* print_operator_unit(){
        return new PrintOperatorUnit_CPlus();
    }
};

#endif // LANGUAGE_CPLUS_H
