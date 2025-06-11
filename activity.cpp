#include "activity.h"

activity::activity()
{
    val=0;
    text="";
}
int& activity::getval()
{
    return val;
}
string& activity::gettext()
{
    return text;
}
