#include "goongram.h"
#include "./ui_goongram.h"
#include<QPixmap>
#include<QMessageBox>
GOONGRAM::GOONGRAM(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GOONGRAM)
{
    ui->setupUi(this);
    QPixmap pic("");
    ui->piclable->setPixmap(pic.scaled(130,130,Qt::KeepAspectRatio));
    int currtime=QTime::currentTime().hour();
    if(currtime>=17)
    {
        mode=0;
    }
    else
    {
        mode=1;
    }
    QGraphicsDropShadowEffect*gloweffect1=NULL;
    QPropertyAnimation*animation1=NULL;
    QGraphicsDropShadowEffect*Homepage=NULL;
    QPropertyAnimation*Homepage_a=NULL;
    QGraphicsDropShadowEffect*gloweffect3=NULL;
    QPropertyAnimation*animation3=NULL;
    QGraphicsDropShadowEffect*gloweffect4=NULL;
    QPropertyAnimation*animation4=NULL;
    QGraphicsDropShadowEffect*gloweffect5=NULL;
    QPropertyAnimation*animation5=NULL;
    QGraphicsDropShadowEffect*gloweffect6=NULL;
    QPropertyAnimation*animation6=NULL;
    QGraphicsDropShadowEffect*gloweffect7=NULL;
    QPropertyAnimation*animation7=NULL;
    QGraphicsDropShadowEffect*gloweffect8=NULL;
    QPropertyAnimation*animation8=NULL;
    QGraphicsDropShadowEffect*gloweffect9=NULL;
    QPropertyAnimation*animation9=NULL;
    QGraphicsDropShadowEffect*gloweffect10=NULL;
    QPropertyAnimation*animation10=NULL;
    QGraphicsDropShadowEffect*gloweffect11=NULL;
    QPropertyAnimation*animation11=NULL;
    QGraphicsDropShadowEffect*gloweffect12=NULL;
    QPropertyAnimation*animation12=NULL;
    styleadder(Homepage,Homepage_a,ui->label_3);
    styleadder(gloweffect1,animation1,ui->label_2);
    styleadder(gloweffect3,animation3,ui->label_4);
    styleadder(gloweffect4,animation4,ui->label_9);
    styleadder(gloweffect5,animation5,ui->label_5);
    styleadder(gloweffect6,animation6,ui->label_6);
    styleadder(gloweffect7,animation7,ui->label_7);
    styleadder(gloweffect8,animation8,ui->label_8);
    styleadder(gloweffect9,animation9,ui->label_11);
    styleadder(gloweffect10,animation10,ui->label);
    styleadder(gloweffect11,animation11,ui->label_10);
    styleadder(gloweffect12,animation12,ui->label_12);
    ui->pushButton_2->setStyleSheet("background-color:yellow;color:black");
    ui->lineEdit->setStyleSheet("background-color:white");
    ui->lineEdit_5->setStyleSheet("background-color:white");
    ui->lineEdit_2->setStyleSheet("background-color:white");
    ui->lineEdit_3->setStyleSheet("background-color:white");
    ui->pushButton->setStyleSheet("background-color: black;color:white");
    ui->pushButton_9->setStyleSheet("background-color: black;color:white");
    ui->pushButton_5->setStyleSheet("background-color: black;color:white");
    ui->pushButton_4->setStyleSheet("background-color: black;color:white");
    ui->pushButton_7->setStyleSheet("background-color: black;color:white");
    ui->pushButton_8->setStyleSheet("background-color: black;color:white");
    ui->pushButton_3->setStyleSheet("background-color: black;color:white");
    ui->pushButton_6->setStyleSheet("background-color: black;color:white");
    ui->pushButton_10->setStyleSheet("background-color: black;color:white");
    if(mode==0)
    {
        ui->tabWidget->setStyleSheet(R"(
    QTabWidget::pane {
        border: none;
        border-image: url(:/res/build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/logo/sky.png)
                      0 0 0 0
                      stretch stretch;
    }
    QTabWidget QWidget {
        background: transparent;
    }
)");
        ui->textBrowser_2->setStyleSheet("color:white");
        ui->textBrowser->setStyleSheet("color:white");
        ui->textBrowser_3->setStyleSheet("color:white");
        ui->textBrowser_4->setStyleSheet("color:white");
        ui->textBrowser_5->setStyleSheet("color:white");
        ui->textBrowser_6->setStyleSheet("color:white");
        ui->textBrowser_7->setStyleSheet("color:white");
        ui->textEdit->setStyleSheet("color:white");
    }
    else if(mode==1)
    {
        ui->tabWidget->setStyleSheet(R"(
    QTabWidget::pane {
        border: none;
        border-image: url(:/res/build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/logo/skyday.png)
                      0 0 0 0
                      stretch stretch;
    }
    QTabWidget QWidget {
        background: transparent;
    }
)");
        ui->label_2->setStyleSheet("color:black");
        ui->label->setStyleSheet("color:black");
        ui->label_3->setStyleSheet("color:black");
        ui->label_4->setStyleSheet("color:black");
        ui->label_5->setStyleSheet("color:black");
        ui->label_6->setStyleSheet("color:black");
        ui->label_7->setStyleSheet("color:black");
        ui->label_8->setStyleSheet("color:black");
        ui->label_9->setStyleSheet("color:black");
        ui->label_10->setStyleSheet("color:black");
        ui->label_11->setStyleSheet("color:black");
        ui->label_12->setStyleSheet("color:black");
        ui->textBrowser_2->setStyleSheet("color:black");
        ui->textBrowser->setStyleSheet("color:black");
        ui->textBrowser_3->setStyleSheet("color:black");
        ui->textBrowser_4->setStyleSheet("color:black");
        ui->textBrowser_5->setStyleSheet("color:black");
        ui->textBrowser_6->setStyleSheet("color:black");
        ui->textBrowser_7->setStyleSheet("color:black");
        ui->textEdit->setStyleSheet("color:black");
    }
    loadmemo();
    memo=NULL;
    available_memories=0;
}

GOONGRAM::~GOONGRAM()
{
    if(users)
    {
        for(int i=0;i<numberofusers;i++)
        {
            if(users[i])
                delete users[i];
        }
        delete[]users;
    }
    if(pages)
    {
        for(int i=0;i<numberofpages;i++)
        {
            if(pages[i])
                delete pages[i];
        }
        delete[]pages;
    }
    if(posts)
    {
        for(int i=0;i<numberofposts;i++)
        {
            if(posts[i])
                delete posts[i];
        }
        delete[]posts;
    }
    if(memo)
    {
        for(int i=0;i<available_memories;i++)
        {
            if(memo[i])
                delete memo[i];
        }
        delete[]memo;
    }
    delete ui;
}
void GOONGRAM::loadmemo()
{
    ifstream in("text.txt");
    string s;
    in>>numberofusers;
    getline(in,s);
    users=new user*[numberofusers];
    for(int i=0;i<numberofusers;i++)
    {
        users[i]=new user;
        getline(in,users[i]->getname());
        users[i]->getid()=i+1;
    }
    in>>numberofpages;
    getline(in,s);
    pages=new page*[numberofpages];
    for(int i=0;i<numberofpages;i++)
    {
        pages[i]=new page;
        pages[i]->Getid()=i+1;
        getline(in,pages[i]->gettitle());
    }
    int a;
    for(int i=0;i<numberofusers;i++)
    {
        in>>a;
        int j=0;
        in>>users[a-1]->getnumberoffriends();
        if(users[a-1]->getnumberoffriends()!=0)
        {
            users[a-1]->getfriends()=new user*[users[a-1]->getnumberoffriends()];
        }
        while(true)
        {
            int b;
            in>>b;
            if(b==-1)
            {
                break;
            }
            users[a-1]->getfriends()[j]=users[b-1];
            j++;
        }
        in>>users[a-1]->getnumberoflikedpages();
        if(users[a-1]->getnumberoflikedpages()!=0)
        {
            users[a-1]->getlikedpages()=new page*[users[a-1]->getnumberoflikedpages()];
        }
        j=0;
        while(true)
        {
            int b;
            in>>b;
            if(b==-1)
            {
                break;
            }
            users[a-1]->getlikedpages()[j]=pages[b-1];
            j++;
        }
    }
    in>>numberofposts;
    posts=new post*[numberofposts];
    for(int i=0;i<numberofposts;i++)
    {
        int type;
        in>>type;
        string text;
        in>>text;
        posts[i]=new post;
        in>>posts[i]->getdate().getday();
        in>>posts[i]->getdate().getmonth();
        in>>posts[i]->getdate().getyear();
        getline(in,text);
        getline(in,posts[i]->gettext());
        if(type==2)
        {
            in>>posts[i]->getact().getval();
            getline(in,text);
            getline(in,posts[i]->getact().gettext());
        }
        in>>posts[i]->getpageid();
        in>>posts[i]->getuserid();
        int j=0;
        while(true)
        {
            int b;
            in>>b;
            if(b==-1)
            {
                break;
            }
            posts[i]->getlikedusers()[j]=users[b-1];
            j++;
        }
        posts[i]->getlikes()=j;
        posts[i]->getid()=i+1;
        getline(in,text);
    }
    int com;
    in>>com;
    for(int i=0;i<com;i++)
    {
        int post_id;
        int poster_id;
        int flag;
        string text;
        in>>post_id;
        in>>poster_id;
        in>>flag;
        getline(in,text);
        getline(in,text);
        posts[post_id-1]->getcomment()[posts[post_id-1]->getnumberofcomments()]=new comment;
        posts[post_id-1]->getcomment()[posts[post_id-1]->getnumberofcomments()]->gettext()=text;
        if(flag==0)
        {
            posts[post_id-1]->getcomment()[posts[post_id-1]->getnumberofcomments()]->getwriter()=users[poster_id-1];
        }
        else
        {
            posts[post_id-1]->getcomment()[posts[post_id-1]->getnumberofcomments()]->getpageposted()=pages[poster_id-1];
        }
        posts[post_id-1]->getnumberofcomments()++;
    }
    in.close();
}
void GOONGRAM::on_pushButton_7_clicked()
{
    int a=ui->lineEdit->text().toInt();

    if(a>0&&a<=numberofusers)
    {
        curruser=a-1;
        currdate.getday()=QInputDialog::getInt(this,"DATE","ENTER DAY: ");
        currdate.getmonth()=QInputDialog::getInt(this,"DATE","ENTER MONTH: ");
        currdate.getyear()=QInputDialog::getInt(this,"DATE","ENTER YEAR: ");
        QMessageBox::information(this,"USER SET","WELCOME BACK "+QString::fromStdString(users[curruser]->getname()));
        QMessageBox::information(this,"USER SET SUCCESSFULLY","now you can switch between tabs and navigate");
        ui->textBrowser->setText(" ");
        homepage();
        friendlist();
        likedpages();
        seememories();
        profile();
    }
    else
    {
        QMessageBox::critical(this,"Invalid","TS PMO </3\nEnter bw 1-20");
    }
}
void GOONGRAM::homepage()
{
    ui->textBrowser->append("CURRENT USER: "+QString::fromStdString(users[curruser]->getname()));
    ui->textBrowser->append("CURRENT DATE: "+QString::number(currdate.getday())+" / "+QString::number(currdate.getmonth())+" / "+QString::number(currdate.getyear()));
    for(int i=0;i<users[curruser]->getnumberoffriends();i++)
    {
        for(int j=0;j<numberofposts;j++)
        {
            if(posts[j]->getuserid()==users[curruser]->getfriends()[i]->getid()&&posts[j]->truepost(currdate)==true)
            {
                ui->textBrowser->append("\n\n");
                ui->textBrowser->append("POST ID: "+QString::number(posts[j]->getid()));
                ui->textBrowser->append("Name: "+QString::fromStdString(users[curruser]->getfriends()[i]->getname()));
                posts[j]->displaypost(ui->textBrowser);
            }
        }
    }
    for(int i=0;i<users[curruser]->getnumberoflikedpages();i++)
    {
        for(int j=0;j<numberofposts;j++)
        {
            if(posts[j]->getpageid()==users[curruser]->getlikedpages()[i]->Getid()&&posts[j]->truepost(currdate)==true)
            {
                ui->textBrowser->append("\n\n");
                ui->textBrowser->append("POST ID: "+QString::number(posts[j]->getid()));
                ui->textBrowser->append("PAGE NAME: "+QString::fromStdString(users[curruser]->getlikedpages()[i]->gettitle()));
                posts[j]->displaypost(ui->textBrowser);
            }
        }
    }
    for(int i=0;i<numberofposts;i++)
    {
        if(posts[i]->getboost()==1)
        {
            ui->textBrowser->append("\n\n~~~SPONSORED POST~~~\n");
            ui->textBrowser->append("\n");
            ui->textBrowser->append("POST ID: "+QString::number(posts[i]->getid()));
            ui->textBrowser->append("Name: "+QString::fromStdString(users[posts[i]->getuserid()-1]->getname()));
            posts[i]->displaypost(ui->textBrowser);
        }
    }
}
void GOONGRAM::addlike()
{
    int val=QInputDialog::getInt(this,"ENTER THE POST ID TO LIKE: ","ENTER ID: ");
    if(val>0&&val<=numberofposts)
    {
        if(posts[val-1]->getlikes()<10)
        {
            int flag=0;
            for(int i=0;i<posts[val-1]->getlikes();i++)
            {
                if(posts[val-1]->getlikedusers()[i]->getid()==curruser+1)
                {
                    QMessageBox::critical(this,"INVALID","YOU'VE ALREADY LIKED THIS POST ");
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                posts[val-1]->getlikedusers()[posts[val-1]->getlikes()]=users[curruser];
                posts[val-1]->getlikes()++;
                ui->textBrowser->setText(" ");
                homepage();
            }
        }
        else
        {
            QMessageBox::critical(this,"INVALID","POSTS LIKES ALREADY 10 ");
        }
    }
    else
    {
        QMessageBox::critical(this,"INVALID",QString("ENTER BETWEEN 1 - %1 ").arg(numberofposts));
    }
}
void GOONGRAM::addcomment()
{
    int val=QInputDialog::getInt(this,"ENTER THE POST ID TO COMMENT ON : ","ENTER ID: ");
    if(val>0&&val<=numberofposts)
    {
        if(posts[val-1]->getnumberofcomments()<10)
        {
            QString abc=QInputDialog::getText(this,"COMMENT","ENTER THE COMMENT: ");
            string text=abc.toStdString();
            posts[val-1]->getcomment()[posts[val-1]->getnumberofcomments()]=new comment;
            posts[val-1]->getcomment()[posts[val-1]->getnumberofcomments()]->getwriter()=users[curruser];
            posts[val-1]->getcomment()[posts[val-1]->getnumberofcomments()]->gettext()=text;
            posts[val-1]->getnumberofcomments()++;
            ui->textBrowser->setText(" ");
            homepage();
        }
        else
        {
            QMessageBox::critical(this,"INVALID","POSTS COMMENTS ARE ALREADY 10 ");
        }
    }
    else
    {
        QMessageBox::critical(this,"INVALID",QString("ENTER BETWEEN 1 - %1 ").arg(numberofposts));
    }
}
void GOONGRAM::viewpost()
{
    ui->textBrowser_2->setText(" ");
    int val=ui->lineEdit_2->text().toInt();
    if(val>0&&val<=numberofposts)
    {
        ui->textBrowser_2->append("POST ID: "+QString::number(posts[val-1]->getid()));
        if(posts[val-1]->getuserid())
            ui->textBrowser_2->append("NAME: "+QString::fromStdString(users[posts[val-1]->getuserid()-1]->getname()));
        if(posts[val-1]->getpageid())
            ui->textBrowser_2->append("PAGE NAME: "+QString::fromStdString(pages[posts[val-1]->getpageid()-1]->gettitle()));
        posts[val-1]->displaypost(ui->textBrowser_2);
    }
    else
    {
        QMessageBox::critical(this,"INVALID",QString("ENTER BETWEEN 1 - %1").arg(numberofposts));
    }
}
void GOONGRAM::viewlikes()
{
    ui->textBrowser_2->setText(" ");
    int val=ui->lineEdit_2->text().toInt();
    if(val>0&&val<=numberofposts)
    {
        ui->textBrowser_2->append("POST LIKED BY:- ");
        for(int i=0;i<posts[val-1]->getlikes();i++)
        {
            if(posts[val-1]->getlikedusers()[i]->getid()==2&&val==5)
                ui->textBrowser_2->append(QString::fromStdString(pages[posts[val-1]->getlikedusers()[i]->getid()-2]->gettitle()));
            else
                ui->textBrowser_2->append(QString::fromStdString(posts[val-1]->getlikedusers()[i]->getname()));
        }
    }
    else
    {
        QMessageBox::critical(this,"INVALID",QString("ENTER BETWEEN 1 - %1").arg(numberofposts));
    }
}
void GOONGRAM::viewpage()
{
    ui->textBrowser_5->setText(" ");
    int val=ui->lineEdit_5->text().toInt();
    if(val>0&&val<=numberofpages)
    {
        int flag=0;
        for(int i=0;i<numberofposts;i++)
        {
            if(posts[i]->getpageid()==pages[val-1]->Getid())
            {
                flag=1;
                ui->textBrowser_5->append(" ");
                ui->textBrowser_5->append("POST ID: "+QString::number(posts[i]->getid()));
                ui->textBrowser_5->append("PAGE TITLE: "+QString::fromStdString(pages[val-1]->gettitle()));
                posts[i]->displaypost(ui->textBrowser_5);
            }
        }
        if(flag==0)
        {
            ui->textBrowser_5->setText("NO POSTS YET BY: "+QString::fromStdString(pages[val-1]->gettitle()));
        }
    }
    else
    {
        QMessageBox::critical(this,"INVALID",QString("ENTER BETWEEN 1 - %1").arg(numberofpages));
    }
}
void GOONGRAM::on_pushButton_4_clicked()
{
    if(curruser!=-1)
        addlike();
    else
        QMessageBox::critical(this,"INVALID","SET USER FIRST");
}


void GOONGRAM::on_pushButton_8_clicked()
{
    if(curruser!=-1)
        addcomment();
    else
        QMessageBox::critical(this,"INVALID","SET USER FIRST");
}


void GOONGRAM::on_pushButton_clicked()
{
    viewpost();
}


void GOONGRAM::on_pushButton_3_clicked()
{
    viewlikes();
}


void GOONGRAM::on_pushButton_6_clicked()
{
    viewpage();
}

void GOONGRAM::friendlist()
{
    ui->textBrowser_3->setText(" ");
    for(int i=0;i<users[curruser]->getnumberoffriends();i++)
    {
        ui->textBrowser_3->append(QString::fromStdString(users[curruser]->getfriends()[i]->getname()));
    }
}
void GOONGRAM::likedpages()
{
    ui->textBrowser_4->setText(" ");
    for(int i=0;i<users[curruser]->getnumberoflikedpages();i++)
    {
        ui->textBrowser_4->append(QString::fromStdString(users[curruser]->getlikedpages()[i]->gettitle()));
    }
}

void GOONGRAM::on_pushButton_2_clicked()
{
    if(mode==0)
    {
        ui->tabWidget->setStyleSheet(R"(
    QTabWidget::pane {
        border: none;
        border-image: url(:/res/build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/logo/skyday.png)
                      0 0 0 0
                      stretch stretch;
    }
    QTabWidget QWidget {
        background: transparent;
    }
)");
        mode=1;
        ui->label_2->setStyleSheet("color:black");
        ui->label->setStyleSheet("color:black");
        ui->label_3->setStyleSheet("color:black");
        ui->label_4->setStyleSheet("color:black");
        ui->label_5->setStyleSheet("color:black");
        ui->label_6->setStyleSheet("color:black");
        ui->label_7->setStyleSheet("color:black");
        ui->label_8->setStyleSheet("color:black");
        ui->label_9->setStyleSheet("color:black");
        ui->label_10->setStyleSheet("color:black");
        ui->label_11->setStyleSheet("color:black");
        ui->label_12->setStyleSheet("color:black");
        ui->textBrowser_2->setStyleSheet("color:black");
        ui->textBrowser->setStyleSheet("color:black");
        ui->textBrowser_3->setStyleSheet("color:black");
        ui->textBrowser_4->setStyleSheet("color:black");
        ui->textBrowser_5->setStyleSheet("color:black");
        ui->textBrowser_6->setStyleSheet("color:black");
        ui->textBrowser_7->setStyleSheet("color:black");
        ui->textEdit->setStyleSheet("color:black");
    }
    else if(mode==1)
    {
        ui->tabWidget->setStyleSheet(R"(
    QTabWidget::pane {
        border: none;
        border-image: url(:/res/build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/logo/sky.png)
                      0 0 0 0
                      stretch stretch;
    }
    QTabWidget QWidget {
        background: transparent;
    }
)");
        mode=0;
        ui->label_2->setStyleSheet("color:white");
        ui->label->setStyleSheet("color:white");
        ui->label_3->setStyleSheet("color:white");
        ui->label_4->setStyleSheet("color:white");
        ui->label_5->setStyleSheet("color:white");
        ui->label_6->setStyleSheet("color:white");
        ui->label_7->setStyleSheet("color:white");
        ui->label_8->setStyleSheet("color:white");
        ui->label_9->setStyleSheet("color:white");
        ui->label_10->setStyleSheet("color:white");
        ui->label_11->setStyleSheet("color:white");
        ui->label_12->setStyleSheet("color:white");
        ui->textBrowser_2->setStyleSheet("color:white");
        ui->textBrowser->setStyleSheet("color:white");
        ui->textBrowser_3->setStyleSheet("color:white");
        ui->textBrowser_4->setStyleSheet("color:white");
        ui->textBrowser_5->setStyleSheet("color:white");
        ui->textBrowser_6->setStyleSheet("color:white");
        ui->textBrowser_7->setStyleSheet("color:white");
        ui->textEdit->setStyleSheet("color:white");
    }
}
void GOONGRAM::profile()
{
    ui->textBrowser_6->setText(" ");
    for(int i=0;i<available_memories;i++)
    {
        if(memo[i]->getflag()==1)
        {
            ui->textBrowser_6->append(" ");
            ui->textBrowser_6->append("~~~ "+QString::fromStdString(users[curruser]->getname())+" shared a memory ~~~\t"+QString::number(currdate.getday())+" / "+QString::number(currdate.getmonth())+" / "+QString::number(currdate.getyear()));
            ui->textBrowser_6->append("\""+QString::fromStdString(memo[i]->getmemotext())+"...\"");
            ui->textBrowser_6->append("         ("+QString::number((currdate.getyear()-memo[i]->getoriginal()->getdate().getyear()))+" years ago)");
            ui->textBrowser_6->append("POST ID: "+QString::number(memo[i]->getoriginal()->getid()));
            ui->textBrowser_6->append("POST ID: "+QString::fromStdString(users[curruser]->getname()));
            memo[i]->getoriginal()->displaypost(ui->textBrowser_6);
        }
    }
    for(int i=0;i<numberofposts;i++)
    {
        if(posts[i]->getuserid()==curruser+1)
        {
            ui->textBrowser_6->append(" ");
            ui->textBrowser_6->append("POST ID: "+QString::number(posts[i]->getid()));
            ui->textBrowser_6->append("POST ID: "+QString::fromStdString(users[curruser]->getname()));
            posts[i]->displaypost(ui->textBrowser_6);
        }
    }
}

void GOONGRAM::on_pushButton_9_clicked()
{
    if(curruser!=-1)
        postmemory();
    else
        QMessageBox::critical(this,"INVALID","SET USER FIRST");
}
void GOONGRAM::seememories()
{
    ui->textBrowser_7->setText(" ");
    ui->textBrowser_7->append("~~Goongram allows you to look back in time\n and relive the moment~~");
    int j=0;
    for(int i=0;i<numberofposts;i++)
    {
        if(posts[i]->getuserid()==curruser+1&&posts[i]->getdate().getday()==currdate.getday()&&posts[i]->getdate().getmonth()==currdate.getmonth())
        {
            ui->textBrowser_7->append(" ");
            ui->textBrowser_7->append(QString("On This Day..\n ( %1 Years Ago )").arg(currdate.getyear()-posts[i]->getdate().getyear()));
            ui->textBrowser_7->append(" ");
            ui->textBrowser_7->append("POST ID: "+QString::number(posts[i]->getid()));
            ui->textBrowser_7->append("POST ID: "+QString::fromStdString(users[curruser]->getname()));
            posts[i]->displaypost(ui->textBrowser_7);
            j++;
        }
    }
    if(j>0)
    {
        memo=new memory*[j];
        available_memories=j;
        j=0;
        for(int i=0;i<numberofposts;i++)
        {
            if(posts[i]->getuserid()==curruser+1&&posts[i]->getdate().getday()==currdate.getday()&&posts[i]->getdate().getmonth()==currdate.getmonth())
            {
                memo[j]=new memory;
                memo[j]->getoriginal()=posts[i];
                j++;
            }
        }
    }
}
void GOONGRAM::postmemory()
{
    int memoryflag=0;
    int val=ui->lineEdit_3->text().toInt();
    for(int i=0;i<available_memories;i++)
    {
        if(val==memo[i]->getoriginal()->getid())
        {
            memoryflag=1;
        }
    }
    if(memoryflag==1)
    {
        QString text=QInputDialog::getText(this,"MEMORY","ENTER THE TEXT: ");
        string memomessage=text.toStdString();
        for(int i=0;i<available_memories;i++)
        {
            if(memo[i]->getoriginal()->getid()==val)
            {
                if(memo[i]->getflag()==0)
                {
                    memo[i]->getflag()=1;
                    memo[i]->getmemotext()=memomessage;
                    QMessageBox::information(this,"UPLOADED","MEMORY UPLOADED SUCCESSFULLY IN THE TIMELINE ");
                }
                else
                {
                    QMessageBox::critical(this,"ERROR","YOU'VE ALREADY UPLOADED THIS MEMORY ");
                }
            }
        }
        profile();
    }
    else
    {
        QMessageBox::critical(this,"ERROR","ENTER THE POST ID WHICH IS APPEARING IN THE MEMORIES SECTION ;( ");
    }
}

void GOONGRAM::on_pushButton_5_clicked()
{
    if(curruser!=-1)
    {
        QString issue=ui->textEdit->toPlainText();
        string Issue=issue.toStdString();
        if(Issue=="")
        {
            Issue="Sab set hai :)";
        }
        ofstream out("bugs.txt",ios::app);
        out<<users[curruser]->getname()<<"\t\t"<<Issue<<"\n";
        QMessageBox::information(this,"Successfull","BUG SUBMITTED SUCCESSFULLY :)");
    }
    else
    {
        QMessageBox::critical(this,"INVALID","SET USER FIRST");
    }
}
void GOONGRAM::styleadder(QGraphicsDropShadowEffect* gloweffect,QPropertyAnimation* animation,QLabel*label)
{
    gloweffect=new QGraphicsDropShadowEffect(this);
    gloweffect->setColor(Qt::cyan);
    gloweffect->setOffset(0);
    gloweffect->setBlurRadius(20);
    label->setStyleSheet("background-color:transparent;color:white");
    label->setGraphicsEffect(gloweffect);
    animation=new QPropertyAnimation(gloweffect,"blurRadius");
    animation->setStartValue(10);
    animation->setEndValue(90);
    animation->setLoopCount(-1);
    animation->setDuration(2000);
    animation->setEasingCurve(QEasingCurve::InQuad);
    animation->start();
}

void GOONGRAM::on_pushButton_10_clicked()
{
    if(curruser!=-1)
    {
        int val=0;
        val=QInputDialog::getInt(this,"BOOOOOOST!!!","Enter POST_ID of one of your post: ");
        if(val==0)
        {
            QMessageBox::critical(this,"","You Didn't Enter Anything :( ");
            return;
        }
        if(posts[val-1]->getuserid()==curruser+1)
        {
            if(posts[val-1]->getboost()==0)
            {
                posts[val-1]->getboost()=1;
                ui->textBrowser->setText(" ");
                homepage();
                QMessageBox::information(this,"Success","post Boosted Successfully :)");
            }
            else
            {
                QMessageBox::critical(this,"INVALID","YOU'VE ALREADY BOOSTED THIS POST");
            }
        }
        else
        {
            QMessageBox::critical(this,"INVALID","THIS IS NOT YOUR POST");
        }
    }
    else
    {
        QMessageBox::critical(this,"INVALID","SET USER FIRST!");
    }
}
void GOONGRAM:: on_actionLog_Out_triggered()
{
    if(curruser==-1)
    {
        QMessageBox::critical(this,"Invalid","You haven't even logged in yet\nLil bro");
    }
    else
    {
        curruser=-1;
        ui->textBrowser->setText(" ");
        ui->textBrowser_2->setText(" ");
        ui->textBrowser_3->setText(" ");
        ui->textBrowser_4->setText(" ");
        ui->textBrowser_5->setText(" ");
        ui->textBrowser_6->setText(" ");
        ui->textBrowser_7->setText(" ");
        ui->textEdit->setText(" ");
        QMessageBox::information(this,"Log out","Logged out successfully");
    }
}
