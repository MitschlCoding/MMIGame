#include "glwidget.h"
#include "qevent.h"
#include "window.h"
#include <QGridLayout>
#include <QTimer>

#include "runetable.h"

Window::Window()
{
    RuneTable table = RuneTable();

    table.print();
    table.randomize();
    table.print();

    setWindowTitle(tr("Runes Of Fate"));

    GLWidget *openGL = new GLWidget(&helper, this);
    this->openGLMember = openGL;

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(openGL, 0, 0);
    setLayout(layout);

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, openGL, &GLWidget::animate);
    timer->start(0);
}

void Window::keyPressEvent(QKeyEvent* event){
    if(event->isAutoRepeat()){
        return;
    }
    switch (event->key()){
    case Qt::Key_W:
        this->openGLMember->input->wasdPressed[0] = true;
        break;
    case Qt::Key_A:
        this->openGLMember->input->wasdPressed[1] = true;
        break;
    case Qt::Key_S:
        this->openGLMember->input->wasdPressed[2] = true;
        break;
    case Qt::Key_D:
        this->openGLMember->input->wasdPressed[3] = true;
        break;
    }
};

void Window::keyReleaseEvent(QKeyEvent* event){
    if(event->isAutoRepeat()){
        return;
    }
    switch (event->key()){
    case Qt::Key_W:
        this->openGLMember->input->wasdPressed[0] = false;
        break;
    case Qt::Key_A:
        this->openGLMember->input->wasdPressed[1] = false;
        break;
    case Qt::Key_S:
        this->openGLMember->input->wasdPressed[2] = false;
        break;
    case Qt::Key_D:
        this->openGLMember->input->wasdPressed[3] = false;
        break;
    }
}
