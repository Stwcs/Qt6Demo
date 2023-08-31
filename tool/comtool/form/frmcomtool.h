#ifndef FRMCOMTOOL_H
#define FRMCOMTOOL_H

#include <QWidget>

namespace Ui {
class frmComTool;
}

class frmComTool : public QWidget
{
    Q_OBJECT

public:
    explicit frmComTool(QWidget *parent = nullptr);
    ~frmComTool();

private:
    Ui::frmComTool *ui;
};

#endif // FRMCOMTOOL_H
