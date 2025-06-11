#ifndef MEMORY_H
#define MEMORY_H
#include"post.h"
class memory : public post
{
    post* original;
    string memotext;
    int flag;
public:
    memory();
    ~memory();
    post*& getoriginal();
    string& getmemotext();
    int& getflag();
};

#endif // MEMORY_H
