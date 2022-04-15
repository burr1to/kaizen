QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    disp.cpp \
    login.cpp \
    planner.cpp \
    signup.cpp \
    budget.cpp \
    stationery.cpp \
    food.cpp \
    other.cpp \
    rent.cpp



HEADERS += \
    disp.h \
    login.h \
    planner.h \
    signup.h \
    budget.h \
    stationery.h \
    food.h \
    other.h \
    rent.h



FORMS += \
    disp.ui \
    login.ui \
    planner.ui \
    signup.ui \
    budget.ui \
    stationery.ui \
    food.ui \
    other.ui \
    rent.ui



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
