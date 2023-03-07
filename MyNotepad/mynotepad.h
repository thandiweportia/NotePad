#ifndef MYNOTEPAD_H
#define MYNOTEPAD_H

#include <QMainWindow>
#include <QAction>
#include <QTextEdit>

class MyNotepad : public QMainWindow {
    Q_OBJECT

public:
    MyNotepad();    

protected slots:
    void actionEvent(QAction* act);

protected:
    QAction* addChoice(QString name, QString text);

private:
    QTextEdit* textEdit;
 };

#endif // MYNOTEPAD_H
