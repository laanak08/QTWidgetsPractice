#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow()
{
//    textEdit = new QPlainTextEdit;
//    setCentralWidget(textEdit);

    createActions();
    createMenus();
    createStatusBar();
}

MainWindow::~MainWindow()
{

}

void MainWindow::createActions()
{
    exitAct = new QAction(tr("E&xit"), this);
    exitAct->setShortcuts(QKeySequence::Quit);
    exitAct->setStatusTip(tr("Exit the application"));
    connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));
}

void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(exitAct);
}

void MainWindow::createStatusBar()
{
    statusBar();
}
