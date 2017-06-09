#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;

#include "closest.h"

int main() {
    vector<int> v { 1, 2, 3, 30, 40, 50 };
    auto result = closest2mean(v.begin(), v.end());
    cout << (*result) << endl;
    return 0;
}