#include "mainwindow.h"
#include "ui_mainwindow.h"

extern int bird;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
        //設定小鳥與蛋
        ui->bird_1->setPixmap(QPixmap(":/pics/bird_red_ch.png"));
        ui->bird_1->setGeometry(150,500,50,50);
        ui->egg->setPixmap(QPixmap(":/pics/egg_2.png"));
        //蛋先不會用到，先影藏
        ui->egg->hide();
        ui->break_1->setPixmap(QPixmap(":/pics/kid_ch.png"));
        ui->break_2->setPixmap(QPixmap(":/pics/kid_ch.png"));
        ui->break_3->setPixmap(QPixmap(":/pics/kid_ch.png"));
        ui->break_1->setGeometry(575,360,60,20);
        ui->break_2->setGeometry(695,360,60,20);
        ui->break_3->setGeometry(815,360,60,20);
        ui->break_1->hide();
        ui->break_2->hide();
        ui->break_3->hide();
        ui->num_1->setPixmap(QPixmap(":/pics/0_ch.png"));
        ui->num_2->setPixmap(QPixmap(":/pics/0_ch.png"));
        ui->num_3->setPixmap(QPixmap(":/pics/0_ch.png"));
        ui->num_4->setPixmap(QPixmap(":/pics/0_ch.png"));
        ui->num_5->setPixmap(QPixmap(":/pics/0_ch.png"));
        ui->pause->setPixmap(QPixmap(":/pics/pause.png"));
        ui->label_5->setPixmap(QPixmap(":/pics/pause2.png"));
        ui->pause->hide();
        ui->label_5->hide();
        ui->quit->hide();
        ui->again->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}
//按滑鼠
void MainWindow::mousePressEvent(QMouseEvent *mouse_press)
{
    //第二隻鳥第一次按，用來拉到釋放點
    if(bird==2 && press1==0)
    {
        //用來進入mouseMoveEvent()，以設定初速
        press1=1;
    }
    //第二隻鳥第二次按，用來做特殊任務
    if(bird==2 && press1==3)
    {
        //用來進入birdFly()，以設定所要執行的任務
        press1=100;
    }
    //第三隻鳥第一次按，用來拉到釋放點
    if(bird==3 && press2==0)
    {
        //用來進入mouseMoveEvent()，以設定初速
        press2=1;
    }
    //第三隻鳥第二次按，用來做特殊任務
    if(bird==3 && press2==3)
    {
        //用來進入birdFly()，以設定所要執行的任務
        press2=100;
    }
    //第四隻鳥第一次按，用來拉到釋放點
    if(bird==4 && press3==0)
    {
        //用來進入mouseMoveEvent()，以設定初速
        press3=1;
    }
    //第隻鳥第二次按，用來做特殊任務
    if(bird==4 && press3==3)
    {
        //用來進入birdFly()，以設定所要執行的任務
        press3=100;
    }
    if(bird==1 && press4==0)
    {
        press4=1;
    }
}
//移動小鳥
void MainWindow::mouseMoveEvent(QMouseEvent *MOUSEMOVEPOINT)
{
    //抓出滑鼠座標
    if(press1==1 || press2==1 || press3==1 || press4==1)
    {
        QPoint mouse_pos = MOUSEMOVEPOINT->pos();
        //設定彈弓伸長範圍
        if(((mouse_pos.x()-150)*(mouse_pos.x()-150))+((mouse_pos.y()-500)*(mouse_pos.y()-500))<=9000)
        {
            //設定鳥的X座標
            bird_x[bird-1]=mouse_pos.x()-25;
            //設定鳥的Y座標
            bird_y[bird-1]=mouse_pos.y()-40;
        }
        //設定鳥的方位，使鳥與滑鼠移動
        ui->bird_1->setGeometry(bird_x[bird-1],bird_y[bird-1],50,50);
    }
}
//射出小鳥
void MainWindow::mouseReleaseEvent(QMouseEvent *mouse_release)
{
    //設定只有在每一隻鳥的第一次按滑鼠(也就是要發射)時執行，press4是給第一隻鳥的，預設值為1
    if(press1==1 || press2==1 || press3==1 || press4==1)
    {
        //設定鳥的初始X座標(originx)等於釋放鳥時的X座標
        originx=bird_x[bird-1];
        //設定鳥的初始Y座標(originy)等於釋放鳥時的Y座標
        originy=bird_y[bird-1];
        //設定鳥的初始X方向速度
        speed_x=(150-bird_x[bird-1])*1.5;
        //設定鳥的初始Y方向速度
        speed_y=(bird_y[bird-1]-500)*1.8;
        //設定，使知道下次按滑鼠是要執行特殊任務
        if(press1==1)
        {
            press1=3;
        }
        if(press2==1)
        {
            press2=3;
        }
        if(press3==1)
        {
            press3=3;
        }
        if(press4==1)
        {
            press4=3;
        }
        //設定a=1，使timer()與count_time()連接上
        a=1;
        //呼叫timer()
        timer();
    }
}
//鳥的飛行函式
void MainWindow::birdFly()
{
    //設定鳥在畫面中(Y座標介於0~559)之間時動作
    if(bird_y[bird-1]<=559)
    {
        //第二隻鳥第二次按下滑鼠(要執行特殊任務(加速2.5倍))
        if(bird==2 && press1==100)
        {
            //設定Y的時間為0
            time_done_y=0;
            //設定X的時間為0
            time_done_x=0;
            //將當下的X座標視為起始X座標
            originx=bird_x[bird-1];
            //將當下的Y座標視為起始的Y座標
            originy=bird_y[bird-1];
            //將X初速設為當下的X速度的2.5倍
            speed_x=current_speed_x*2.5f;
            //將Y出速設為當下的Y速度的2.5倍
            speed_y=current_speed_y*2.5f;
            //設定press1使之後第二隻鳥執行中所按的滑鼠皆沒效果
            press1=50;
        }
        //第三隻鳥第二次按下滑鼠(要執行特殊任務(下蛋))
        if(bird==3 && press2==100)
        {
            //將事先設定且影藏的蛋show出
            ui->egg->show();
            //設定蛋的座標與鳥當下的座標一致
            ui->egg->setGeometry(bird_x[bird-1],bird_y[bird-1],50,50);
            //設定Y的時間為0
            time_done_y=0;
            //將當下的Y座標視為起始的Y座標
            originy=bird_y[bird-1];
            //將Y初速設為當下的Y速度+100.5
            speed_y=current_speed_y+100.5f;
            //設定蛋的X初速為0
            boom_speed_x=0;
            //設定蛋的Y初速為-40.5
            boom_speed_y=-40.5f;
            //將當下鳥的X座標視為蛋的起始X座標
            boom_origin_x=bird_x[bird-1];
            //將當下鳥的Y座標視為蛋的起始Y座標
            boom_origin_y=bird_y[bird-1];
            //設定press2使之後第三隻鳥執行中所按的滑鼠皆沒效果
            press2=50;
            src=0;
        }
        //第四隻鳥第二次按下滑鼠(要執行特殊任務(無限彈跳))
        if(bird==4 && press3==100)
        {
            //設定Y的時間為0
            time_done_y=0;
            //設定X的時間為0
            time_done_x=0;
            //將當下的X座標視為起始的X座標
            originx=bird_x[bird-1];
            //將當下的Y座標視為起始的Y座標
            originy=bird_y[bird-1];
            //將X初速設為當下的X速度的50.5倍
            speed_x=current_speed_x*50.5f;
            //將Y初速設為當下的Y速度的50.5倍
            speed_y=current_speed_y*50.5f;
            //設定press3使之後第四隻鳥執行中所按的滑鼠皆沒效果
            press3=50;
            //設定bound=1，用來啟動畫面邊界的牆面
            bound=1;
        }
        //設定X方向當下的速度(current_speed_x)，因為X方向沒受力，所以與X方向初速(speed_x)相同
        current_speed_x=speed_x;
        //設定Y方向當下的速度(current_speed_y)，因為Y方向受重力，所以為Y方向初速(speed_y)減去重力(Gravity)與Y所經過的時間(time_done_y)的乘積
        current_speed_y=speed_y-Gravity*time_done_y;
        //設定蛋的當下X座標(boom_x) = 蛋的初始X座標(boom_origin_x) + (蛋的X方向初速(boom_speed_x) * X所經過的時間(time_done_x))
        boom_x=boom_origin_x+((boom_speed_x*time_done_x));
        //設定蛋的當下Y座標(boom_y) = 蛋的初始Y座標(boom_origin_y) - (蛋的y方向初速(boom_speed_y) * Y所經過的時間(time_done_y) - 0.5*G*T*T)
        boom_y=boom_origin_y-((boom_speed_y*time_done_y-0.5*Gravity*time_done_y*time_done_y));
        //同上兩行
        bird_x[bird-1]=originx+((speed_x*time_done_x));
        bird_y[bird-1]=originy-((speed_y*time_done_y-0.5*Gravity*time_done_y*time_done_y));
        //設定蛋當下的座標
        ui->egg->setGeometry(boom_x,boom_y,50,50);
        //設定鳥當下的座標
        ui->bird_1->setGeometry(bird_x[bird-1],bird_y[bird-1],50,50);

        //qDebug()<<hit;
        //蛋的消失
        if(bird==3 && src==0)
        {
            if(boom_x<=484 && boom_y>=557)
            {
                ui->egg->hide();
                src=1;
            }
            if(boom_x>=484 && boom_x<=554 && boom_y>=219)
            {
                ui->egg->hide();
                src=1;
            }
            if(boom_x>=554 && boom_x<=603 && boom_y>=258)
            {
                ui->egg->hide();
                ui->bottom_1->setPixmap(QPixmap(":/pics/things_9_green.png"));
                first=1;
                src=1;
            }
            if(boom_x>=603 && boom_x<=674 && boom_y>=219)
            {
                ui->egg->hide();
                src=1;
            }
            if(boom_x>=674 && boom_x<=724 && boom_y>=258)
            {
                ui->egg->hide();
                ui->bottom_2->setPixmap(QPixmap(":/pics/things_9_green.png"));
                second=1;
                src=1;
            }
            if(boom_x>=724 && boom_x<=794 && boom_y>=219)
            {
                ui->egg->hide();
                src=1;
            }
            if(boom_x>=794 && boom_x<=843 && boom_y>=258)
            {
                ui->egg->hide();
                ui->bottom_3->setPixmap(QPixmap(":/pics/things_9_green.png"));
                third=1;
                src=1;
            }
            if(boom_x>=843 && boom_x<=915 && boom_y>=219)
            {
                ui->egg->hide();
                src=1;
            }
        }
        if(bound==1)
        {
            if(bird_x[bird-1]>=914 || bird_x[bird-1]<=0)
            {
                time_done_x=0;
                originx=bird_x[bird-1];
                speed_x=-1.0f*current_speed_x;
                hit=20;
            }
            if(bird_y[bird-1]<=0)
            {
                time_done_y=0;
                originy=bird_y[bird-1];
                speed_y=-1.0f*current_speed_y;
                hit=20;
            }
            if(bird_x[bird-1]>=0 && bird_x[bird-1]<=914 && bird_y[bird-1]>=557)
            {
                time_done_y=0;
                originy=bird_y[bird-1];
                speed_y=-1.0f*current_speed_y;
                hit=20;
            }
            if(bird_x[bird-1]>=484 && bird_x[bird-1]<=915 && bird_y[bird-1]>=258)
            {
                time_done_y=0;
                originy=bird_y[bird-1];
                speed_y=-1.0f*current_speed_y;
                hit=20;
            }
            if(bird_y[bird-1]>=557)
            {
                count++;
                if(count>=200)
                    touch=1;
            }
        }
        if(hit==-1)
        {
            touch=1;
        }
        if(bird_y[bird-1]>=558 && (hit>=99 || hit<=15))
        {
            time_done_y=0;
            time_done_x=0;
            originx=bird_x[bird-1];
            originy=bird_y[bird-1];
            if(current_speed_x>0)
            speed_x=current_speed_x-10.2f;
            speed_y=-1.0*(current_speed_y/1.5f);
            hit--;
        }
        //第一障礙
        if(484-bird_x[bird-1]<=0.1 && bird_x[bird-1]<=484 && bird_y[bird-1]>=219 && bird_y[bird-1]<=559 && hit!=1)
        {
            time_done_x=0;
            originx = bird_x[bird-1];
            speed_x=-1*(current_speed_x/2.5f);
            bounce4=0;
            bounce8=0;
            bounce12=0;
            hit=1;
        }
        //第二障礙
        if(bird_x[bird-1]>=484 && bird_x[bird-1]<=554 && 219-bird_y[bird-1]<=0.1 && bird_y[bird-1]<=219 )
        {
            horizon=1;
            hit=2;
        }
        //第三障礙
        if(bird_x[bird-1]-554<=0.1 && bird_x[bird-1]>=554 && bird_y[bird-1]>=219 && bird_y[bird-1]<=264 && hit!=3)
        {
            vertical=1;
            hit=3;
        }
        if(bird_x[bird-1]>=486 && bird_y[bird-1]>=258 || bounce4==3)
        {
            touch=1;
        }
        //第四障礙
        if(bird_x[bird-1]>=554 && bird_x[bird-1]<=603 && 258-bird_y[bird-1]<=1 && bird_y[bird-1]<=258&& hit!=4)
        {
            get_point=1;
            ui->bottom_1->setPixmap(QPixmap(":/pics/things_9_green.png"));
            first=1;
            bounce4++;
            hit=4;
        }
        //第五障礙
        if(603-bird_x[bird-1]<=0.1 && bird_x[bird-1]<=603 && bird_y[bird-1]>=219 && bird_y[bird-1]<=264 && hit!=5)
        {
            vertical=1;
            hit=5;
        }
        //第六障礙
        if(bird_x[bird-1]>=603 && bird_x[bird-1]<=674 && 219-bird_y[bird-1]<=0.1 && bird_y[bird-1]<=219 )
        {
            horizon=1;
            hit=6;
        }
        //第7障礙
        if(bird_x[bird-1]-674<=0.1 && bird_x[bird-1]>=674 && bird_y[bird-1]>=219 && bird_y[bird-1]<=264 && hit!=7)
        {
            vertical=1;
            hit=7;
        }
        if(bird_x[bird-1]>=486 && bird_y[bird-1]>=258 || bounce8==3)
        {
            touch=1;
        }
        //第8障礙
        if(bird_x[bird-1]>=674 && bird_x[bird-1]<=724 && 258-bird_y[bird-1]<=1 && bird_y[bird-1]<=258&& hit!=8)
        {
            get_point=1;
            ui->bottom_2->setPixmap(QPixmap(":/pics/things_9_green.png"));
            second=1;
            hit=8;
            bounce8++;
        }
        //第9障礙
        if(724-bird_x[bird-1]<=0.1 && bird_x[bird-1]<=724 && bird_y[bird-1]>=219 && bird_y[bird-1]<=264 && hit!=9)
        {
            vertical=1;
            hit=9;
        }
        //第10障礙
        if(bird_x[bird-1]>=724 && bird_x[bird-1]<=794 && 219-bird_y[bird-1]<=0.1 && bird_y[bird-1]<=219 )
        {
            horizon=1;
            hit=10;
        }
        //第11障礙
        if(bird_x[bird-1]-794<=0.1 && bird_x[bird-1]>=794 && bird_y[bird-1]>=219 && bird_y[bird-1]<=264 && hit!=11)
        {
            vertical=1;
            hit=11;
        }
        if(bird_x[bird-1]>=486 &&  bird_y[bird-1]>=258 || bounce12==3)
        {
            touch=1;
        }
        //第12障礙
        if(bird_x[bird-1]>=794 && bird_x[bird-1]<=843 && 258-bird_y[bird-1]<=1 && bird_y[bird-1]<=258&& hit!=12)
        {
            get_point=1;
            ui->bottom_3->setPixmap(QPixmap(":/pics/things_9_green.png"));
            third=1;
            hit=12;
            bounce12++;
        }
        //第13障礙
        if(843-bird_x[bird-1]<=0.1 && bird_x[bird-1]<=843 && bird_y[bird-1]>=219 && bird_y[bird-1]<=264 && hit!=13)
        {
            vertical=1;
            hit=13;
        }
        //第14障礙
        if(bird_x[bird-1]>=843 && bird_x[bird-1]<=915 && 219-bird_y[bird-1]<=0.1 && bird_y[bird-1]<=219 )
        {
            horizon=1;
            hit=14;
        }
        //第15障礙
        if(bird_x[bird-1]>=843 && bird_x[bird-1]<=915 && bird_y[bird-1]>=219 && bird_y[bird-1]<=559)
        {
            qDebug()<<"15";
            time_done_x=0;
            originx = bird_x[bird-1];
            speed_x=-1*current_speed_x;
            bounce4=0;
            bounce8=0;
            bounce12=0;
            hit=15;
        }

        if(bird_x[bird-1]<=-80 || bird_x[bird-1]>=1200)
            if(bound==0)touch=1;
        if(touch==1)
        {
            bird++;
            touch=0;
            if(bird==2)ui->bird_1->setPixmap(QPixmap(":/pics/bird_yellow_ch.png"));
            if(bird==3)ui->bird_1->setPixmap(QPixmap(":/pics/bird_blue_ch.png"));
            if(bird==4)ui->bird_1->setPixmap(QPixmap(":/pics/bird_orange_ch_1.png"));
            if(bird==5)
            {
                ui->bird_1->hide();
                ui->pause->show();
                ui->label_5->show();
                ui->quit->show();
                ui->again->show();
            }
            speed_x=0;
            speed_y=0;
            current_speed_x=0;
            current_speed_y=0;
            originx=150;
            originy=500;
            hit=100;
            bounce4=0;bounce8=0;bounce12=0;
            a=0;
        }
        if(vertical==1)
        {
            vertical=0;
            time_done_x=0;
            originx = bird_x[bird-1];
            speed_x=-1*(current_speed_x/1.3f);
            bounce4=0;bounce8=0;bounce12=0;
        }
        if(horizon==1)
        {
            horizon=0;
            time_done_x=0;
            time_done_y=0;
            originx = bird_x[bird-1];
            originy = bird_y[bird-1];
            speed_y=-1.0*(current_speed_y/1.1f);
            bounce4=0;bounce8=0;bounce12=0;
        }
        if(get_point==1)
        {
            get_point=0;
            time_done_x=0;
            time_done_y=0;
            originx = bird_x[bird-1];
            originy = bird_y[bird-1];
            speed_x=current_speed_x/1.3f;
            speed_y=-1.0*(current_speed_y/1.5f);
        }
        if(first==1 && check1==0)
        {
            ui->break_1->show();
            ui->break_1->setGeometry(break_x[0],break_y[0],60,20);
            break_y[0]+=0.0005;
            if(break_y[0]>=400 && timepass[0]<501)
            {
                if(timepass[0]<=300)ui->label->setPixmap(QPixmap(":/pics/smoke.png"));
                if(timepass[0]<=500)timepass[0]++;
                if(timepass[0]==500)
                {
                    ui->label->hide();
                    score+=5000;
                }
            }
            if(break_y[0]>=430 && timepass[1]<=501)
            {
                if(timepass[1]<=300)ui->box_3->setPixmap(QPixmap(":/pics/smoke.png"));
                if(timepass[1]<=500)timepass[1]++;
                if(timepass[1]==500)
                {
                    ui->box_3->hide();
                    score+=1000;
                }
            }
            if(break_y[0]>=480 && timepass[2]<=501)
            {
                if(timepass[2]<=300)ui->box_2->setPixmap(QPixmap(":/pics/smoke.png"));
                if(timepass[2]<=500)timepass[2]++;
                if(timepass[2]==500)
                {
                    ui->box_2->hide();
                    score+=1000;
                }
            }
            if(break_y[0]>=530 && timepass[3]<=501)
            {
                if(timepass[3]<=300)ui->box_1->setPixmap(QPixmap(":/pics/smoke.png"));
                if(timepass[3]<=500)timepass[3]++;
                if(timepass[3]==500)
                {
                    ui->box_1->hide();
                    score+=1000;
                }
            }
            if(break_y[0]>=590)
            {
                first=3;
            }
        }
        if(first==3)check1=1;

        if(second==1 && check2==0)
        {
            ui->break_2->show();
            ui->break_2->setGeometry(break_x[1],break_y[1],60,20);
            break_y[1]+=0.0005;
            if(break_y[1]>=400 && timepass[4]<501)
            {
                if(timepass[4]<=300)ui->label_2->setPixmap(QPixmap(":/pics/smoke.png"));
                if(timepass[4]<=500)timepass[4]++;
                if(timepass[4]==500)
                {
                    ui->label_2->hide();
                    score+=5000;
                }
            }
            if(break_y[1]>=430 && timepass[5]<=501)
            {
                if(timepass[5]<=300)ui->box_6->setPixmap(QPixmap(":/pics/smoke.png"));
                if(timepass[5]<=500)timepass[5]++;
                if(timepass[5]==500)
                {
                    ui->box_6->hide();
                    score+=1000;
                }
            }
            if(break_y[1]>=480 && timepass[6]<=501)
            {
                if(timepass[6]<=300)ui->box_5->setPixmap(QPixmap(":/pics/smoke.png"));
                if(timepass[6]<=500)timepass[6]++;
                if(timepass[6]==500)
                {
                    ui->box_5->hide();
                    score+=1000;
                }
            }
            if(break_y[1]>=530 && timepass[7]<=501)
            {
                if(timepass[7]<=300)ui->box_4->setPixmap(QPixmap(":/pics/smoke.png"));
                if(timepass[7]<=500)timepass[7]++;
                if(timepass[7]==500)
                {
                    ui->box_4->hide();
                    score+=1000;
                }
            }
            if(break_y[1]>=590)
            {
                second=3;
            }
        }
        if(second==3)check2=1;
        if(third==1)
        {
            ui->break_3->show();
            ui->break_3->setGeometry(break_x[2],break_y[2],60,20);
            break_y[2]+=0.0005;
            if(break_y[2]>=400 && timepass[8]<501)
            {
                if(timepass[8]<=300)ui->label_3->setPixmap(QPixmap(":/pics/smoke.png"));
                if(timepass[8]<=500)timepass[8]++;
                if(timepass[8]==500)
                {
                    ui->label_3->hide();
                    score+=5000;
                }
            }
            if(break_y[2]>=430 && timepass[9]<=501)
            {
                if(timepass[9]<=300)ui->box_9->setPixmap(QPixmap(":/pics/smoke.png"));
                if(timepass[9]<=500)timepass[9]++;
                if(timepass[9]==500)
                {
                    ui->box_9->hide();
                    score+=1000;
                }
            }
            if(break_y[2]>=480 && timepass[10]<=501)
            {
                if(timepass[10]<=300)ui->box_8->setPixmap(QPixmap(":/pics/smoke.png"));
                if(timepass[10]<=500)timepass[10]++;
                if(timepass[10]==500)
                {
                    ui->box_8->hide();
                    score+=1000;
                }
            }
            if(break_y[2]>=530 && timepass[11]<=501)
            {
                if(timepass[11]<=300)ui->box_7->setPixmap(QPixmap(":/pics/smoke.png"));
                if(timepass[11]<=500)timepass[11]++;
                if(timepass[11]==500)
                {
                    ui->box_7->hide();
                    score+=1000;
                }
            }
            if(break_y[2]>=590)
            {
                third=3;
            }
        }
        if(third==3)check3=1;
        //qDebug()<<"score="<<score<<"\n";
        //qDebug()<<hi[3]<<"\n";
        if(score/1000==5 && hi[5]==0)
        {
            ui->num_2->setPixmap(QPixmap(":/pics/5_ch.png"));
            hi[5]=1;
        }
        if(score/1000==6 && hi[6]==0)
        {
            ui->num_2->setPixmap(QPixmap(":/pics/6_ch.png"));
            hi[6]=1;
        }
        if(score/1000==7 && hi[7]==0)
        {
            ui->num_2->setPixmap(QPixmap(":/pics/7_ch.png"));
            hi[7]=1;
        }
        if(score/1000==8 && hi[8]==0)
        {
            ui->num_2->setPixmap(QPixmap(":/pics/8_ch.png"));
            hi[8]=1;
        }
        if(score/1000==9 && hi[9]==0)
        {
            ui->num_2->setPixmap(QPixmap(":/pics/9_ch.png"));
            hi[9]=1;
        }
        if(score/1000==10 && hi[10]==0)
        {
            ui->num_1->setPixmap(QPixmap(":/pics/1_ch.png"));
            ui->num_2->setPixmap(QPixmap(":/pics/0_ch.png"));
            hi[10]=1;
        }
        if(score/1000==11 && hi[11]==0)
        {
            ui->num_1->setPixmap(QPixmap(":/pics/1_ch.png"));
            ui->num_2->setPixmap(QPixmap(":/pics/1_ch.png"));
            hi[11]=1;
        }
        if(score/1000==12 && hi[12]==0)
        {
            ui->num_1->setPixmap(QPixmap(":/pics/1_ch.png"));
            ui->num_2->setPixmap(QPixmap(":/pics/2_ch.png"));
            hi[12]=1;
        }
        if(score/1000==13 && hi[13]==0)
        {
            ui->num_1->setPixmap(QPixmap(":/pics/1_ch.png"));
            ui->num_2->setPixmap(QPixmap(":/pics/3_ch.png"));
            hi[13]=1;
        }
        if(score/1000==14 && hi[14]==0)
        {
            ui->num_1->setPixmap(QPixmap(":/pics/1_ch.png"));
            ui->num_2->setPixmap(QPixmap(":/pics/4_ch.png"));
            hi[14]=1;
        }
        if(score/1000==15 && hi[15]==0)
        {
            ui->num_1->setPixmap(QPixmap(":/pics/1_ch.png"));
            ui->num_2->setPixmap(QPixmap(":/pics/5_ch.png"));
            hi[15]=1;
        }
        if(score/1000==16 && hi[16]==0)
        {
            ui->num_1->setPixmap(QPixmap(":/pics/1_ch.png"));
            ui->num_2->setPixmap(QPixmap(":/pics/6_ch.png"));
            hi[16]=1;
        }
        if(score/1000==17 && hi[17]==0)
        {
            ui->num_1->setPixmap(QPixmap(":/pics/1_ch.png"));
            ui->num_2->setPixmap(QPixmap(":/pics/7_ch.png"));
            hi[17]=1;
        }
        if(score/1000==18 && hi[18]==0)
        {
            ui->num_1->setPixmap(QPixmap(":/pics/1_ch.png"));
            ui->num_2->setPixmap(QPixmap(":/pics/8_ch.png"));
            hi[18]=1;
        }
        if(score/1000==19 && hi[19]==0)
        {
            ui->num_1->setPixmap(QPixmap(":/pics/1_ch.png"));
            ui->num_2->setPixmap(QPixmap(":/pics/9_ch.png"));
            hi[19]=1;
        }
        if(score/1000==20 && hi[20]==0)
        {
            ui->num_1->setPixmap(QPixmap(":/pics/2_ch.png"));
            ui->num_2->setPixmap(QPixmap(":/pics/0_ch.png"));
            hi[20]=1;
        }
        if(score/1000==21 && hi[21]==0)
        {
            ui->num_1->setPixmap(QPixmap(":/pics/2_ch.png"));
            ui->num_2->setPixmap(QPixmap(":/pics/1_ch.png"));
            hi[21]=1;
        }
        if(score/1000==22 && hi[22]==0)
        {
            ui->num_1->setPixmap(QPixmap(":/pics/2_ch.png"));
            ui->num_2->setPixmap(QPixmap(":/pics/2_ch.png"));
            hi[22]=1;
        }
        if(score/1000==23 && hi[23]==0)
        {
            ui->num_1->setPixmap(QPixmap(":/pics/2_ch.png"));
            ui->num_2->setPixmap(QPixmap(":/pics/3_ch.png"));
            hi[23]=1;
        }
        if(score/1000==24 && hi[24]==0)
        {
            ui->num_1->setPixmap(QPixmap(":/pics/2_ch.png"));
            ui->num_2->setPixmap(QPixmap(":/pics/4_ch.png"));
            hi[24]=1;
        }

    }

}
//設定時間，使鳥能隨時間動
void MainWindow::timer()
{
    //設定時間，每0.0001毫秒呼叫一次
    time = new QTimer(this);
    time->setInterval(0.0001);
    connect(time,SIGNAL(timeout()),this,SLOT(count_time()));
    time->start();
}
//增加公式裡所需的時間
void MainWindow::count_time()
{
    //若a==0(即鳥與鳥之間交換時，要跳出birdFly()，使一切靜止)，則停止timer()與count_time()的連結
    if(a==0)
    {
        disconnect(time,SIGNAL(timeout()),this,SLOT(count_time()));
        //將一切歸0，回復成初始狀態
        time_done_x=0;
        time_done_y=0;
    }
    //每當timer()呼叫count_time()時(每0.0001毫秒)，X的時間+0.00005
    time_done_x+=0.00005;
    //每當timer()呼叫count_time()時(每0.0001毫秒)，Y的時間+0.00005
    time_done_y+=0.00005;
    //呼叫birdFly()
    birdFly();
}

void MainWindow::on_quit_clicked()
{
    this->close();
}

void MainWindow::on_again_clicked()
{
    bird=1;
    ui->again->hide();
    bird_x[0]=150;
    bird_x[1]=150;
    bird_x[2]=150;
    bird_x[3]=150;
    bird_y[0]=500;
    bird_y[1]=500;
    bird_y[2]=500;
    bird_y[3]=500;
    boom_x=0;
    boom_y=0;
    boom_speed_x=0;
    boom_speed_y=0;
    boom_origin_x=0;
    boom_origin_y=0;
    speed_x=0;
    speed_y=0;
    originx=150;
    originy=500;
    time_done_x=0;
    time_done_y=0;
    press1=0;
    press2=0;
    press3=0;
    press4=0;
    first=0;
    second=0;
    third=0;
    slow=0;
    break_x[0]=575;
    break_x[1]=695;
    break_x[2]=815;
    break_y[0]=360;
    break_y[1]=360;
    break_y[2]=360;
    timepass[0]=0;
    timepass[1]=0;
    timepass[2]=0;
    timepass[3]=0;
    timepass[4]=0;
    timepass[5]=0;
    timepass[6]=0;
    timepass[7]=0;
    timepass[8]=0;
    timepass[9]=0;
    timepass[10]=0;
    timepass[11]=0;
    check1=0;
    check2=0;
    check3=0;
    src=1;
    count=0;
    hi[5]=0;
    hi[6]=0;
    hi[7]=0;
    hi[8]=0;
    hi[9]=0;
    hi[10]=0;
    hi[11]=0;
    hi[12]=0;
    hi[13]=0;
    hi[14]=0;
    hi[15]=0;
    hi[16]=0;
    hi[17]=0;
    hi[18]=0;
    hi[19]=0;
    hi[20]=0;
    hi[21]=0;
    hi[22]=0;
    hi[23]=0;
    hi[24]=0;
    score=0;
    current_speed_x=0;
    current_speed_y=0;
    hit=100;
    bounce8=0;
    bounce4=0;
    bounce12=0;
    a=1;
    touch=0;
    vertical=0;
    horizon=0;
    get_point=0;
    bound=0;
    ui->bird_1->setPixmap(QPixmap(":/pics/bird_red_ch.png"));
    ui->bird_1->setGeometry(150,500,50,50);
    ui->egg->setPixmap(QPixmap(":/pics/egg_2.png"));
    //蛋先不會用到，先影藏
    ui->egg->hide();
    ui->break_1->setPixmap(QPixmap(":/pics/kid_ch.png"));
    ui->break_2->setPixmap(QPixmap(":/pics/kid_ch.png"));
    ui->break_3->setPixmap(QPixmap(":/pics/kid_ch.png"));
    ui->break_1->setGeometry(575,360,60,20);
    ui->break_2->setGeometry(695,360,60,20);
    ui->break_3->setGeometry(815,360,60,20);
    ui->break_1->hide();
    ui->break_2->hide();
    ui->break_3->hide();
    ui->num_1->setPixmap(QPixmap(":/pics/0_ch.png"));
    ui->num_2->setPixmap(QPixmap(":/pics/0_ch.png"));
    ui->num_3->setPixmap(QPixmap(":/pics/0_ch.png"));
    ui->num_4->setPixmap(QPixmap(":/pics/0_ch.png"));
    ui->num_5->setPixmap(QPixmap(":/pics/0_ch.png"));
    ui->pause->setPixmap(QPixmap(":/pics/pause.png"));
    ui->label_5->setPixmap(QPixmap(":/pics/pause2.png"));
    ui->pause->hide();
    ui->label_5->hide();
    ui->quit->hide();
    ui->bottom_1->setPixmap(QPixmap(":/pics/things_9_ch.png"));
    ui->bottom_2->setPixmap(QPixmap(":/pics/things_9_ch.png"));
    ui->bottom_3->setPixmap(QPixmap(":/pics/things_9_ch.png"));
    ui->box_1->setPixmap(QPixmap(":/pics/things_4.png"));
    ui->box_2->setPixmap(QPixmap(":/pics/things_4.png"));
    ui->box_3->setPixmap(QPixmap(":/pics/things_4.png"));
    ui->box_4->setPixmap(QPixmap(":/pics/things_4.png"));
    ui->box_5->setPixmap(QPixmap(":/pics/things_4.png"));
    ui->box_6->setPixmap(QPixmap(":/pics/things_4.png"));
    ui->box_7->setPixmap(QPixmap(":/pics/things_4.png"));
    ui->box_8->setPixmap(QPixmap(":/pics/things_4.png"));
    ui->box_9->setPixmap(QPixmap(":/pics/things_4.png"));
    ui->label->setPixmap(QPixmap(":/pics/pig.png"));
    ui->label_2->setPixmap(QPixmap(":/pics/pig.png"));
    ui->label_3->setPixmap(QPixmap(":/pics/pig.png"));
    ui->label->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->box_1->show();
    ui->box_2->show();
    ui->box_3->show();
    ui->box_4->show();
    ui->box_5->show();
    ui->box_6->show();
    ui->box_7->show();
    ui->box_8->show();
    ui->box_9->show();
    ui->bird_1->show();
}
