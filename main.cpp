#include "src/ui/mainWindow.h"
#include <QIcon>
#include <QtSingleApplication>

int main(int argc, char *argv[])
{
    QtSingleApplication instance(argc, argv);
    if (instance.sendMessage("Wake up!"))
    {
        return 0;
    }
    instance.setWindowIcon(QIcon(":res/ico.png"));
    CMainWindow w;
    w.show();
    instance.setActivationWindow(&w);
    int code = instance.exec();
    return code;
}