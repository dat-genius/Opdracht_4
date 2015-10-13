#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Deur.h"
#include "Schuifdeur.h"
#include "Draaideur.h"
#include "HallSensor.h"
#include <string>
#include "Sleutelslot.h"
#include "codeslot.h"
#include "slot.h"
#include "HerkenningsSlot.h"

using namespace std;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void clearsleutels();
    void ontgrendelSloten();

    ~MainWindow();

private slots:
    void on_Deur_1_Button_clicked();
    void on_Deur_2_Button_clicked();
    void on_Deur_3_Button_clicked();
    void on_schuifdeurSensorKnop_clicked();

    void on_SlotDeur_returnPressed();



    void on_SlotDeur_2_returnPressed();

    void on_SlotDeur_3_returnPressed();

    void on_AllowButton_clicked();

    void on_BanButton_clicked();

private:
    Ui::MainWindow *ui;
    Schuifdeur *Deur1;
    Draaideur *Deur2;
    Draaideur *Deur3;
    HallSensor *HallSensor1;
    Sleutelslot *appelslot;
    Sleutelslot *banaanslot;
    Codeslot *citroenslot;
    HerkenningsSlot *dadelslot;
    string sleutel[4];
};

#endif // MAINWINDOW_H
