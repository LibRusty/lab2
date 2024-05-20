#ifndef PROGRAMM_H
#define PROGRAMM_H

#include "ilanguage.h"

class Programm
{
    ILanguage* language;
public:
    Programm(ILanguage* lang);
    std::string generateProgram();
};

#endif // PROGRAMM_H
