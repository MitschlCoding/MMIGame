QT          += widgets
QT          += openglwidgets

HEADERS     = glwidget.h \
              fieldsymbolenum.h \
              helper.h \
              input.h \
              rune.h \
              runeenum.h \
              runetable.h \
              window.h
SOURCES     = glwidget.cpp \
              helper.cpp \
              input.cpp \
              main.cpp \
              rune.cpp \
              runetable.cpp \
              window.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/opengl/2dpainting
INSTALLS += target
