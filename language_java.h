#ifndef LANGUAGE_JAVA_H
#define LANGUAGE_JAVA_H

#include "ilanguage.h"
#include "classunit_java.h"
#include "methodunit_java.h"
#include "printoperatorunit_java.h"

class Language_Java: public ILanguage
{
public:
    ClassUnit* class_unit() {
        return new ClassUnit_Java();
    }
    MethodUnit* method_unit() {
        return new MethodUnit_Java();
    }
    PrintOperatorUnit* print_operator_unit(){
        return new PrintOperatorUnit_Java();
    }
};

#endif // LANGUAGE_JAVA_H
