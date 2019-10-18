#include <iostream>
#include <string>

void printValues(mytestunion t);

//Something that is either one type or another (only one at a time)
//This can allow for 'dynamic' arrays
//Don't allow strings!!! :(
union mytestunion {
    float weight;
    int num;
};

int main() {

    mytestunion test;
    test.weight = 152.8;
    printValues(test);

    test.num = 1545352515;
    printValues(test);


    test.weight = 93242.912846;
    printValues(test);

}

void printValues(mytestunion t) {
    std::cout << "Weight: " << t.weight << " - " << &t.weight << std::endl;
    std::cout << "Num: " << t.num << " - " << &t.num << std::endl;
    std::cout << "Loca: " << &t << std::endl << std::endl;
}

