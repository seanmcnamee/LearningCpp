#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

vector <string> NonEmpty(vector<string> V) {
    //cout << "Simplifying... V of size " << V.size() << endl;

    int current = 0;

    for (int i = 0; i < V.size(); i++) {
        //cout << "V<" << i << "> : " << V[i] << endl;
        if (V[i].size() > 0) {
            //cout << V[i] << endl;
            V[current] = V[i];
            current++;
        }
    }
    
    V.resize(current);
    //cout << "Leaving..." << endl;
    return V;
}


int main() {
    //cout << "Hello" << endl;

    vector<string> test(6);
    test[0] = "Wooot";
    test[1] = "";
    test[2] = "toot";
    test[3] = "";
    test[4] = "";
    test[5] = "Shkadoosh";
    vector<string> compact = NonEmpty(test);

    cout << "Printing Non-Empty List..." << endl;
    for(int i = 0; i < compact.size(); i++){
        cout << compact[i] << endl;
    }


}

