#include "user.h"
#include"page.h"
user::user()
{
    id=0;
    name="";
    friends=NULL;
    f=0;
    liked=NULL;
    l=0;
}
int& user::getnumberoffriends()
{
    return f;
}
user**& user::getfriends()
{
    return friends;
}
int& user::getnumberoflikedpages()
{
    return l;
}
page**& user::getlikedpages()
{
    return liked;
}
user::~user()
{
    if(friends)
    {
        for(int i=0;i<f;i++)
        {
            if(friends[i])
                delete friends[i];
        }
        delete[] friends;
        friends=NULL;
    }
    if(liked)
    {
        for(int i=0;i<l;i++)
        {
            if(liked[i])
                delete liked[i];
        }
        delete[]liked;
        liked=NULL;
    }
}
int& user::getid()
{
    return id;
}
string& user::getname()
{
    return name;
}
