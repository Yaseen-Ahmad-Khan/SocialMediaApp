#include "memory.h"

memory::memory()
{
    original=NULL;
    memotext="";
    flag=0;
}
memory::~memory()
{
    if(original)
    {
        delete original;
        original=NULL;
    }
}
post*& memory::getoriginal()
{
    return original;
}
string& memory::getmemotext()
{
    return memotext;
}
int& memory::getflag()
{
    return flag;
}
