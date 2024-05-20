#ifndef LANGUAGE_SHARP_H
#define LANGUAGE_SHARP_H

#include "ilanguage.h"
#include "classunit_sharp.h"
#include "methodunit_sharp.h"

class Language_Sharp: public ILanguage
{
public:
    ClassUnit* class_unit() {
        return new ClassUnit_Sharp();
    }
    MethodUnit* method_unit() {
        return new MethodUnit_Sharp();
    }
    PrintOperatorUnit* print_operator_unit(){
        return new PrintOperatorUnit();
    }
};

#endif // LANGUAGE_SHARP_H
