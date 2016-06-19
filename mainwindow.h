#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QGraphicsRectItem>
#include <QWidget>
#include <QGraphicsScene>
#include <QList>
#include <QDesktopWidget>
#include <QTimer>
#include <Box2D/Box2D.h>
#include <QMouseEvent>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <QPixmap>
#include <QLabel>
#include <QColor>
#include <QColorDialog>
#include <QtCore>
#include <QDebug>
#include <QGraphicsView>
#include <QTimer>
#include <QList>
#include <QKeyEvent>
#include <QtGui>
#include <QMessageBox>
#include <QOpenGLWidget>
#include <QOpenGLShaderProgram>
#include <QKeyEvent>
#include <QMediaPlayer>
#include <QFileDialog>
#include <bird_2.h>


#define Gravity 9.8



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

    float bird_x[4]={150,150,150,150};

    float bird_y[4]={500,500,500,500};

    float boom_x;

    float boom_y;

    float boom_speed_x;

    float boom_speed_y;

    float boom_origin_x;

    float boom_origin_y;

    float speed_x;

    float speed_y;

    float originx;

    float originy;

    float time_done_x=0;

    float time_done_y=0;

    int press1=0;

    int press2=0;

    int press3=0;

    int press4=0;

    int first=0;

    int second=0;

    int third=0;

    int slow=0;

    float break_x[3]={575,695,815};

    float break_y[3]={360,360,360};

    int timepass[12]={0,0,0,0,0,0,0,0,0,0,0,0};

    int check1=0;

    int check2=0;

    int check3=0;

    int src=1;

    int count=0;

    int hi[25]={0};

    int score=0;

    float current_speed_x=0;

    float current_speed_y=0;

    int hit=100;

    int bounce8=0;

    int bounce4=0;

    int bounce12=0;

    int a=1;

    int touch=0;

    int vertical=0;

    int horizon=0;

    int get_point=0;

    int bound=0;

    QTimer * time;

    ~MainWindow();

private slots:
    void mouseMoveEvent(QMouseEvent *MOUSEMOVEPOINT);

    void mouseReleaseEvent(QMouseEvent *mouse_release);

    void birdFly();

    void timer();

    void count_time();

    void mousePressEvent(QMouseEvent *mouse_press);

    void on_quit_clicked();

    void on_again_clicked();

signals:
    void quitGame();

public:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H


