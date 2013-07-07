#include "oxctools.h"
#include "ui_oxctools.h"

OXCTools::OXCTools(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OXCTools)
{
    ui->setupUi(this);
}

OXCTools::~OXCTools()
{
    delete ui;
}
