#include "frmcomtool.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    frmComTool w;
    w.setWindowTitle("串口调试助手 V2023 (QQ: 1169858873 WX: wangcs)");
    w.resize(900, 650);
    w.show();

    return a.exec();
}
