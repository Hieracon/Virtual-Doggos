#ifndef CLASE_CAINI_H_INCLUDED
#define CLASE_CAINI_H_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class Caine{
public:
    string name;
    int hight;
    int weight;
    int age;
    string color;


    virtual void get_details(){
        cout << "This won't be called";
    }
    virtual void display(){
        cout << "This won't be called";
    }
};

class CaineCuPete:public Caine{
private:
    int nr_spots;

public:
    void spots();
    void get_details();
    void display();
};

class CaineFaraPete:public Caine{
public:
    void get_details();
    void display();
};

#endif // CLASE_CAINI_H_INCLUDED
