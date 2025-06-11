#ifndef GOONGRAM_H
#define GOONGRAM_H
#include"date.h"
#include"user.h"
#include"post.h"
#include"page.h"
#include"activity.h"
#include"memory.h"
#include"comment.h"
#include <QMainWindow>
#include<QFile>
#include<QTextStream>
#include<QInputDialog>
#include<QGraphicsDropShadowEffect>
#include<QPropertyAnimation>
#include<QLabel>
#include<QTime>
QT_BEGIN_NAMESPACE
namespace Ui {
class GOONGRAM;
}
QT_END_NAMESPACE

class GOONGRAM : public QMainWindow
{
    Q_OBJECT

public:
    GOONGRAM(QWidget *parent = nullptr);
    ~GOONGRAM();
    void loadmemo();
    void homepage();
    void addlike();
    void addcomment();
    void viewpost();
    void viewlikes();
    void viewpage();
    void friendlist();
    void likedpages();
    void profile();
    void seememories();
    void postmemory();
    void styleadder(QGraphicsDropShadowEffect*,QPropertyAnimation*,QLabel*);
private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_10_clicked();
    void on_actionLog_Out_triggered();

private:
    Ui::GOONGRAM *ui;
    user** users;
    post** posts;
    page** pages;
    memory** memo;
    int curruser=-1;
    date currdate;
    int available_memories;
    int numberofusers,numberofposts,numberofpages;
    int mode;
};
#endif // GOONGRAM_H
