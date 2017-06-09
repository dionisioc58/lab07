#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::stoi;

#include <algorithm>
#include <vector>
using std::vector;

bool Primo(int i) {
    if (i <= 1)
	    return true;
    int d = 2;
    while (d <= i / 2) {
        if (i % d  == 0)
            return false;
        d = d + 1;
    }
    return true;
}

int main(int argc, char* argv[]) {
    if(argc < 2) {
        cout << "Sem teste a realizar!" << endl;
        return 0;
    }
    int max = stoi(argv[1]);
    std::vector<int> v;
    for(int i = 1; i <= max; i++)
        v.push_back(i);
    vector<int>::iterator it = v.begin();
    cout << "Numeros primos [1-" << max << "]: ";
    while(it < v.end()) {
        it = std::find_if(it, v.end(), Primo);
        if(*it)
            cout << *it << " ";
        it++;
    }
    cout << endl;

    return 0;
}