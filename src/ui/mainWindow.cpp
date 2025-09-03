#include "mainWindow.h"

CMainWindow* g_pMainWindow = nullptr;
CMainWindow* mainWindow()
{
    return g_pMainWindow;
};

CMainWindow::CMainWindow(QWidget *parent) : QWidget(parent)
{
    g_pMainWindow = this;
}

CMainWindow::~CMainWindow()
{
}