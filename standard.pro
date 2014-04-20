TEMPLATE = app
CONFIG += console
CONFIG -= qt



HEADERS += \
./c_ziyuan/array_malloc.h
SOURCES += \
./main.cpp \
    c_ziyuan/array_malloc.c
OTHER_FILES += \
./README.md\
./findcandcpptolist.R.exe\
./standard.pro\
./standard.pro.user


INCLUDEPATH +=\
./c_ziyuan
