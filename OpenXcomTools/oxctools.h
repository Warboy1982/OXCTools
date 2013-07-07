#ifndef OXCTOOLS_H
#define OXCTOOLS_H

#include <QMainWindow>

namespace Ui {
class OXCTools;
}

class OXCTools : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit OXCTools(QWidget *parent = 0);
    ~OXCTools();
    
private:
    Ui::OXCTools *ui;
};

#endif // OXCTOOLS_H
