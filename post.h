#ifndef POST_H
#define POST_H
#include<QString>
#include"user.h"
#include"date.h"
#include"activity.h"
#include<QTextBrowser>
class GOONGRAM;
class comment;
class post
{
    int id;
    string text;
    int l;
    user** like;
    int userid;
    int pageid;
    date dates;
    activity act;
    comment** com;
    int boost;
    int c;
public:
    post();
    int& getuserid();
    int& getpageid();
    int& getid();
    string& gettext();
    int& getlikes();
    user**& getlikedusers();
    date& getdate();
    activity& getact();
    comment**& getcomment();
    int& getnumberofcomments();
    void displaypost(QTextBrowser*);
    bool truepost(date);
    int& getboost();
    ~post();
};
#endif // POST_H
