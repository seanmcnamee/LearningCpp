#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

void printVector(vector<int> v) {
    cout << "[ ";
    for (int k = 0; k < v.size(); k++) {
        cout << v[k] << ' ';
    }
    cout << "]\n";
}

//It doesn't matter if you don't set the values yourself. They're automatically set. (WACK)
void Expand(vector<int> &V) {
    //int origSize = V.size();
    V.resize(V.size()*2);
    /*
    for (int i = origSize; i<V.size(); i++) {
        V[i] = origSize+i;
    }
    */
}

int main() {
  vector<int> v(1);
  
  printVector(v);

  for (int k = 1; k <= 16; k++) {
    if (v.size() < k) {
      cout << "vector size before calling Expand: " << v.size() << endl;
      Expand(v);
      cout << "vector size after calling Expand: " << v.size() << endl;
    }
    v[k-1] = k;


  }
  printVector(v);
  return 0;
}