#include <QApplication>
#include "mynotepad.h"

int main(int argc, char * argv[]) {
    QApplication a(argc, argv);
    MyNotepad myNotepad;
    myNotepad.show();
    return a.exec();
}

