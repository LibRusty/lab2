#ifndef PRINTOPERATORUNIT_JAVA_H
#define PRINTOPERATORUNIT_JAVA_H

#include "printoperatorunit.h"

class PrintOperatorUnit_Java : public PrintOperatorUnit
{
public:
    explicit PrintOperatorUnit_Java(const std::string& text): PrintOperatorUnit(text) { }
    virtual std::string compile( unsigned int level = 0 ) const {
        return generateShift(level) + "System.out.println( \"" + m_text + "\" );\n";
    }
private:
    std::string m_text;
};

#endif // PRINTOPERATORUNIT_JAVA_H
