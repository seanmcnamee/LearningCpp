#include <iostream>

using namespace std;


//Puts each so that mathmatically adding a L and R results in 0


class Shoe {
    private:
        int size;
        enum ShoeTypes {
            L=-1,
            PAIR,
            R,
            BAD
        }type;
        
        ShoeTypes charToShoes(char c) {
            int iC = c;
            if (iC == 76) {
                //ShoeTypes val = ShoeTypes::L;
                return ShoeTypes::L;
            }   else if (iC == 82) {
                return ShoeTypes::R;
            }   else {
                return ShoeTypes::BAD;
            }
        }

    
    public:
        Shoe() {
            size = -1;
            type = ShoeTypes::BAD;
        }
        Shoe(int s, char t) {
            size = s;
            type = charToShoes(t);
        }
        
        bool isPair(Shoe other) {
            return size==other.size && type+other.type==ShoeTypes::PAIR;
        }
        
        bool isBad() {
            return type==ShoeTypes::BAD;
        }
};

int ShoePairs(int numOfShoes, Shoe shoes[]) {
    int pairs = 0;
    for (int i = 0; i < numOfShoes; i++) {
        if (shoes[i].isBad()) i++;
        for (int l = 0; l < numOfShoes; l++) {
            if (i==l || shoes[l].isBad()) l++;
            if (shoes[i].isPair(shoes[l])) {
                pairs++;
                shoes[i] = Shoe();
                shoes[l] = Shoe();
            }
        }
    }
    return pairs;
}


int main() {
    int numOfShoes;
    cin >> numOfShoes;

    Shoe shoes[numOfShoes];
    
    for (int i = 0; i < numOfShoes; i++) {
        int size;
        char type;
        cin >> size >> type;
        shoes[i] = Shoe(size, type);
        //cout << size << "\t" << type << endl;
    }
    
    
    cout << ShoePairs(numOfShoes, shoes);
    
    return 0;
}
