#ifndef PRINTOPERATORUNIT_SHARP_H
#define PRINTOPERATORUNIT_SHARP_H

#include "printoperatorunit.h"

class PrintOperatorUnit_Sharp : public PrintOperatorUnit
{
public:
    explicit PrintOperatorUnit_Sharp(const std::string& text): PrintOperatorUnit(text) { }
    virtual std::string compile( unsigned int level = 0 ) const {
        return generateShift(level) + "Console.WriteLine( \"" + m_text + "\" );\n";
    }
private:
    std::string m_text;
};

#endif // PRINTOPERATORUNIT_SHARP_H
