#include <QMenu>
#include <QMenuBar>
#include <QTextEdit>

#include "mynotepad.h"

MyNotepad::MyNotepad(): textEdit(new QTextEdit) {

    setWindowTitle("MyNotepad");

    QMenu* editMenu = new QMenu("&Edit", this);

    editMenu->addAction(addChoice("Bold", "&Bold"));
    editMenu->addAction(addChoice("Underline", "&Underline"));
    editMenu->addAction(addChoice("Italics", "&Italics"));

    QMainWindow::menuBar()->addMenu(editMenu);

    QMainWindow::setCentralWidget(textEdit);

    QObject::connect(editMenu, SIGNAL(triggered(QAction*)), this, SLOT(actionEvent(QAction*)));

    QWidget::move(300, 300);
    QWidget::resize(200, 200);
}


QAction* MyNotepad::addChoice(QString name, QString text) {
    QAction* retval = new QAction(text, this);
    retval->setObjectName(name);   
    return retval;
}

void MyNotepad::actionEvent(QAction* act) {
   QString name = act->objectName();

   if (name == "Bold") {
     textEdit->setFontWeight(QFont::Bold);
    }
   if (name == "Underline") {
        textEdit->setFontUnderline(true);
   }
   if (name == "Italics") {
     textEdit->setFontItalic(true);
   }

}
