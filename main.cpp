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
    auto method = language->get_method_unit("testFunc4", "void", MethodUnit::STATIC);
    method->add(language->get_print_operator_unit(R"(Hello, world!\n)"));
    myClass->add(method, ClassUnit::PROTECTED);
    return myClass->compile();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
