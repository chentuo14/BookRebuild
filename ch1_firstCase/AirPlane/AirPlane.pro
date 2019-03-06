TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    state.cpp \
    stateflying.cpp \
    statenotfly.cpp \
    statenotpower.cpp \
    airplane.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    state.h \
    stateflying.h \
    statenotfly.h \
    statenotpower.h \
    airplane.h

