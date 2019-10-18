//Any imports for the class
#include <iostream>

//The class name is reccomended (but doesn't have to be)
//The same as the file name
class TestWithHeader {
    //public members are typically first
    public:
        TestWithHeader(int start);      //Constructor
        void increment(int value);      //Adds value to counter
        void printValue();                 //returns value

    //private members are last
    private:
        int num;
};