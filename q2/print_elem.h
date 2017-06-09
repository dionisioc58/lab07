#ifndef CLOSEST_H
#define CLOSEST_H

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

template<typename TContainer>
void print_elements(const TContainer& collection, const char* label="", const char separator=' ') {
    cout << label;
    for(auto valor : collection )
        cout << valor << separator;
    cout << endl;
}

#endif