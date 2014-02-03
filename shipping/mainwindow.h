#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();
    ~MainWindow();

private:
    void createActions();
    void createMenus();
    void createToolBars();
    void createStatusBar();
    QMenu *fileMenu;
    QMenu *helpMenu;
    QAction *exitAct;
//    QPlainTextEdit *textEdit;
};

#endif // MAINWINDOW_H
