TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    movie.cpp \
    rental.cpp \
    customer.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    movie.h \
    rental.h \
    customer.h

