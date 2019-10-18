#include <iostream>
using namespace std;

//Small fixed set of values
enum Color {
    red, blue, yellow
};

//Something that is either one type or another (only one at a time)
//This can allow for 'dynamic' arrays
union D {
    double weight;
    int age;
};

//Only has variables for something. Structure
struct Address {
    string city;
    int zip;
};

struct Person {
    short age;
    float weight;
    Address addr;
};



int main() {

    //Can also add short, long signed, or unsigned to each
    short a1;
    int a;
    char b;
    bool c;
    float d1;
    const double d = 3.14159;

    //Uses the enum 'Color'
    Color col = red;


    D info;
    info.weight = 150.4;
    info.age = 19;
    cout << "Union Data: " << info.weight;
    cout << "Union Data: " << info.age;


    //Uses the struct 'Person'
    Person me;
    me.age = 19;
    me.weight = 154.2;
    me.addr.zip = 11779;
    me.addr.city = "Ronkonkoma";

    //Enum
    //test.num = 2.132;

    //arrays (no .length, so send the length with an array)
    char str[3];
    int map[5][5];

    //Pointers (created with *, and takes the address with &)
    //Could also say int *pointer = new int;
    int *pointerA = &a;

    delete pointerA;
}


