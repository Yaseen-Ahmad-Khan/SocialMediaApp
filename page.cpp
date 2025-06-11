#include "page.h"
#include"post.h"
page::page()
{
    id=0;
    title="";
    posts=NULL;
    p=0;
    likes=0;
}
int& page:: Getid()
{
    return id;
}
string& page::gettitle()
{
    return title;
}
page::~page()
{
    if(posts)
    {
        for(int i=0;i<p;i++)
        {
            if(posts[i])
                delete posts[i];
        }
        delete[]posts;
        posts=NULL;
    }
}
user& page:: getowner()
{
    return owner;
}
post**& page:: getposts()
{
    return posts;
}
int& page:: getnumberofposts()
{
    return p;
}
int& page:: getnumberoflikes()
{
    return likes;
}
