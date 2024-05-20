QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        classunit_cplus.cpp \
        classunit_java.cpp \
        classunit_sharp.cpp \
        main.cpp \
        methodunit_cplus.cpp \
        methodunit_java.cpp \
        methodunit_sharp.cpp \
        programm.cpp \
        unit.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    classunit.h \
    classunit_cplus.h \
    classunit_java.h \
    classunit_sharp.h \
    ilanguage.h \
    language_cplus.h \
    language_java.h \
    language_sharp.h \
    methodunit.h \
    methodunit_cplus.h \
    methodunit_java.h \
    methodunit_sharp.h \
    printoperatorunit.h \
    programm.h \
    unit.h
