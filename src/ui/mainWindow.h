#pragma once
#include <QWidget>

class CMainWindow: public QWidget
{
    Q_OBJECT
public:
    CMainWindow(QWidget *parent = nullptr);
    ~CMainWindow();
};

CMainWindow* mainWindow();