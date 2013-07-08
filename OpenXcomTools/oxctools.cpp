#include "oxctools.h"
#include "ui_oxctools.h"
#include <QDialog>
#include <QtCore>
#include <QTreeWidgetItem>

OXCTools::OXCTools(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OXCTools)
{
    ui->setupUi(this);
    _countries = addParent("Countries");
    _regions = addParent("Regions");
    _facilities = addParent("Facilities");
    _aircraft = addParent("Aircraft");
    _aircraftXcom = addChild(_aircraft, "Xcom Crafts");
    _aircraftUFO = addChild(_aircraft, "UFOs");
    _items = addParent("Items");
    _itemsAircraftWeapons = addChild(_items, "Aircraft Weapons");
    _itemsHWPs = addChild(_items, "HWPs");
    _itemsWeapons = addChild(_items, "Weapons");
    _itemsCorpses = addChild(_items, "Corpses");
    _itemsUFOComponents = addChild(_items, "UFO Components");
    _inventories = addParent("Inventories");
    _maps = addParent("Maps");
    _mapsTerrain = addChild(_maps, "Terrains");
    _mapsDeployment = addChild(_maps, "Deployments");
    _armours = addParent("Armours");
    _units = addParent("Units");
    _unitsXcom = addChild(_units, "Xcom");
    _unitsAlien = addChild(_units, "Alien");
    _alienRaces = addParent("Alien Races");
    _research = addParent("Research");
    _manufacture = addParent("Manufacture");
    _ufopaedia = addParent("Ufopaedia Articles");
    _startBase = addParent("Starting Base");
    _missions = addParent("Alien Missions");
    _missionFlightPaths = addChild(_missions, "UFO Flight Paths");
    _missionSpawns = addChild(_missions, "Ufo Spawn Procedures");
    _missionLevels = addChild(_missions, "Equipment Levels");
    _all = addParent("All");
}
QTreeWidgetItem *OXCTools::addParent(QString name)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0, name);
    return itm;
}

QTreeWidgetItem *OXCTools::addChild(QTreeWidgetItem *parent, QString name)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0, name);
    parent->addChild(itm);
    return itm;
}

OXCTools::~OXCTools()
{
    delete ui;
}
