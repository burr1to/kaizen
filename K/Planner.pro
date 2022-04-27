QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    allplans.cpp \
    login.cpp \
    main.cpp \
    planner.cpp \
    signup.cpp \
    budget.cpp \
    food.cpp \
    core.cpp \
    fitness.cpp \
    fitness_edit.cpp \
    lower_body.cpp \
    upper_body.cpp \
    yoga.cpp

HEADERS += \
    allplans.h \
    login.h \
    planner.h \
    signup.h \
    budget.h \
    food.h \
    core.h \
    fitness.h \
    fitness_edit.h \
    lower_body.h \
    upper_body.h \
    yoga.h

FORMS += \
    allplans.ui \
    login.ui \
    planner.ui \
    signup.ui \
    budget.ui \
    food.ui \
    core.ui \
    fitness.ui \
    fitness_edit.ui \
    lower_body.ui \
    upper_body.ui \
    yoga.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    src_img.qrc

DISTFILES += \
    src_images/bear crawl.png \
    src_images/bird dog.png \
    src_images/calves raise.png \
    src_images/child pose.png \
    src_images/core.png \
    src_images/crunches.png \
    src_images/easy-pose.png \
    src_images/glute bridge.png \
    src_images/leg raise.png \
    src_images/lower_body.png \
    src_images/lunges.png \
    src_images/mountain climber.png \
    src_images/plank.png \
    src_images/push_up.png \
    src_images/russian twists.png \
    src_images/shoulder stand.png \
    src_images/squat.png \
    src_images/upper body.png \
    src_images/upward facing dog.png \
    src_images/yoga.png
