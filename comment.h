#ifndef COMMENT_H
#define COMMENT_H
#include<string>
#include"user.h"
#include"page.h"
class page;
class comment
{
    user* writer;
    string text;
    page* pageposted;
public:
    comment();
    user*& getwriter();
    string& gettext();
    page*& getpageposted();
};

#endif // COMMENT_H
