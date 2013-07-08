#ifndef OXCTOOLS_H
#define OXCTOOLS_H

#include <QMainWindow>
#include <QDialog>
#include <QtCore>
#include <QTreeWidgetItem>

namespace Ui {
class OXCTools;
}

class OXCTools : public QMainWindow
{
    Q_OBJECT
    QTreeWidgetItem *_countries, *_regions, *_facilities, *_aircraft, *_aircraftXcom, *_aircraftUFO, *_items;
    QTreeWidgetItem *_itemsAircraftWeapons, *_itemsHWPs, *_itemsWeapons, *_itemsCorpses, *_itemsUFOComponents;
    QTreeWidgetItem *_inventories, *_maps, *_mapsTerrain, *_mapsDeployment, *_armours, *_units, *_unitsXcom;
    QTreeWidgetItem *_unitsAlien, *_alienRaces, *_research, *_manufacture, *_ufopaedia, *_startBase, *_missions;
    QTreeWidgetItem *_missionFlightPaths, *_missionSpawns, *_missionLevels, *_all;
    QTreeWidgetItem *addParent(QString name);
    QTreeWidgetItem *addChild(QTreeWidgetItem *parent, QString name);
    void SetupItemsListAircraft();
    
public:
    explicit OXCTools(QWidget *parent = 0);

    ~OXCTools();
    
private:
    Ui::OXCTools *ui;
};

#endif // OXCTOOLS_H
