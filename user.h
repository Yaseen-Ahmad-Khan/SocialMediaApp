#ifndef USER_H
#define USER_H
#include<QString>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class page;
class user
{
    int id;
    string name;
    user** friends;
    int f;
    page** liked;
    int l;

public:
    user();
    int& getid();
    string& getname();
    user**& getfriends();
    int& getnumberoffriends();
    page**& getlikedpages();
    int& getnumberoflikedpages();
    ~user();
};

#endif // USER_H
