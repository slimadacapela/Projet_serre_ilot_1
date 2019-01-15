# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = Projet_serre_ilot_1
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += ClassesMetier/InfoClimat.cpp ClassesMetier/Observable.cpp ClassesMetier/Observateur.cpp VueMeteo.cpp.cc VuePrincipale.cpp.cc VueSerre.cpp.cc main.cpp
HEADERS += ClassesMetier/InfoClimat.h ClassesMetier/Observable.h ClassesMetier/Observateur.h VueMeteo.h VuePrincipale.h VueSerre.h
FORMS += VueMeteo.ui VuePrincipale.ui VueSerre.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
