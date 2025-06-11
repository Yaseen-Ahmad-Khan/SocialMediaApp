#ifndef PAGE_H
#define PAGE_H
#include<string>
#include"user.h"
class post;
class page
{
    int id;
    string title;
    user owner;
    post** posts;
    int p;
    int likes;
public:
    page();
    int& Getid();
    string& gettitle();
    user& getowner();
    post**& getposts();
    int& getnumberofposts();
    int& getnumberoflikes();
    ~page();
};

#endif // PAGE_H
