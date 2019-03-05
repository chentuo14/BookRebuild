TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    customer.cpp \
    movie.cpp \
    rental.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    customer.h \
    movie.h \
    rental.h

