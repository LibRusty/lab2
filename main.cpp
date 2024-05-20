#include <QCoreApplication>
#include "language_cplus.h"
#include "language_java.h"
#include "language_sharp.h"
#include "programm.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Language_CPlus* lang1 = new Language_CPlus();
    Language_Sharp* lang2 = new Language_Sharp();
    Language_Java* lang3 = new Language_Java();

    Programm *pr = new Programm(lang1);
    std::cout << pr->generateProgram() << "\n";
    return a.exec();
}
