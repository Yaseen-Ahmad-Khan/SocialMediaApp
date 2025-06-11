#include "post.h"
#include"comment.h"
post::post()
{
    id=0;
    text="";
    l=0;
    like=new user*[10]{0};
    com=new comment*[10]{0};
    c=0;
    pageid=0;
    userid=0;
    boost=0;
}
int& post::getuserid()
{
    return userid;
}
int& post::getpageid()
{
    return pageid;
}
int& post::getboost()
{
    return boost;
}
post::~post()
{
    if(like)
    {
        for(int i=0;i<l;i++)
        {
            if(like[i])
                delete like[i];
        }
        delete[]like;
        like=NULL;
    }
    if(com)
    {
        for(int i=0;i<c;i++)
        {
            if(com[i])
                delete com[i];
        }
        delete[]com;
        com=NULL;
    }
}
int& post:: getid()
{
    return id;
}
string& post:: gettext()
{
    return text;
}
int&  post::getlikes()
{
    return l;
}
user**&  post::getlikedusers()
{
    return like;
}
date&  post::getdate()
{
    return dates;
}
activity&  post::getact()
{
    return act;
}
comment**&  post::getcomment()
{
    return com;
}
int&  post::getnumberofcomments()
{
    return c;
}
void post::displaypost(QTextBrowser* browser)
{
    switch(act.getval())
    {
    case 1:
        browser->append(" is feeling "+QString::fromStdString(act.gettext()));
        break;
    case 2:
        browser->append(" is thinking about "+QString::fromStdString(act.gettext()));
        break;
    case 3:
        browser->append(" is making "+QString::fromStdString(act.gettext()));
        break;
    case 4:
        browser->append(" is celebrating "+QString::fromStdString(act.gettext()));
        break;
    }
    browser->append("\" "+QString::fromStdString(text)+" \""+"      "+QString::number(dates.getday())+" / "+QString::number(dates.getmonth())+" / "+QString::number(dates.getyear()));
    if(c>0)
    {
        browser->append(" ");
        browser->append(" ");
    }
    for(int i=0;i<c;i++)
    {
        if(com[i]->getwriter())
            browser->append("   "+(QString::fromStdString(com[i]->getwriter()->getname())+((" COMMENTED: ")+(QString::fromStdString(com[i]->gettext())))));
        if(com[i]->getpageposted())
            browser->append("   "+(QString::fromStdString(com[i]->getpageposted()->gettitle())+((" COMMENTED: ")+(QString::fromStdString(com[i]->gettext())))));
    }
}
bool post::truepost(date rhs)
{
    if(dates.truedate(rhs))
    {
        return true;
    }
    else
    {
        return false;
    }
}
