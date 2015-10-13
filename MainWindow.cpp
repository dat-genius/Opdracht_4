#include "MainWindow.h"
#include "ui_mainwindow.h"
#include <QPen>
#include <QPainter>
#include <QImage>
#include <QLabel>
#include "Sensor.h"
#include "Deur.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    appelslot = new Sleutelslot("appel");
    banaanslot = new Sleutelslot("banaan");
    citroenslot = new Codeslot(1337);
    HallSensor1 = new HallSensor(490, 80);
    Deur1 = new Schuifdeur(ui->Deur_1, HallSensor1);
    Deur1->monteerExtraSlot(appelslot);
    Deur1->monteerExtraSlot(citroenslot);
    Deur2 = new Draaideur(ui->Deur_2);
    Deur2->monteerExtraSlot(banaanslot);
    Deur2->monteerExtraSlot(citroenslot);
    Deur3 = new Draaideur(ui->Deur_3);
    Deur3->monteerExtraSlot(citroenslot);
}

void MainWindow::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPen pen;

    QImage image("C:/Users/Erwin/Documents/Opdracht_3/Gebouw.png");

    pen.setColor(Qt::green);
    pen.setWidth(4);
    painter.setPen(pen);
    painter.drawImage(10,10,image);;
    HallSensor1->teken(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clearsleutels(){
    for(unsigned int i = 0; i < 3 /*size of sleutels*/; i++){
        sleutel[i] = "";
    }
}

void MainWindow::ontgrendelSloten(){
    appelslot->ontgrendel(sleutel[0]);
    banaanslot->ontgrendel(sleutel[1]);
    citroenslot->ontgrendel(sleutel[2]);
}

void MainWindow::on_Deur_1_Button_clicked(){
    if(Deur1->isDeurOpen()==true){
        Deur1->Sluit();
        clearsleutels();
    } else
    if(Deur1->isDeurOpen()==false){
        ontgrendelSloten();
        Deur1->Open();
        clearsleutels();
    }
}

void MainWindow::on_Deur_2_Button_clicked(){
    if(Deur2->isDeurOpen()==true){
        Deur2->Sluit();
        clearsleutels();
    } else
    if(Deur2->isDeurOpen()==false){
        ontgrendelSloten();
        Deur2->Open();
        clearsleutels();
    }
}

void MainWindow::on_Deur_3_Button_clicked(){
    if(Deur3->isDeurOpen()==true){
        Deur3->Sluit();
        clearsleutels();
    } else
    if(Deur3->isDeurOpen()==false){
        ontgrendelSloten();
        Deur3->Open();
        clearsleutels();
    }
}

void MainWindow::on_schuifdeurSensorKnop_clicked(){
    if(HallSensor1->isGeactiveerd()){
        HallSensor1->Deactiveer();
        ui->Sensor_1->setText("Hall Sensor 1 uit");
    } else{
        HallSensor1->Activeer();
        ui->Sensor_1->setText("Hall Sensor 1 aan");
    }
    update();
}

void MainWindow::on_SlotDeur_returnPressed(){
    sleutel[0] = ui->SlotDeur->text().toStdString();
    ui->SlotDeur->setText("");
}


void MainWindow::on_SlotDeur_2_returnPressed(){
    sleutel[1] = ui->SlotDeur_2->text().toStdString();
    ui->SlotDeur_2->setText("");
}

void MainWindow::on_SlotDeur_3_returnPressed(){
    sleutel[2] = ui->SlotDeur_3->text().toStdString();
    ui->SlotDeur_3->setText("");
}
