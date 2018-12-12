#include "clase_caini.h"

void Caine::get_details() {
    cout << "Name of the dog is: ";
    cin >> name;
    cout << "It's hight is: ";
    cin >> hight;
    cout << "It's weight in kg is: ";
    cin >> weight;
    cout << "It's age is: ";
    cin >> age;
    cout << "It's color is: ";
    cin >> color;
}

void Caine::display(){
    cout << "Dog's name is: " << name << endl;
    cout << "It's hight is: " << hight << endl;
    cout << "It's weight is: " <<weight << endl;
    cout << "It's age is: " << age << endl;
    cout << "It's color is: " << color << endl;
}

void CaineCuPete::spots(){
    cout << "Number of dog's spots is: ";
    cin >> nr_spots;
    cout << "It has " << nr_spots << " spots" << endl;
}


