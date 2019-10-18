#include <iostream>
#include <ostream>


class IntList {
    private:
        int *Items;
        int numItems;
        int arraySize;


    public:
        IntList() {
            Items = new int;
            numItems = 0;
            arraySize = 10;
        }

        ~IntList() {
            delete Items;
        }

        void AddToEnd(int num) {
            if (numItems >= arraySize) {
                arraySize*=2;
            }

            *(Items+(numItems*sizeof(int))) = num;
            numItems++;
        }

        void Print() {
            std::cout << "List: "<< std::endl;
            for (int i = 0; i < numItems; i++) {
                int distance = i*(sizeof(int));
                int *outputLoc = Items+distance;
                //std::cout << "Distance: " << distance << std::endl;
                //std::cout << "Output Location: " << outputLoc << std::endl;
                std::cout << "\t" << *outputLoc << std::endl;
            }
        }


    
};

