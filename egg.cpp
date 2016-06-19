void egg()
{
    if(boom>=557 && hit>=0)
    {

    }
    //第一障礙
    if(484-bird_x[bird-1]<=0.1 && bird_x[bird-1]<=484 && bird_y[bird-1]>=219 && bird_y[bird-1]<=559 && hit!=1)
    {
        qDebug()<<"3\n";
        time_done_x=0;
        originx = bird_x[bird-1];
        speed_x=-1*(current_speed_x/2.5f);
        bounce4=0;
        bounce8=0;
        bounce12=0;
        hit=1;
    }
    //第二障礙
    if(bird_x[bird-1]>=484 && bird_x[bird-1]<=554 && 219-bird_y[bird-1]<=0.01 && bird_y[bird-1]<=219 )
    {
        qDebug()<<"4\n";
        time_done_x=0;
        time_done_y=0;
        originx = bird_x[bird-1];
        originy = bird_y[bird-1];
        //speed_x=current_speed_x/1.5f;
        speed_y=-1.0*(current_speed_y/1.1f);
        bounce4=0;
        bounce8=0;
        bounce12=0;
        hit=2;
    }
    //第三障礙
    if(bird_x[bird-1]-554<=0.1 && bird_x[bird-1]>=554 && bird_y[bird-1]>=219 && bird_y[bird-1]<=264 && hit!=3)
    {
        qDebug()<<"5\n";
        time_done_x=0;
        originx = bird_x[bird-1];
        speed_x=-1*(current_speed_x/1.5f);
        bounce4=0;
        bounce8=0;
        bounce12=0;
        hit=3;
    }
    if(bird_x[bird-1]>=486 && bird_y[bird-1]>=258 || bounce4==3)
    {
        qDebug()<<"6\n";
        ++bird;
        if(bird==2)ui->bird_1->setPixmap(QPixmap(":/pics/bird_yellow_ch.png"));
        if(bird==3)ui->bird_1->setPixmap(QPixmap(":/pics/bird_blue_ch.png"));
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
    //第四障礙
    if(bird_x[bird-1]>=554 && bird_x[bird-1]<=603 && 258-bird_y[bird-1]<=1 && bird_y[bird-1]<=258&& hit!=4)
    {
        qDebug()<<"7\n";
        time_done_x=0;
        time_done_y=0;
        originx = bird_x[bird-1];
        originy = bird_y[bird-1];
        speed_x=current_speed_x/1.3f;
        speed_y=-1.0*(current_speed_y/1.5f);
        ui->bottom_1->setPixmap(QPixmap(":/pics/things_9_green.png"));
        bounce4++;
        hit=4;
    }
    //第五障礙
    if(603-bird_x[bird-1]<=0.1 && bird_x[bird-1]<=603 && bird_y[bird-1]>=219 && bird_y[bird-1]<=264 && hit!=5)
    {
        qDebug()<<"8\n";
        time_done_x=0;
        originx = bird_x[bird-1];
        speed_x=-1*(current_speed_x/1.3f);
        bounce4=0;
        bounce8=0;
        bounce12=0;
        hit=5;
    }
    //第六障礙
    if(bird_x[bird-1]>=603 && bird_x[bird-1]<=674 && 219-bird_y[bird-1]<=0.01 && bird_y[bird-1]<=219 )
    {
        qDebug()<<"9\n";
        time_done_x=0;
        time_done_y=0;
        originx = bird_x[bird-1];
        originy = bird_y[bird-1];
        //speed_x=current_speed_x/1.3f;
        speed_y=-1.0*(current_speed_y/1.1f);
        bounce4=0;
        bounce8=0;
        bounce12=0;
        hit=6;
    }
    //第7障礙
    if(bird_x[bird-1]-674<=0.1 && bird_x[bird-1]>=674 && bird_y[bird-1]>=219 && bird_y[bird-1]<=264 && hit!=7)
    {
        qDebug()<<"10\n";
        time_done_x=0;
        originx = bird_x[bird-1];
        speed_x=-1*(current_speed_x/1.3f);
        bounce4=0;
        bounce8=0;
        bounce12=0;
        hit=7;
    }
    if(bird_x[bird-1]>=486 && bird_y[bird-1]>=258 || bounce8==3)
    {
        qDebug()<<"11\n";
        ++bird;
        if(bird==2)ui->bird_1->setPixmap(QPixmap(":/pics/bird_yellow_ch.png"));
        if(bird==3)ui->bird_1->setPixmap(QPixmap(":/pics/bird_blue_ch.png"));
        speed_x=0;
        speed_y=0;
        time_done_x=0;
        time_done_y=0;
        current_speed_x=0;
        current_speed_y=0;
        originx=150;
        originy=500;
        hit=100;
        bounce4=0;bounce8=0;bounce12=0;
        a=0;
    }
    //第8障礙
    if(bird_x[bird-1]>=674 && bird_x[bird-1]<=724 && 258-bird_y[bird-1]<=1 && bird_y[bird-1]<=258&& hit!=8)
    {
        qDebug()<<"12\n";
        time_done_x=0;
        time_done_y=0;
        originx = bird_x[bird-1];
        originy = bird_y[bird-1];
        speed_x=current_speed_x/1.3f;
        speed_y=-1.0*(current_speed_y/1.5f);
        ui->bottom_2->setPixmap(QPixmap(":/pics/things_9_green.png"));
        hit=8;
        bounce8++;
    }
    //第9障礙
    if(724-bird_x[bird-1]<=0.1 && bird_x[bird-1]<=724 && bird_y[bird-1]>=219 && bird_y[bird-1]<=264 && hit!=9)
    {
        qDebug()<<"13\n";
        time_done_x=0;
        originx = bird_x[bird-1];
        speed_x=-1*(current_speed_x/1.3f);
        bounce4=0;
        bounce8=0;
        bounce12=0;
        hit=9;
    }
    //第10障礙
    if(bird_x[bird-1]>=724 && bird_x[bird-1]<=794 && 219-bird_y[bird-1]<=0.01 && bird_y[bird-1]<=219 )
    {
        qDebug()<<"14\n";
        time_done_x=0;
        time_done_y=0;
        originx = bird_x[bird-1];
        originy = bird_y[bird-1];
        //speed_x=current_speed_x/1.3f;
        speed_y=-1.0*(current_speed_y/1.1f);
        bounce4=0;
        bounce8=0;
        bounce12=0;
        hit=10;
    }
    //第11障礙
    if(bird_x[bird-1]-794<=0.1 && bird_x[bird-1]>=794 && bird_y[bird-1]>=219 && bird_y[bird-1]<=264 && hit!=11)
    {
        qDebug()<<"15\n";
        time_done_x=0;
        originx = bird_x[bird-1];
        speed_x=-1*(current_speed_x/1.3f);
        bounce4=0;
        bounce8=0;
        bounce12=0;
        hit=11;
    }
    if(bird_x[bird-1]>=486 &&  bird_y[bird-1]>=258 || bounce12==3)
    {
        qDebug()<<"16\n";
        ++bird;
        if(bird==2)ui->bird_1->setPixmap(QPixmap(":/pics/bird_yellow_ch.png"));
        if(bird==3)ui->bird_1->setPixmap(QPixmap(":/pics/bird_blue_ch.png"));
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
    //第12障礙
    if(bird_x[bird-1]>=794 && bird_x[bird-1]<=843 && 258-bird_y[bird-1]<=1 && bird_y[bird-1]<=258&& hit!=12)
    {
        qDebug()<<"17\n";
        time_done_x=0;
        time_done_y=0;
        originx = bird_x[bird-1];
        originy = bird_y[bird-1];
        speed_x=current_speed_x/1.3f;
        speed_y=-1.0*(current_speed_y/1.5f);
        ui->bottom_3->setPixmap(QPixmap(":/pics/things_9_green.png"));
        hit=12;
        bounce12++;
    }
    //第13障礙
    if(843-bird_x[bird-1]<=0.1 && bird_x[bird-1]<=843 && bird_y[bird-1]>=219 && bird_y[bird-1]<=264 && hit!=13)
    {
        qDebug()<<"18\n";
        time_done_x=0;
        originx = bird_x[bird-1];
        speed_x=-1*(current_speed_x/1.3f);
        bounce4=0;
        bounce8=0;
        bounce12=0;
        hit=13;
    }
    //第14障礙
    if(bird_x[bird-1]>=843 && bird_x[bird-1]<=915 && 219-bird_y[bird-1]<=0.01 && bird_y[bird-1]<=219 )
    {
        qDebug()<<"19\n";
        time_done_x=0;
        time_done_y=0;
        originx = bird_x[bird-1];
        originy = bird_y[bird-1];
        //speed_x=current_speed_x/1.3f;
        speed_y=-1.0*(current_speed_y/1.1f);
        bounce4=0;
        bounce8=0;
        bounce12=0;
        hit=14;
    }
}
