#ifndef PRINTOPERATORUNIT_CPLUS_H
#define PRINTOPERATORUNIT_CPLUS_H

#include "printoperatorunit.h"

class PrintOperatorUnit_CPlus : public PrintOperatorUnit
{
public:
    explicit PrintOperatorUnit_CPlus(const std::string& text) : PrintOperatorUnit(text) { }
    std::string compile(unsigned int level = 0) const override {
        return generateShift( level ) + "printf( \"" + m_text + "\" );\n";
    }
private:
    std::string m_text;
};

#endif // PRINTOPERATORUNIT_CPLUS_H
