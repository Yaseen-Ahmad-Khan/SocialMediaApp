#include "comment.h"

comment::comment()
{
    writer=NULL;
    pageposted=NULL;
    text="";
}
string& comment::gettext()
{
    return text;
}
page*& comment::getpageposted()
{
    return pageposted;
}
user*& comment::getwriter()
{
    return writer;
}
