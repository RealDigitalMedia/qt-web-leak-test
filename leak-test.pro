TEMPLATE = app
TARGET = leak-test

CONFIG += qt debug

HEADERS = leaker.h

SOURCES = main.cpp leaker.cpp

target.path = .
INSTALLS += target

QT += widgets
QT += webenginewidgets
