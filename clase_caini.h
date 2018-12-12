#ifndef CLASE_CAINI_H_INCLUDED
#define CLASE_CAINI_H_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class Caine{
private:
    string name;
    int hight;
    int weight;
    int age;
    string color;

public:
    virtual void get_details();
    virtual void display();
};

class CaineCuPete:public Caine{
private:
    int nr_spots;

public:
    void spots();
};

class CaineFaraPete:public Caine{
public:
};

#endif // CLASE_CAINI_H_INCLUDED
