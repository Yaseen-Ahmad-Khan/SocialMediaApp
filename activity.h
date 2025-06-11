#ifndef ACTIVITY_H
#define ACTIVITY_H
#include<iostream>
#include<string>
using namespace std;
class activity
{
    int val;
    string text;
public:
    activity();
    int& getval();
    string& gettext();
};

#endif // ACTIVITY_H
