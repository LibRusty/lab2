#include <QCoreApplication>
#include "language_cplus.h"
#include "language_java.h"
#include "language_sharp.h"

std::string generateProgram(std::shared_ptr<ILanguage>& language) {
    std::shared_ptr<ClassUnit> myClass = language->get_class_unit("MyClass");
    myClass->add(
        language->get_method_unit("testFunc1", "void", 0),
        ClassUnit::PUBLIC
        );
    myClass->add(
        language->get_method_unit("testFunc2", "void", MethodUnit::STATIC),
        ClassUnit::PRIVATE
        );
    myClass->add(
        language->get_method_unit("testFunc3", "void", MethodUnit::VIRTUAL | MethodUnit::CONST),
        ClassUnit::PUBLIC
        );
    myClass->add(
        language->get_method_unit("testFunc6", "void", MethodUnit::VIRTUAL | MethodUnit::CONST),
        ClassUnit::FILE
        );
    auto method = language->get_method_unit("testFunc4", "void", MethodUnit::STATIC);
    method->add(language->get_print_operator_unit(R"(Hello, world!\n)"));
    myClass->add(method, ClassUnit::PROTECTED);
    return myClass->compile();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::shared_ptr<ILanguage> lang1 = std::make_shared<Language_CPlus>();
    std::cout << generateProgram(lang1) << std::endl << std::endl;

    std::shared_ptr<ILanguage> lang2 = std::make_shared<Language_Java>();
    std::cout << generateProgram(lang2) << std::endl << std::endl;

    std::shared_ptr<ILanguage> lang3 = std::make_shared<Language_Sharp>();
    std::cout << generateProgram(lang3) << std::endl << std::endl;

    return a.exec();
}
